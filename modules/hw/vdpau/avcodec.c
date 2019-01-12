/*****************************************************************************
 * avcodec.c: VDPAU decoder for libav
 *****************************************************************************
 * Copyright (C) 2012-2013 Rémi Denis-Courmont
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include <libavutil/mem.h>
#include <libavcodec/avcodec.h>
#include <libavcodec/vdpau.h>
#include <vlc_common.h>
#include <vlc_plugin.h>
#include <vlc_fourcc.h>
#include <vlc_picture.h>
#include <vlc_atomic.h>
#include <vlc_xlib.h>
#include "vlc_vdpau.h"
#include "../../codec/avcodec/va.h"

static int Open(vlc_va_t *, AVCodecContext *, const es_format_t *);
static void Close(vlc_va_t *);

vlc_module_begin()
    set_description(N_("VDPAU video decoder"))
    set_capability("hw decoder", 100)
    set_category(CAT_INPUT)
    set_subcategory(SUBCAT_INPUT_VCODEC)
    set_callbacks(Open, Close)
    add_shortcut("vdpau")
vlc_module_end()

struct vlc_va_sys_t
{
    AVVDPAUContext *context;
    vdp_t *vdp;
    VdpDevice device;
    VdpDecoderProfile profile;
    uint16_t width;
    uint16_t height;
    vlc_vdp_video_field_t **pool;
};

static vlc_vdp_video_field_t *CreateSurface(vlc_va_t *va)
{
    vlc_va_sys_t *sys = va->sys;
    VdpVideoSurface surface;
    VdpStatus err;

    err = vdp_video_surface_create(sys->vdp, sys->device, VDP_CHROMA_TYPE_420,
                                   sys->width, sys->height, &surface);
    if (err != VDP_STATUS_OK)
    {
        msg_Err(va, "%s creation failure: %s", "video surface",
                vdp_get_error_string(sys->vdp, err));
        return NULL;
    }

    vlc_vdp_video_field_t *field = vlc_vdp_video_create(sys->vdp, surface);
    if (unlikely(field == NULL))
        vdp_video_surface_destroy(sys->vdp, surface);
    return field;
}

static void DestroySurface(vlc_vdp_video_field_t *field)
{
    assert(field != NULL);
    field->destroy(field);
}

static vlc_vdp_video_field_t *GetSurface(vlc_va_t *va)
{
    vlc_va_sys_t *sys = va->sys;
    vlc_vdp_video_field_t *f;

    for (unsigned i = 0; (f = sys->pool[i]) != NULL; i++)
    {
        uintptr_t expected = 1;

        if (atomic_compare_exchange_strong(&f->frame->refs, &expected, 2))
        {
            vlc_vdp_video_field_t *field = vlc_vdp_video_copy(f);
            atomic_fetch_sub(&f->frame->refs, 1);
            return field;
        }
    }

    /* All pictures in the pool are referenced. Try to make a new one. */
    return CreateSurface(va);
}

static int Lock(vlc_va_t *va, void **opaque, uint8_t **data)
{
    vlc_vdp_video_field_t *field;
    unsigned tries = (CLOCK_FREQ + VOUT_OUTMEM_SLEEP) / VOUT_OUTMEM_SLEEP;

    while ((field = GetSurface(va)) == NULL)
    {
        if (--tries == 0)
            return VLC_ENOMEM;
        /* Out of video RAM, wait for some time as in src/input/decoder.c.
         * XXX: Both this and the core should use a semaphore or a CV. */
        msleep(VOUT_OUTMEM_SLEEP);
    }

    *opaque = field;
    *data = (void *)(uintptr_t)field->frame->surface;
    return VLC_SUCCESS;
}

static void Unlock(void *opaque, uint8_t *data)
{
    vlc_vdp_video_field_t *field = opaque;

    DestroySurface(field);
    (void) data;
}

static int Copy(vlc_va_t *va, picture_t *pic, void *opaque, uint8_t *data)
{
    vlc_vdp_video_field_t *field = opaque;

    assert(field != NULL);
    field = vlc_vdp_video_copy(field);
    if (unlikely(field == NULL))
        return VLC_ENOMEM;

    assert(pic->context == NULL);
    pic->context = field;
    (void) va; (void) data;
    return VLC_SUCCESS;
}

static int Init(vlc_va_t *va, void **ctxp, vlc_fourcc_t *chromap,
                int width, int height)
{
    vlc_va_sys_t *sys = va->sys;
    VdpStatus err;

    width = (width + 1) & ~1;
    height = (height + 3) & ~3;
    sys->width = width;
    sys->height = height;

    unsigned surfaces = 2;
    switch (sys->profile)
    {
      case VDP_DECODER_PROFILE_H264_BASELINE:
      case VDP_DECODER_PROFILE_H264_MAIN:
      case VDP_DECODER_PROFILE_H264_HIGH:
        surfaces = 16;
        break;
    }

    vlc_vdp_video_field_t **pool = malloc(sizeof (*pool) * (surfaces + 6));
    if (unlikely(pool == NULL))
        return VLC_ENOMEM;

    unsigned i = 0;
    while (i < surfaces + 5)
    {
        pool[i] = CreateSurface(va);
        if (pool[i] == NULL)
            break;
        i++;
    }
    pool[i] = NULL;

    if (i < surfaces + 3)
    {
        msg_Err(va, "not enough video RAM");
        while (i > 0)
            DestroySurface(pool[--i]);
        free(pool);
        return VLC_ENOMEM;
    }
    sys->pool = pool;

    err = vdp_decoder_create(sys->vdp, sys->device, sys->profile, width,
                             height, surfaces, &sys->context->decoder);
    if (err != VDP_STATUS_OK)
    {
        msg_Err(va, "%s creation failure: %s", "decoder",
                vdp_get_error_string(sys->vdp, err));
        while (i > 0)
            DestroySurface(pool[--i]);
        free(pool);
        sys->context->decoder = VDP_INVALID_HANDLE;
        return VLC_EGENERIC;
    }

    *ctxp = sys->context;
    /* TODO: select better chromas when appropriate */
    *chromap = VLC_CODEC_VDPAU_VIDEO_420;
    return VLC_SUCCESS;
}

static void Deinit(vlc_va_t *va)
{
    vlc_va_sys_t *sys = va->sys;

    assert(sys->context->decoder != VDP_INVALID_HANDLE);
    vdp_decoder_destroy(sys->vdp, sys->context->decoder);
    for (unsigned i = 0; sys->pool[i] != NULL; i++)
        sys->pool[i]->destroy(sys->pool[i]);
    free(sys->pool);
}

static int Setup(vlc_va_t *va, void **ctxp, vlc_fourcc_t *chromap,
                 int width, int height)
{
    vlc_va_sys_t *sys = va->sys;

    if (sys->context->decoder != VDP_INVALID_HANDLE)
    {
        if (sys->width == width && sys->height == height)
            return VLC_SUCCESS;
        Deinit(va);
        sys->context->decoder = VDP_INVALID_HANDLE;
    }

    return Init(va, ctxp, chromap, width, height);
}

static int Open(vlc_va_t *va, AVCodecContext *ctx, const es_format_t *fmt)
{
    VdpStatus err;
    VdpDecoderProfile profile;
    int level = fmt->i_level;

    if (av_vdpau_get_profile(ctx, &profile))
    {
        msg_Err(va, "unsupported codec %d or profile %d", ctx->codec_id,
                fmt->i_profile);
        return VLC_EGENERIC;
    }

    switch (ctx->codec_id)
    {
        case AV_CODEC_ID_MPEG1VIDEO:
            level = VDP_DECODER_LEVEL_MPEG1_NA;
            break;
        case AV_CODEC_ID_MPEG2VIDEO:
            level = VDP_DECODER_LEVEL_MPEG2_HL;
            break;
        case AV_CODEC_ID_H263:
            level = VDP_DECODER_LEVEL_MPEG4_PART2_ASP_L5;
            break;
        case AV_CODEC_ID_H264:
            if ((fmt->i_profile & FF_PROFILE_H264_INTRA)
             && (fmt->i_level == 11))
                level = VDP_DECODER_LEVEL_H264_1b;
        default:
            break;
    }

    if (!vlc_xlib_init(VLC_OBJECT(va)))
    {
        msg_Err(va, "Xlib is required for VDPAU");
        return VLC_EGENERIC;
    }

    vlc_va_sys_t *sys = malloc(sizeof (*sys));
    if (unlikely(sys == NULL))
       return VLC_ENOMEM;

    sys->context = av_vdpau_alloc_context();
    if (unlikely(sys->context == NULL))
    {
        free(sys);
        return VLC_ENOMEM;
    }

    err = vdp_get_x11(NULL, -1, &sys->vdp, &sys->device);
    if (err != VDP_STATUS_OK)
    {
        av_free(sys->context);
        free(sys);
        return VLC_EGENERIC;
    }

    void *func;
    err = vdp_get_proc_address(sys->vdp, sys->device,
                               VDP_FUNC_ID_DECODER_RENDER, &func);
    if (err != VDP_STATUS_OK)
        goto error;

    sys->context->decoder = VDP_INVALID_HANDLE;
    sys->context->render = func;
    sys->profile = profile;

    /* Check capabilities */
    VdpBool support;
    uint32_t l, mb, w, h;

    if (vdp_video_surface_query_capabilities(sys->vdp, sys->device,
              VDP_CHROMA_TYPE_420, &support, &w, &h) != VDP_STATUS_OK)
        support = VDP_FALSE;
    if (!support)
    {
        msg_Err(va, "video surface format not supported: %s", "YUV 4:2:0");
        goto error;
    }
    msg_Dbg(va, "video surface limits: %"PRIu32"x%"PRIu32, w, h);
    if (w < fmt->video.i_width || h < fmt->video.i_height)
    {
        msg_Err(va, "video surface above limits: %ux%u",
                fmt->video.i_width, fmt->video.i_height);
        goto error;
    }

    if (vdp_decoder_query_capabilities(sys->vdp, sys->device, profile,
                                   &support, &l, &mb, &w, &h) != VDP_STATUS_OK)
        support = VDP_FALSE;
    if (!support)
    {
        msg_Err(va, "decoder profile not supported: %u", profile);
        goto error;
    }
    msg_Dbg(va, "decoder profile limits: level %"PRIu32" mb %"PRIu32" "
            "%"PRIu32"x%"PRIu32, l, mb, w, h);
    if ((int)l < level || w < fmt->video.i_width || h < fmt->video.i_height)
    {
        msg_Err(va, "decoder profile above limits: level %d %ux%u",
                level, fmt->video.i_width, fmt->video.i_height);
        goto error;
    }

    const char *infos;
    if (vdp_get_information_string(sys->vdp, &infos) != VDP_STATUS_OK)
        infos = "VDPAU";

    va->sys = sys;
    va->description = infos;
    va->pix_fmt = AV_PIX_FMT_VDPAU;
    va->setup = Setup;
    va->get = Lock;
    va->release = Unlock;
    va->extract = Copy;
    return VLC_SUCCESS;

error:
    vdp_release_x11(sys->vdp);
    av_free(sys->context);
    free(sys);
    return VLC_EGENERIC;
}

static void Close(vlc_va_t *va)
{
    vlc_va_sys_t *sys = va->sys;

    if (sys->context->decoder != VDP_INVALID_HANDLE)
        Deinit(va);
    vdp_release_x11(sys->vdp);
    av_free(sys->context);
    free(sys);
}

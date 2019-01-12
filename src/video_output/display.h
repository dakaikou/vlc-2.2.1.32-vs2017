/*****************************************************************************
 * display.h: "vout display" managment
 *****************************************************************************
 * Copyright (C) 2009 Laurent Aimar
 * $Id: 1c22918fd5e47441abd379caf2206317160904d1 $
 *
 * Authors: Laurent Aimar <fenrir _AT_ videolan _DOT_ org>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#include <vlc_vout_wrapper.h>

vout_display_t *vout_NewSplitter(vout_thread_t *vout,
                                 const video_format_t *source,
                                 const vout_display_state_t *state,
                                 const char *module,
                                 const char *splitter_module,
                                 mtime_t double_click_timeout,
                                 mtime_t hide_timeout);

/* FIXME should not be there */
void vout_SendDisplayEventMouse(vout_thread_t *, const vlc_mouse_t *);
vout_window_t *vout_NewDisplayWindow(vout_thread_t *, vout_display_t *, const vout_window_cfg_t *);
void vout_DeleteDisplayWindow(vout_thread_t *, vout_display_t *, vout_window_t *);
void vout_UpdateDisplaySourceProperties(vout_display_t *vd, const video_format_t *);


/*****************************************************************************
 * mmdevice.c : Windows Multimedia Device API audio output plugin for VLC
 *****************************************************************************
 * Copyright (C) 2012-2014 Rémi Denis-Courmont
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

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#define INITGUID
#define COBJMACROS
#define CONST_VTABLE

#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <audiopolicy.h>
#include <mmdeviceapi.h>
#include <endpointvolume.h>
// sunqueen add start
DEFINE_GUID(IID_IAudioSessionEvents, 0x24918acc, 0x64b3, 0x37c1, 0x8c, 0xa9, 0x74, 0xa6, 0x6e, 0x99, 0x57, 0xa8);
DEFINE_GUID(IID_IAudioSessionManager, 0xbfa971f1, 0x4d5e, 0x40bb, 0x93, 0x5e, 0x96, 0x70, 0x39, 0xbf, 0xbe, 0xe4);
DEFINE_GUID(IID_IMMDeviceEnumerator, 0xa95664d2, 0x9614, 0x4f35, 0xa7, 0x46, 0xde, 0x8d, 0xb6, 0x36, 0x17, 0xe6);
DEFINE_GUID(CLSID_MMDeviceEnumerator, 0xbcde0395, 0xe52f, 0x467c, 0x8e, 0x3d, 0xc4, 0x57, 0x92, 0x91, 0x69, 0x2e);
DEFINE_GUID(IID_IAudioClient, 0x1cb9ad4c, 0xdbfa, 0x4c32, 0xb1, 0x78, 0xc2, 0xf5, 0x68, 0xa7, 0x03, 0xb2);
DEFINE_GUID(IID_IAudioRenderClient, 0xf294acfc, 0x3146, 0x4483, 0xa7, 0xbf, 0xad, 0xdc, 0xa7, 0xc2, 0x60, 0xe2);
DEFINE_GUID(IID_IAudioClock, 0xcd63314f, 0x3fba, 0x4a1b, 0x81, 0x2c, 0xef, 0x96, 0x35, 0x87, 0x28, 0xe7);
DEFINE_GUID(IID_IAudioSessionControl2, 0xbfb7ff88, 0x7239, 0x4fc9, 0x8f,0xa2, 0x07,0xc9,0x50,0xbe,0x9c,0x6d);
DEFINE_GUID(IID_IAudioVolumeDuckNotification, 0xc3b284d4, 0x6d39, 0x4359, 0xb3,0xcf, 0xb5,0x6d,0xdb,0x3b,0xb3,0x9c);
DEFINE_GUID(IID_IAudioSessionManager2, 0x77aa99a0, 0x1bd6, 0x484f, 0x8b,0xc7, 0x2c,0x65,0x4c,0x9a,0x9b,0x6f);
DEFINE_GUID(IID_IMMNotificationClient,0x7991eec9,0x7e89,0x4d85,0x83,0x90,0x6c,0x70,0x3c,0xec,0x60,0xc0);
DEFINE_GUID(IID_IMMEndpoint, 0x1be09788, 0x6894, 0x4089, 0x85,0x86, 0x9a,0x2a,0x6c,0x26,0x5a,0xc5);
DEFINE_GUID(IID_IAudioEndpointVolumeCallback,0x657804fa,0xd6ad,0x4496,0x8a,0x60,0x35,0x27,0x52,0xaf,0x4f,0x89);
DEFINE_GUID(IID_IAudioEndpointVolume,0x5CDF2C82,0x841E,0x4546,0x97,0x22,0x0C,0xF7,0x40,0x78,0x22,0x9A);
// sunqueen add end

DEFINE_PROPERTYKEY(PKEY_Device_FriendlyName, 0xa45c254e, 0xdf1c, 0x4efd,
   0x80, 0x20, 0x67, 0xd1, 0x46, 0xa8, 0x50, 0xe0, 14);

#include <vlc_common.h>
#include <vlc_plugin.h>
#include <vlc_aout.h>
#include <vlc_charset.h>
#include <vlc_modules.h>
#include "audio_output/mmdevice.h"

#if (_WIN32_WINNT < 0x600)
static VOID (WINAPI *InitializeConditionVariable)(PCONDITION_VARIABLE);
static BOOL (WINAPI *SleepConditionVariableCS)(PCONDITION_VARIABLE,
                                               PCRITICAL_SECTION, DWORD);
static VOID (WINAPI *WakeConditionVariable)(PCONDITION_VARIABLE);
#define LOOKUP(s) \
    if (((s) = (void *)GetProcAddress(h, #s)) == NULL) return FALSE

BOOL WINAPI DllMain(HINSTANCE, DWORD, LPVOID); /* avoid warning */
BOOL WINAPI DllMain(HINSTANCE dll, DWORD reason, LPVOID reserved)
{
    (void) dll;
    (void) reserved;

    switch (reason)
    {
        case DLL_PROCESS_ATTACH:
        {
            HANDLE h = GetModuleHandle(TEXT("kernel32.dll"));
            if (unlikely(h == NULL))
                return FALSE;
            LOOKUP(InitializeConditionVariable);
            LOOKUP(SleepConditionVariableCS);
            LOOKUP(WakeConditionVariable);
            break;
        }
    }
    return TRUE;
}
#endif

DEFINE_GUID (GUID_VLC_AUD_OUT, 0x4533f59d, 0x59ee, 0x00c6,
   0xad, 0xb2, 0xc6, 0x8b, 0x50, 0x1a, 0x66, 0x55);

static int TryEnterMTA(vlc_object_t *obj)
{
    HRESULT hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
    if (unlikely(FAILED(hr)))
    {
        msg_Err (obj, "cannot initialize COM (error 0x%lx)", hr);
        return -1;
    }
    return 0;
}
#define TryEnterMTA(o) TryEnterMTA(VLC_OBJECT(o))

static void EnterMTA(void)
{
    HRESULT hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
    if (unlikely(FAILED(hr)))
        abort();
}

static void LeaveMTA(void)
{
    CoUninitialize();
}

static wchar_t default_device[1] = L"";

struct aout_sys_t
{
    aout_stream_t *stream; /**< Underlying audio output stream */
    module_t *module;
    audio_output_t *aout;
    IMMDeviceEnumerator *it; /**< Device enumerator, NULL when exiting */
    IMMDevice *dev; /**< Selected output device, NULL if none */

    struct IMMNotificationClient device_events;
    struct IAudioEndpointVolumeCallback endpoint_callback;
    struct IAudioSessionEvents session_events;
    struct IAudioVolumeDuckNotification duck;

    LONG refs;
    unsigned ducks;

    wchar_t *device; /**< Requested device identifier, NULL if none */
    float volume; /**< Requested volume, negative if none */
    signed char mute; /**< Requested mute, negative if none */
    CRITICAL_SECTION lock;
    CONDITION_VARIABLE work;
    CONDITION_VARIABLE ready;
    vlc_thread_t thread; /**< Thread for audio session control */
};

/* NOTE: The Core Audio API documentation totally fails to specify the thread
 * safety (or lack thereof) of the interfaces. This code takes the most
 * restrictive assumption: no thread safety. The background thread (MMThread)
 * only runs at specified times, namely between the device_ready and
 * device_changed events (effectively a thread synchronization barrier, but
 * only Windows 8 natively provides such a primitive).
 *
 * The audio output owner (i.e. the audio output core) is responsible for
 * serializing callbacks. This code only needs to be concerned with
 * synchronization between the set of audio output callbacks, MMThread()
 * and (trivially) the device and session notifications. */

static int vlc_FromHR(audio_output_t *aout, HRESULT hr)
{
    /* Restart on unplug */
    if (unlikely(hr == AUDCLNT_E_DEVICE_INVALIDATED))
        aout_RestartRequest(aout, AOUT_RESTART_OUTPUT);
    return SUCCEEDED(hr) ? 0 : -1;
}

/*** VLC audio output callbacks ***/
static int TimeGet(audio_output_t *aout, mtime_t *restrict delay)
{
    aout_sys_t *sys = aout->sys;
    HRESULT hr;

    EnterMTA();
    hr = aout_stream_TimeGet(sys->stream, delay);
    LeaveMTA();

    return SUCCEEDED(hr) ? 0 : -1;
}

static void Play(audio_output_t *aout, block_t *block)
{
    aout_sys_t *sys = aout->sys;
    HRESULT hr;

    EnterMTA();
    hr = aout_stream_Play(sys->stream, block);
    LeaveMTA();

    vlc_FromHR(aout, hr);
}

static void Pause(audio_output_t *aout, bool paused, mtime_t date)
{
    aout_sys_t *sys = aout->sys;
    HRESULT hr;

    EnterMTA();
    hr = aout_stream_Pause(sys->stream, paused);
    LeaveMTA();

    vlc_FromHR(aout, hr);
    (void) date;
}

static void Flush(audio_output_t *aout, bool wait)
{
    aout_sys_t *sys = aout->sys;

    EnterMTA();
    aout_stream_Flush(sys->stream, wait);
    LeaveMTA();

}

static int VolumeSet(audio_output_t *aout, float vol)
{
    aout_sys_t *sys = aout->sys;

    vol = vol * vol * vol; /* ISimpleAudioVolume is tapered linearly. */
    EnterCriticalSection(&sys->lock);
    sys->volume = vol;
    WakeConditionVariable(&sys->work);
    LeaveCriticalSection(&sys->lock);
    return 0;
}

static int MuteSet(audio_output_t *aout, bool mute)
{
    aout_sys_t *sys = aout->sys;

    EnterCriticalSection(&sys->lock);
    sys->mute = mute;
    WakeConditionVariable(&sys->work);
    LeaveCriticalSection(&sys->lock);
    return 0;
}

/*** Audio session events ***/
static inline aout_sys_t *vlc_AudioSessionEvents_sys(IAudioSessionEvents *this)
{
    return (void *)(((char *)this) - offsetof(aout_sys_t, session_events));
}

static STDMETHODIMP
vlc_AudioSessionEvents_QueryInterface(IAudioSessionEvents *this, REFIID riid,
                                      void **ppv)
{
    if (IsEqualIID(riid, &IID_IUnknown)
     || IsEqualIID(riid, &IID_IAudioSessionEvents))
    {
        *ppv = this;
        IUnknown_AddRef(this);
        return S_OK;
    }
    else
    {
       *ppv = NULL;
        return E_NOINTERFACE;
    }
}

static STDMETHODIMP_(ULONG)
vlc_AudioSessionEvents_AddRef(IAudioSessionEvents *this)
{
    aout_sys_t *sys = vlc_AudioSessionEvents_sys(this);
    return InterlockedIncrement(&sys->refs);
}

static STDMETHODIMP_(ULONG)
vlc_AudioSessionEvents_Release(IAudioSessionEvents *this)
{
    aout_sys_t *sys = vlc_AudioSessionEvents_sys(this);
    return InterlockedDecrement(&sys->refs);
}

static STDMETHODIMP
vlc_AudioSessionEvents_OnDisplayNameChanged(IAudioSessionEvents *this,
                                            LPCWSTR wname, LPCGUID ctx)
{
    aout_sys_t *sys = vlc_AudioSessionEvents_sys(this);
    audio_output_t *aout = sys->aout;

    msg_Dbg(aout, "display name changed: %ls", wname);
    (void) ctx;
    return S_OK;
}

static STDMETHODIMP
vlc_AudioSessionEvents_OnIconPathChanged(IAudioSessionEvents *this,
                                         LPCWSTR wpath, LPCGUID ctx)
{
    aout_sys_t *sys = vlc_AudioSessionEvents_sys(this);
    audio_output_t *aout = sys->aout;

    msg_Dbg(aout, "icon path changed: %ls", wpath);
    (void) ctx;
    return S_OK;
}

static STDMETHODIMP
vlc_AudioSessionEvents_OnSimpleVolumeChanged(IAudioSessionEvents *this,
                                             float vol, WINBOOL mute,
                                             LPCGUID ctx)
{
    aout_sys_t *sys = vlc_AudioSessionEvents_sys(this);
    audio_output_t *aout = sys->aout;

    msg_Dbg(aout, "simple volume changed: %f, muting %sabled", vol,
            mute ? "en" : "dis");
    EnterCriticalSection(&sys->lock);
    WakeConditionVariable(&sys->work); /* implicit state: vol & mute */
    LeaveCriticalSection(&sys->lock);
    (void) ctx;
    return S_OK;
}

static STDMETHODIMP
vlc_AudioSessionEvents_OnChannelVolumeChanged(IAudioSessionEvents *this,
                                              DWORD count, float *vols,
                                              DWORD changed, LPCGUID ctx)
{
    aout_sys_t *sys = vlc_AudioSessionEvents_sys(this);
    audio_output_t *aout = sys->aout;

    if (changed != (DWORD)-1)
        msg_Dbg(aout, "channel volume %lu of %lu changed: %f", changed, count,
                vols[changed]);
    else
        msg_Dbg(aout, "%lu channels volume changed", count);

    (void) ctx;
    return S_OK;
}

static STDMETHODIMP
vlc_AudioSessionEvents_OnGroupingParamChanged(IAudioSessionEvents *this,
                                              LPCGUID param, LPCGUID ctx)

{
    aout_sys_t *sys = vlc_AudioSessionEvents_sys(this);
    audio_output_t *aout = sys->aout;

    msg_Dbg(aout, "grouping parameter changed");
    (void) param;
    (void) ctx;
    return S_OK;
}

static STDMETHODIMP
vlc_AudioSessionEvents_OnStateChanged(IAudioSessionEvents *this,
                                      AudioSessionState state)
{
    aout_sys_t *sys = vlc_AudioSessionEvents_sys(this);
    audio_output_t *aout = sys->aout;

    msg_Dbg(aout, "state changed: %d", state);
    return S_OK;
}

static STDMETHODIMP
vlc_AudioSessionEvents_OnSessionDisconnected(IAudioSessionEvents *this,
                                           AudioSessionDisconnectReason reason)
{
    aout_sys_t *sys = vlc_AudioSessionEvents_sys(this);
    audio_output_t *aout = sys->aout;

    switch (reason)
    {
        case DisconnectReasonDeviceRemoval:
            msg_Warn(aout, "session disconnected: %s", "device removed");
            break;
        case DisconnectReasonServerShutdown:
            msg_Err(aout, "session disconnected: %s", "service stopped");
            return S_OK;
        case DisconnectReasonFormatChanged:
            msg_Warn(aout, "session disconnected: %s", "format changed");
            break;
        case DisconnectReasonSessionLogoff:
            msg_Err(aout, "session disconnected: %s", "user logged off");
            return S_OK;
        case DisconnectReasonSessionDisconnected:
            msg_Err(aout, "session disconnected: %s", "session disconnected");
            return S_OK;
        case DisconnectReasonExclusiveModeOverride:
            msg_Err(aout, "session disconnected: %s", "stream overriden");
            return S_OK;
        default:
            msg_Warn(aout, "session disconnected: unknown reason %d", reason);
            return S_OK;
    }
    /* NOTE: audio decoder thread should get invalidated device and restart */
    return S_OK;
}

static const struct IAudioSessionEventsVtbl vlc_AudioSessionEvents =
{
    vlc_AudioSessionEvents_QueryInterface,
    vlc_AudioSessionEvents_AddRef,
    vlc_AudioSessionEvents_Release,

    vlc_AudioSessionEvents_OnDisplayNameChanged,
    vlc_AudioSessionEvents_OnIconPathChanged,
    vlc_AudioSessionEvents_OnSimpleVolumeChanged,
    vlc_AudioSessionEvents_OnChannelVolumeChanged,
    vlc_AudioSessionEvents_OnGroupingParamChanged,
    vlc_AudioSessionEvents_OnStateChanged,
    vlc_AudioSessionEvents_OnSessionDisconnected,
};

static inline aout_sys_t *vlc_AudioVolumeDuckNotification_sys(IAudioVolumeDuckNotification *this)
{
    return (void *)(((char *)this) - offsetof(aout_sys_t, duck));
}

static STDMETHODIMP
vlc_AudioVolumeDuckNotification_QueryInterface(
    IAudioVolumeDuckNotification *this, REFIID riid, void **ppv)
{
    if (IsEqualIID(riid, &IID_IUnknown)
     || IsEqualIID(riid, &IID_IAudioVolumeDuckNotification))
    {
        *ppv = this;
        IUnknown_AddRef(this);
        return S_OK;
    }
    else
    {
       *ppv = NULL;
        return E_NOINTERFACE;
    }
}

static STDMETHODIMP_(ULONG)
vlc_AudioVolumeDuckNotification_AddRef(IAudioVolumeDuckNotification *this)
{
    aout_sys_t *sys = vlc_AudioVolumeDuckNotification_sys(this);
    return InterlockedIncrement(&sys->refs);
}

static STDMETHODIMP_(ULONG)
vlc_AudioVolumeDuckNotification_Release(IAudioVolumeDuckNotification *this)
{
    aout_sys_t *sys = vlc_AudioVolumeDuckNotification_sys(this);
    return InterlockedDecrement(&sys->refs);
}

static STDMETHODIMP
vlc_AudioVolumeDuckNotification_OnVolumeDuckNotification(
    IAudioVolumeDuckNotification *this, LPCWSTR sid, UINT32 count)
{
    aout_sys_t *sys = vlc_AudioVolumeDuckNotification_sys(this);
    audio_output_t *aout = sys->aout;

    msg_Dbg(aout, "volume ducked by %ls of %u sessions", sid, count);
    sys->ducks++;
    aout_PolicyReport(aout, true);
    return S_OK;
}

static STDMETHODIMP
vlc_AudioVolumeDuckNotification_OnVolumeUnduckNotification(
    IAudioVolumeDuckNotification *this, LPCWSTR sid)
{
    aout_sys_t *sys = vlc_AudioVolumeDuckNotification_sys(this);
    audio_output_t *aout = sys->aout;

    msg_Dbg(aout, "volume unducked by %ls", sid);
    sys->ducks--;
    aout_PolicyReport(aout, sys->ducks != 0);
    return S_OK;
}

static const struct IAudioVolumeDuckNotificationVtbl vlc_AudioVolumeDuckNotification =
{
    vlc_AudioVolumeDuckNotification_QueryInterface,
    vlc_AudioVolumeDuckNotification_AddRef,
    vlc_AudioVolumeDuckNotification_Release,

    vlc_AudioVolumeDuckNotification_OnVolumeDuckNotification,
    vlc_AudioVolumeDuckNotification_OnVolumeUnduckNotification,
};


/*** Audio endpoint volume ***/
static inline aout_sys_t *vlc_AudioEndpointVolumeCallback_sys(IAudioEndpointVolumeCallback *this)
{
    return (void *)(((char *)this) - offsetof(aout_sys_t, endpoint_callback));
}

static STDMETHODIMP
vlc_AudioEndpointVolumeCallback_QueryInterface(IAudioEndpointVolumeCallback *this,
                                               REFIID riid, void **ppv)
{
    if (IsEqualIID(riid, &IID_IUnknown)
     || IsEqualIID(riid, &IID_IAudioEndpointVolumeCallback))
    {
        *ppv = this;
        IUnknown_AddRef(this);
        return S_OK;
    }
    else
    {
       *ppv = NULL;
        return E_NOINTERFACE;
    }
}

static STDMETHODIMP_(ULONG)
vlc_AudioEndpointVolumeCallback_AddRef(IAudioEndpointVolumeCallback *this)
{
    aout_sys_t *sys = vlc_AudioEndpointVolumeCallback_sys(this);
    return InterlockedIncrement(&sys->refs);
}

static STDMETHODIMP_(ULONG)
vlc_AudioEndpointVolumeCallback_Release(IAudioEndpointVolumeCallback *this)
{
    aout_sys_t *sys = vlc_AudioEndpointVolumeCallback_sys(this);
    return InterlockedDecrement(&sys->refs);
}

static STDMETHODIMP
vlc_AudioEndpointVolumeCallback_OnNotify(IAudioEndpointVolumeCallback *this,
                                  const PAUDIO_VOLUME_NOTIFICATION_DATA notify)
{
    aout_sys_t *sys = vlc_AudioEndpointVolumeCallback_sys(this);
    audio_output_t *aout = sys->aout;

    msg_Dbg(aout, "endpoint volume changed");
    EnterCriticalSection(&sys->lock);
    WakeConditionVariable(&sys->work); /* implicit state: endpoint volume */
    LeaveCriticalSection(&sys->lock);
    (void) notify;
    return S_OK;
}

static const struct IAudioEndpointVolumeCallbackVtbl vlc_AudioEndpointVolumeCallback =
{
    vlc_AudioEndpointVolumeCallback_QueryInterface,
    vlc_AudioEndpointVolumeCallback_AddRef,
    vlc_AudioEndpointVolumeCallback_Release,

    vlc_AudioEndpointVolumeCallback_OnNotify,
};


/*** Audio devices ***/

/** Gets the user-readable device name */
static char *DeviceName(IMMDevice *dev)
{
    IPropertyStore *props;
    char *name = NULL;
    PROPVARIANT v;
    HRESULT hr;

    hr = IMMDevice_OpenPropertyStore(dev, STGM_READ, &props);
    if (FAILED(hr))
        return NULL;

    PropVariantInit(&v);
    hr = IPropertyStore_GetValue(props, &PKEY_Device_FriendlyName, &v);
    if (SUCCEEDED(hr))
    {
        name = FromWide(v.pwszVal);
        PropVariantClear(&v);
    }
    IPropertyStore_Release(props);
    return name;
}

/** Checks that a device is an output device */
static bool DeviceIsRender(IMMDevice *dev)
{
    void *pv;

    if (FAILED(IMMDevice_QueryInterface(dev, &IID_IMMEndpoint, &pv)))
        return false;

    IMMEndpoint *ep = pv;
    EDataFlow flow;

    if (FAILED(IMMEndpoint_GetDataFlow(ep, &flow)))
        flow = eCapture;

    IMMEndpoint_Release(ep);
    return flow == eRender;
}

static HRESULT DeviceUpdated(audio_output_t *aout, LPCWSTR wid)
{
    aout_sys_t *sys = aout->sys;
    HRESULT hr;

    IMMDevice *dev;
    hr = IMMDeviceEnumerator_GetDevice(sys->it, wid, &dev);
    if (FAILED(hr))
        return hr;

    if (!DeviceIsRender(dev))
    {
        IMMDevice_Release(dev);
        return S_OK;
    }

    char *id = FromWide(wid);
    if (unlikely(id == NULL))
    {
        IMMDevice_Release(dev);
        return E_OUTOFMEMORY;
    }

    char *name = DeviceName(dev);
    IMMDevice_Release(dev);

    aout_HotplugReport(aout, id, (name != NULL) ? name : id);
    free(name);
    free(id);
    return S_OK;
}

static inline aout_sys_t *vlc_MMNotificationClient_sys(IMMNotificationClient *this)
{
    return (void *)(((char *)this) - offsetof(aout_sys_t, device_events));
}

static STDMETHODIMP
vlc_MMNotificationClient_QueryInterface(IMMNotificationClient *this,
                                        REFIID riid, void **ppv)
{
    if (IsEqualIID(riid, &IID_IUnknown)
     || IsEqualIID(riid, &IID_IMMNotificationClient))
    {
        *ppv = this;
        IUnknown_AddRef(this);
        return S_OK;
    }
    else
    {
       *ppv = NULL;
        return E_NOINTERFACE;
    }
}

static STDMETHODIMP_(ULONG)
vlc_MMNotificationClient_AddRef(IMMNotificationClient *this)
{
    aout_sys_t *sys = vlc_MMNotificationClient_sys(this);
    return InterlockedIncrement(&sys->refs);
}

static STDMETHODIMP_(ULONG)
vlc_MMNotificationClient_Release(IMMNotificationClient *this)
{
    aout_sys_t *sys = vlc_MMNotificationClient_sys(this);
    return InterlockedDecrement(&sys->refs);
}

static STDMETHODIMP
vlc_MMNotificationClient_OnDefaultDeviceChange(IMMNotificationClient *this,
                                               EDataFlow flow, ERole role,
                                               LPCWSTR wid)
{
    aout_sys_t *sys = vlc_MMNotificationClient_sys(this);
    audio_output_t *aout = sys->aout;

    if (flow != eRender)
        return S_OK;
    if (role != eConsole)
        return S_OK;

    msg_Dbg(aout, "default device changed: %ls", wid); /* TODO? migrate */
    return S_OK;
}

static STDMETHODIMP
vlc_MMNotificationClient_OnDeviceAdded(IMMNotificationClient *this,
                                       LPCWSTR wid)
{
    aout_sys_t *sys = vlc_MMNotificationClient_sys(this);
    audio_output_t *aout = sys->aout;

    msg_Dbg(aout, "device %ls added", wid);
    return DeviceUpdated(aout, wid);
}

static STDMETHODIMP
vlc_MMNotificationClient_OnDeviceRemoved(IMMNotificationClient *this,
                                         LPCWSTR wid)
{
    aout_sys_t *sys = vlc_MMNotificationClient_sys(this);
    audio_output_t *aout = sys->aout;
    char *id = FromWide(wid);

    msg_Dbg(aout, "device %ls removed", wid);
    if (unlikely(id == NULL))
        return E_OUTOFMEMORY;

    aout_HotplugReport(aout, id, NULL);
    free(id);
    return S_OK;
}

static STDMETHODIMP
vlc_MMNotificationClient_OnDeviceStateChanged(IMMNotificationClient *this,
                                              LPCWSTR wid, DWORD state)
{
    aout_sys_t *sys = vlc_MMNotificationClient_sys(this);
    audio_output_t *aout = sys->aout;

    /* TODO: show device state / ignore missing devices */
    msg_Dbg(aout, "device %ls state changed %08lx", wid, state);
    return S_OK;
}

static STDMETHODIMP
vlc_MMNotificationClient_OnPropertyValueChanged(IMMNotificationClient *this,
                                                LPCWSTR wid,
                                                const PROPERTYKEY key)
{
    aout_sys_t *sys = vlc_MMNotificationClient_sys(this);
    audio_output_t *aout = sys->aout;

    if (key.pid == PKEY_Device_FriendlyName.pid)
    {
        msg_Dbg(aout, "device %ls name changed", wid);
        return DeviceUpdated(aout, wid);
    }
    return S_OK;
}

static const struct IMMNotificationClientVtbl vlc_MMNotificationClient =
{
    vlc_MMNotificationClient_QueryInterface,
    vlc_MMNotificationClient_AddRef,
    vlc_MMNotificationClient_Release,

    vlc_MMNotificationClient_OnDeviceStateChanged,
    vlc_MMNotificationClient_OnDeviceAdded,
    vlc_MMNotificationClient_OnDeviceRemoved,
    vlc_MMNotificationClient_OnDefaultDeviceChange,
    vlc_MMNotificationClient_OnPropertyValueChanged,
};

static int DevicesEnum(audio_output_t *aout, IMMDeviceEnumerator *it)
{
    HRESULT hr;
    IMMDeviceCollection *devs;

    hr = IMMDeviceEnumerator_EnumAudioEndpoints(it, eRender,
                                                DEVICE_STATE_ACTIVE, &devs);
    if (FAILED(hr))
    {
        msg_Warn(aout, "cannot enumerate audio endpoints (error 0x%lx)", hr);
        return -1;
    }

    UINT count;
    hr = IMMDeviceCollection_GetCount(devs, &count);
    if (FAILED(hr))
    {
        msg_Warn(aout, "cannot count audio endpoints (error 0x%lx)", hr);
        count = 0;
    }

    unsigned n = 0;

    for (UINT i = 0; i < count; i++)
    {
        IMMDevice *dev;
        char *id, *name;

        hr = IMMDeviceCollection_Item(devs, i, &dev);
        if (FAILED(hr))
            continue;

        /* Unique device ID */
        LPWSTR devid;
        hr = IMMDevice_GetId(dev, &devid);
        if (FAILED(hr))
        {
            IMMDevice_Release(dev);
            continue;
        }
        id = FromWide(devid);
        CoTaskMemFree(devid);

        name = DeviceName(dev);
        IMMDevice_Release(dev);

        aout_HotplugReport(aout, id, (name != NULL) ? name : id);
        free(name);
        free(id);
        n++;
    }
    IMMDeviceCollection_Release(devs);
    return n;
}

static int DeviceSelect(audio_output_t *aout, const char *id)
{
    aout_sys_t *sys = aout->sys;
    wchar_t *device;

    if (id != NULL)
    {
        device = ToWide(id);
        if (unlikely(device == NULL))
            return -1;
    }
    else
        device = default_device;

    EnterCriticalSection(&sys->lock);
    assert(sys->device == NULL);
    sys->device = device;

    WakeConditionVariable(&sys->work);
    while (sys->device != NULL)
        SleepConditionVariableCS(&sys->ready, &sys->lock, INFINITE);
    LeaveCriticalSection(&sys->lock);

    if (sys->stream != NULL && sys->dev != NULL)
        /* Request restart of stream with the new device */
        aout_RestartRequest(aout, AOUT_RESTART_OUTPUT);
    return (sys->dev != NULL) ? 0 : -1;
}

/*** Initialization / deinitialization **/
static wchar_t *var_InheritWide(vlc_object_t *obj, const char *name)
{
    char *v8 = var_InheritString(obj, name);
    if (v8 == NULL)
        return NULL;

    wchar_t *v16 = ToWide(v8);
    free(v8);
    return v16;
}
#define var_InheritWide(o,n) var_InheritWide(VLC_OBJECT(o),n)

/** MMDevice audio output thread.
 * This thread takes cares of the audio session control. Inconveniently enough,
 * the audio session control interface must:
 *  - be created and destroyed from the same thread, and
 *  - survive across VLC audio output calls.
 * The only way to reconcile both requirements is a custom thread.
 * The thread also ensure that the COM Multi-Thread Apartment is continuously
 * referenced so that MMDevice objects are not destroyed early.
 * Furthermore, VolumeSet() and MuteSet() may be called from a thread with a
 * COM STA, so that it cannot access the COM MTA for audio controls.
 */
static HRESULT MMSession(audio_output_t *aout, IMMDeviceEnumerator *it)
{
    aout_sys_t *sys = aout->sys;
    IAudioSessionManager *manager;
    IAudioSessionControl *control;
    ISimpleAudioVolume *volume;
    IAudioEndpointVolume *endpoint;
    void *pv;
    HRESULT hr;
    float base_volume = 1.f;

    assert(sys->device != NULL);
    assert(sys->dev == NULL);

    if (sys->device != default_device) /* Device selected explicitly */
    {
        msg_Dbg(aout, "using selected device %ls", sys->device);
        hr = IMMDeviceEnumerator_GetDevice(it, sys->device, &sys->dev);
        if (FAILED(hr))
            msg_Err(aout, "cannot get selected device %ls (error 0x%lx)",
                    sys->device, hr);
        free(sys->device);
    }
    else
        hr = AUDCLNT_E_DEVICE_INVALIDATED;

    while (hr == AUDCLNT_E_DEVICE_INVALIDATED)
    {   /* Default device selected by policy and with stream routing.
         * "Do not use eMultimedia" says MSDN. */
        msg_Dbg(aout, "using default device");
        hr = IMMDeviceEnumerator_GetDefaultAudioEndpoint(it, eRender,
                                                         eConsole, &sys->dev);
        if (FAILED(hr))
            msg_Err(aout, "cannot get default device (error 0x%lx)", hr);
    }

    sys->device = NULL;
    WakeConditionVariable(&sys->ready);

    if (SUCCEEDED(hr))
    {   /* Report actual device */
        LPWSTR wdevid;

        hr = IMMDevice_GetId(sys->dev, &wdevid);
        if (SUCCEEDED(hr))
        {
            char *id = FromWide(wdevid);
            CoTaskMemFree(wdevid);
            if (likely(id != NULL))
            {
                aout_DeviceReport(aout, id);
                free(id);
            }
        }
    }
    else
    {
        msg_Err(aout, "cannot get device identifier (error 0x%lx)", hr);
        return hr;
    }

    /* Create session manager (for controls even w/o active audio client) */
    hr = IMMDevice_Activate(sys->dev, &IID_IAudioSessionManager,
                            CLSCTX_ALL, NULL, &pv);
    manager = pv;
    if (SUCCEEDED(hr))
    {
        LPCGUID guid = &GUID_VLC_AUD_OUT;

        /* Register session control */
        hr = IAudioSessionManager_GetAudioSessionControl(manager, guid, 0,
                                                         &control);
        if (SUCCEEDED(hr))
        {
            wchar_t *ua = var_InheritWide(aout, "user-agent");
            IAudioSessionControl_SetDisplayName(control, ua, NULL);
            free(ua);

            IAudioSessionControl_RegisterAudioSessionNotification(control,
                                                         &sys->session_events);
        }
        else
            msg_Err(aout, "cannot get session control (error 0x%lx)", hr);

        hr = IAudioSessionManager_GetSimpleAudioVolume(manager, guid, FALSE,
                                                       &volume);
        if (FAILED(hr))
            msg_Err(aout, "cannot get simple volume (error 0x%lx)", hr);

        /* Try to get version 2 (Windows 7) of the manager & control */
        wchar_t *siid = NULL;

        hr = IAudioSessionManager_QueryInterface(manager,
                                              &IID_IAudioSessionControl2, &pv);
        if (SUCCEEDED(hr))
        {
            IAudioSessionControl2 *c2 = pv;

            IAudioSessionControl2_SetDuckingPreference(c2, FALSE);
            hr = IAudioSessionControl2_GetSessionInstanceIdentifier(c2, &siid);
            if (FAILED(hr))
                siid = NULL;
            IAudioSessionControl2_Release(c2);
        }
        else
            msg_Dbg(aout, "version 2 session control unavailable");

        hr = IAudioSessionManager_QueryInterface(manager,
                                              &IID_IAudioSessionManager2, &pv);
        if (SUCCEEDED(hr))
        {
            IAudioSessionManager2 *m2 = pv;

            IAudioSessionManager2_RegisterDuckNotification(m2, siid,
                                                           &sys->duck);
            IAudioSessionManager2_Release(m2);
        }
        else
            msg_Dbg(aout, "version 2 session management unavailable");

        CoTaskMemFree(siid);
    }
    else
    {
        msg_Err(aout, "cannot activate session manager (error 0x%lx)", hr);
        control = NULL;
        volume = NULL;
    }

    hr = IMMDevice_Activate(sys->dev, &IID_IAudioEndpointVolume,
                            CLSCTX_ALL, NULL, &pv);
    endpoint = pv;
    if (SUCCEEDED(hr))
    {
        float min, max, inc;

        hr = IAudioEndpointVolume_GetVolumeRange(endpoint, &min, &max, &inc);
        if (SUCCEEDED(hr))
        {
            msg_Dbg(aout, "volume from %+f dB to %+f dB with %f dB increments",
                    min, max, inc);
            base_volume = powf(10.f, max / 20.f);
        }
        else
            msg_Err(aout, "cannot get volume range (error 0x%lx)", hr);

        IAudioEndpointVolume_RegisterControlChangeNotify(endpoint,
                                                      &sys->endpoint_callback);
    }
    else
        msg_Err(aout, "cannot activate endpoint volume (error %lx)", hr);

    /* Main loop (adjust volume as long as device is unchanged) */
    while (sys->device == NULL)
    {
        float level = 1.f, master = 1.f;

        if (volume != NULL)
        {
            hr = ISimpleAudioVolume_GetMasterVolume(volume, &level);
            if (FAILED(hr))
                msg_Err(aout, "cannot get master volume (error 0x%lx)", hr);
        }

        if (endpoint != NULL)
        {
            float db;

            hr = IAudioEndpointVolume_GetMasterVolumeLevel(endpoint, &db);
            if (SUCCEEDED(hr))
                master = powf(10.f, db / 20.f);
            else
                msg_Err(aout, "cannot get endpoint volume (error 0x%lx)", hr);
        }

        aout_VolumeReport(aout, cbrtf(level * master * base_volume));

    /* The WASAPI simple volume is relative to the endpoint volume, and it
     * cannot exceed 100%. Therefore the endpoint master volume must be
     * increased to reach an overall volume above the current endpoint master
     * volume. Unfortunately, that means the volume of other applications will
     * also be changed (which may or may not be what the user wants) and
     * introduces race conditions between updates. */

        level = sys->volume / base_volume;
        sys->volume = -1.f;

        if (level > master)
        {
            master = level;
            level = 1.f;
        }
        else
        {
            if (master > 0.f)
                level /= master;
            master = -1.f;
        }

        if (volume != NULL)
        {
            if (level >= 0.f)
            {
                assert(level <= 1.f);
                hr = ISimpleAudioVolume_SetMasterVolume(volume, level, NULL);
                if (FAILED(hr))
                    msg_Err(aout, "cannot set master volume (error 0x%lx)",
                            hr);
            }

            BOOL mute;

            hr = ISimpleAudioVolume_GetMute(volume, &mute);
            if (SUCCEEDED(hr))
                aout_MuteReport(aout, mute != FALSE);
            else
                msg_Err(aout, "cannot get mute (error 0x%lx)", hr);

            if (sys->mute >= 0)
            {
                mute = sys->mute ? TRUE : FALSE;

                hr = ISimpleAudioVolume_SetMute(volume, mute, NULL);
                if (FAILED(hr))
                    msg_Err(aout, "cannot set mute (error 0x%lx)", hr);
            }
            sys->mute = -1;
        }

        if (endpoint != NULL && master >= 0.f)
        {
            float v = 20.f * log10f(master);

            msg_Warn(aout, "overriding endpoint volume: %+f dB", v);
            hr = IAudioEndpointVolume_SetMasterVolumeLevel(endpoint, v, NULL);
            if (FAILED(hr))
                msg_Err(aout, "cannot set endpoint volume (error 0x%lx)", hr);
        }

        sys->volume = -1.f;

        SleepConditionVariableCS(&sys->work, &sys->lock, INFINITE);
    }
    LeaveCriticalSection(&sys->lock);

    if (endpoint != NULL)
    {
        IAudioEndpointVolume_UnregisterControlChangeNotify(endpoint,
                                                      &sys->endpoint_callback);
        IAudioEndpointVolume_Release(endpoint);
    }

    if (manager != NULL)
    {   /* Deregister callbacks *without* the lock */
        hr = IAudioSessionManager_QueryInterface(manager,
                                              &IID_IAudioSessionManager2, &pv);
        if (SUCCEEDED(hr))
        {
            IAudioSessionManager2 *m2 = pv;

            IAudioSessionManager2_UnregisterDuckNotification(m2, &sys->duck);
            IAudioSessionManager2_Release(m2);
        }

        if (volume != NULL)
            ISimpleAudioVolume_Release(volume);

        if (control != NULL)
        {
            IAudioSessionControl_UnregisterAudioSessionNotification(control,
                                                         &sys->session_events);
            IAudioSessionControl_Release(control);
        }

        IAudioSessionManager_Release(manager);
    }

    EnterCriticalSection(&sys->lock);
    IMMDevice_Release(sys->dev);
    sys->dev = NULL;
    return S_OK;
}

static void *MMThread(void *data)
{
    audio_output_t *aout = data;
    aout_sys_t *sys = aout->sys;
    IMMDeviceEnumerator *it = sys->it;

    EnterMTA();
    IMMDeviceEnumerator_RegisterEndpointNotificationCallback(it,
                                                          &sys->device_events);
    DevicesEnum(aout, it);

    EnterCriticalSection(&sys->lock);

    do
        if (FAILED(MMSession(aout, it)))
            SleepConditionVariableCS(&sys->work, &sys->lock, INFINITE);
    while (sys->it != NULL);

    LeaveCriticalSection(&sys->lock);

    IMMDeviceEnumerator_UnregisterEndpointNotificationCallback(it,
                                                          &sys->device_events);
    IMMDeviceEnumerator_Release(it);
    LeaveMTA();
    return NULL;
}

/**
 * Callback for aout_stream_t to create a stream on the device.
 * This can instantiate an IAudioClient or IDirectSound(8) object.
 */
static HRESULT ActivateDevice(void *opaque, REFIID iid, PROPVARIANT *actparms,
                              void **restrict pv)
{
    IMMDevice *dev = opaque;
    return IMMDevice_Activate(dev, iid, CLSCTX_ALL, actparms, pv);
}

static int aout_stream_Start(void *func, va_list ap)
{
    aout_stream_start_t start = func;
    aout_stream_t *s = va_arg(ap, aout_stream_t *);
    audio_sample_format_t *fmt = va_arg(ap, audio_sample_format_t *);
    HRESULT *hr = va_arg(ap, HRESULT *);

    *hr = start(s, fmt, &GUID_VLC_AUD_OUT);
    if (*hr == AUDCLNT_E_DEVICE_INVALIDATED)
        return VLC_ETIMEOUT;
    return SUCCEEDED(*hr) ? VLC_SUCCESS : VLC_EGENERIC;
}

static void aout_stream_Stop(void *func, va_list ap)
{
    aout_stream_stop_t stop = func;
    aout_stream_t *s = va_arg(ap, aout_stream_t *);

    stop(s);
}

static int Start(audio_output_t *aout, audio_sample_format_t *restrict fmt)
{
    aout_sys_t *sys = aout->sys;

    if (sys->dev == NULL)
        return -1;

    aout_stream_t *s = vlc_object_create(aout, sizeof (*s));
    if (unlikely(s == NULL))
        return -1;

    s->owner.device = sys->dev;
    s->owner.activate = ActivateDevice;

    EnterMTA();
    for (;;)
    {
        HRESULT hr;

        sys->module = vlc_module_load(s, "aout stream", NULL, false,
                                      aout_stream_Start, s, fmt, &hr);
        if (hr != AUDCLNT_E_DEVICE_INVALIDATED || DeviceSelect(aout, NULL))
            break;
    }
    LeaveMTA();

    if (sys->module == NULL)
    {
        vlc_object_release(s);
        return -1;
    }

    assert (sys->stream == NULL);
    sys->stream = s;
    return 0;
}

static void Stop(audio_output_t *aout)
{
    aout_sys_t *sys = aout->sys;

    assert (sys->stream != NULL);

    EnterMTA();
    vlc_module_unload(sys->module, aout_stream_Stop, sys->stream);
    LeaveMTA();

    vlc_object_release(sys->stream);
    sys->stream = NULL;
}

static int Open(vlc_object_t *obj)
{
    audio_output_t *aout = (audio_output_t *)obj;

    aout_sys_t *sys = malloc(sizeof (*sys));
    if (unlikely(sys == NULL))
        return VLC_ENOMEM;

    aout->sys = sys;
    sys->stream = NULL;
    sys->aout = aout;
    sys->it = NULL;
    sys->dev = NULL;
    sys->device_events.lpVtbl = &vlc_MMNotificationClient;
    sys->endpoint_callback.lpVtbl = &vlc_AudioEndpointVolumeCallback;
    sys->session_events.lpVtbl = &vlc_AudioSessionEvents;
    sys->duck.lpVtbl = &vlc_AudioVolumeDuckNotification;
    sys->refs = 1;
    sys->ducks = 0;

    sys->device = default_device;
    sys->volume = -1.f;
    sys->mute = -1;
    InitializeCriticalSection(&sys->lock);
    InitializeConditionVariable(&sys->work);
    InitializeConditionVariable(&sys->ready);

    /* Initialize MMDevice API */
    if (TryEnterMTA(aout))
        goto error;

    void *pv;
    HRESULT hr = CoCreateInstance(&CLSID_MMDeviceEnumerator, NULL, CLSCTX_ALL,
                                  &IID_IMMDeviceEnumerator, &pv);
    if (FAILED(hr))
    {
        LeaveMTA();
        msg_Dbg(aout, "cannot create device enumerator (error 0x%lx)", hr);
        goto error;
    }
    sys->it = pv;

    if (vlc_clone(&sys->thread, MMThread, aout, VLC_THREAD_PRIORITY_LOW))
    {
        IMMDeviceEnumerator_Release(sys->it);
        LeaveMTA();
        goto error;
    }

    EnterCriticalSection(&sys->lock);
    while (sys->device != NULL)
        SleepConditionVariableCS(&sys->ready, &sys->lock, INFINITE);
    LeaveCriticalSection(&sys->lock);
    LeaveMTA(); /* Leave MTA after thread has entered MTA */

    aout->start = Start;
    aout->stop = Stop;
    aout->time_get = TimeGet;
    aout->play = Play;
    aout->pause = Pause;
    aout->flush = Flush;
    aout->volume_set = VolumeSet;
    aout->mute_set = MuteSet;
    aout->device_select = DeviceSelect;
    return VLC_SUCCESS;

error:
    DeleteCriticalSection(&sys->lock);
    free(sys);
    return VLC_EGENERIC;
}

static void Close(vlc_object_t *obj)
{
    audio_output_t *aout = (audio_output_t *)obj;
    aout_sys_t *sys = aout->sys;

    EnterCriticalSection(&sys->lock);
    sys->device = default_device; /* break out of MMSession() loop */
    sys->it = NULL; /* break out of MMThread() loop */
    WakeConditionVariable(&sys->work);
    LeaveCriticalSection(&sys->lock);

    vlc_join(sys->thread, NULL);
    DeleteCriticalSection(&sys->lock);
    free(sys);
}

vlc_module_begin()
    set_shortname("MMDevice")
    set_description(N_("Windows Multimedia Device output"))
    set_capability("audio output", 150)
    set_category(CAT_AUDIO)
    set_subcategory(SUBCAT_AUDIO_AOUT)
    add_shortcut("wasapi")
    set_callbacks(Open, Close)
vlc_module_end()

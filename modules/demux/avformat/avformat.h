/*****************************************************************************
 * avformat.h: muxer and demuxer using libavformat
 *****************************************************************************
 * Copyright (C) 2001-2008 VLC authors and VideoLAN
 * $Id: 5105dd1efd7a173f925bb7fe85ca90f0aba84b81 $
 *
 * Authors: Laurent Aimar <fenrir@via.ecp.fr>
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

void LibavcodecCallback( void *p_opaque, int i_level,
                             const char *psz_format, va_list va );

/* Demux module */
int  OpenDemux ( vlc_object_t * );
void CloseDemux( vlc_object_t * );

/* Mux module */
int  OpenMux ( vlc_object_t * );
void CloseMux( vlc_object_t * );

#define MUX_TEXT N_("Avformat mux")
#define MUX_LONGTEXT N_("Force use of a specific avformat muxer.")
#define FORMAT_TEXT N_( "Format name" )
#define FORMAT_LONGTEXT N_( "Internal libavcodec format name" )

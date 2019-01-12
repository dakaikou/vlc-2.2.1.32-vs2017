/*****************************************************************************
 * filesystem.c: Windows file system helpers
 *****************************************************************************
 * Copyright (C) 2005-2006 VLC authors and VideoLAN
 * Copyright © 2005-2008 Rémi Denis-Courmont
 *
 * Authors: Rémi Denis-Courmont <rem # videolan.org>
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

/*****************************************************************************
 * Preamble
 *****************************************************************************/
#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <assert.h>

#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
//#include <dirent.h>
//#include <sys/stat.h>
//#include <fcntl.h>
//#include <winsock2.h>
//#include <direct.h>

//#include <vlc_common.h>
//#include <vlc_charset.h>
//#include <vlc_fs.h>
//#include "libvlc.h" /* vlc_mkdir */

//#ifdef _MSC_VER
//# define __STDC__ 1
//# include <io.h> /* _pipe */
//#endif

_WDIR* __cdecl _wopendir(const wchar_t*)
{
    assert(0);

	return NULL;
}

struct _wdirent* __cdecl _wreaddir (_WDIR*)
{
	assert(0);

	return NULL;
}

int __cdecl _wclosedir (_WDIR*)
{
	assert(0);

	return 0;
}

void __cdecl _wrewinddir (_WDIR*)
{
	assert(0);
}

//long __cdecl _wtelldir (_WDIR*)
//{
//	assert(0);
//}
//
//void __cdecl _wseekdir (_WDIR*, long)
//{
//	assert(0);
//}

/*****************************************************************************
 * VLCMinimalVoutWindow.h: MacOS X Minimal window for a vout
 *****************************************************************************
 * Copyright (C) 2007-2012 VLC authors and VideoLAN
 * $Id: 3217eaf62f77f37ce74ea386fe8cfa5e67eec829 $
 *
 * Authors: Pierre d'Herbemont <pdherbemont # videolan.org>
 *          Felix Paul Kühne <fkuehne at videolan dot org>
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

#import <Cocoa/Cocoa.h>

#include <vlc_common.h>

@interface VLCMinimalVoutWindow : NSWindow
{
    NSRect initialFrame;
}

- (id)initWithContentRect:(NSRect)contentRect;

- (void)enterFullscreen;
- (void)leaveFullscreen;
@end

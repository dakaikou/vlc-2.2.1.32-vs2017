/*****************************************************************************
 * DebugMessageVisualizer.h: Mac OS X interface crash reporter
 *****************************************************************************
 * Copyright (C) 2004-2013 VLC authors and VideoLAN
 * $Id: b318f7ddaa11c9afa133b18f03ac6068ca70d72f $
 *
 * Authors: Felix Paul Kühne <fkuehne at videolan dot org>
 *          Pierre d'Herbemont <pdherbemont # videolan org>
 *          Derk-Jan Hartman <hartman at videolan.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#import <Cocoa/Cocoa.h>

@interface VLCDebugMessageVisualizer : NSObject
{
    IBOutlet NSWindow * _msgs_panel;
    IBOutlet NSButton * _msgs_save_btn;
    IBOutlet NSButton * _msgs_refresh_btn;
    IBOutlet id _msgs_table;
}
+ (VLCDebugMessageVisualizer *)sharedInstance;

- (void)showPanel;

- (IBAction)updateMessagesPanel:(id)sender;
- (IBAction)saveDebugLog:(id)sender;

@end

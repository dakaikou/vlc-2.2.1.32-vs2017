/*****************************************************************************
 * playlist_item.cpp : Manage playlist item
 ****************************************************************************
 * Copyright © 2006-2011 the VideoLAN team
 * $Id: 0fbbcba09b4b098e38318b7d6edbf165e88d1fe5 $
 *
 * Authors: Clément Stenac <zorglub@videolan.org>
 *          Jean-Baptiste Kempf <jb@videolan.org>
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

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <assert.h>

#include "qt4.hpp"
#include "playlist_item.hpp"

/*************************************************************************
 * Playlist item implementation
 *************************************************************************/

void AbstractPLItem::clearChildren()
{
    qDeleteAll( children );
    children.clear();
}

void AbstractPLItem::removeChild( AbstractPLItem *item )
{
    children.removeOne( item );
    delete item;
}

/*
   Playlist item is just a wrapper, an abstraction of the playlist_item
   in order to be managed by PLModel

   PLItem have a parent, and id and a input Id
*/

void PLItem::init( playlist_item_t *_playlist_item, PLItem *parent )
{
    parentItem = parent;          /* Can be NULL, but only for the rootItem */
    i_playlist_id = _playlist_item->i_id;           /* Playlist item specific id */
    p_input = _playlist_item->p_input;
    vlc_gc_incref( p_input );
}

/*
   Constructors
   Call the above function init
   */
PLItem::PLItem( playlist_item_t *p_item, PLItem *parent )
{
    init( p_item, parent );
}

PLItem::PLItem( playlist_item_t * p_item )
{
    init( p_item, NULL );
}

PLItem::~PLItem()
{
    vlc_gc_decref( p_input );
    qDeleteAll( children );
    children.clear();
}

int PLItem::id( int type )
{
    switch( type )
    {
    case INPUTITEM_ID:
        return inputItem()->i_id;
    case PLAYLIST_ID:
        return i_playlist_id;
    default:
    case MLMEDIA_ID:
        assert( 0 );
        return -1;
    }
}

void PLItem::takeChildAt( int index )
{
    AbstractPLItem *child = children[index];
    child->parentItem = NULL;
    children.removeAt( index );
}

/* This function is used to get one's parent's row number in the model */
int PLItem::row()
{
    if( parentItem )
        return parentItem->indexOf( this );
    return 0;
}

bool PLItem::operator< ( AbstractPLItem& other )
{
    AbstractPLItem *item1 = this;
    while( item1->parentItem )
    {
        AbstractPLItem *item2 = &other;
        while( item2->parentItem )
        {
            if( item1 == item2->parentItem ) return true;
            if( item2 == item1->parentItem ) return false;
            if( item1->parentItem == item2->parentItem )
                return item1->parentItem->indexOf( item1 ) <
                       item1->parentItem->indexOf( item2 );
            item2 = item2->parentItem;
        }
        item1 = item1->parentItem;
    }
    return false;
}

QUrl PLItem::getURI() const
{
    QString uri;
    vlc_mutex_lock( &p_input->lock );
    uri = QString( p_input->psz_uri );
    vlc_mutex_unlock( &p_input->lock );
    return QUrl( uri );
}

QString PLItem::getTitle() const
{
    QString title;
    char *fb_name = input_item_GetTitle( p_input );
    if( EMPTY_STR( fb_name ) )
    {
        free( fb_name );
        fb_name = input_item_GetName( p_input );
    }
    title = qfu(fb_name);
    free(fb_name);
    return title;
}

/*****************************************************************************
 * EPGItem.cpp: EPGItem
 ****************************************************************************
 * Copyright © 2009-2010 VideoLAN
 * $Id: f932c057f3d2ae8e14be8d71bb13093b28e9eb54 $
 *
 * Authors: Ludovic Fauvet <etix@l0cal.com>
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
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#include <QTransform>
#include <QFont>
#include <QFontMetrics>
#include <QDebug>
#include <QDateTime>
#include <QFocusEvent>
#include <QGraphicsScene>
#include <QStyleOptionGraphicsItem>
#include <QGraphicsSceneHoverEvent>
#include <QStyle>

#include "EPGItem.hpp"
#include "EPGView.hpp"

#include "qt4.hpp"

EPGItem::EPGItem( vlc_epg_event_t *data, EPGView *view )
    : m_view( view )
{
    setData( data );
    m_current = false;
    m_boundingRect.setHeight( TRACKS_HEIGHT );
    setFlags( QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsFocusable);
    setAcceptHoverEvents( true );
}

QRectF EPGItem::boundingRect() const
{
    return m_boundingRect;
}

void EPGItem::paint( QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget*)
{
    QPen pen;
    QColor gradientColor;

    // Draw in view's coordinates
    painter->setWorldMatrixEnabled( false );

    // Draw high-quality items
    //painter->setRenderHint( QPainter::Antialiasing );

    // Get the transformations required to map the text on the viewport
    QTransform viewPortTransform = m_view->viewportTransform();
    QRectF mapped = deviceTransform( viewPortTransform ).mapRect( boundingRect() );

    QLinearGradient gradient( mapped.topLeft(), mapped.bottomLeft() );

    bool b_simultaneous = playsAt( m_view->baseTime() );
    if ( m_current || b_simultaneous )
        gradientColor.setRgb( 244, 125, 0 , b_simultaneous ? 192 : 255 );
    else
        gradientColor.setRgb( 201, 217, 242 );

    gradient.setColorAt( 0.0, gradientColor.lighter( 120 ) );
    gradient.setColorAt( 1.0, gradientColor );

    pen.setColor( option->state & QStyle::State_MouseOver || hasFocus()
                  ? QColor( 0, 0, 0 ) : QColor( 192, 192, 192 ) );

    pen.setStyle( option->state & QStyle::State_MouseOver && !hasFocus()
                  ? Qt::DashLine : Qt::SolidLine );

    painter->setBrush( QBrush( gradient ) );
    painter->setPen( pen );
    mapped.adjust( 1, 2, -1, -2 );
    painter->drawRoundedRect( mapped, 10, 10 );

    /* Draw text */

    // Setup the font
    QFont f = painter->font();

    // Get the font metrics
    QFontMetrics fm = painter->fontMetrics();

    // Adjust the drawing rect
    mapped.adjust( 6, 6, -6, -6 );

    painter->setPen( Qt::black );
    /* Draw the title. */
    painter->drawText( mapped, Qt::AlignTop | Qt::AlignLeft, fm.elidedText( m_name, Qt::ElideRight, mapped.width() ) );

    if ( m_rating > 0 && mapped.width() > 40 )
    {
        QRectF iconsRect = QRectF( mapped.bottomRight(), mapped.bottomRight() );
        iconsRect.adjust( -20, -20, 0, 0 );
        painter->save();
        painter->setBrush( Qt::white );
        f.setPixelSize( 8 );
        painter->setFont( f );
        painter->drawRect( iconsRect );
        painter->drawText( iconsRect, Qt::AlignCenter, QString("%1+").arg( m_rating ) );
        painter->restore();
    }

    mapped.adjust( 0, 20, 0, 0 );

    QDateTime m_end = m_start.addSecs( m_duration );
    f.setPixelSize( 10 );
    f.setItalic( true );
    painter->setFont( f );

    /* Draw the hours. */
    painter->drawText( mapped, Qt::AlignTop | Qt::AlignLeft,
                       fm.elidedText( start().toString( "hh:mm" ) + " - " +
                                      m_end.toString( "hh:mm" ),
                                      Qt::ElideRight, mapped.width() ) );
}

const QDateTime& EPGItem::start() const
{
    return m_start;
}

QDateTime EPGItem::end() const
{
    return QDateTime( m_start ).addSecs( m_duration );
}

int EPGItem::duration() const
{
    return m_duration;
}

void EPGItem::setRow( unsigned int i_row_ )
{
    i_row = i_row_;
    updatePos();
}

bool EPGItem::setData( vlc_epg_event_t *data )
{
    QDateTime newtime = QDateTime::fromTime_t( data->i_start );
    QString newname = qfu( data->psz_name );
    QString newdesc = qfu( data->psz_description );
    QString newshortdesc = qfu( data->psz_short_description );

    if ( m_start != newtime ||
         m_name != newname ||
         m_description != newdesc ||
         m_shortDescription != newshortdesc ||
         m_duration != data->i_duration )
    {
        m_start = newtime;
        m_name = newname;
        setToolTip( newname );
        m_description = newdesc;
        m_shortDescription = newshortdesc;
        setDuration( data->i_duration );
        setRating( data->i_rating );
        update();
        return true;
    }
    return false;
}

void EPGItem::setCurrent( bool b_current )
{
    m_current = b_current;
}

bool EPGItem::endsBefore( const QDateTime &ref ) const
{
    return m_start.addSecs( m_duration ) < ref;
}

bool EPGItem::playsAt( const QDateTime & ref ) const
{
    return (m_start <= ref) && !endsBefore( ref );
}

void EPGItem::setDuration( int duration )
{
    m_duration = duration;
    m_boundingRect.setWidth( duration );
}

void EPGItem::setRating( uint8_t i_rating )
{
    m_rating = i_rating;
}

QString EPGItem::description() const
{
    if( m_description.isEmpty() )
        return m_shortDescription;

    QString text( m_description );
    if( !m_shortDescription.isEmpty() )
        text += QString(" - ") += m_shortDescription;
    return text;
}

void EPGItem::updatePos()
{
    int x = m_view->startTime().secsTo( m_start );
    setPos( x, i_row * TRACKS_HEIGHT );
}

void EPGItem::hoverEnterEvent ( QGraphicsSceneHoverEvent * event )
{
    event->accept();
    scene()->update();
}

void EPGItem::hoverLeaveEvent ( QGraphicsSceneHoverEvent * event )
{ /* required to redraw our background without flaws */
    hoverEnterEvent( event );
}

void EPGItem::focusInEvent( QFocusEvent * event )
{
    event->accept();
    m_view->focusItem( this );
    update();
}

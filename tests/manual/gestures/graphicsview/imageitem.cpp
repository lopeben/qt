/****************************************************************************
**
** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the test suite of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** No Commercial Usage
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the Technology Preview License Agreement accompanying
** this package.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "imageitem.h"
#include "gestures.h"

#include <QPainter>
#include <QEvent>

ImageItem::ImageItem(const QImage &image)
{
    setImage(image);
}

void ImageItem::setImage(const QImage &image)
{
    image_ = image;
    pixmap_ = QPixmap::fromImage(image.scaled(400, 400, Qt::KeepAspectRatio));
    update();
}

QImage ImageItem::image() const
{
    return image_;
}

QRectF ImageItem::boundingRect() const
{
    const QSize size = pixmap_.size();
    return QRectF(0, 0, size.width(), size.height());
}

void ImageItem::paint(QPainter *painter, const QStyleOptionGraphicsItem*, QWidget*)
{
    painter->drawPixmap(0, 0, pixmap_);
}


GestureImageItem::GestureImageItem(const QImage &image)
    : ImageItem(image)
{
    grabGesture(Qt::PanGesture);
    grabGesture(ThreeFingerSlideGesture::Type);
}

bool GestureImageItem::event(QEvent *event)
{
    if (event->type() == QEvent::Gesture) {
        qDebug("gestureimageitem: gesture triggered");
        return true;
    }
    return ImageItem::event(event);
}

#include "moc_imageitem.cpp"

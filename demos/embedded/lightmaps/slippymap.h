/****************************************************************************
**
** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the demonstration applications of the Qt Toolkit.
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

#ifndef SLIPPYMAP_H
#define SLIPPYMAP_H

#include <QNetworkAccessManager>
#include <QPixmap>
#include <QUrl>

class QNetworkReply;
class QPainter;

class SlippyMap: public QObject
{
    Q_OBJECT

public:
    SlippyMap(QObject *parent = 0);
    void invalidate();
    void render(QPainter *p, const QRect &rect);
    void pan(const QPoint &delta);

    int width;
    int height;
    int zoom;
    qreal latitude;
    qreal longitude;

signals:
    void updated(const QRect &rect);

private slots:
    void handleNetworkData(QNetworkReply *reply);
    void download();

protected:
    QRect tileRect(const QPoint &tp);

private:
    QPoint m_offset;
    QRect m_tilesRect;
    QPixmap m_emptyTile;
    QHash<QPoint, QPixmap> m_tilePixmaps;
    QNetworkAccessManager m_manager;
    QUrl m_url;
};

#endif
//***************************************************************************
//
// Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
// All rights reserved.
// Contact: Nokia Corporation (qt-info@nokia.com)
//
// This file is part of the QtGui module of the Qt Toolkit.
//
// $QT_BEGIN_LICENSE:LGPL$
// No Commercial Usage
// This file contains pre-release code and may not be distributed.
// You may use this file in accordance with the terms and conditions
// contained in the Technology Preview License Agreement accompanying
// this package.
//
// GNU Lesser General Public License Usage
// Alternatively, this file may be used under the terms of the GNU Lesser
// General Public License version 2.1 as published by the Free Software
// Foundation and appearing in the file LICENSE.LGPL included in the
// packaging of this file.  Please review the following information to
// ensure the GNU Lesser General Public License version 2.1 requirements
// will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
//
// In addition, as a special exception, Nokia gives you certain additional
// rights.  These rights are described in the Nokia Qt LGPL Exception
// version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
//
// If you have questions regarding the use of this file, please contact
// Nokia at qt-info@nokia.com.
//
//
//
//
//
//
//
//
// $QT_END_LICENSE$
//
//**************************************************************************/


class QMaemo5InformationBox : QDialog
{

%TypeHeaderCode
#include <qmaemo5informationbox.h>
%End

public:
    explicit QMaemo5InformationBox(QWidget *parent = 0);
    ~QMaemo5InformationBox();

    void setWidget(QWidget *widget);
    QWidget *widget() const;

    enum { NoTimeout = 0, DefaultTimeout = 3000 };

    void setTimeout(int ms);
    int timeout() const;

    static void information(QWidget *parent, const QString &text, int timeout = DefaultTimeout);

signals:
    void clicked();

protected:
    void showEvent(QShowEvent *se);
    void timerEvent(QTimerEvent *te);
    void mousePressEvent(QMouseEvent *me);
    void paintEvent(QPaintEvent *pe);

};


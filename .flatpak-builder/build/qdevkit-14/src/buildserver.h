/***************************************************************************
 *   Copyright (C) 2011 Brno University of Technology,                     *
 *   Faculty of Information Technology                                     *
 *   Author(s): Marek Vavrusa    <xvavru00 AT stud.fit.vutbr.cz>           *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Library General Public License as       *
 *   published by the Free Software Foundation; either version 2 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this program; if not, write to the                 *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.         *
 ***************************************************************************/

#ifndef __BUILDSERVER_H__
#define __BUILDSERVER_H__

#include <QObject>
#include <fcmake/remote.h>
#include "qdevkit_export.h"
#include "component.h"

class QDEVKIT_EXPORT BuildServer : public QObject, Component
{
    Q_OBJECT

public:

    BuildServer(QDevKit *app);
    virtual ~BuildServer();

	bool login(FCMake::Key key);
	bool isConnected();

	FCMake::Remote* createRemote();

public slots:
	int start();
	int stop();

private:
    class Private;
    Private *d;
};

#endif

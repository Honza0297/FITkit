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

#include <QMutex>
#include <fcmake/key.h>
#include "buildserver.h"
#include "tunnel.h"
#include "remoteconfig.h"

class BuildServer::Private
{
public:
	Private() : connected(false), key("")
    {}

	volatile bool connected;
	FCMake::Key key;
	QMutex lock;
};

BuildServer::BuildServer(QDevKit *app)
      : QObject(app), Component(app), d(new Private)
{
}

BuildServer::~BuildServer()
{
	delete d;
}

bool BuildServer::login(FCMake::Key key)
{
	bool res = false;
	FCMake::Remote remote(key.host(), key.port());
	if (remote.connect(&key)) {
		res = true;
		d->key = key;
	} else {
		res = false;
	}

	return (d->connected = res);
}

bool BuildServer::isConnected()
{
	return d->connected;
}

FCMake::Remote* BuildServer::createRemote()
{
	FCMake::Remote* remote = new FCMake::Remote(d->key.host(), d->key.port());

	// Connect
    if (!d->key.key().isEmpty()) {
        if (!remote->connect(&d->key)) {
            qDebug("Error: Failed to connect to remote host using pubkey.\n");
			delete remote;
            return 0;
        }
    } else {
        qDebug("Authenticating using password.\n");
        if (!remote->connect(d->key.login(), d->key.password())) {
            qDebug("Error: Failed to connect to remote host using password.\n");
			delete remote;
            return 0;
        }
    }

	return remote;
}

int BuildServer::start()
{
	stop();

  d->lock.lock();
	TunnelService* tuns = mainWindow().tunnels();
	if (tuns) {

		/* Prepare key for local tunnel. */
		FCMake::Key key(tuns->key());

      /* If server is directly connected to fitkit-build, then
                  skip altering the key. */
      QString port = QString::number(RemoteConfig::BServerPort);
      if ((key.host().toLower() == "127.0.0.1") ||
          (key.host().toLower() == "localhost")) {
          port = QString::number(key.port());
      }
      if ((key.host().toLower() != RemoteConfig::BServerName()) &&
          (key.host().toLower() != RemoteConfig::BServerFullName())) {
		    key.setIdentity(key.login() + "@127.0.0.1:" + port);
      }

		/* Login with build server. */
		d->key = key;
		d->connected = true;
		qDebug("BuildServer: connected.");
	}
	d->lock.unlock();

	return 0;
}

int BuildServer::stop()
{
  d->lock.lock();
	d->connected = false;
	d->key = FCMake::Key("");
	qDebug("BuildServer: disconnected.");
	d->lock.unlock();
	return 0;
}


#include "buildserver.moc"

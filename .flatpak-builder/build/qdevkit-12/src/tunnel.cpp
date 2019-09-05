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

#include <QTcpServer>
#include <QTcpSocket>
#include <QPushButton>
#include <QMenu>
#include <QSettings>
#include <QApplication>
#include <QTimer>
#include <libssh/libssh.h>
#include <libssh/ssh2.h>
#include <fcmake/remote.h>
#include "ui/remoteconfig.h" 
#include "tunnel.h"

class TunnelService::Private
{
public:
	Private() : key("")
    {}

	MainWindow* mainWindow;
	QList<TunnelServer*> servers;
	QPushButton* widget;
	QMenu* menu;
	FCMake::Key key;
        QString lastKey;
        unsigned lastKeyHash;
        int plannedTunnels;
	QString lastPorts;
	bool bserverTunnel;
	QStringList lastOpen;
};

TunnelService::TunnelService(MainWindow* w, QObject* parent)
    : QThread(parent), d(new Private)
{
	d->mainWindow = w;
	createWidget();

	connect(this, SIGNAL(created()), this, SLOT(createFinished()));
}

TunnelService::~TunnelService()
{
	if (!d->widget->parent())
		d->widget->deleteLater();

    delete d;
}

TunnelServer* TunnelService::create(int localport, QString remoteHost, int remotePort)
{
	// Bind to local socket
	TunnelServer *server = new TunnelServer(this);
	server->setLocalPort(localport);
	server->setRemotePort(remotePort);
	server->setRemoteHost(remoteHost);

	// Bind to local socket
	if (!server->listen(QHostAddress::LocalHost, (quint16)server->localPort())) {
		qDebug("Error: Could not bind to local port %d.", server->localPort());
		delete server;
		server = 0;
	}

	return server;
}

int TunnelService::setup(FCMake::Key key, TunnelServer* server)
{
    // Check window state
    if (d->mainWindow->isHidden() || !server) {
        return -1;
    }

    // Create channel
	FCMake::Remote* remote = new FCMake::Remote(key.host(), key.port());
    if (!key.key().isEmpty()) {
        if (!remote->connect(&key)) {
			qDebug("Error: Failed to connect to remote host: %s.\n", key.identity().toLatin1().data());
			delete remote;
            return -1;
        }
    } else {
        if (!remote->connect(key.login(), key.password())) {
            qDebug("Error: Failed to connect to remote host with passphrase.\n");
			delete remote;
            return -1;
        }
    }

	// Assign remote
	server->setRemote(remote);

//	qDebug("Forwarding %s:%d to local port %d through %s.",
//		   server->remoteHost().toLatin1().data(), server->remotePort(),
//		   server->localPort(), key.identity().toLatin1().data());

    return 0;
}

int TunnelService::open(FCMake::Key key, int localport, QString remoteHost, int remotePort)
{
    // Check window state
    if (d->mainWindow->isHidden()) {
        return -1;
    }

	// Create server
	TunnelServer* server = create(localport, remoteHost, remotePort);

	// Open connection
	if (setup(key, server) < 0) {
		delete server;
		return -2;
	}

	// Add server to local list
	d->servers.append(server);

    return 0;
}

bool TunnelService::isConnected()
{
    return d->servers.size() > 0;
}

QWidget* TunnelService::widget()
{
	return d->widget;
}

FCMake::Key TunnelService::key()
{
	return d->key;
}

QString TunnelService::defaultPorts()
{
    return RemoteConfig::defaultPorts();
}

QString TunnelService::tunnelPorts()
{
    return RemoteConfig::tunnelPorts();
}

void TunnelService::setTunnelPorts(QString ports)
{
    RemoteConfig::setTunnelPorts(ports);

    // Reload configuration
    QTimer::singleShot(1, this, SLOT(reloadSettings()));
}

int TunnelService::start()
{
   // Synchronize
   wait();
   
   d->plannedTunnels = -1;
   d->menu->clear();
   d->widget->setText(tr("Connecting...") + "    ");
   d->widget->setIcon(QIcon(":/icons/22x22/network-disconnect.png"));
   
   QSettings set;
   QString skey = set.value("Remote/BServerKey").toString();
   d->lastKey = skey;
   d->lastKeyHash = set.value("Remote/BServerKeyHash", 0).toUInt();
   if (skey.isEmpty()) {
      stop();
      createFinished();
      return -1;
   }

   // Check key
   d->key = FCMake::Key(skey);
   if (d->key.key().isEmpty() && d->key.password().isEmpty()) {
      QString pass = d->mainWindow->requestPassword(
               d->key.login(),
               d->key.host(),
               tr("Please enter password for") + ":<br/>"
               + " " + skey + "");
      d->key.setPassword(pass);
   }
   
   // Clear old servers
   foreach(TunnelServer* server, d->servers) {
      server->close();
      server->deleteLater();
   }
   d->servers.clear();
   
   
   // Prepare build server tunnel
   QString host;
   d->lastOpen.clear();
   d->lastPorts.clear();
   d->bserverTunnel = false;
   if ((d->key.host().toLower() != RemoteConfig::BServerName()) // Direct connection
       && (d->key.host().toLower() != RemoteConfig::BServerFullName()) // Direct connection
       && (d->key.host().toLower() != "localhost") // Custom tunnel
       && (d->key.host().toLower() != "127.0.0.1") // Custom tunnel
       ) {
      // Create tunnels
      d->plannedTunnels = 1;
      host = RemoteConfig::BServerFullName();
      TunnelServer* s = create(RemoteConfig::BServerPort, host, 22);
      if (s) {
         d->servers.append(s);
         d->bserverTunnel = true;
      } else {
         d->bserverTunnel = false;
         stop();
         return 0;
      }
   } else {
      // Check if the key is valid anyway
      d->plannedTunnels = -1;
      FCMake::Remote* remote = new FCMake::Remote(d->key.host(), d->key.port());
      if (!d->key.key().isEmpty()) {
         if (remote->connect(&d->key)) {
            d->plannedTunnels = 0;
         }
      } else {
         if (remote->connect(d->key.login(), d->key.password())) {
            d->plannedTunnels = 0;
         }
      }
      
      delete remote;
   }
   
   // Prepare license tunnels
   if (set.value("Remote/LicenseTunnel", true).toBool()) {
      host = "semik.fit.vutbr.cz";
      QList<int> ports;
      d->lastPorts = set.value("Remote/TunnelPorts", "1050,1717,1818").toString();
      QStringList cfgports = d->lastPorts.split(",");
      foreach(QString port, cfgports) {
         ports << port.trimmed().toInt();
      }
      
      // Create tunnels
      d->plannedTunnels += ports.size();
      foreach(int port, ports) {
         TunnelServer* s = create(port, host, port);
         if (s) {
            d->servers.append(s);
         } else {
            qDebug("Failed to create tunnel %s:%d to "
                   "local port %d through %s.",
                   host.toLatin1().data(), port, port,
                   d->key.identity().toLatin1().data());
//            stop();
//            break;
         }
      }
   }
   
   QThread::start();
   return 0;
}

void TunnelService::run()
{
		// Set build server tunnelling
	foreach(TunnelServer* server, d->servers) {
	    if (setup(d->key, server) == 0) {
			d->lastOpen.append(server->remoteHost() + ":" + QString::number(server->remotePort()) + 
				               " -> " + "localhost:" + QString::number(server->localPort()));	               
            } else {
                    stop();
                    break;
            }
	}

		emit (created());
}

void TunnelService::createFinished()
{
    int count = d->servers.count(); 
    bool createdOk = true;
	 if (d->bserverTunnel && (count < 1)) createdOk = false;

	 qDebug("TunnelService info: planned tunnels: %d, active tunnels: %d", d->plannedTunnels, count);

    if (!createdOk) {
        d->widget->setText(tr("Not connected to build server")+ "    ");
        d->menu->clear();
    } else {
        // Create build server tunnel info
        if (d->bserverTunnel && !d->lastOpen.empty()) {
            d->menu->addAction(tr("Build server tunnel"));
            d->menu->addSeparator();
            d->menu->addAction(QIcon(":/icons/22x22/bt-ok.png"), d->lastOpen.takeFirst() + "\n");
            d->menu->addSeparator();
        }

        // List open tunnels
		  if (d->lastOpen.count()) {
           d->menu->addAction(tr("License tunnels"));
           d->menu->addSeparator();
           foreach(QString lastOpen, d->lastOpen) {
               d->menu->addAction(QIcon(":/icons/22x22/bt-ok.png"), lastOpen + "\n");
           }
           d->lastOpen.clear();
		  }

        // Evaluate and perform lookup
        if (count) {
            d->widget->setText(tr("Connections") + " (" + QString::number(count) + ")    ");
            QHostInfo::lookupHost("semik", this, SLOT(dnsLookedUp(QHostInfo)));
        } else {
            d->widget->setText(tr("Connected to build server") + "    ");
        }

    	  if (count != d->plannedTunnels)
          d->widget->setText(tr("Partially connected") + " ("+QString::number(d->plannedTunnels - count) + " tunnels failed)");

	 }

    // Update icon
    if (createdOk) {
        d->widget->setIcon(QIcon(":/icons/22x22/network-connect.png"));
        if (count) {
            d->widget->setMenu(d->menu);
        } else {
            d->widget->setMenu(0);
        }
    } else {
        d->widget->setIcon(QIcon(":/icons/22x22/network-disconnect.png"));
        d->widget->setMenu(0);
    }
}

void TunnelService::dnsLookedUp(const QHostInfo &host)
{
	bool isLocalhost = false;

    if (host.error() != QHostInfo::NoError) {
       //qDebug() << "Lookup failed:" << host.errorString();
    } else {
       foreach (const QHostAddress &address, host.addresses()) {
          //qDebug() << "Found address:" << address.toString;
			 if (address.toString() == "127.0.0.1")
				 isLocalhost = true;
		 }
    }

    if (!isLocalhost) {
       d->widget->setText(tr("Hostname \"semik\" doesn't point to 127.0.0.1")
                          + "     ");
       d->widget->setToolTip(tr("Please set 'semik' to 127.0.0.1 in your "
                                "hosts file."));
    }
}

int TunnelService::stop()
{
	foreach(TunnelServer* server, d->servers) {
            if (server) {
		server->close();
		server->deleteLater();
            }
	}
	d->servers.clear();
	d->key = FCMake::Key("");

	emit (stopped());
	return 0;
}

void TunnelService::reloadSettings()
{
	// Check if changed
        /*
        QSettings set;
        if (d->lastKey == set.value("Remote/BServerKey").toString() &&
            !key().key().isEmpty() &&
            d->lastPorts == set.value("Remote/TunnelPorts", "1050,1717,1818").toString()
           ) {

            qDebug("Tunneling state not changed.");
            return;

	}
        */

	stop();
	start();
}

void TunnelService::reload()
{
    int count = d->servers.count(); 
    bool createdOk = (count == d->plannedTunnels);
    if (!createdOk) {
         reloadSettings();
    }
}

void TunnelService::createWidget()
{
	d->widget = new QPushButton;
	d->widget->setFlat(true);
	connect(d->widget, SIGNAL(clicked()), this, SLOT(reload()));
	d->menu = new QMenu(d->widget);
	stop();
}

TunnelServer::TunnelServer(QObject* parent)
: QTcpServer(parent), mRemote(0)
{	
}

TunnelServer::~TunnelServer()
{
	if (mRemote) {
	   mRemote->disconnect();
	   delete mRemote;
	}
}

void TunnelServer::setRemote(FCMake::Remote* remote)
{
	mRemote = remote;
}

void TunnelServer::lock()
{
	mLock.lock();
}

void TunnelServer::unlock()
{
	mLock.unlock();
}

int TunnelServer::poll(FCMake::Channel ch)
{
	int ret = -1;
	ret = mRemote->poll(ch, 0);
	return ret;
}

int TunnelServer::forward(FCMake::Channel ch, const char* data, size_t len)
{
	int ret = -1;
	ret = mRemote->write(ch, data, len);
	return ret;
}

int TunnelServer::read(FCMake::Channel ch, char* dst, size_t maxlen)
{
	int ret = -1;
	ret = mRemote->read(ch, dst, maxlen);
	return ret;
}

void TunnelServer::incomingConnection(int sock)
{
	if (!mRemote) {
		return;
	}

     TunnelThread *t = new TunnelThread(this, mRemote, sock);
     t->start();
}

TunnelThread::TunnelThread(TunnelServer* parent, FCMake::Remote* remote, int sock)
    : QThread(parent), mSock(sock), mRemote(remote), mServer(parent)
{
	connect(this, SIGNAL(finished()), this, SLOT(deleteLater()));
}

void TunnelThread::run()
{
    QTcpSocket sock;
	if (!sock.setSocketDescriptor(mSock)) {
		return;
	}

	// Setup forwarding
    mServer->lock();
	FCMake::Channel fwd = mRemote->openForward(mServer->remoteHost(),
		                                       mServer->remotePort(),
								   			   mServer->localPort());
	mServer->unlock();

	if (!fwd) {
		qDebug("Error: Could not setup port forwarding.");
		return;
	}

	sock.setReadBufferSize(16384);
	char buf[16384];
    while (true) {

		// Check TCP socket
		if (!sock.isOpen()) {
			qDebug("TunnelThread: socket is closed, finishing");
			break;
		}

		// Forward data to remote
//bytesAvailable
		if (sock.waitForReadyRead(1)) {

		    int readb = sock.read(buf, sizeof(buf));
			//qDebug("Sock read returned %d", readb);
			if (readb <= 0) {
				break;
			}

			mServer->lock();
            int ret = mServer->forward(fwd, buf, readb);
			mServer->unlock();
            if (readb != ret) {
				qDebug("TunnelThread: failed to forward data to remote.");
				break;
			} else {
				//qDebug("TunnelThread: forwarded %d bytes to remote.", ret);
			}
		}

		// Check socket state
		if (sock.state() == QTcpSocket::UnconnectedState) {
			break;
		}

		// Poll new data from remote
		mServer->lock();
        int ret = mServer->poll(fwd);
		mServer->unlock();
		//qDebug("Server poll returned %d, sockstate %d error %d", ret, sock.state(), sock.error());
        if (ret == SSH_ERROR || ret == SSH_EOF) {
           break;
        }

        // Read data                
        if (ret > 0) {
			mServer->lock();
			ret = mServer->read(fwd,buf, sizeof(buf));
			mServer->unlock();
			if (ret > 0) {
				if (sock.write(buf, ret) != ret) {
					break;
				}
			  //qDebug("TunnelThread: received %d bytes from remote.", ret);
			}
			if (ret < 0) {
				qDebug("TunnelThread: receiving from remote failed.");
				break;
			}
		}
    }

	// Close channel
	mServer->lock();
	mRemote->close(fwd);
	mServer->unlock();

	if (sock.state() == QTcpSocket::ConnectedState) {
	    //qDebug("TunnelThread: disconnecting");
	    sock.disconnectFromHost();
	    sock.waitForDisconnected();
	}
	//qDebug("TunnelThread: finished");
}

#include "tunnel.moc"

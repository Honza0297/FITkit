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

#ifndef __TUNNEL_H__
#define __TUNNEL_H__

#include <QThread>
#include <QString>
#include <QTcpServer>
#include <QMutex>
#include <QHostInfo>
#include <fcmake/key.h>
#include <fcmake/remote.h>
#include "qdevkit_export.h"
#include "mainwindow.h"

class TunnelServer;

class QDEVKIT_EXPORT TunnelService : public QThread
{
    Q_OBJECT

public:

    TunnelService(MainWindow* w, QObject* parent = 0);
    virtual ~TunnelService();

	TunnelServer* create(int localport, QString remoteHost, int remotePort);
	int setup(FCMake::Key key, TunnelServer* server);
        int open(FCMake::Key key, int localport, QString remoteHost, int remotePort);
        bool isConnected();

	QWidget* widget();
	FCMake::Key key();

        Q_INVOKABLE QString defaultPorts();
        Q_INVOKABLE QString tunnelPorts();
        Q_INVOKABLE void setTunnelPorts(QString ports);

public slots:
	int start();
	int stop();

signals:
	void stopped();
	void created();

protected:
	void run();

private slots:
	void createFinished();
	void reload();
	void reloadSettings();
    void dnsLookedUp(const QHostInfo &host);

private:
    class Private;
    Private *d;
	void createWidget();
};

class QDEVKIT_EXPORT TunnelServer : public QTcpServer
{
    Q_OBJECT

public:
	TunnelServer(QObject* parent = 0);
	virtual ~TunnelServer();

	void setRemote(FCMake::Remote* remote);
	int localPort() { return mPort; }
	int setLocalPort(int val) { return mPort = val; }
	int remotePort() { return mRemotePort; }
	int setRemotePort(int val) { return mRemotePort = val; }
	QString remoteHost() { return mRemoteHost; }
	void setRemoteHost(QString host) { mRemoteHost = host; }

	void lock();
	void unlock();
	int poll(FCMake::Channel ch);
	int forward(FCMake::Channel ch, const char* data, size_t len);
	int read(FCMake::Channel ch, char* dst, size_t maxlen);

protected:
     void incomingConnection(int sock);

private:
	int mPort, mRemotePort;
	QString mRemoteHost;
	QMutex mLock;
	FCMake::Remote* mRemote;
};

class QDEVKIT_EXPORT TunnelThread : public QThread
{
    Q_OBJECT

public:
	TunnelThread(TunnelServer* parent, FCMake::Remote* remote, int sock);

protected:
     void run();

private:
	int mSock;
	FCMake::Remote* mRemote;
	TunnelServer* mServer;
};

#endif

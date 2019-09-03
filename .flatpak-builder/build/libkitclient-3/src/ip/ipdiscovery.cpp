/***************************************************************************
 *   Copyright (C) 2008 Brno University of Technology,                     *
 *   Faculty of Information Technology                                     *
 *   Author(s): Marek Vavrusa    <xvavru00 AT stud.fit.vutbr.cz>           *
 *              Zdenek Vasicek   <vasicek  AT fit.vutbr.cz>                *
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

#include "ip/ipdiscovery.h"
#include "ip/ipbackend.h"
#include "ip/ipdevice.h"
#include "liburpc_copy/socket.hpp"
#include "liburpc_copy/clientsocket.hpp"
#include "deviceutils.h"
#include <cstdio>
#include <cerrno>
#include <QStringList>

#ifdef __WIN32
const char *my_inet_ntop(int af, const void *src, char *dst, socklen_t cnt)
{
	if (af == AF_INET)
	{
		struct sockaddr_in in;
		memset(&in, 0, sizeof(in));
		in.sin_family = AF_INET;
		memcpy(&in.sin_addr, src, sizeof(struct in_addr));
		getnameinfo((struct sockaddr *)&in, sizeof(struct sockaddr_in), dst, cnt, NULL, 0, NI_NUMERICHOST);
		return dst;
	}

	return 0;
}
#endif

const char *IPDiscovery::Address = "225.26.27.28";

class IPDiscovery::Private
{
public:
    Private() : sock(), wsock(), state(IPDiscovery::Idle), backend(0)
    {}

    struct ip_mreq mreq; /* Multicast group. */
    Socket sock, wsock;         /* Socket for broadcasting. */
    volatile State state;         /* Service state */
    IPBackend* backend;  /* Parent backend instance */
};

IPDiscovery::IPDiscovery(IPBackend* backend)
   : QThread(0), d(new Private)
{
    d->backend = backend;
}

IPDiscovery::~IPDiscovery()
{
    d->wsock.close();
    d->sock.close();

    if(isRunning())
        stop();

    delete d;
    DEBUG_MSG("IPDiscovery::~IPDiscovery() finished\n");
}

void IPDiscovery::start()
{
    if (d->state == Running) {
        return;
    }

    if(isRunning())
        return;

    // Create broadcast socket
    d->state = Running;
    if (d->sock.sock() <= 0) {
        d->sock.create(AF_INET, SOCK_DGRAM, 0);
        if (d->sock.bind("0.0.0.0", Port) < 0) {
            qDebug("DEBUG: IPDiscovery: start(): failed to bind to socket");
            d->sock.close();
            d->state = Idle;
            return;
        }
    }

    // Join multicast group
    qDebug("DEBUG: IPDiscovery: joining mcast group %s:%d", Address, Port);
    if (d->sock.joinGroup(Address) < 0) {
        qDebug("DEBUG: IPDiscovery: start(): failed to join mcast group");
        d->sock.close();
        d->state = Idle;
        return;
    }

    d->wsock.create(AF_INET, SOCK_DGRAM, 0);
    QThread::start();
    qDebug("DEBUG: IPDiscovery: start()");
}

void IPDiscovery::stop()
{
    if (d->state == Idle) {
        return;
    }

    if(!isRunning())
        return;

    qDebug("DEBUG: IPDiscovery: stop() initiated");
    d->state = Idle;
}

int IPDiscovery::state()
{
    return d->state;
}

int IPDiscovery::broadcast(NodeState state)
{
    // Check service state
    if (d->state == Idle) {
        return -1;
    }

    QByteArray buf;

    // Set message type
    switch(state) {
    case Announce:
        buf.append("a");
        break;
    case Leave:
        buf.append("l");
        break;
    }
    buf.append('\0');

    int ret = d->wsock.sendto(buf.data(), buf.size(),
                              Address, Port);
    if (ret < 0) {
        qDebug("DEBUG: IPDiscovery: broadcast() failed (%d)", errno);
    }

    return ret;
}

void IPDiscovery::run()
{
   qDebug("DEBUG: IPDiscovery: run()");

   fd_set rfds;
   char buf[8092];
   int sock = d->sock.sock();
   if (sock < 0) {
	   d->state = Idle;
   }
   sockaddr_in sa;
   socklen_t addrlen = 0;

   // Receive packets
   while(d->state == Running) {

       // Needs to be refreshed every iteration (wsock compatibility)
       timeval tv;
       tv.tv_sec = 1;
       tv.tv_usec = 0;
       FD_ZERO(&rfds);
       FD_SET((unsigned)sock, &rfds);

       // Wait for events
       int ret = select(sock + 1, &rfds, NULL, NULL, &tv);
       if (ret < 0) {
           qDebug("DEBUG: IPDiscovery: select() error: %s", strerror(errno));
           break;
       }       
       if (ret > 0) {
		   addrlen = sizeof(sa);
           memset(&sa, 0, sizeof(sa));
           ret = ::recvfrom(sock, buf, sizeof(buf), 0,
                            (sockaddr*) &sa,
                            &addrlen);
           if (ret < 0) {
#ifdef __WIN32
               qDebug("DEBUG: IPDiscovery: recv() error: %d", WSAGetLastError());
#else
			   qDebug("DEBUG: IPDiscovery: recv() error: %s", strerror(errno));
#endif
               continue;
           }

           // Received packet
           if (ret > 0) {

               // Ensure it ends on '\0'
               buf[ret - 1] = '\0';

               // Fetch sender data
               char addrbuf[INET_ADDRSTRLEN];	

#ifdef __WIN32
			   my_inet_ntop(AF_INET, &(sa.sin_addr), addrbuf, INET_ADDRSTRLEN);
#else
			   inet_ntop(AF_INET, &(sa.sin_addr), addrbuf, INET_ADDRSTRLEN);
#endif
              
               // Ignore invalid addresses
               if (strcmp(addrbuf, "0.0.0.0") == 0) {
                   continue;
               }

               handle(addrbuf, buf);
           }
       }
   }

   broadcast(Leave);

   // Leave multicast group
   qDebug("DEBUG: IPDiscovery: leaving mcast group %s:%d", Address, Port);
   if (d->sock.leaveGroup(Address) < 0) {
       qDebug("DEBUG: IPDiscovery: start(): failed to leave mcast group");
   }

   qDebug("DEBUG: IPDiscovery: run() finished");
}

int IPDiscovery::handle(const char* addr, const char* pkt)
{
    // Parse packet
    QStringList toks = QString(pkt).split(QRegExp(";"), QString::SkipEmptyParts);
    if (toks.empty()) {
        qDebug("DEBUG: IPDiscovery: Zero-length packet.");
        return -1;
    }

    // Get packet type
    //int ret = 0;
    char ptype = toks.takeFirst().at(0).toLower().toLatin1();

    // Handle packet type
    switch (ptype) {
    case 'a': // Announce
        handleAnnounce(addr, toks);
        break;
    case 'l': // Leave
        handleLeave(addr, toks);
        break;
    default:
        qDebug("DEBUG: IPDiscovery: invalid packet type '%c'", ptype);
        //ret = -1;
        break;

    }

    return 0;
}

int IPDiscovery::handleAnnounce(const char* addr, const QStringList& desc)
{
    Q_UNUSED(desc);
    //qDebug("DEBUG: IPDiscovery: host '%s' announced in discovery group", addr);
    if (d->backend->connect(addr, IPBackend::Port, IPBackend::Discovered) == 0) {
        qDebug("DEBUG: IPDiscovery: failed to connect to '%s'", addr);
        return -1;
    }

    return 0;
}

int IPDiscovery::handleLeave(const char* addr, const QStringList& desc)
{
	Q_UNUSED(desc);
    qDebug("DEBUG: IPDiscovery: host '%s' left discovery group", addr);
    QList<ClientSocket*> clients = d->backend->clients();
    foreach (ClientSocket* client, clients) {
        if (strcmp(client->host(), addr) == 0) {
            d->backend->disconnect(client);
            break;
        }
    }

    return 0;
}

#include "ipdiscovery.moc"

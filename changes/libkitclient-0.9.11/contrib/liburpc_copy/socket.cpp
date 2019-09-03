/***************************************************************************
*   Copyright (C) 2009 Marek Vavrusa <marek@vavrusa.com>                  *
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
/*! \file socket.cpp
    \brief C++ style wrapper for BSD sockets with state checking and error control.
    \author Marek Vavrusa <marek@vavrusa.com>
    \addtogroup protocpp
    @{
  */
#include "socket.hpp"
#include <cstring>
#include <iostream>
#include <sstream>
#include <cerrno>
#include <cstdio>

#ifdef __WIN32
static void _wsa_cleanup() {
    WSACleanup();
}
#else
#include <unistd.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/tcp.h>
typedef int BOOL;
#endif

using namespace std;

Socket::Socket(int fd)
   : mOpen(false), mSock(fd), mPort(0)
{
#ifdef __WIN32
    static volatile bool wsa_initialized = false;
    if(!wsa_initialized) {
        wsa_initialized = true;
        WSADATA data;
        WSAStartup(MAKEWORD(1,1), &data);
        atexit(&_wsa_cleanup);
    }
#endif
}

Socket::~Socket()
{
}

int Socket::create(int domain, int type, int proto)
{
   // Skip on existing socket
   if(mSock != -1) {
      return Ok;
   }

   // Create socket
   mSock = socket(domain, type, proto);
   if(mSock < 0) {
       perror("socket()");
   }

   return Ok;
}

int Socket::connect(std::string host, int port)
{
   if(create() < 0)
      return IOError;

   if (setConnection(host, port) < 0) {
       return IOError;
   }

   return reconnect();
}

int Socket::setConnection(std::string host, int port)
{
    if(create() < 0)
       return IOError;

    // Save host and port
    mHost = host;
    mPort = port;
    return Ok;
}

int Socket::reconnect()
{
   // Check host, port and socket
   if(mHost.empty() || mPort <= 0 || mSock == -1)
      return ConnectError;

   // Ignore multiple connect
   if(isOpen())
      return ConnectError;

   // Create host entity
   hostent* hent = 0;
   if((hent = gethostbyname(mHost.c_str())) == 0)
      return BadAddr;

   // Connect to host
   memset(&mAddr, 0, sizeof(mAddr));
   mAddr.sin_family = AF_INET;
   mAddr.sin_port = htons((unsigned short)mPort);
   memcpy(&mAddr.sin_addr, hent->h_addr, hent->h_length);
   if(::connect(mSock, (sockaddr*) &mAddr, sizeof(mAddr)) < 0) {
      return ConnectError;
   }

   // Default recv() timeout = 2s
   timeval tv;
   tv.tv_sec  = 2;
   tv.tv_usec = 0;
   setsockopt(mSock, SOL_SOCKET, SO_RCVTIMEO, (const char*)&tv, sizeof(tv));

   int flag = 1;
   setsockopt(mSock, IPPROTO_TCP, TCP_NODELAY,
              (const char *) &flag,  sizeof(int));

   mOpen = true;
   return Ok;
}

int Socket::send(const char* buf, size_t size)
{
   if(!isOpen())
      return NotOpen;

   int sent = 0;
   if((sent = ::send(mSock, buf, size, 0)) < 0)
      return SendError;

   return sent;
}

int Socket::sendto(const char* buf, size_t size, const char* addr, int port)
{
	if (port <= 0) {
		return SendError;
	}

    struct sockaddr_in saddr;
    memset(&saddr, 0, sizeof(saddr));
    saddr.sin_family = AF_INET;
    saddr.sin_addr.s_addr = inet_addr(addr);
    saddr.sin_port = htons((unsigned short)port);

    int sent = ::sendto(sock(), buf, size, 0,
                        (struct sockaddr *)&saddr, sizeof(saddr));
    if (sent < 0) {
        sent = SendError;
    }

    return sent;
}

int Socket::listen(const char* addr, int port, int limit)
{
   // Create socket
   if(create() < 0)
      return IOError;

   // Bind to given port
   if(bind(addr, port) < 0)
      return IOError;

   // Listen
   if(::listen(mSock, limit) < 0) {
      perror("listen()");
      return IOError;
   }

   mOpen = true;
   return Ok;
}

int Socket::accept()
{
   sockaddr_in client_addr;
   socklen_t client_addr_size;
   client_addr_size = sizeof(struct sockaddr_in);
   int client = ::accept(sock(), (sockaddr*) &client_addr, &client_addr_size);

   int flag = 1;
   setsockopt(client, IPPROTO_TCP, TCP_NODELAY,
              (const char *) &flag,  sizeof(int));

   return client;
}

int Socket::bind(const char* addr, int port)
{
   // Create address
   mAddr.sin_family = AF_INET; // Addr type
   mAddr.sin_port = htons((unsigned short)port); // Set port
   if (addr) {
       mAddr.sin_addr.s_addr = inet_addr(addr); // First available addr
   } else {
       mAddr.sin_addr.s_addr = htonl(INADDR_ANY); // Any
       addr = "0.0.0.0";
   }

   // Reuse open socket
   BOOL on = 1;
   if(::setsockopt(mSock, SOL_SOCKET, SO_REUSEADDR, (char *)&on, sizeof(on)) < 0) {
      perror("setsockopt()");
      return -1;
   }

   if(::bind(mSock, (sockaddr*) &mAddr, sizeof(mAddr)) < 0) {
      perror("bind()");
      return -1;
   }

   mHost = addr;
   mPort = port;
   return Ok;
}

int Socket::joinGroup(const char* addr)
{
    struct ip_mreq group;
    group.imr_multiaddr.s_addr = inet_addr(addr);
    group.imr_interface.s_addr = htonl(INADDR_ANY);
    int ret = setsockopt(sock(), IPPROTO_IP, IP_ADD_MEMBERSHIP,
                         (const char*)&group, sizeof(group));
    return ret;
}

int Socket::leaveGroup(const char* addr)
{
    struct ip_mreq group;
    group.imr_multiaddr.s_addr = inet_addr(addr);
    group.imr_interface.s_addr = htonl(INADDR_ANY);
    int ret = setsockopt(sock(), IPPROTO_IP, IP_DROP_MEMBERSHIP,
                         (const char*)&group, sizeof(group));
    return ret;
}

int Socket::close()
{
   // Close open socket
   if(isOpen()) {
   mOpen = false;
#if __WIN32
      if(closesocket(mSock) < 0)
#else
	  if(::close(mSock) < 0)
#endif
         return IOError;

      mSock = -1;
   }

   return Ok;
}

/** @} */

/***************************************************************************
 *   Copyright (C) 2010 Marek Vavrusa <xvavru00@stud.fit.vutbr.cz          *
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
/*! \file socket.hpp
    \brief C++ style wrapper for BSD sockets with state checking and error control.
    \author Marek Vavrusa <marek@vavrusa.com>
    \addtogroup protocpp
    @{
  */
#pragma once
#ifndef __socket_hpp__
#define __socket_hpp__
#include <string>
#include "common.h"

#ifdef __WIN32
#include <winsock2.h>
#include <ws2tcpip.h>
typedef int socklen_t;
#else
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/select.h>
#include <unistd.h>
#include <netdb.h>
#endif

/** C++ style wrapper for BSD sockets with state checking and error control.
  */
class URPC_EXPORT Socket
{
   public:

   Socket(int fd = -1);
   virtual ~Socket();

   // Error enumeration
   enum {
      IOError        = -128,
      BadAddr,
      ConnectError,
      CloseError,
      SendError,
      RecvError,
      NotOpen,
      Ok             = 0
   } State;

   // Set host and port
   virtual int setConnection(std::string host, int port);

   // Connect to remote host:port
   virtual int connect(std::string host, int port);

   // Reconnect to already given host
   virtual int reconnect();

   // Listen on given port
   virtual int listen(const char* addr, int port, int limit = 5);

   // Accept new connection
   virtual int accept();

   // Close connection
   virtual int close();

   // Send raw data
   int send(const char* buf, size_t size);

   // Send raw data
   int sendto(const char* buf, size_t size, const char* addr, int port);

   // Receive raw data
   int recv(char* dst, int size, int flags = 0) {
      return ::recv(mSock, dst, size, flags);
   }

   // Returns whether is socket associated
   bool isOpen() { return mOpen; }

   // Set open state
   void setOpen(bool val) { mOpen = val; }

   // Returns socket id
   int sock() { return mSock; }

   // Returns port
   int port() { return mPort; }

   // Returns host as std::string reference
   const char* host() { return mHost.c_str(); }

   // Return address as struct
   sockaddr_in& addr() { return mAddr; }

   // Create socket
   int create(int domain = AF_INET, int type = SOCK_STREAM, int proto = IPPROTO_TCP);

   // Bind to port
   int bind(const char* addr, int port);

   // Join multicast group
   int joinGroup(const char* addr);

   // Leave multicast group
   int leaveGroup(const char* addr);

   private:
   volatile bool mOpen;
   int mSock;
   int mPort;
   sockaddr_in mAddr;
   std::string mHost;
};

#endif // __socket_hpp__
/** @} */

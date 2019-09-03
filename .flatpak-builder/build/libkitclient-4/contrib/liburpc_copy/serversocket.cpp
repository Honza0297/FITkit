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
/*! \file serversocket.cpp
    \brief Abstract server socket and packet handler.
    \author Marek Vavrusa <marek@vavrusa.com>
    \addtogroup server
    @{
  */
#include "serversocket.hpp"
#include "common.h"
#ifndef __WIN32
typedef int BOOL;
#endif

class ServerSocket::Private
{
   public:
   std::vector<int> clients;
};

ServerSocket::ServerSocket(int fd)
   : Socket(fd), d(new Private)
{
}

ServerSocket::~ServerSocket()
{
   delete d;
}

void ServerSocket::run()
{
   log_msg("Server: running at %s:%d\n", host(), port());

   // Append self to clients vector
   fd_set rfds;
   FD_ZERO(&rfds);

   std::vector<int>::iterator it;
   std::vector<int> incoming;
   incoming.push_back(sock());

   // Process event loop
   while(isOpen()) {

      // Evaluate incoming sockets
      if(!incoming.empty()) {
         for(it = incoming.begin(); it != incoming.end(); ++it) {
            if(*it == sock()) {
               log_msg("Server: listening on fd %d\n", *it);
            }
            else {
               log_msg("Server: client connected (socket fd %d)\n", *it);
               connected(*it);
            }

            d->clients.push_back(*it);
         }
         incoming.clear();
      }

      // Update clients set
      FD_ZERO(&rfds);
      for(it = d->clients.begin(); it != d->clients.end(); ++it) {
          FD_SET((unsigned short)*it, &rfds);
      }

      struct timeval tv;
      tv.tv_sec = 0;
      tv.tv_usec = 500 * 1000;

      // Poll clients
      int ret = select(FD_SETSIZE, &rfds, NULL, NULL, &tv);
      if(ret > 0)
      {

         // Check server for read
         for(it = d->clients.begin(); it != d->clients.end(); ++it) {

            // Incoming
            if(FD_ISSET(*it, &rfds)) {

               //log_msg("Select: client event (fd=%d)", *it);

               // Server socket
               if(*it == d->clients[0]) {

                  // Accept client
                  int nfd = accept();
                  if(nfd > 0) {
                     incoming.push_back(nfd);
                  }
               } else {
                   if(!read(*it)) {
                      log_msg("Server: client disconnected (socket fd %d)\n", *it);
                      disconnected(*it);
                      d->clients.erase(it);
                      break;
                   }
               }
            }
         }

		 if (ret < 0) {
			 break;
		 }
      }
   }

#if __WIN32
   closesocket(sock());
#else
   ::close(sock());
#endif

   // Stop server
   log_msg("Server: stopped\n");
}

int ServerSocket::close()
{
   // Close open socket
   if(isOpen()) {
       setOpen(false);
   }

   return Ok;
}

bool ServerSocket::read(int fd)
{
   Packet pkt;

   // Read packet
   if(pkt.recv(fd) < 0) {
      return false;
   }

   // Handle incoming packet
   return handle(fd, pkt);
}

/** @} */


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
/*! \file clientsocket.hpp
    \brief Client socket implementation.
    \author Marek Vavrusa <marek@vavrusa.com>

    Implements authentication and SSH tunnelling.

    \addtogroup client
    @{
  */
#pragma once
#ifndef __clientsocket_hpp__
#define __clientsocket_hpp__
#include "common.h"
#include "socket.hpp"
#include "protocol.hpp"
#include <string>
using namespace Proto;

/** Client socket reimplementation. */
class URPC_EXPORT ClientSocket : public Socket
{
   public:

   /** Authentication methods.
     */
   enum Auth {
      None = 0,
      SSH,
   };

   ClientSocket(int fd = -1, Auth method = None);
   ~ClientSocket();

   /** Return used authentication method.
     */
   Auth method();

   /** Set authentication mechanism.
     */
   void setMethod(Auth method);

   /** Flags for connection.
     */
   int flags();

   /** Set flags for connection.
     */
   void setFlags(int flags);

   /** Set credentials for underlying authentication mechanism.
     */
   bool setCredentials(std::string auth);

   /** Connection timeout.
     */
   int timeout();

   /** Set connection timeout.
     */
   void setTimeout(int ms);

   /** Overload connect method.
     */
   int connect(std::string host = std::string(), int port = -1);

   /** Overload close method.
     */
   int close();

   /** Lock socket. */
   int lock();

   /** Unlock socket. */
   int unlock();

   private:

   /* Opaque pointer */
   class Private;
   Private* d;
};

#endif // __clientsocket_hpp__
/** @} */

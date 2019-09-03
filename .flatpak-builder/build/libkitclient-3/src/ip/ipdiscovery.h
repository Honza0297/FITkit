/***************************************************************************
 *   Copyright (C) 2012 Brno University of Technology,                     *
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
 *                                                                         *
 *  \file    ipservice.h                                                   *
 *  \version 1.0                                                           *
 *  \author  Marek Vavrusa <xvavru00@stud.fit.vutbr.cz>                    *
 *  \brief   Implementation of virtual device host.                        *
 *                                                                         *
 ***************************************************************************/

#ifndef IPDISCOVERY_H
#define IPDISCOVERY_H

#include "libkitclient_export.h"
#include <QThread>
class IPBackend;
class Device;

class KITCLIENT_EXPORT IPDiscovery : public QThread
{
   Q_OBJECT

public:

   /*! Service state.
    */
   enum State {
      Idle    = 0x00,
      Running = 0x01
   };

   /*! Device state.
    */
   enum NodeState {
       Announce,
       Leave,
   };

   static const char *Address;
   enum Group { Port = 24242 };

   IPDiscovery(IPBackend* backend);
   ~IPDiscovery();

   /*! Start IPDiscovery thread.
    */
   void start();

   /*! Stop IPDiscovery thread.
   */
   void stop();

   /*! Return state.
    */
   int state();

   /*! Broadcast message in network. */
   int broadcast(NodeState state);

protected:

   /*! Thread run implementation.
    */
   void run();

   /*! Handle incoming packet.
    */
   int handle(const char* addr, const char* pkt);

   /*! Handle announced node.
    */
   int handleAnnounce(const char* addr, const QStringList& desc);

   /*! Handle leaved node.
    */
   int handleLeave(const char* addr, const QStringList& desc);

private:
   class Private;
   Private *d;
};

#endif

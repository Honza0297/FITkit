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

#ifndef IPSERVICE_H
#define IPSERVICE_H

#include "serversocket.hpp"
#include "libkitclient_export.h"
#include <QThread>
#include <QHash>
class IPBackend;

class KITCLIENT_EXPORT IPService : public QThread, public ServerSocket
{
   Q_OBJECT

public:

   /*! Service state.
    */
   enum State {
      Idle    = 0x00,
      Running = 0x01
   };

   IPService(IPBackend* backend);
   ~IPService();

   /*! Start IPService thread.
    */
   void start();

   /*! Stop IPService thread.
   */
   void stop();

   /*! Implemented packet handling.
    *  \todo Handle requests in parallel.
    */
   bool handle(int fd, Packet& pkt);

   /** Handle connected client.
     * \param fd Client socket descriptor
     */
   void connected(int fd);

   /** Handle disconnected client.
     * \param fd Client socket descriptor
     */
   void disconnected(int fd);

protected:

   /* (1) Device implementations.
    */

   /*! \brief Sends true if channel is open.
    */
   void devIsOpen(int fd, Packet& in);

   /*! \brief Count bytes in channel incoming buffer.
    */
   void devBytesIn(int fd, Packet& in);

   /*! \brief Open channel.
    *
    * Opens channel and sets default line properties,
    * then creates event handler
    */
   void devOpen(int fd, Packet& in);

   /*! \brief Close channel.
    */
   void devClose(int fd, Packet& in);

   /*! \brief Flush buffers.
    */
   void devFlush(int fd, Packet& in);

   /*! \brief Set rate in bauds.
    *
    * Function handles adjusting of
    * given rate to nearest possible baudrate.
    */
   void devSetBaudRate(int fd, Packet& in);

   /*! \brief Set RS232 line framing properties.
    */
   void devConfigure(int fd, Packet& in);

   /*! \brief FT2232 mode manipulators.
    */
   void devSetMode(int fd, Packet& in);

   /*! \brief Set DTR line mode.
    *
    * Sets DTR (Data Terminal Ready)
    * carrier signal to given state.
    */
   void devSetDtr(int fd, Packet& in);

   /*! \brief Set RTS line mode.
    *
    * Sets RTS (Request To Send)
    * carrier signal to given state.
    */
   void devSetRts(int fd, Packet& in);


   /*! \brief Receive string data of the specified length.
    *
    *  \note  This function blocks for amount of time specified
    *  by timeout, or until all bytes are read.
    */
   void devRead(int fd, Packet& in);

   /*! \brief Receive string data of maximum length.
    *
    *  \note  This function blocks for amount of time specified
    *  by timeout, or until some bytes are read.
    */
   void devReadSome(int fd, Packet& in);

   /*! \brief Send data of given size.
    *
    *  \note This function blocks until all bytes are written.
    */
   void devWrite(int fd, Packet& in);

   /*! \brief Start reader thread for polled mode. */
   void devStart(int fd, Packet& in);

   /*! \brief Terminate reader thread. */
   void devTerminate(int fd, Packet& in);

   /* (2) Service implementations.
    */

   /*! \brief Update list of managed devices.
    */
   void backendUpdate(int fd, Packet& in);

   /*! \brief Determine if the device is ready to use.
    *  \deprecated Device readiness should be resolved in update().
    */
   void backendIsDevReady(int fd, Packet& in);

   /*! \brief Initialize a Device subclass instance.
    *  \deprecated This method could be merged with create().
    */
   void backendDevInitialize(int fd, Packet& in);

   /*! \brief Notification on acquired device. */
   void backendAcquired(int fd, Packet& in);

   /*! \brief Notification on released device. */
   void backendReleased(int fd, Packet& in);

   /*
    * Helper methods.
    */

   /*! \brief Determine IOChannel from packet header. */
   IOChannel* recvChannel(Iterator& it);

   /*! Thread run implementation.
    */
   void run();

private:

   State mState;         /* Service state */
   IPBackend* mBackend;  /* Parent backend instance */

   struct Stash;
   QHash<int, Stash*> mStash; /* List of client data. */
};

#endif

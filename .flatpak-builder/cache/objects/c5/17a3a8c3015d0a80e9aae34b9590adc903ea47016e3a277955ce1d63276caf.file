/***************************************************************************
 *   Copyright (C) 2010 Brno University of Technology,                     *
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
 *  \file    ipbackend.h                                                   *
 *  \version 1.0                                                           *
 *  \author  Marek Vavrusa <xvavru00@stud.fit.vutbr.cz>                    *
 *  \brief   Implementation of the IP manager backend.                     *
 *                                                                         *
 ***************************************************************************/

#ifndef IPBACKEND_H
#define IPBACKEND_H

#include "devicemgr.h"
#include "libkitclient_export.h"
#include <QList>
class ClientSocket;
class IPDiscovery;
class IPService;
namespace Proto
{
   class Packet;
};
using Proto::Packet;

/*! \brief IP device manager backend.
 *
 *  IP backend is used to connect to remote
 *  devices over IP networks.
 *
 *  \note Endpoint requires running IPService.
 *  \see IPService
 */
class KITCLIENT_EXPORT IPBackend : public DeviceBackend
{

public:

   /*! \brief Backend defaults. */
   enum Consts {
      Port = 42424
   };

   /*! \brief Connection modes. */
   enum ConnectionFlags {
       Default    = 0 << 0, // User-specified connection
       Discovered = 1 << 0  // Discovered local connection
   };

   /*! \brief Constructor sets-up context for virtual methods.
    */
   IPBackend(DeviceMgr* mgr = 0);

   /*! \brief Destructor.
    */
   ~IPBackend();

   /*! \brief Connect to remote host.
    *
    *  Backend can connect to remote devices only after
    *  successful connection.
    *  \param host Host address.
    *  \param port Host port.
    *  \param flags Connection flags.
    *  \retval new instance if successful
    *  \retval NULl if not successful
    */
   ClientSocket* connect(const char* host, int port, int flags = Default);

   /*! \brief Disconnect from remote host.
    *
    *  \param host Remote host.
    *  \return Socket::Ok if successful.
    */
   int disconnect(ClientSocket* host);

   /*! \brief List connected clients.
    */
   QList<ClientSocket*> clients();

   /*! \brief Return LAN discovery service.
    */
   IPDiscovery* discovery();

   /*! \brief Return IPBackend service.
    */
   IPService* service();

   /*! \brief Listen on local interface (host-mode).
    *
    *  \param host Interface address.
    *  \param port Interface port.
    *  \return Socket::Ok if successful.
    */
   int listen(const char* host, int port);

   /*! \brief Start device backend.
    *  \return True if successful.
    */
   virtual bool start();

   /*! \brief Stop device backend.
    *  \return True if successful.
    */
   virtual bool stop();

   /*! \brief Create an instance of IPDevice from IPData subclass.
    *  \return Valid instance if successful, 0 on failure.
    */
   Device* create(DeviceData* data);

   /*! \brief Initialize an IPDevice subclass instance.
    *  \deprecated This method could be merged with create().
    *  \return True if successful.
    */
   bool initialize(Device* device);

   /*! \brief Determine if the device is ready to use.
    *  \deprecated Device readiness should be resolved in update().
    *  \return True if successful.
    */
   bool isReady(DeviceData* dev);

   /*! \brief Prepare backend for device list update.
    *
    *  If prepare() returns false, update() won't be called.
    *  \return True if successful.
    */
   bool prepare();

   /*! \brief Update list of managed devices.
    */
   void update(DeviceData::List& incoming);

   /*! \brief Finalize update.
    */
   void updateFinalize(std::vector<Device*>& devices);

protected:
   /*! \brief Notification on acquired device. */
   void deviceAcquired(int deviceId);

   /*! \brief Notification on released device. */
   void deviceReleased(int deviceId);

   /*! \brief Query. */
   int query(ClientSocket* host, Packet& pkt);

private:

   class Private;
   Private* d;
};

#endif

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
 *                                                                         *
 *  \file    devicemgr.h                                                   *
 *  \version 2.0                                                           *
 *  \author  Marek Vavrusa <xvavru00@stud.fit.vutbr.cz>                    *
 *  \brief   Device manager and platform backends.                         *
 *                                                                         *
 ***************************************************************************/

#ifndef DEVICE_MGR_H
#define DEVICE_MGR_H

class DeviceMgr;   
#include "device.h"
#include "libkitclient_export.h"
#include <vector>

#ifdef SWIG
#undef KITCLIENT_EXPORT
#define KITCLIENT_EXPORT
#endif

/*! \brief Container for VID/PID pair
 *  \deprecated Device match is not needed. Every backend should know in what
 *              kind of devices is it interested in.
 */                 
class KITCLIENT_EXPORT DeviceMatch
{

public:

   /*! \brief List of VID/PID pairs.
    */
   typedef vector<DeviceMatch> List;

   /*! \brief List of VID/PID pairs iterator.
    */
   typedef List::iterator iterator;

   /*! \brief Create new device match pair.
    */
   explicit DeviceMatch(int _vid, int _pid) : vid(_vid), pid(_pid)
   {}

   int vid; //!< Device VID
   int pid; //!< Device PID
};

/*! \brief Device manager backend API.
 *
 *  Device manager keeps list of it's own devices.
 *  It is notified of device state changes via callbacks.
 *  List of DeviceData references contains only devices
 *  for given backend.
 *
 *  For backend implementation, it is recommended to subclass
 *  DeviceData for per-device data storage.
 */    
class KITCLIENT_EXPORT DeviceBackend
{

   friend class DeviceMgr;

public:

   /*! \brief List of DeviceBackend instances. */
   typedef std::vector<DeviceBackend*> List;

   /*! \brief Constructor sets-up context for virtual methods.
    */
   DeviceBackend(DeviceMgr* mgr = 0) : mDeviceMgr(mgr) {}

   /*! \brief Virtual destructor.
    */
   virtual ~DeviceBackend() {}

   /*! \brief Start device backend.
    *
    *  This virtual method does nothing if not implemented.
    *  \return True if successful.
    */
   virtual bool start() {
      return true;
   }

   /*! \brief Stop device backend.
    *
    *  This virtual method does nothing if not implemented.
    *  \return True if successful.
    */
   virtual bool stop() {
      return true;
   }

   /*! \brief Create Device subclass instance from DeviceData.
    *
    *  This virtual method allows instantiation of Device subclasses,
    *  and thus extending standard Device API with backend-specific data.
    *  \return Valid instance if successful, 0 on failure.
    */
   virtual Device* create(DeviceData* data) = 0;

   /*! \brief Initialize a Device subclass instance.
    *
    *  This virtual method is used to initialize Device instance
    *  with backend-specific data.
    *  \deprecated This method could be merged with create().
    *  \return True if successful.
    */
   virtual bool initialize(Device* device) = 0;

   /*! \brief Determine if the device is ready to use.
    *
    *  This virtual method is used to determine whether a Device instance
    *  is ready to use or not.
    *  \deprecated Device readiness should be resolved in update().
    *  \return True if successful.
    */
   virtual bool isReady(DeviceData* dev) = 0;

   /*! \brief Prepare backend for device list update.
    *
    *  If prepare() returns false, update() won't be called.
    *  \note If not reimplemented, returns always true.
    *  \return True if successful.
    */
   virtual bool prepare() {
      return true;
   }

   /*! \brief Update list of managed devices.
    *
    *  Reimplement this virtual method to implement
    *  list update. Each device without Checked flag at the
    *  end of this method will be considered lost.
    */
   virtual void update(DeviceData::List& incoming) = 0;

   /*! \brief Finalize update.
    *
    *  Reimplement this virtual method to handle final set
    *  of created/removed devices.
    *
    */
   virtual void updateFinalize(std::vector<Device*>& devices) {
   }

   /*! \brief Add device identifier match.
    *
    *  Backend will look for devices matching
    *  the specified VID/PID identifiers.
    *  \param match VID/PID match pair.
    */
   void addMatch(DeviceMatch match) {
      mMatchList.push_back(match);
   }

   /*! \brief Add device identifier match.
    *
    *  Backend will look for devices matching
    *  the specified VID/PID identifiers.
    *  \param vid Vendor identifier.
    *  \param pid Product identifier.
    */
   void addMatch(int vid, int pid) {
      addMatch(DeviceMatch(vid, pid));
   }

   /*! \brief Returns a list of VID/PID pairs.
    *  \return List of matching VID/PID pairs.
    */
   DeviceMatch::List& matchList() {
      return mMatchList;
   }

   /*! \brief Returns parent DeviceMgr instance.
    *  \return Parent DeviceMgr instance.
    */
   DeviceMgr* manager() {
      return mDeviceMgr;
   }

protected:

   /*! \brief Notification on acquired device.
    *
    *  This virtual method is called on acquired device,
    *  reimplement it to receive notification.
    */
   virtual void deviceAcquired(int deviceId) {}

   /*! \brief Notification on released device.
    *
    *  This virtual method is called on released device,
    *  reimplement it to receive notification.
    */
   virtual void deviceReleased(int deviceId) {}

   /*! \brief Notification on found device.
    *
    *  This virtual method is called on found device,
    *  reimplement it to receive notification.
    */
   virtual void deviceFound(int deviceId) {}

   /*! \brief Notification on lost device.
    *
    *  This virtual method is called on lost device,
    *  reimplement it to receive notification.
    */
   virtual void deviceLost(int deviceId) {}

   /*! \brief Notification od device update.
    *
    *  This virtual method is called on lost device,
    *  reimplement it to receive notification.
    */
   virtual void deviceUpdated(int deviceId) {}

   /*! \brief Set DeviceMgr parent instance.
    */
   void setManager(DeviceMgr* mgr) {
      mDeviceMgr = mgr;
   }

private:

   DeviceMgr* mDeviceMgr;        /* Parent device manager */
   DeviceMatch::List mMatchList; /* List of matching VID/PID pairs */
};

/*! \brief Device manager.
 *
 *  Provides discovery and management
 *  of multiple devices and backends.
 *
 *  Backends may be added/removed on runtime.
 *
 *  Notification of device state changes is available
 *  via callbacks. See protected methods.
 */
class KITCLIENT_EXPORT DeviceMgr
{
   friend class IPBackend;

public:

   /*! \brief List of devices.
    */
   typedef std::vector<Device*> List;

   /*! \brief List of devices iterator.
    */
   typedef List::iterator iterator;

   /*! \brief Destructor.
    *
    *  Delete all managed devices and backends.
    */
   DeviceMgr();

   /*! \brief Delete DeviceMgr instance and free acquired devices.
    */
   virtual ~DeviceMgr();

   /*! \brief Discover matching devices.
    *
    * Populate & update device list with
    * instances matching given VID/PID pairs.
    *
    * \return number of found devices
    */
   int discover();

   /*! \brief Add device to list.
    */
   int add(Device* dev);

   /*! \brief Remove device from list.
    */
   int remove(Device* dev);

   /*! \brief Notify of device update.
    */
   int update(Device* dev);

   /*! \brief Count acquired devices.
    *  \return Number of acquired devices.
    */
   int countAcquired();

   /*! \brief Return number of available devices.
    *  \return Number of available devices.
    */
   int count();

   /*! \brief Count free devices.
    *  \return Number of unacquired devices.
    */
   int countFree() {
      return count() - countAcquired();
   }

   /*! \brief Release acquired device.
    *  \param dev Acquired device.
    */
   void release(Device* dev);

   /*! \brief Acquire device specified by index.
    *
    *  Returns device specified by deviceId
    *  and locks it, so it can't be acquired until
    *  it's released.
    *
    *  \param deviceId unique device ID, if -1 find first available device
    *  \return reference to item or NULL if device doesn't exist
    */
   Device* acquire(int deviceId = -1);

   /*! \brief Return non-exclusive instance of device.
    *  \param deviceId Requested device identifier.
    *  \return Instance or 0.
    */
   Device* device(int deviceId);

   /*! \brief Return non-exclusive instance of device.
    *  \return Instance or 0.
    */
   Device* operator[](int deviceId) {
      return device(deviceId);
   }

   /*! \brief Add backend to device manager.
    */
   bool registerBackend(DeviceBackend* backend) {
      if(backend == 0)
         return false;

      mBackends.push_back(backend);
      backend->setManager(this);

      return backend->start();
   }

   /*! \brief Remove backend from device manager.
    *  \warning Instance is not deleted.
    *  \return true if correctly unregistered
    */
   bool unregisterBackend(DeviceBackend* backend) {
      /* Free devices. */
      for(iterator it = mList.begin(); it < mList.end(); ++it) {
          Device* dev = *it;
          if (dev->data().backend == backend) {
             mList.erase(it);
             delete dev;
			 if (it == mList.end()) {
				 break;
			 }
          }
      }

      DeviceBackend::List::iterator it;
      for(it = mBackends.begin(); it < mBackends.end(); ++it) {
         if(*it == backend) {
            mBackends.erase(it);
            return backend->stop();
         }
      }

      return false;
   }

   /*! \brief Enumerate backend list.
    */
   DeviceBackend::List& backends() {
       return mBackends;
   }

   /*! \brief Property: Device list.
    */
   List& list() {
      return mList;
   }

   /*! \brief Lock device list operations.
    */
   void lock();

   /*! \brief Unlock device list operations.
    */
   void unlock();

   /*! \brief Notification on acquired device. */
   virtual void deviceAcquired(int deviceId) {}

   /*! \brief Notification on released device. */
   virtual void deviceReleased(int deviceId) {}

   /*! \brief Notification on found device. */
   virtual void deviceFound(int deviceId) {}

   /*! \brief Notification on lost device. */
   virtual void deviceLost(int deviceId) {}

   /*! \brief Notification od device update. */
   virtual void deviceUpdated(int deviceId) {}

private:

   /* Members */
   class Private;
   Private *d;
   List mList;                      /* List of managed devices */
   DeviceBackend::List mBackends;   /* List of managed backends */

   /* Helper methods */
   void discoverFinalize();
};

#endif

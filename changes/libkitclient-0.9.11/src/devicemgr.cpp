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

#include "devicemgr.h"
#include "deviceutils.h"
#include "ftdi/ftdibackend.h"
#include <stdio.h>
#include <vector>

/* Portable mutexes. */
#if defined(__UNIX)
 #include <pthread.h>
 typedef pthread_mutex_t p_mutex_t;
 #define p_mutex_init(mx) pthread_mutex_init(&mx, 0)
 #define p_mutex_destroy(mx) pthread_mutex_destroy(&mx)
 #define p_mutex_lock(mx) pthread_mutex_lock(&mx)
 #define p_mutex_unlock(mx) pthread_mutex_unlock(&mx)
#elif defined(__WIN32)
 #include <winsock2.h>
 #include <windows.h>
 typedef HANDLE p_mutex_t;
 #define p_mutex_init(mx) mx = CreateMutex(0, false, 0)
 #define p_mutex_destroy(mx) CloseHandle(mx)
 #define p_mutex_lock(mx) WaitForSingleObject(mx, INFINITE)
 #define p_mutex_unlock(mx) ReleaseMutex(mx)
#else
 #error "Please define USE_QT_THREADS, USE_PTHREADS or USE_WIN_THREADS"
#endif

class DeviceMgr::Private
{
	public:
		Private() {
			p_mutex_init(listLock);
		}
		~Private() {
			p_mutex_destroy(listLock);
		}

		p_mutex_t listLock; // List lock
};

DeviceMgr::DeviceMgr()
    : d(new Private)
{
    registerBackend(new FTDIBackend(this));
}

DeviceMgr::~DeviceMgr()
{
   for(iterator it = mList.begin(); it < mList.end(); ++it)
      delete *it;

   mList.clear();

   delete d;

   DeviceBackend::List::iterator it;
   for(it = mBackends.begin(); it < mBackends.end(); ++it) {
       (*it)->stop();
       delete *it;
   }

   mBackends.clear();
   DEBUG_MSG("DeviceMgr::~DeviceMgr() finished\n");
}

int DeviceMgr::count()
{
   return mList.size();
}

int DeviceMgr::countAcquired()
{
   int acquired = 0;
   for (iterator it = mList.begin(); it < mList.end(); it++)
      if (!(*it)->flags() & Device::Acquired)
         acquired++;

   return acquired;
}

Device* DeviceMgr::acquire(int deviceId)
{
   lock();

   for(iterator it = mList.begin(); it < mList.end(); it++)
   {
      // If current item is deviceId OR deviceId is -1
      if ((deviceId == -1) || (*it)->id() == deviceId)
      {
         // If device is not acquired
         DEBUG_MSG("DeviceMgr : acquiring ... found matching device (id %d)\n", (*it)->id());
         if (!((*it)->flags() & Device::Acquired))
         {
            // Acquire it
            DEBUG_MSG("DeviceMgr : device acquired (id %d)\n", (*it)->id());
            (*it)->addFlag(Device::Acquired);
            unlock();
            
            deviceAcquired((*it)->id());

            // Notify backends
            DeviceBackend::List::iterator di;
            for(di = mBackends.begin(); di < mBackends.end(); ++di) {
                (*di)->deviceAcquired((*it)->id());
            }

            return *it;
         }

         unlock();
         return 0; // device is already acquired
      }
   }

   unlock();
   return 0; // deviceId not found
}

void DeviceMgr::release(Device* dev)
{
   lock();

   for(iterator it = mList.begin(); it < mList.end(); it++)
   {
      if(*it == dev)
      {
         // Clear acquired flag
         dev->removeFlag(Device::Acquired);

         // Notify
         deviceReleased(dev->id());

         // Notify backends
         unlock();
         DeviceBackend::List::iterator di;
         for(di = mBackends.begin(); di < mBackends.end(); ++di) {
             (*di)->deviceReleased(dev->id());
         }
         lock();

         // Delete if pending
         if(dev->flags() & Device::DeleteLater)
         {
            DEBUG_MSG("DeviceMgr : deleting deffered device %d\n", (*it)->id());
            mList.erase(it);
            delete dev;
         }

         break;
      }
   }

   unlock();
}

Device* DeviceMgr::device(int deviceId)
{
   Device* ret = 0;

	lock();
   for(iterator it = mList.begin(); it < mList.end(); it++) {
       if ((*it)->id() == deviceId) {
               ret = *it;
               break;
       }
   }
   unlock();

   return ret;
}

void DeviceMgr::lock()
{
	p_mutex_lock(d->listLock);
}

void DeviceMgr::unlock()
{
	p_mutex_unlock(d->listLock);
}

void DeviceMgr::discoverFinalize()
{
   // Collect checked flags
   std::vector<Device*> addList, removeList;
   lock();
   for(iterator it = mList.begin(); it != mList.end(); it++)
   {
      // Get device and backend
      Device* dev = *it;
      //DEBUG_MSG("DeviceMgr: finalizing inspection of %d\n", dev->id());
      if (dev->flags() & Device::Checked)
      {
         // It was checked
         if (dev->flags() & Device::New)
         {
            addList.push_back(dev);
         } else {
            //DEBUG_MSG("DeviceMgr : device is checked\n");
         }
      }
      else
      {
         removeList.push_back(dev);
      }
   }
   unlock();
   
   for (unsigned i = 0; i < addList.size(); ++i) {
      add(addList[i]);
   }
   for (unsigned i = 0; i < removeList.size(); ++i) {
      remove(removeList[i]);
   }
}

int DeviceMgr::discover()
{
   // Handle all backends
   lock();
   DeviceData::List foundDevices;
   DeviceBackend::List::iterator bi;
   for(bi = mBackends.begin(); bi < mBackends.end(); ++bi) {

       DeviceBackend* backend = *bi;

       // Check if backend list is prepared
       if(backend->prepare())
       {

          // Fill current device list
          DeviceData* data = 0;
          foundDevices.clear();
          for(iterator it = mList.begin(); it < mList.end(); ++it)
          {
             // Pick only devices managed by given backend
             data = &(*it)->data();
             if(data->backend == backend) {

                 // Clear device checked flag
                 (*it)->removeFlag(Device::Checked);
                 foundDevices.push_back(data);
             }
          }

          // Update current list
          backend->update(foundDevices);

          // Handle found devices
          for(DeviceData::List::iterator found = foundDevices.begin(); found < foundDevices.end(); ++found)
          {
             // For each listed device
             Device* dev = 0;
             for(iterator listed = mList.begin(); listed < mList.end(); ++listed)
             {
                // Check if exists
                if(&(*listed)->data() == *found)
                {
                   // Assign device to listed
                   //DEBUG_MSG("discover(): device found in current list\n");
                   dev = *listed;

                   // Mark as checked
                   if((dev->flags() & Device::Checked) &&
                       backend->isReady(&dev->data())) {
                      dev->addFlag(Device::Checked);
                   }
                   else {
                      DEBUG_MSG("discover(): device is not ready/disconnected\n");
                   }

                   break;
                }
             }

             // Update if is new
             if(dev == 0)
             {
                // Create device
                DEBUG_MSG("discover(): formed a new device\n");
                dev = backend->create(*found);

                // Update state
                dev->addFlag(Device::New);
                if(backend->isReady(&dev->data())) {
                   dev->addFlag(Device::Checked);
                   DEBUG_MSG("discover(): new device is ready\n");
               }

                mList.push_back(dev);
             }
          }
       }
   }

   // Evaluate device list
   unlock();
   discoverFinalize();

   // Finalize backends update
   List backendDevices;
   for(bi = mBackends.begin(); bi < mBackends.end(); ++bi) {

       // Prepare list for backend
       DeviceBackend* backend = *bi;
       backendDevices.clear();
       lock();
       for(iterator it = mList.begin(); it < mList.end(); ++it) {
           Device* device = (*it);
           if (device->data().backend == backend) {
               backendDevices.push_back(device);
           }
       }
       unlock();

       // Finalize update
       backend->updateFinalize(backendDevices);
   }

   // Return number of available devices
   DEBUG_MSG("discover(): %d devices connected\n", count());
   return count();
}

int DeviceMgr::add(Device* dev)
{
    // Insert into list
    lock();
    bool exists = false;
    for(iterator it = mList.begin(); it != mList.end(); it++) {
        if (*it == dev) {
            exists = true;
            break;
        }
    }
    if (!exists) {
        mList.push_back(dev);
    }
    unlock();

    // Clear New flag
    dev->removeFlag(Device::New);

    // Text notify
    DEBUG_MSG("DeviceMgr : device connected (%s, %s, %s)\n",
              (*dev)['a'].vendor().c_str(),
              (*dev)['a'].product().c_str(),
              (*dev)['a'].serial().c_str());

    // Notify
    deviceFound(dev->id());

    // Notify backends
    DeviceBackend::List::iterator bi;
    for(bi = mBackends.begin(); bi < mBackends.end(); ++bi) {
        (*bi)->deviceFound(dev->id());
    }

    return 0;
}

int DeviceMgr::remove(Device* dev)
{
   // Was not checked and has DeleteLater flag
   if (dev->flags() & Device::DeleteLater)
      return 0;

   // Ignore on incomplete initialization (has New flag and not checked)
   if (!(dev->flags() & Device::New))
   {
      // Notify
      DEBUG_MSG("DeviceMgr : device lostid=%d\n", dev->id());
      deviceLost(dev->id());

      // Notify backends
      DeviceBackend::List::iterator bi;
      for(bi = mBackends.begin(); bi < mBackends.end(); ++bi) {
          (*bi)->deviceLost(dev->id());
      }
   } else {
       DEBUG_MSG("DeviceMgr : device is new, but incomplete, ignoring\n");
   }

   // Remove from devlist
   if (dev->flags() & Device::Acquired) {
      dev->addFlag(Device::DeleteLater);
      DEBUG_MSG("DeviceMgr : device will be deleted later\n");
   }
   
   lock();
   for(iterator it = mList.begin(); it != mList.end(); it++) {
       if (*it == dev) {
          if (!(dev->flags() & Device::Acquired)) {
              DEBUG_MSG("DeviceMgr : deleting device\n");
              mList.erase(it);
              delete dev;
              break;
          }
       }
   }
   unlock();

   return -1;
}

int DeviceMgr::update(Device* dev)
{
    // Check
    if (!dev) {
        return -1;
    }

    DEBUG_MSG("DeviceMgr : device id=%d was updated\n", dev->id());

    // Notify
    deviceUpdated(dev->id());

    // Notify backends
    DeviceBackend::List::iterator bi;
    for(bi = mBackends.begin(); bi < mBackends.end(); ++bi) {
        (*bi)->deviceUpdated(dev->id());
    }

    return 0;
}

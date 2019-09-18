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

#include "ftdi/ftdibackend.h"
#include "ftdi/ftdidevice.h"
#include "deviceutils.h"
#include <stdio.h>

/*
 *   POSIX libftdi implementation
 *
 */

#ifdef __UNIX

// Includes
#include <ftdi.h>

class FTDIBackend::Private
{
    public:

    Private() {
       ftdi_init(&fc);
    }

    ~Private() {
        ftdi_deinit(&fc);
    }

    struct ftdi_context fc;
};

bool FTDIBackend::isReady(DeviceData* dev)
{
   return true;
}

bool FTDIBackend::prepare()
{
   return true;
}

bool FTDIBackend::initialize(Device* dev)
{
   // Convert
   FTDIData* cdata = static_cast<FTDIData*>(&dev->data());

   // Fill channel description
   char vendor[128]  = {0},
        product[128] = {0},
        serial[128]  = {0};

   cdata->lockData();
   int rs = ftdi_usb_get_strings(&d->fc,     cdata->usb_dev,
                                 vendor,  128,
                                 product, 128,
                                 serial,  128);

   // Copy to both channels
   cdata->channelA->setVendor(vendor);
   cdata->channelA->setProduct(product);
   cdata->channelA->setSerial(serial);
   cdata->channelB->setVendor(vendor);
   cdata->channelB->setProduct(product);
   cdata->channelB->setSerial(serial);
   cdata->unlockData();
   
   return (rs == 0);
}

void FTDIBackend::update(DeviceData::List& incoming)
{
   // Create libftdi context for discovery
   struct ftdi_device_list *new_list = NULL, *new_item = NULL;

   // Find devices for each VID/PID pair in MatchList
   DeviceMatch::List matches = matchList();
   for (DeviceMatch::iterator match = matches.begin(); match < matches.end(); match++)
   {
      // Find devices with this VID/PID pair
      ftdi_usb_find_all(&d->fc, &new_list, match->vid, match->pid);

      // Iterate linear list of devices
      for (new_item = new_list; new_item != NULL; new_item = new_item->next)
      {
         // Do not update existing devices
         bool exists = false;
         for(DeviceData::List::iterator it = incoming .begin(); it < incoming .end(); ++it)
         {
            FTDIData* cdata = static_cast<FTDIData*>(*it);
            cdata->lockData();
            if(cdata->usb_dev == new_item->dev)
            {
               cdata->flags |= Device::Checked;
               exists = true;
               cdata->unlockData();
               break;
            }
            cdata->unlockData();
         }

         // Create device data pointer
         if(!exists)
         {
            FTDIData* data = new FTDIData();
            data->vid        = match->vid;
            data->pid        = match->pid;
            data->usb_dev    = new_item->dev;
            data->flags      = Device::Checked|Device::New;
            data->backend    = this;
            incoming.push_back(data);
         }
      }

      // Free temporary list
      ftdi_list_free(&new_list);
   }
}
#endif

/*
 *   Windows FTD2XX implementation
 *
 */

#ifdef __WIN32

// Includes
#include <winsock2.h>
#include <windows.h>
#include <winbase.h>
#include "ftd2xx.h"

class FTDIBackend::Private
{
    public:

    Private() {
    }

};

// Macros
#define VIDPID2ID(VID,PID)  ((((VID) & 0xFFFF) << 16) | ((PID) & 0xFFFF))
#define ID2VID(ID) (((ID) >> 16) & 0xFFFF)
#define ID2PID(ID) ((ID) & 0xFFFF)

// Since current list is copied, ptrs have to be the same
/*bool FTDIBackend::isListed(FTDIData* listed, FTDIData* pending)
{
   return (listed->LocID == pending->LocID) &&
          (listed->vid   == pending->vid)   &&
          (listed->pid   == pending->pid);
}*/

//! \todo This is not necessary, Device::Checked is provided after both channels are set
bool FTDIBackend::isReady(DeviceData* data)
{
   FTDIData* cdata = static_cast<FTDIData*>(data);
   return (cdata->channelA_LocID > -1) && (cdata->channelB_LocID > -1);
}

bool FTDIBackend::initialize(Device* dev)
{
   dev = dev;
   return true;
}

bool FTDIBackend::prepare()
{

   DeviceMatch::List matches = matchList();

   FT_STATUS ftStatus;
   DWORD num_devs, Flags, ID, Type, LocID;
   FT_HANDLE ftHandleTemp;
   char SerialNumber[16];
   char Description[64];

   // Check if all channels are set
   // to prevent undefined switching
   FT_CreateDeviceInfoList(&num_devs);

	DEBUG_MSG("prepare(): %d devices\n", num_devs);

	for (DWORD dev_idx = 0; dev_idx < num_devs; dev_idx++)
   {
      // Query device
      ftStatus = FT_GetDeviceInfoDetail(dev_idx, &Flags, &Type, &ID, &LocID, SerialNumber, Description, &ftHandleTemp);
      if (ftStatus != FT_OK)
         return false;

		DEBUG_MSG("prepare(): device %d Type %X VIDPID %08X LocID %X\n", dev_idx, Type, ID, LocID);

      if ((Type != FT_DEVICE_2232C) && (Type != FT_DEVICE_232R) && (Type != FT_DEVICE_BM))
         continue;

      bool is_valid = false;
      for (DeviceMatch::iterator match = matches.begin(); match < matches.end(); match++)
      {
          if (ID == VIDPID2ID((DWORD)match->vid, (DWORD)match->pid))
          {
              is_valid = true;
              break;
          }
      }

      if ((is_valid) && (LocID == 0))
      {
         DEBUG_MSG("prepare(): some channel is not ready\n");

         // Some device is not ready [such a device won't be paired]
         return false;
      }
   }
   return true;
}

void FTDIBackend::update(DeviceData::List& incoming)
{
   FT_STATUS ftStatus = FT_OK;
   DWORD num_devs = 0, Flags = 0, ID = 0, Type = 0, LocID = 0;
   FT_HANDLE ftHandleTemp;
   char SerialNumber[16];
   char Description[64];
   int vid = 0, pid = 0;

   // Initialize discovery
   if (FT_CreateDeviceInfoList(&num_devs) != FT_OK)
      return;

   DEBUG_MSG("update(): %d devices\n", num_devs);

	// Fetch lists
   DeviceMatch::List matches = matchList();

	// Initialize
   for(DeviceData::List::iterator it = incoming.begin(); it < incoming.end(); ++it) {
      FTDIData* data = static_cast<FTDIData*>(*it);
      if(data != 0) {
          /* Pre-lock all data. */
          data->lockData();

          data->channelA_LocID = -1;
          data->channelB_LocID = -1;
      }
   }


   //DEBUG_MSG("update(): FTDI devices found: %d\n", num_devs);

   // Scan checked device list
   for (DWORD dev_idx = 0; dev_idx < num_devs; dev_idx++)
   {
      // Query device
      ftStatus = FT_GetDeviceInfoDetail(dev_idx, &Flags, &Type, &ID, &LocID, SerialNumber, Description, &ftHandleTemp);

	  if ((ftStatus != FT_OK) || ((Type != FT_DEVICE_2232C) && (Type != FT_DEVICE_232R) && (Type != FT_DEVICE_BM)) || (LocID == 0)) {
		  //DEBUG_MSG("update(): Device: %d bad status, %d-%d, Type %d-%d|%d, LocID %d-*\n", dev_idx,
		  //        ftStatus, FT_OK, Type, FT_DEVICE_2232C, FT_DEVICE_232R, LocID);
         continue;
	  } else {
		 //DEBUG_MSG("update(): Device: %d DeviceType:%d\n", dev_idx, Type);
	  }

      // Check if device match VID/PID pair in MatchList
      bool is_valid = false;
      for (DeviceMatch::iterator match = matches.begin(); match < matches.end(); match++)
      {
         if (ID == VIDPID2ID((DWORD)match->vid, (DWORD)match->pid))
         {
            vid = match->vid;
            pid = match->pid;
            is_valid = true;
            break;
         }
      }

      // Do not manipulate invalid devices
	  if (!is_valid) {
		 DEBUG_MSG("update(): Device: %d is not valid.\n", dev_idx);
         continue;
	  }

      // Look up another channel of the same device
      FTDIData* data = 0;
      if (Type == FT_DEVICE_2232C)
      {
          for(DeviceData::List::iterator it = incoming.begin(); it < incoming.end(); ++it)
          {
             // If data matches current LocID
             data = static_cast<FTDIData*>(*it);
             if(data != NULL) {
                 if((DWORD)data->LocID == (LocID >> 4))
                 {
                     // Assign previously alloc'd data
                     //DEBUG_MSG("discover(): got other channel\n");
                     data->flags |= Device::Checked;
                     break;
                 }
             }
          }
      }

      // Create new data if no channel was found
      if(data == 0)
      {
         DEBUG_MSG("discover(): creating first channel\n");
         data = new FTDIData();
         data->LocID = (LocID >> 4);
         data->vid   = vid;
         data->pid   = pid;
         data->flags = Device::New; // Mark as checked after second channel is connected
         data->channelA_LocID = -1;
         data->channelB_LocID = -1;
         data->backend    = this;
         data->lockData(); /* Pre-lock */

         incoming.push_back(data);
      }

      // Fill channel data
      if (Type == FT_DEVICE_2232C)
      {
          if ((LocID & 0x0F) == 1)
          {
             //DEBUG_MSG("discover(): filling channel A for vid %d pid %d, '%s:%s'\n", data->vid, data->pid, Description, SerialNumber);
             data->channelA_LocID = LocID;
             data->channelA->setProduct(Description);
             if (strlen(SerialNumber))
                data->channelA->setSerial(SerialNumber);
          }
          else
          {
             //DEBUG_MSG("discover(): filling channel B for vid %d pid %d, '%s:%s'\n", data->vid, data->pid, Description, SerialNumber);
             data->channelB_LocID = LocID;
             data->channelB->setProduct(Description);
             if (strlen(SerialNumber))
                data->channelB->setSerial(SerialNumber);
          }
      }
      else
      {
          data->channelA_LocID = LocID;
          data->channelB_LocID = LocID;
          data->channelA->setProduct(Description);
          if (strlen(SerialNumber))
             data->channelA->setSerial(SerialNumber);

          data->channelB->setProduct(Description);
          if (strlen(SerialNumber))
             data->channelB->setSerial(SerialNumber);

      }
   }

   /* Unlock all data. */   
   for(DeviceData::List::iterator it = incoming.begin(); it < incoming.end(); ++it) {
      FTDIData* data = static_cast<FTDIData*>(*it);
      if (data != 0) {
         data->unlockData();
      }
   }
}
#endif

FTDIBackend::FTDIBackend(DeviceMgr* mgr)
    : DeviceBackend(mgr), d(new Private)
{
    addMatch(Device::DEFAULT_VID, Device::DEFAULT_PID);
}

FTDIBackend::~FTDIBackend()
{
   delete d;
   DEBUG_MSG("FTDIBackend::~FTDIBackend() finished\n");
}

Device* FTDIBackend::create(DeviceData* data)
{
    return new FTDIDevice(data);
}

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
 ***************************************************************************/

#include "libkitclient"
#include "ip/ipbackend.h"
#include <cstdio>
#include <signal.h>

#ifdef __WIN32
#include <winsock2.h>
#include <windows.h>
#else
#include <sys/select.h>
#endif

/** Portable sleep() macro.
  * \param ms Sleep time in miliseconds.
 */
#define msleep(ms) { \
  struct timeval tv; \
  tv.tv_sec = ms / 1000; \
  tv.tv_usec = (ms % 1000) * 1000; \
  select(0,NULL,NULL,NULL, &tv); \
}

int main()
{
   // Find devices
   DeviceMgr mgr;
   IPBackend* ip = new IPBackend(&mgr);
   ip->connect("127.0.0.1", IPBackend::Port);
   mgr.registerBackend(ip);

   for(;;) {
      mgr.discover();
      msleep(1000);
      printf("-----------------------------------------------\n");
      DeviceMgr::List& list = mgr.list();
      DeviceMgr::List::iterator it;
      for(it = list.begin(); it < list.end(); ++it) {
         printf("Device: %d VID %d PID %d Backend: %p Virtual: %s Shared: %s\n",
                (*it)->id(), (*it)->vid(), (*it)->pid(),
                (*it)->data().backend,
                ((*it)->flags() & Device::Virtual) ? "yes" : "no",
                ((*it)->flags() & Device::Shared) ? "yes" : "no"
                );
      }
      printf("-----------------------------------------------\n");
   }

   return 0;
}


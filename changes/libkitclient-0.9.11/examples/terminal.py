#!/usr/bin/env python
'''
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
'''

import sys
import threading
from fitkit import *

# initialize manager
devices = pyDeviceMgr()
ret = devices.discover()
if (ret < 1):
    raise Exception("No device")

# acquire the first device
dev = devices.acquire()
if (dev is None):
    raise Exception("No device")

print "VID: %04X  PID: %04X  SN: %s DECR: %s" % (dev.vid(), dev.pid(),
        dev['b'].serial(), dev['b'].product())

#channel B
ch = dev['b']
ret = ch.open()
if (ret != IOChannel.Ok):
    raise Exception("Can't open")

#reset MCU
ch.setRts(False)
ch.setDtr(False)
ch.setRts(True)
ch.setDtr(True)

# cteci
def read_thread(*args):
    while (ch.isOpen()):
        try:
            data = ch.read(1, 200)
            if (data <> None):
                sys.stdout.write(data)
                sys.stdout.flush()

        except RuntimeError, e: #read terminated
            print "Exception",e
            break


print "Ukonceni: Ctrl+C"

#cteci thread
treader = threading.Thread(name="readthread", target=read_thread)
treader.start()

try:
    while (ch.isOpen()):
        char = sys.stdin.read(1)
        ch.write(char, 1)
except:
    ch.terminate()

#reset MCU
ch.setRts(False)
ch.setDtr(False)

#close() automaticky vyvola terminate
#na read(), cimz se ukonci cteci thread
print "-- closing"
ch.close()

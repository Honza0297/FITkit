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

''' D-Bus connector '''
import dbus
import dbus.mainloop.qt
dbus.mainloop.qt.DBusQtMainLoop(set_as_default=True)

class AmarokDBus:

   BUS_SERVICE = "org.mpris.amarok"
   BUS_PATH    = "/Player"
   BUS_IFACE   = "org.freedesktop.MediaPlayer"

   _bus   = None
   _iface = None
   _proxy = None

   def __init__(self):

      self._bus = dbus.SessionBus()

   def connect(self):

      try:
         self._proxy = self._bus.get_object(self.BUS_SERVICE, self.BUS_PATH)
         self._iface = dbus.Interface(self._proxy,dbus_interface=self.BUS_IFACE)

      except dbus.exceptions.DBusException:
         print 'DEBUG: AmarokDBus: Amarok not found on D-Bus.'
         return False

      return True

   def interface(self):

      return self._iface

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

from PythonQt import *
from amarokdbus import *
from unicode2ascii import *
import time
import sys

''' Plugin implementation '''
class Amarok2 (AmarokDBus):

   DISPLAY_LEN = 16
   is_rotating = False

   def discoverAmarok(self):
      if self.interface() is None:
         if self.connect() is True:
            print "DEBUG: Amarok2: connected to DBus interface"
            self.interface().connect_to_signal("TrackChange", self.trackChanged)
            plugin.setTimer(0)
            self.connected()

   def connected(self):
      conn = tabs.current()

      if conn is None:
         return

      dev = conn.detach(True)
      kit = dev.channel("b");
      kit.write('CLEAR\r\n')
      kit.write('STRING   Amarok 2\n')
      conn.attach()

   def trackChanged(self, meta):
      print "DEBUG: Amarok2: now playing: %s - %s" % (meta["artist"], meta["title"])
      conn = tabs.current()
      
      if conn is None:
         return
         
      print "DEBUG: Amarok2: detaching terminal"
      dev = conn.detach(True)
      kit = dev.channel("b");
      print "DEBUG: Amarok2: detached"
      
      kit.write('CLEAR\r\n')
      buf = 'STRING %s - %s\r\n' % ((meta['artist'], meta['title']))
      kit.write(unicode2ascii(buf))
      time.sleep(1)
      kit.flushInput()
            
      print "DEBUG: Amarok2: reattaching terminal"
      conn.attach()


''' Plugin initialization '''

instance = None

def init():
   instance = Amarok2()
   plugin.connect('timeout()', instance.discoverAmarok)
   return True
   
def load():
   print "DEBUG: Amarok2 plugin loaded"
   plugin.setTimer(1000)
   return True

def unload():
   print "DEBUG: Amarok2 plugin unloaded"
   plugin.setTimer(0)
      
   return True

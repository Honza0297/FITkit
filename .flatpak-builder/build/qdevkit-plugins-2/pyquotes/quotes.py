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
import random
import sys

quotes = []


''' Plugin initialization '''
def init():
   plugin.connect('timeout()', showQuote)
   return True
   
def load():
   print 'PyQuotes: loading... (current directory: %s)' % plugin.path()
   plugin.setTimer(5000)
   return True
   
def unload():
   print 'PyQuotes: unloading...'
   plugin.setTimer(0)
   return True
   
def showQuote():
   print 'PyQuotes: settings quote ...'
   tray.setToolTip(random.choice(quotes))
   

''' Quote list '''
quotes.append("Never build a dungeon you wouldn't be happy to spend the night in yourself.<br>"
              "<i>- Lord Vetinari (Guards! Guards!)</i>")
              
quotes.append("The right to free speech is a fine old Ankh-Morpork tradition.<br>"
              "Good heavens, is it?<br>"
              "Yes, my lord.<br>"
              "How did that one survive?<br>"
              "<i>- Mr. Slant / Lord Downey (The Truth)</i>")
              
quotes.append("Good Morning, Mr. Spangler.<br>"
              "It's me, sir, Daniel 'One Drop' Trooper.<br>"
              "I am your executioner for today, sir. Don't you worry, sir.<br>"
              "I've hanged dozends of people. We'll soon have you out of here.<br>"
              "<i>- Daniel Trooper (Going Postal)</i>")
quotes.append("Oh, all right. Of course,<br>"
              "I accept as natural-born criminal, habitual liar,<br>"
              "fraudster, and totally untrustworthy perverted genius<br>"
              "Captial! Welcome to government service!<br>"
              "<i>- Moist von Lipwig / Lord Vetinary (Going Postal)</i>")

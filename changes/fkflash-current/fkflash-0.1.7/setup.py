#!/usr/bin/env python

'''
 ***************************************************************************
 *   Copyright (C) 2008 Brno University of Technology,                     *
 *   Faculty of Information Technology                                     *
 *   Author(s): Zdenek Vasicek   <vasicek  AT fit.vutbr.cz>                *
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
 ***************************************************************************
'''

from distutils.core import setup
import py2exe
import sys
#sys.path.append('./libs')

opts = {
        "py2exe": {
        "compressed": 1,
        "optimize": 2,
        "ascii": 1,
        "bundle_files": 2, #zabali vse do jednoho zipu krome knihovny python24
        "includes" : ["codecs","encodings.ascii","encodings.mbcs","encodings.utf_16_be","encodings.utf_16_le","encodings.utf_8",
                      "encodings.latin_1","encodings.iso8859_2","encodings.cp1250","encodings.cp852"]
        }

}

setup(
    name = "fkflash",
    description = "FITkit FLASH Utility",
    version = "0.1",
    console = [{"script": "fkflash.py", "icon_resources": [(1,"fkflash.ico")]}],
    zipfile = None,
    options=opts,
) 

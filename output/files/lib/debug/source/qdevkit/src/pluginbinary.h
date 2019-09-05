/***************************************************************************
 *   Copyright (C) 2008 Brno University of Technology,                     *
 *   Faculty of Information Technology                                     *
 *   Author(s): Marek Vavrusa    <xvavru00 AT stud.fit.vutbr.cz>           *
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

#ifndef PLUGINBINARY_H
#define PLUGINBINARY_H

#include "pluginbase.h"
#include "pluginloader.h"
#include "qdevkit_export.h"

class PluginBinaryPrivate;

class QDEVKIT_EXPORT PluginBinary : public PluginBase
{
   Q_OBJECT
   Q_PROPERTY(bool loaded READ isLoaded)
   
   public:
      PluginBinary(PluginLoader *loader);
      ~PluginBinary();
      
      bool isLoaded();
      int load();
      int unload();
      int configure();
   
   private:
      PluginBinaryPrivate *d;
};

#endif

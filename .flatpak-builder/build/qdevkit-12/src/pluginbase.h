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

#ifndef PLUGINBASE_H
#define PLUGINBASE_H

#include <QObject>

#include "plugin.h"
#include "pluginloader.h"
#include "qdevkit_export.h"

class PluginBasePrivate;

class QDEVKIT_EXPORT PluginBase : public QObject, public Plugin
{
   Q_OBJECT
      
   public:
      PluginBase(PluginLoader* loader);
      ~PluginBase();
      
      PluginLoader* loader();
      
      // Scriptable
      Q_INVOKABLE PluginData* data();
      Q_INVOKABLE QString path();

   private:
      PluginBasePrivate *d;
};

#endif

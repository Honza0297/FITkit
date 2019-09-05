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

#ifndef PLUGIN_INTERFACES_H
#define PLUGIN_INTERFACES_H

#include "plugin.h"
#include "pluginbase.h"
#include "qdevkit_export.h"

namespace QtAPI {
class Device;
};

/* Base plugin class */
class QDEVKIT_EXPORT PluginInterface : public Plugin, public Component
{

   public:
      PluginInterface() : Component(0), plugin(0)
      {}

      /* Initializer */
      int initialize(QDevKit *app, PluginBase* loader)
      {
         setApp(app);
         plugin = loader;
         return 0;
      }

      PluginBase* loader()
      {
         return plugin;
      }

   private:
      PluginBase* plugin;
};

class QDEVKIT_EXPORT FlashInterface : public PluginInterface
{

   public:
      FlashInterface() : PluginInterface()
      {}

      virtual void flash(QtAPI::Device* dev, const QString& name, const QString& bin, const QString& hex, const QString& hex2, bool force = false) = 0;
};


class QDEVKIT_EXPORT BrowserInterface : public PluginInterface
{

   public:
      BrowserInterface() : PluginInterface()
      {}

      virtual void browse(const QString& docPath, const QString& appName) = 0;
};

Q_DECLARE_INTERFACE(PluginInterface, "com.trolltech.QDevKit.Plugin/0.4")
Q_DECLARE_INTERFACE(FlashInterface,  "com.trolltech.QDevKit.FlashInterface/0.1")
Q_DECLARE_INTERFACE(BrowserInterface,  "com.trolltech.QDevKit.BrowserInterface/0.1")

#endif

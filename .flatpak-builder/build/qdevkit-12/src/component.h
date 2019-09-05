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

#ifndef COMPONENT_H
#define COMPONENT_H

#include "qdevkit.h"
#include "qdevkit_export.h"
class MainWindow;
class QDeviceMgr;
class TrayIcon;
class ScriptEngine;
class PluginMgr;
class Components;
class JobScheduler;
class BuildServer;

class QDEVKIT_EXPORT Component
{
   public:
      Component(QDevKit* app);
      
      void setApp(QDevKit* app)
      { _app =  app; }
      
   protected:   
      QDevKit&       app()          { return *_app; }
      MainWindow&    mainWindow()   { return app().mainWindow(); }
      QDeviceMgr&    deviceMgr()    { return app().deviceMgr(); }
      TrayIcon&      tray()         { return app().tray(); }
      ScriptEngine&  scriptEngine() { return app().scriptEngine(); }
      PluginMgr&     pluginMgr()    { return app().pluginMgr(); }
      JobScheduler&  jobScheduler() { return app().jobScheduler(); }
      Components&    components()   { return app().components(); }
      BuildServer&   buildServer()  { return app().buildServer(); }
      
   private:
      QDevKit* _app;
     
};

#endif

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

#ifndef QDEVKIT_H
#define QDEVKIT_H

#include <QObject>
#include <QVariant>
#include <QStringList>
#include <QCoreApplication>
#include "fileselector.h"
#include "qdevkit_export.h"

/* Declared objects */
class QDevKit;
class PluginMgr;
class ScriptEngine;
class MainWindow;
class TrayIcon;
class QDeviceMgr;
class Components;
class JobScheduler;
class BuildServer;

class QDEVKIT_EXPORT QDevKit : public QObject
{
   Q_OBJECT
   Q_PROPERTY(QString localePath READ localePath)
   Q_PROPERTY(QStringList args READ args)
   
   friend class Component;

   public:
      explicit QDevKit(int argc = 0, char* argv[] = 0);
      ~QDevKit();

      /* Scriptable API */
      Q_INVOKABLE const QStringList& args() const;
      Q_INVOKABLE const QString& localePath() const;
      Q_INVOKABLE QVariant settingsValue(const QString& key, QVariant def = QVariant());
      Q_INVOKABLE void setSettingsValue(const QString& key, QVariant value);
      Q_INVOKABLE void refreshApplication() { QCoreApplication::processEvents(); }
      Q_INVOKABLE const QString absolutePath(const QString& file, int mode) { return FileSelector::absolutePath(file, (mode == 1) ? FileSelector::Directory : FileSelector::File);}
  
      
   public slots:
      void reloadSettings();
      bool close(bool silent = true);
      
   signals:
      void settingsReloaded();
      void aboutToClose();
      
   protected:
      bool setLocale(QString code);
      void addSearchPaths();
      
      /* Component accessors */
      MainWindow& mainWindow();
      QDeviceMgr& deviceMgr();
      TrayIcon& tray();
      ScriptEngine& scriptEngine();
      PluginMgr& pluginMgr();
      JobScheduler& jobScheduler();
      Components& components();
	  BuildServer& buildServer();

   private slots:
      void init();
      
   private:
      class Private;
      Private *d;
};

#endif

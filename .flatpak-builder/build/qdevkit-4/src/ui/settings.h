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

#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>

#include "component.h"
#include "qdevkitui_export.h"

class QListWidget;
class QListWidgetItem;
class QStackedWidget;
class SettingsPrivate;
class GeneralConfig;
class LookConfig;
class DeviceConfig;
class PluginConfig;
class FkTreeConfig;
class RemoteConfig;

class QDEVKITUI_EXPORT Settings : public QWidget, Component
{
   Q_OBJECT

   public:
      explicit Settings(QDevKit *app, QWidget* parent = 0);
      ~Settings();

      /* Application components */
      QDevKit& app()           { return Component::app(); }
      Components& components() { return Component::components(); }      
      PluginMgr& plugins()     { return Component::pluginMgr(); }
      MainWindow& mainWindow() { return Component::mainWindow(); }
      JobScheduler& jobs()     { return Component::jobScheduler(); }

      /* Config components */
      GeneralConfig& general() const;
      LookConfig& look() const;
      DeviceConfig& device() const;
      PluginConfig& plugins() const;
      FkTreeConfig& apps() const;
      RemoteConfig& remote() const;

      void setCurrentPage(QString name);
      void updateSVN();

   public slots:
      void changePage(QListWidgetItem *current, QListWidgetItem *previous);
      
   private slots:
      void accept();
      void reject();
      
   signals:
      void accepted();
      void rejected();
      
   private:
      void createIcons();
      void appendIcon(QString text, QIcon icon);

      SettingsPrivate *d;
};

#endif

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

#ifndef PLUGIN_CONFIG_H
#define PLUGIN_CONFIG_H

#include <QWidget>

#include "configcomponent.h"
#include "qdevkitui_export.h"

class PluginLoader;

class QDEVKITUI_EXPORT PluginConfig : public ConfigComponent
{
   Q_OBJECT

   public:
      explicit PluginConfig(Settings *parent);
      ~PluginConfig();
      
      void update();
      void clear();
      void populate();

   protected:
      void timerEvent(QTimerEvent* event);

   private slots:
      void save();
      void triggerUpdate();


   private:
      class Private;
      Private *d;
      void createWidgets();
};

class QDEVKITUI_EXPORT PluginWidget : public QWidget
{
   Q_OBJECT

   public:
      PluginWidget(PluginLoader* plugin, QWidget* parent = 0);
      ~PluginWidget();

   protected slots:
      void setLoaded(bool loaded, bool update_plugin = true);
      void switchLoaded();
      void configure();

   private:
      class Private;
      Private *d;
      void createWidgets();
};

#endif

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

#ifndef PLUGINMGR_H
#define PLUGINMGR_H

#include <QVector>

#include "component.h"
#include "qdevkit_export.h"

class Plugin;
class PluginLoader;
class PluginMgrPrivate;
typedef QVector<PluginLoader*> PluginList;

class QDEVKIT_EXPORT PluginMgr : public QObject, Component
{
   Q_OBJECT
   Q_PROPERTY(int count READ count)
   Q_PROPERTY(QString path READ path)

   public:
      PluginMgr(QDevKit *app);
      ~PluginMgr();

      // Scriptable API      
      Q_INVOKABLE PluginLoader* search(const QString& path);
      Q_INVOKABLE PluginLoader* plugin(const QString& name);
      
      int count() const;
      const QString& path() const;
      PluginList& pluginList() const;
      PluginLoader* operator[](const QString& name);
      PluginLoader* operator[](int index);
      
   public slots:
      int loadAll();
      int unloadAll();
      
   private:
      PluginMgrPrivate *d;
};

#endif

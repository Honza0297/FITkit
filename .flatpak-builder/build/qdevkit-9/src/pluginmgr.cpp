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

#include <QApplication>
#include <QSettings>

#include "pluginmgr.h"
#include "pluginloader.h"
#include "plugin.h"
#include "qdevkit.h"
#include "ui/mainwindow.h"

class PluginMgrPrivate
{
   public:
      PluginMgrPrivate()
      {
      }

      QDir        dir;
      QString     path;
      PluginList  list;
};

PluginMgr::PluginMgr(QDevKit *app)
   : QObject(app), Component(app), d ( new PluginMgrPrivate() )
{
      // Initialize plugins directory
      d->dir = qApp->applicationDirPath();
      d->dir.cdUp();
      d->dir.cd("share");   // Win32 will omit this (will move there later anyway)
      d->dir.cd("qdevkit"); //
      d->dir.cd("plugins");
      d->path = d->dir.absolutePath();
}


PluginMgr::~PluginMgr()
{
   foreach(PluginLoader* loader, d->list)
      delete loader;

   delete d;
}

int PluginMgr::count() const
{
   return d->list.size();
}

const QString& PluginMgr::path() const
{
   return d->path;
}

PluginList& PluginMgr::pluginList() const
{
   return d->list;
}

PluginLoader* PluginMgr::search(const QString& path)
{
   // Open directory
   d->dir.cd(d->path);
   d->dir.cd(path);

   // Try to find description file
   if(!d->dir.exists("plugin.xml"))
   {
      mainWindow().showError(tr("Plugin error"),
                             tr("Failed to find plugin \"%1\".<br>"
                                "Reason: missing plugin.xml file")
                             .arg(path));
      qDebug("DEBUG: PluginMgr: plugin.xml not found in %s", path.toStdString().c_str());
      return 0;
   }

   // Create Plugin item
   PluginLoader* plugin = new PluginLoader(&app(), d->dir.absoluteFilePath("plugin.xml"));

   // Load the plugin
   QSettings set;
   QString key = "Plugins/" + plugin->data()->name() + "/Enabled";
   bool shouldLoad = plugin->data()->autoload();
   if(set.contains(key))
      shouldLoad = set.value(key).toBool();

   if(shouldLoad)
   {
      if(!plugin->load())
      {
         mainWindow().showError(tr("Plugin error"),
                                tr("Failed to load plugin \"%1\".<br>"
                                   "Reason: %2")
                                .arg(path)
                                .arg(plugin->lastError()));
         qDebug("DEBUG: PluginMgr: unable to load plugin \'%s\'", path.toStdString().c_str());
         delete plugin;
         return 0;
      }
//       else
//          qDebug("DEBUG: PluginMgr: enabling plugin by default \'%s\'", plugin->data()->name().toStdString().c_str());
   }

   // Ok, now append to list and be happy
   d->list.append(plugin);
   return plugin;
}

PluginLoader* PluginMgr::plugin(const QString& name)
{
   foreach(PluginLoader* item, d->list)
      if(item->data()->name() == name)
         return item;

   return 0;
}

int PluginMgr::loadAll()
{
   QStringList entries(d->dir.entryList(QDir::Dirs|QDir::NoDotAndDotDot));
   
   /*! Hack - releaseinfo may take time to load, move it to last position. */
   if (entries.contains("releaseinfo")) {
      entries.removeAll("releaseinfo");
      entries << "releaseinfo";
   }
   foreach(const QString& dir, entries) {
      search(dir);
   }

   return d->list.size();
}

int PluginMgr::unloadAll()
{
   foreach(PluginLoader* item, d->list)
   {
      qDebug("DEBUG: PluginMgr: unloading '%s'", item->data()->name().toLatin1().data());
      item->unload();
   }

   return d->list.size();
}



#include "pluginmgr.moc"

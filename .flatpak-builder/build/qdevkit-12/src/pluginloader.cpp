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

#include <QDomDocument>
#include <QFileInfo>
#include <QFile>
#include <QHash>

#include "pluginloader.h"
#include "pluginscripted.h"
#include "pluginbinary.h"
#include "qdevkit.h"

class PluginLoaderPrivate
{
   public:
      PluginLoaderPrivate()
      : plugin(0), data(0)
      {}
      
      QString path;
      PluginBase* plugin;
      PluginData data;
      QString reason;
};

class PluginDataPrivate
{
   public:
      PluginDataPrivate()
         : autoload(false), configurable(false), type(Plugin::Binary)
      {}
      
      QString name;
      QString icon;
      QString comment;
      QString author;
      QString email;
      QString version;
      QString license;
      QString library;
      bool    autoload;
      bool    configurable;
      Plugin::Type type;
};

PluginLoader::PluginLoader(QDevKit *app, QString path)
   : Component(app), d( new PluginLoaderPrivate() )
{
   // Set plugin path
   QFileInfo info(path);
   d->path = info.absolutePath();
   
   // Load document
   QFile file(path);
   QDomDocument doc;
   if(!doc.setContent(&file, true))
   {
      qDebug("DEBUG: PluginLoader: unable to parse plugin.xml");
      d->reason = QObject::tr("unable to parse plugin.xml");
      return;
   }
   
   // Check header element
   QDomElement root = doc.documentElement();
   if(root.tagName() != "plugin")
   {
      qDebug("DEBUG: PluginLoader: bad plugin.xml root node");
      d->reason = QObject::tr("bad plugin.xml root node");
      return;
   }
   
   // Load plugin data
   readData(root);
   
   // Initialize
   switch(d->data.type())
   {
      case Plugin::Scripted:
         d->plugin = new PluginScripted(this);
         break;
      case Plugin::Binary:
         d->plugin = new PluginBinary(this);
         break;
      default:
         qDebug("DEBUG: PluginLoader: Unrecognized plugin type");
         d->reason = QObject::tr("unrecognized plugin type");
         break;
   }
}

PluginLoader::~PluginLoader()
{
   delete d;
}

#include <QTime>
bool PluginLoader::load()
{
   if (!d->plugin) {
      return false;
   }
   
   QTime perf;
   perf.start();
   bool ret =  d->plugin->load();
   qDebug("Time: plugin %s took %d msecs to load (result: %s)", d->data.d->name.toLatin1().data(), perf.elapsed(), ret ? "OK" : "failed");
   if (!ret) {
      d->reason = QObject::tr("unknown error during loading plugin");
   }
  
   return ret;
}

bool PluginLoader::unload()
{
   if (d->plugin) {
      return d->plugin->unload();
   }
   
   return false;
}

bool PluginLoader::configure()
{
   if (d->plugin) {
      return d->plugin->configure();
   }
   
   return false;
}

bool PluginLoader::isLoaded()
{
   if (d->plugin) {
      return d->plugin->isLoaded();
   }
   
   return false;
}

void PluginLoader::readData(QDomElement& root)
{
   // Plugin type
   QString attr = root.attribute("type", "binary");
   if(attr == "script")
      d->data.setType(Plugin::Scripted);
   else
      d->data.setType(Plugin::Binary);

   // Autoload plugin?
   attr = root.attribute("autoload");
   if(attr.compare("true", Qt::CaseInsensitive) == 0 || attr == "1")
      d->data.setAutoload(true);
   
   // is configurable (i.e has config)
   attr = root.attribute("configurable");
   if(attr.compare("true", Qt::CaseInsensitive) == 0 || attr == "1")
      d->data.setConfigurable(true);

   // Set tag to value mapping
   QHash<QString, QString*> target_map;
   target_map.insert("name", &d->data.d->name);
   target_map.insert("icon", &d->data.d->icon);
   target_map.insert("comment", &d->data.d->comment);
   target_map.insert("author", &d->data.d->author);
   target_map.insert("email", &d->data.d->email);
   target_map.insert("version", &d->data.d->version);
   target_map.insert("license", &d->data.d->license);
   target_map.insert("library", &d->data.d->library);
   
   // Read all elements
   for(QDomNode n = root.firstChild(); !n.isNull(); n = n.nextSibling())
   {
      if(target_map.contains(n.nodeName()))
      {
         QString* target = target_map[n.nodeName()];
         target->clear();
         target->append(n.toElement().text());
      }
   }
}

PluginData* PluginLoader::data()
{
   return &d->data;
}

const QString& PluginLoader::path()
{
   return d->path;
}

const QString& PluginLoader::lastError()
{
   return d->reason;
}

PluginData::PluginData(QObject* parent)
   : QObject(parent), d ( new PluginDataPrivate() )
{
}

PluginData::~PluginData()
{
   delete d;
}

const QString& PluginData::name() const
{
   return d->name;
}

const QString& PluginData::icon() const
{
   return d->icon;
}

const QString& PluginData::comment() const
{
   return d->comment;
}

const QString& PluginData::author() const
{ 
   return d->author;
}

const QString& PluginData::email() const
{
   return d->email;
}

const QString& PluginData::version() const
{
   return d->version;
}

const QString& PluginData::license() const
{
   return d->license;
}

const QString& PluginData::library() const
{
   return d->library;
}

const bool PluginData::autoload() const
{
   return d->autoload;
}

Plugin::Type   PluginData::type() const
{
   return d->type;
}

PluginData& PluginData::setType(Plugin::Type type)
{
   d->type = type;
   return *this;
}

PluginData& PluginData::setAutoload(bool state)
{
   d->autoload = state;
   return *this;
}

const bool PluginData::configurable() const
{
   return d->configurable;
}

PluginData& PluginData::setConfigurable(bool state)
{
   d->configurable = state;
   return *this;
}

#include "pluginloader.moc"

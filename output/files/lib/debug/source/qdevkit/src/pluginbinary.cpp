/************************ ***************************************************
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

#include <QPluginLoader>

#include "pluginbinary.h"
#include "plugininterfaces.h"

class PluginBinaryPrivate
{
   public:
      PluginBinaryPrivate()
      : interface(0), qloader(0)
      {}
      
      PluginInterface* interface;
      QPluginLoader*   qloader;
};

PluginBinary::PluginBinary(PluginLoader* loader)
   : PluginBase(loader), d( new PluginBinaryPrivate() )
{
   // Prepare variables
   d->qloader = new QPluginLoader(&loader->app());
   QStringList extensions = QStringList() << ".dll" << ".so" << ".dylib";
   QString library;

   // Find shared library
   foreach(const QString& ext, extensions)
   {
      qDebug("DEBUG: PluginBinary: trying %s%s",
             data()->library().toLatin1().data(), ext.toLatin1().data());
      if(QDir(loader->path()).exists(data()->library() + ext))
      {
         library = QDir(loader->path()).absoluteFilePath(data()->library() + ext);
         break;
      }
      
      // Stripped library name
      QString slib(data()->library());
      if (slib.startsWith("lib")) {
          slib = slib.mid(3);
          qDebug("DEBUG: PluginBinary: trying %s%s", 
                 slib.toLatin1().data(), ext.toLatin1().data());
          
          if(QDir(loader->path()).exists(slib + ext))
          {
             library = QDir(loader->path()).absoluteFilePath(slib + ext);
             break;
          }
      }
   }     

   // Check library
   if(library.isEmpty())
   {
      qDebug("DEBUG: PluginBinary: did not find any matching library");
      return;
   }
   
   // Load library
   d->qloader->setFileName(library);
   if(!d->qloader->load())
   {
      qDebug("DEBUG: PluginBinary: could not load the library %s (%s)",
              library.toStdString().c_str(), d->qloader->errorString().toStdString().c_str());
      return;
   }
   
   // Convert plugin object
   if ((d->interface = qobject_cast<PluginInterface*>(d->qloader->instance())) == 0)
      if ((d->interface = qobject_cast<FlashInterface*>(d->qloader->instance())) == 0)
         if ((d->interface = qobject_cast<BrowserInterface*>(d->qloader->instance())) == 0)
            d->interface = 0;

   if(d->interface == 0)
   {
      qDebug("DEBUG: PluginLoader: cannot convert to plugin, version mismatch? (%s)",
              d->qloader->errorString().toStdString().c_str());
      d->interface = 0;
      d->qloader->unload();
      return;
   }
   
   // Initialize plugin
   d->interface->initialize(&loader->app(), this);
}

PluginBinary::~PluginBinary()
{
   delete d;
}

int PluginBinary::load()
{
   if(isLoaded())
      return true;
   
   if(d->interface == 0)
      return false;
   
   return d->interface->load();
}

int PluginBinary::unload()
{
   if(!isLoaded())
      return true;
   
   if(d->interface == 0)
      return false;

   return d->interface->unload();
}

int PluginBinary::configure()
{
   if(d->interface == 0)
      return false;
   
   return d->interface->configure();
}

bool PluginBinary::isLoaded()
{ 
   return d->interface && d->interface->isLoaded();
}

#include "pluginbinary.moc"

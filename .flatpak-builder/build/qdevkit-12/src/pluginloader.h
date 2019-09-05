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

#ifndef PLUGINLOADER_H
#define PLUGINLOADER_H

#include <QDomElement>
#include <QDir>

#include "plugin.h"
#include "component.h"
#include "qdevkit_export.h"

class Script;
class PluginData;
class PluginLoaderPrivate;

class QDEVKIT_EXPORT PluginLoader : Component
{
   friend class PluginScripted;
   friend class PluginBinary;
      
   public:
      PluginLoader(QDevKit *app, QString path);
      ~PluginLoader();
      
      bool load();
      bool unload();
      bool configure();
      bool isLoaded();
      
      /* Accessors */
      PluginData* data();
      const QString& path();
      const QString& lastError();
      
   private:
      PluginLoaderPrivate *d;
   
      void readData(QDomElement& root);
};

class PluginDataPrivate;
class QDEVKIT_EXPORT PluginData : public QObject
{
   Q_OBJECT
   Q_PROPERTY(QString name READ name)
   Q_PROPERTY(QString icon READ icon)
   Q_PROPERTY(QString comment READ comment)
   Q_PROPERTY(QString author READ author)
   Q_PROPERTY(QString email READ email)
   Q_PROPERTY(QString version READ version)
   Q_PROPERTY(QString license READ license)
   Q_PROPERTY(QString library READ library)
   Q_PROPERTY(bool    autoload READ autoload)
   Q_PROPERTY(bool    configurable READ configurable)
   
   friend class PluginLoader;
   
   public:
      PluginData(QObject* parent = 0);
      ~PluginData();
      
      const QString& name() const;
      const QString& icon() const;
      const QString& comment() const;
      const QString& author() const;
      const QString& email() const;
      const QString& version() const;
      const QString& license() const;
      const QString& library() const;
      const bool autoload() const;
      const bool configurable() const;
      Plugin::Type type() const;
      
      PluginData& setType(Plugin::Type type);
      PluginData& setAutoload(bool state);
      PluginData& setConfigurable(bool state);
      
   protected:
      PluginDataPrivate *d;
};

#endif

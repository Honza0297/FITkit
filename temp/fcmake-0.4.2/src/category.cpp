/***************************************************************************
 *   Copyright (C) 2008 Brno University of Technology,                     *
 *   Faculty of Information Technology                                     *
 *   Author(s): Marek Vavrusa    <xvavru00 AT stud.fit.vutbr.cz>           *
 *              Zdenek Vasicek   <vasicek  AT fit.vutbr.cz>                *
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

#include <QtCore/QFile>
#include <QDomElement>
#include <QDomNode>

#include "category.h"
#include "app.h"
#include "tree.h"

namespace FCMake
{

class Category::Private
{
   public:
      Private(const QDir& idir)
         : dir(idir)
      {}

      QDir dir;
      QString name;
      QString icon;
};

Category::Category(const QDir& dir)
   : AppList(), d( new Private(dir) )
{
   // Parse description
   if(d->dir.exists("description.xml"))
      parse();
   else
   {
      d->name = dir.dirName();
      qDebug("DEBUG: Category: no description found for %s", d->dir.dirName().toStdString().c_str());
   }
}

Category::~Category()
{
   for(iterator it = begin(); it != end(); it++)
      delete *it;

   AppList::clear();

   delete d;
}

bool Category::parse()
{
   QFile descFile(d->dir.absoluteFilePath("description.xml"));
   QDomDocument doc;

   // Load document
   if (!doc.setContent(&descFile, true))
   {
      qDebug("Unable to parse XML file");
      return false;
   }

   // Parse header
   QDomElement root = doc.documentElement(), node;
   if(root.tagName() != "category")
      return false;

   // Parse data
   node = root.firstChildElement("name");
   if(!node.isNull())
      d->name = node.text();

   node = root.firstChildElement("icon");
   if(!node.isNull())
      d->icon = node.text();
   else
      d->icon = "default";

   return true;
}

int Category::findApps()
{
   // Parse all applications
   foreach(const QString& app, d->dir.entryList(QDir::Dirs|QDir::NoDotAndDotDot))
   {
      d->dir.cd(app);

      if(Tree::isApp(d->dir))
      {
         App* app = new App(d->dir.absolutePath(), this);
         append(app);
      }

      d->dir.cdUp();
   }

   return size();
}

const QString& Category::name()
{
   return d->name;
}

const QString& Category::icon()
{
   return d->icon;
}

const QDir& Category::dir()
{
   return d->dir;
}

};

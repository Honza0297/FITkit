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

#include "tree.h"

namespace FCMake
{
   
class Tree::Private
{
   public:
      Private()
      {}
      
      QDir root;
};

Tree::Tree(const QString& root)
   : d ( new Private() )
{
	if(!root.isEmpty())
      setRoot(root);
}

Tree::~Tree()
{
   delete d;
}

const QDir& Tree::root()
{
   return d->root;
}

bool Tree::setRoot(const QString& path)
{
   // Align path
   QDir rootDir(path);

   d->root = findRoot(rootDir);
	
   // Return validity
   return isValid();
}

bool Tree::isValid() const
{
   return d->root.exists();
}

QDir Tree::findRoot(const QDir& current) 
{
   if (!current.exists())
       return current;
   
   QDir rootDir(current);
   while(true)
   {
      if(rootDir.exists("apps") &&
         rootDir.exists("base") &&
         rootDir.exists("fpga") &&
         rootDir.exists("mcu")
         ) 
         break;
      
      if(!rootDir.cdUp())
         return current;
   }
   
   return rootDir;
}

QString Tree::findFile(QString fileName, QList<QDir>& dirlist) 
{
  QString filePath = "";
  foreach (const QDir& path, dirlist) 
  {   
      if (path.exists(fileName))
         filePath = QDir::cleanPath(path.absoluteFilePath(fileName));
  }
  return filePath;
}

bool Tree::isApp(const QDir& dir)
{
   if(dir.exists("project.xml") || dir.exists("library.xml"))
      return true;
      
   return false;
}

App* Tree::app(const QString& name)
{
   // User apps first
   QDir appDir(d->root);
   QString app;
   appDir.cd("apps");
   foreach(const QString& cat, appDir.entryList(QDir::Dirs|QDir::NoDotAndDotDot))
   {
      appDir.cd(cat);
      appDir.cd(name);
      if(isApp(appDir))
         return new App(appDir.absolutePath());
         
      appDir.cdUp();
      appDir.cdUp();
   }
   
   // System apps
   appDir = d->root;
   if(appDir.cd(name) && isApp(appDir))
      return new App(app);

   return 0;
}

CategoryList* Tree::categories()
{
   CategoryList* list = new CategoryList();
   QDir catDir(d->root);
   if(!catDir.cd("apps"))
      return list;
   
   foreach(const QString& catId, catDir.entryList(QDir::Dirs|QDir::NoDotAndDotDot))
   {
      // Skip hidden
      if(catId.startsWith("."))
         continue;
      
      catDir.cd(catId);
      Category* category = new Category(catDir);
      list->append(category);
      catDir.cdUp();
   }
   
   return list;
}

};

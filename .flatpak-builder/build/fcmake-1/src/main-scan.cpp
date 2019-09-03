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

#include <QDir>
#include <iostream>

#include "tree.h"
using namespace FCMake;

int main(int argc, char * argv[])
{
   QDir dir = QDir::current();
   if(argc > 1)
   {
      if(QString("-h") == argv[1] || QString("--help") == argv[1])
      {
         std::cout << "FITKit svn tree scanner (version " __VERSION ")" << std::endl;
         std::cout << "------------------------" << std::endl;
         std::cout << "Usage: " << argv[0] << " [TREE_PATH]" << std::endl;
         return 0;
      }
      else
         dir = QDir(argv[1]);
   }

   Tree tree(dir.absolutePath());
   CategoryList* list = tree.categories();
   
   foreach(Category* cat, *list)
   {
      std::cout << "Category: " << cat->name().toStdString() << std::endl;
      cat->findApps();
      
      for(Category::iterator app = cat->begin(); app != cat->end(); app++)
      {
         std::cout << "  |- ";
         if((*app)->parse())
            std::cout << (*app)->name().toStdString();
         else
            std::cout << "Unidentified application";

         std::cout << std::endl;
      }
   }

   foreach(Category* cat, *list)
      delete cat;
   
   delete list;
   return 0;
}

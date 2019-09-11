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

#ifndef _FCMAKE_TREE_H_
#define _FCMAKE_TREE_H_

#include <QDir>
#include <QList>

#include "app.h"
#include "category.h"
#include "fcmake_export.h"

namespace FCMake
{

class FCMAKE_EXPORT Tree
{
   public:
      Tree(const QString& root = QString());
      ~Tree();
      
      const QDir& root();
      bool setRoot(const QString& path);
      bool isValid() const;
      
      App* app(const QString& name);
      CategoryList* categories();
      
      /* Static */
      static QDir findRoot(const QDir& current);
      static QString findFile(QString fileName, QList<QDir>& dirlist);
      static bool isApp(const QDir& dir);
      
   private:
      class Private;
      Private *d;
};

};

#endif // _FCMAKE_TREE_H_

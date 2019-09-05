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

#ifndef ACTIONCOLLECTION_H
#define ACTIONCOLLECTION_H

#include <QList>
#include <QAction>
#include <QIcon>
#include <QWidget>
#include <QStringList>
#include "qdevkitui_export.h"

typedef QList<QAction*> QActionList;

class ActionCollectionPrivate;

class QDEVKITUI_EXPORT ActionCollection : public QObject
{
   Q_OBJECT
    
   public:
      ActionCollection(QWidget* parent);
      ~ActionCollection();
   
      /* Setters */
      int addAction(const QString& name, QAction* action);
      int addAction(const QString& name, const QString& text, QIcon icon = QIcon());

      /* Importers */
      int  importAction(QAction* action);
      void importActions(ActionCollection& collection, const QStringList& names);
      
      void removeAction(QAction* action);
      void removeAction(const QString& name);
      void removeAction(const int actionId);

      /* Overloaded getters */
      QActionList& actionList();
      QAction* action(const QString& actionName);
      QAction* action(const int actionId);
      
      /* Overloaded operators */
      QAction* operator[](const QString& actionName);
      
   private:
      ActionCollectionPrivate *d;
};

#endif

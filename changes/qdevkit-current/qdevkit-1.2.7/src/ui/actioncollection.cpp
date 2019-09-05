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

#include "actioncollection.h"

class ActionCollectionPrivate
{
   public:
      ActionCollectionPrivate()
      : list(0)
      {}
      
      QActionList *list;
};

ActionCollection::ActionCollection(QWidget* parent)
   : QObject(parent), d( new ActionCollectionPrivate() )
{
   d->list = new QActionList();
}

ActionCollection::~ActionCollection()
{
   delete d->list;
   delete d;
}

void ActionCollection::importActions(ActionCollection& collection, const QStringList& names)
{
   foreach(const QString& name, names)
      importAction(collection[name]);
}

int ActionCollection::importAction(QAction* action)
{
   actionList().append(action);
   qobject_cast<QWidget*>(parent())->addAction(action);
   return actionList().indexOf(action);
}

int ActionCollection::addAction(const QString& name, QAction* action)
{
   // Check
   Q_ASSERT(action != 0);
   
   // Set parent and connect
   action->setParent(parent());
   action->setObjectName(name);
   
   return importAction(action);
}

void ActionCollection::removeAction(QAction* action)
{
   if(action == 0)
      return;
   
   actionList().removeAll(action);
   qobject_cast<QWidget*>(parent())->removeAction(action);
   delete action;
}

void ActionCollection::removeAction(const QString& name)
{
   removeAction(action(name));
}

void ActionCollection::removeAction(const int actionId)
{
   removeAction(action(actionId));
}

int ActionCollection::addAction(const QString& name, const QString& text, QIcon icon)
{
   QAction* action = new QAction(icon, text, parent());
   return addAction(name, action);
}

QAction* ActionCollection::action(const QString& actionName)
{
   foreach(QAction* action, actionList())
   {
      if(action->objectName() == actionName)
         return action;
   }
   
   qDebug("DEBUG: ActionCollection: requested NULL action %s", actionName.toStdString().c_str());
   return 0;
}

QActionList& ActionCollection::actionList()
{
   return *d->list;
}

QAction* ActionCollection::action(const int actionId)
{
   return actionList().value(actionId);
}
      
QAction* ActionCollection::operator[](const QString& actionName)
{
   return action(actionName);
}

#include "actioncollection.moc"

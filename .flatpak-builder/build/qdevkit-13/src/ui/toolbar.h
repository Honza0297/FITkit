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

#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QToolBar>
#include <QIcon>  
#include "qdevkitui_export.h"

class ActionCollection;
class ToolBarPrivate;

class QDEVKITUI_EXPORT ToolBar : public QToolBar
{
   Q_OBJECT

   public:
      explicit ToolBar(const QString& title, QWidget* parent = 0);
      ~ToolBar();
      
      ActionCollection& actionCollection();
      
      /* Scriptable API */
      Q_INVOKABLE void addSeparator();
      Q_INVOKABLE QAction* addAction(const QString& name, const QString& text, QIcon icon = QIcon());
      Q_INVOKABLE void removeAction(const QString& name);
      
   private:
      ToolBarPrivate *d;
};

#endif

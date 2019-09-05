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

#ifndef CONFIG_COMPONENT_H
#define CONFIG_COMPONENT_H

#include <QWidget>
#include <QSettings>
#include <QTabWidget>
#include <QVBoxLayout>

#include "settings.h"
#include "objectsettings.h"
#include "qdevkitui_export.h"

class QDEVKITUI_EXPORT ConfigComponent : public QWidget
{
   Q_OBJECT

   public:
      ConfigComponent(Settings *parent);

   protected:
      Settings*     settings;
      QTabWidget*   tabs;
      QVBoxLayout*  pageLayout;

      int createPage(QWidget* contents, QString text = QString(), QIcon icon = QIcon());

   private slots:
      virtual void save() = 0;

};

#endif

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

#ifndef DEVICEDIALOG_H
#define DEVICEDIALOG_H

#include <QDialog>

#include "component.h"
#include "qdevkitui_export.h"

class DeviceTree;
class DeviceDialogPrivate;

class QDEVKITUI_EXPORT DeviceDialog : public QDialog, Component
{
   Q_OBJECT

   public:
      explicit DeviceDialog(QDevKit* app, QWidget* parent = 0);
      ~DeviceDialog();

      /* Scriptable API */
      Q_INVOKABLE DeviceTree* deviceTree();

   private:
      void createWidgets();
      DeviceDialogPrivate *d;


   private slots:
      void confirmSelection(int deviceId);
      void updateSelection(int deviceId);

};

#endif

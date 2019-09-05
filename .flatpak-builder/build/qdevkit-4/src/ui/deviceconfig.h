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

#ifndef DEVICE_CONFIG_H
#define DEVICE_CONFIG_H

#include <QWidget>
#include <QStringList>
#include <QSpinBox>
#include <QComboBox>

#include "configcomponent.h"
#include "qdevkitui_export.h"

class DeviceProperties;

class QDEVKITUI_EXPORT DeviceConfig : public ConfigComponent
{
   Q_OBJECT

   public:
      DeviceConfig(Settings *parent = 0);
      ~DeviceConfig();

   protected:
      void createWidgets();

   private slots:
      void save();

   private:
      class Private;
      Private *d;
};

class QDEVKITUI_EXPORT DeviceProperties : public QWidget
{
   Q_OBJECT

   public:
      DeviceProperties(QWidget* parent = 0);

      /* Widgets */
      QSpinBox*   baudRate;
      QComboBox*  channel;
      QComboBox*  bits;
      QComboBox*  stopBits;
      QComboBox*  parity;

      /* Lists */
      QStringList channelList;
      QStringList bitsList;
      QStringList sbitsList;
      QStringList parityList;

   private:
      class Private;
      Private *d;
      void createWidgets();
};

#endif

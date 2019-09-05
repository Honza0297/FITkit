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

#include <QGroupBox>
#include <QVBoxLayout>
#include <QPushButton>
#include <QSettings>
#include <libkitclient>
#include "devicecustomdialog.h"
#include "devicedialog.h"
#include "deviceconfig.h"

class DeviceCustomDialogPrivate
{
   public:
      DeviceCustomDialogPrivate()
      : propWidget(0)
      {}

      DeviceProperties* propWidget;
};

DeviceCustomDialog::DeviceCustomDialog(QDevKit* app, QWidget* parent)
   : DeviceDialog(app, parent), d ( new DeviceCustomDialogPrivate() )
{
   // Set window properties
   setWindowTitle(tr("Open custom device"));

   // Create property widgets
   createWidgets();
}

DeviceCustomDialog::~DeviceCustomDialog()
{
   delete d;
}

void DeviceCustomDialog::createWidgets()
{
   // Create property widgets
   QGroupBox* gbProp = new QGroupBox(tr("Properties"), this);

   // Create content
   d->propWidget = new DeviceProperties(gbProp);

   // Set layouts
   QVBoxLayout* ltProp = new QVBoxLayout(gbProp);
   ltProp->addWidget(d->propWidget);

   // Set main layout
   QVBoxLayout* lt = qobject_cast<QVBoxLayout*>(layout());
   lt->insertWidget(lt->count() - 1, gbProp);
}

int DeviceCustomDialog::baudRate()
{
   return d->propWidget->baudRate->value();
}

Device::ChannelId DeviceCustomDialog::channel()
{
   if(d->propWidget->channel->currentIndex() == 0)
      return Device::ChannelA;
   else
      return Device::ChannelB;
}

Device::Parity DeviceCustomDialog::parity()
{
   return int2parity(d->propWidget->parity->currentIndex());
}

Device::Bits DeviceCustomDialog::bits()
{
   return str2bits(d->propWidget->bits->currentText().toLatin1().data());
}
Device::StopBits  DeviceCustomDialog::stopBits()
{
   return str2sbits(d->propWidget->stopBits->currentText().toLatin1().data());
}

#include "devicecustomdialog.moc"

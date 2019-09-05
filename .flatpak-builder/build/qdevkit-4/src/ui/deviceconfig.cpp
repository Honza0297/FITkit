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

#include <QLineEdit>
#include <QComboBox>
#include <QSpinBox>
#include <QGroupBox>
#include <QLabel>

#include "deviceconfig.h"
#include "components.h"

class DeviceConfig::Private
{
   public:
      Private()
      {}

      DeviceProperties* prop;
      QLineEdit*  vidList;
      QLineEdit*  pidList;
};

DeviceConfig::DeviceConfig(Settings *parent)
   : ConfigComponent(parent), d( new Private() )
{
   // Setup UI
   createWidgets();

   QSettings set;
   set.beginGroup("Device");

   // Device identification
   ObjectSettings::setObjectText(set,   d->vidList,     "0x0403");
   ObjectSettings::setObjectText(set,   d->pidList,     "0x6010");

   set.endGroup();
}

DeviceConfig::~DeviceConfig()
{
   delete d;
}

void DeviceConfig::save()
{
   QSettings set;
   set.beginGroup("Device");

   ObjectSettings::saveObjectInt(set,   d->prop->baudRate);
   ObjectSettings::saveObjectCombo(set, d->prop->channel);
   ObjectSettings::saveObjectCombo(set, d->prop->parity);
   ObjectSettings::saveObjectComboText(set, d->prop->bits);
   ObjectSettings::saveObjectComboText(set, d->prop->stopBits);

   ObjectSettings::saveObjectText(set,  d->vidList);
   ObjectSettings::saveObjectText(set,  d->pidList);

   set.endGroup();
}

void DeviceConfig::createWidgets()
{
   // Create groups
   QGroupBox* gbConnection     = new QGroupBox(tr("Connection"), this);
   QGroupBox* gbCapabilities   = new QGroupBox(tr("Capabilities"), this);
   QGroupBox* gbIdentification = new QGroupBox(tr("Identification"), this);

   // Create items
   d->prop = new DeviceProperties(gbConnection);
   QVBoxLayout* ltConnection = new QVBoxLayout(gbConnection);
   ltConnection->addWidget(d->prop);

   d->vidList = new QLineEdit(gbIdentification);
   d->vidList->setObjectName("VIDList");

   d->pidList = new QLineEdit(gbIdentification);
   d->pidList->setObjectName("PIDList");

   // Set capabilities
   QLabel* lbFlash = new QLabel(tr("Flashing:"), gbCapabilities);
   QLabel* lbFlashS = new QLabel(gbCapabilities);
   lbFlashS->setPixmap(QPixmap(":/icons/22x22/bt-cancel.png"));
   QLabel* lbFlashD = new QLabel(gbCapabilities);

   FlashInterface* fs = settings->components().flash();
   if(fs != 0)
   {
      PluginData* pdata = fs->loader()->data();
      if(pdata != 0)
      {
         lbFlashS->setPixmap(QPixmap(":/icons/22x22/bt-apply.png"));
         lbFlashD->setText(QString("<font color='green'>%1 (%2)</font>").arg(pdata->name(), pdata->version()));
      }
   }

   QGridLayout* ltCapabilities = new QGridLayout(gbCapabilities);
   ltCapabilities->addWidget(lbFlash,   0, 0);
   ltCapabilities->addWidget(lbFlashS,  0, 1, Qt::AlignRight);
   ltCapabilities->addWidget(lbFlashD,  0, 2);

   // Set layouts
   QVBoxLayout* ltMain = new QVBoxLayout(this);
   ltMain->addWidget(gbConnection);
   ltMain->addWidget(gbCapabilities);
   ltMain->addWidget(gbIdentification);

   QGridLayout* ltIdentification = new QGridLayout(gbIdentification);
   QLabel* lbVidList = new QLabel(tr("Vendor IDs:"), gbConnection);
   QLabel* lbPidList = new QLabel(tr("Product IDs:"), gbConnection);
   ltIdentification->addWidget(lbVidList, 0, 0);
   ltIdentification->addWidget(lbPidList, 1, 0);
   ltIdentification->addWidget(d->vidList, 0, 1);
   ltIdentification->addWidget(d->pidList, 1, 1);
}

DeviceProperties::DeviceProperties(QWidget* parent)
   : QWidget(parent)
{
   // Create widgets
   createWidgets();

   // Connection settings
   QSettings set;
   set.beginGroup("Device");

   ObjectSettings::setObjectInt(set,    baudRate,    460800);
   ObjectSettings::setObjectCombo(set,  channel,     channelList.indexOf(tr("Channel B")));
   ObjectSettings::setObjectCombo(set,  parity,      channelList.indexOf(tr("None")));
   ObjectSettings::setObjectComboFromText(set,  bits,        QString::number(8));
   ObjectSettings::setObjectComboFromText(set,  stopBits,    QString::number(1));

   set.endGroup();
}
void DeviceProperties::createWidgets()
{
   // Create items
   baudRate = new QSpinBox(this);
   baudRate->setRange(0, 921600);
   baudRate->setObjectName("BaudRate");

   channelList << tr("Channel A") << tr("Channel B");
   channel = new QComboBox(this);
   channel->setObjectName("Channel");
   channel->addItems(channelList);

   bitsList << "7" << "8";
   bits = new QComboBox(this);
   bits->setObjectName("Bits");
   bits->addItems(bitsList);

   sbitsList << "1" << "1.5" << "2";
   stopBits = new QComboBox(this);
   stopBits->setObjectName("StopBits");
   stopBits->addItems(sbitsList);

   parityList << tr("None") << tr("Even") << tr("Odd") << tr("Mark") << tr("Space");
   parity = new QComboBox(this);
   parity->setObjectName("Parity");
   parity->addItems(parityList);

   QGridLayout* ltConnection = new QGridLayout(this);
   QLabel* lbBaudRate = new QLabel(tr("Baud rate:"),      this);
   QLabel* lbChannel = new QLabel(tr("Device channel:"),  this);
   QLabel* lbBits = new QLabel(tr("Bits type:"),          this);
   QLabel* lbStopBits = new QLabel(tr("Stop-bits type:"), this);
   QLabel* lbParity = new QLabel(tr("Parity:"),           this);

   ltConnection->addWidget(lbBaudRate, 0, 0);
   ltConnection->addWidget(lbChannel , 1, 0);
   ltConnection->addWidget(lbBits,     2, 0);
   ltConnection->addWidget(lbStopBits, 3, 0);
   ltConnection->addWidget(lbParity,   4, 0);
   ltConnection->addWidget(baudRate, 0, 1);
   ltConnection->addWidget(channel,  1, 1);
   ltConnection->addWidget(bits,     2, 1);
   ltConnection->addWidget(stopBits, 3, 1);
   ltConnection->addWidget(parity,   4, 1);
}

#include "deviceconfig.moc"

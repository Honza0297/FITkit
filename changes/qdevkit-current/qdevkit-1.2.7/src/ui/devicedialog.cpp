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
#include <QFrame>
#include <QLabel>

#include "devicedialog.h"
#include "devicetree.h"

class DeviceDialogPrivate
{
   public:
      DeviceDialogPrivate()
      : deviceTree(0), btOpen(0), btClose(0)
      {}

      DeviceTree*       deviceTree;
      QPushButton*      btOpen;
      QPushButton*      btClose;
};

DeviceDialog::DeviceDialog(QDevKit* app, QWidget* parent)
   : QDialog(parent), Component(app), d ( new DeviceDialogPrivate() )
{
    // Set window properties
    setWindowTitle(tr("Connect"));
    setWindowIcon(QIcon(":/icons/22x22/device-add.png"));

    // Create widgets
    createWidgets();

    // Connect buttons
    connect(d->btOpen,  SIGNAL(clicked()), this, SLOT(accept()));
    connect(d->btClose, SIGNAL(clicked()), this, SLOT(reject()));

    // Show local
    d->deviceTree->setIconSize(QSize(48,48));
    d->deviceTree->showLocal();

    // Connect tree
    connect(d->deviceTree,   SIGNAL(deviceSelected(int)),  this, SLOT(updateSelection(int)));
    connect(d->deviceTree,   SIGNAL(deviceActivated(int)), this, SLOT(confirmSelection(int)));

    // Set minimum size
    setMinimumWidth(400);
    d->btClose->setFocus();
}

DeviceDialog::~DeviceDialog()
{
    delete d;
}

DeviceTree* DeviceDialog::deviceTree()
{
    return d->deviceTree;
}

void DeviceDialog::createWidgets()
{
    // Create device tree
    QGroupBox* gbTree = new QGroupBox(tr("Device"), this);
    gbTree->setFlat(true);

    // Create content
    d->deviceTree = new DeviceTree(&app(), gbTree);

    // Set layouts
    QVBoxLayout* ltTree = new QVBoxLayout(gbTree);
    ltTree->addWidget(d->deviceTree);

    // Create buttons
    d->btOpen  = new QPushButton(QIcon(":/icons/22x22/bt-apply.png"), tr("C&onnect"), this);
    d->btClose = new QPushButton(QIcon(":/icons/22x22/bt-cancel.png"), tr("&Cancel"), this);
    d->btOpen->setEnabled(false);

    QHBoxLayout* ltButtons = new QHBoxLayout();
    ltButtons->setAlignment(Qt::AlignRight);
    ltButtons->addWidget(d->btOpen);
    ltButtons->addWidget(d->btClose);

    // Set main layout
    QVBoxLayout* lt = new QVBoxLayout(this);
    lt->addWidget(gbTree);
    lt->addLayout(ltButtons);
}

void DeviceDialog::confirmSelection(int deviceId)
{
    if (deviceId > -1) {
        accept();
    }
}

void DeviceDialog::updateSelection(int deviceId)
{
    d->btOpen->setEnabled(deviceId > -1);
}

#include "devicedialog.moc"

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

#include <QTreeWidget>
#include <QGroupBox>
#include <QMenu>
#include <QContextMenuEvent>
#include <QSettings>
#include <QDebug>
#include <fcmake/app.h>
#include <libkitclient/qtapi>
#include <libkitclient/ip>
#include "devicetree.h"
#include "qdevkit.h"
#include "qdevicemgr.h"
#include "mainwindow.h"
#include "fktreewidget.h"
#include "connectiontabs.h"

class DeviceTreePrivate
{

public:

    DeviceTreePrivate()
        : currentDevice(-1), currentItem(0), menu(0), hostMenu(0),
          shareAction(0), usb(0), lan(0), wan(0)
    {
        hostmap.clear();
    }

    ~DeviceTreePrivate()
    {
        if(menu != 0)
            delete menu;
    }

    int currentDevice;
    QTreeWidgetItem *currentItem;
    DeviceMap devmap;
    QHash<ClientSocket*, QTreeWidgetItem*> hostmap;
    QMenu* menu;
    QMenu* hostMenu;
    QAction* shareAction;
    QTreeWidgetItem *usb, *lan, *wan;
};

DeviceTree::DeviceTree(QDevKit* app, QWidget* parent)
   : QTreeWidget(parent), Component(app), d (new DeviceTreePrivate)
{
    // List attributes
    createMenu();
    setAlternatingRowColors(true);
    setAnimated(true);
    setIconSize(QSize(64,64));
    setColumnCount(1);

    // List attributes
    QTreeWidgetItem* header = new QTreeWidgetItem();
    header->setText(0, tr("Available devices"));
    setHeaderItem(header);

    // Connect activation
    connect(this, SIGNAL(itemEntered(QTreeWidgetItem*, int)),
            SLOT(itemHover(QTreeWidgetItem*, int)));
    connect(this, SIGNAL(itemClicked(QTreeWidgetItem*, int)),
            SLOT(itemSelect(QTreeWidgetItem*, int)));
    connect(this, SIGNAL(itemDoubleClicked(QTreeWidgetItem*, int)),
            SLOT(itemActivate(QTreeWidgetItem*, int)));

    // Create top level items
    d->usb = new QTreeWidgetItem();
    d->usb->setText(0, tr("Local USB bus"));
    d->usb->setIcon(0, QIcon(":/icons/22x22/device-local.png"));
    addTopLevelItem(d->usb);
    d->usb->setHidden(true);

    // Local network
    d->lan = new QTreeWidgetItem();
    d->lan->setText(0, tr("Local network"));
    d->lan->setIcon(0, QIcon(":/icons/22x22/network.png"));
    addTopLevelItem(d->lan);
    d->lan->setHidden(true);

    // Remote
    d->wan = new QTreeWidgetItem();
    d->wan->setText(0, tr("Remote devices"));
    d->wan->setIcon(0, QIcon(":/icons/22x22/network.png"));
    addTopLevelItem(d->wan);
    d->wan->setHidden(true);

    // Set events
    setMouseTracking(true);
}

DeviceTree::~DeviceTree()
{
    delete d;
}

void DeviceTree::createMenu()
{
    // Device menu
    d->menu = new QMenu(this);
    d->menu->addMenu(mainWindow().appTree()->treeMenu());
    d->menu->addSeparator();
    d->shareAction = new QAction(d->menu);
    d->shareAction->setCheckable(true);
    d->menu->addAction(d->shareAction);
    connect(d->shareAction, SIGNAL(triggered(bool)),
            this,           SLOT(sharingToggle(bool)));

    // Host menu
    d->hostMenu = new QMenu(this);
    d->hostMenu->addAction(tr("&Disconnect"), this, SLOT(disconnectHost()));
}

void DeviceTree::contextMenuEvent(QContextMenuEvent * event)
{
    QTreeWidgetItem* item = 0;
    item = itemAt(event->pos());
    d->currentItem = item;
    if (item != 0) {

        // No disabled items
        if (item->isDisabled())
            return;

        QtAPI::Device* dev = 0;
        for (DeviceMapIterator it = d->devmap.begin(); it != d->devmap.end(); ++it) {
            if (it.value() == item) {
                d->currentDevice = it.key();
                dev = deviceMgr().device(it.key());
                break;
            }
        }

        // No top-level items
        if (dev != 0) {

            // Add sharing action
            if (dev->flags() & Device::Shared) {
                d->shareAction->setText(tr("Un&share device"));
                d->shareAction->setChecked(true);
            } else {
                d->shareAction->setText(tr("&Share device"));
                d->shareAction->setChecked(false);
            }
            IPBackend* ip = deviceMgr().network();
            bool enableSharing = (!(dev->flags() & Device::Virtual)) &&
                                 (ip->service()->isOpen());
            d->shareAction->setEnabled(enableSharing);

            d->menu->popup(event->globalPos());
            return;
        }

        // Clients
        QHash<ClientSocket*, QTreeWidgetItem*>::iterator it;
        for (it = d->hostmap.begin(); it != d->hostmap.end(); ++it) {
            if (it.value() == item) {

                // Allow to disconnect non-discovered connections
                if (!(it.key()->flags() & IPBackend::Discovered)) {
                    d->hostMenu->popup(event->globalPos());
                }
                return;
            }
        }
    }
}

void DeviceTree::itemHover(QTreeWidgetItem* item, int col)
{
	Q_UNUSED(col);

    for (DeviceMapIterator it = d->devmap.begin(); it != d->devmap.end(); it++) {
        if (it.value() == item) {
            emit(deviceHovered(it.key()));
            return;
        }
    }

    emit(deviceHovered(-2));
}

void DeviceTree::itemSelect(QTreeWidgetItem* item, int col)
{
	Q_UNUSED(col);

    for (DeviceMapIterator it = d->devmap.begin(); it != d->devmap.end(); it++) {
        if (it.value() == item) {
            emit(deviceSelected(it.key()));
            return;
        }
    }

    emit(deviceSelected(-2));
}

void DeviceTree::itemActivate(QTreeWidgetItem* item, int col)
{
	Q_UNUSED(col);

    if (item->isDisabled()) {
        emit(deviceActivated(-2));
        return;
    }

    for (DeviceMapIterator it = d->devmap.begin(); it != d->devmap.end(); it++) {
        if (it.value() == item) {
            emit(deviceActivated(it.key()));
            return;
        }
    }

    emit(deviceActivated(-2));
}

int DeviceTree::devices()
{
   return d->devmap.count();
}

int DeviceTree::selectedDevice()
{
    QTreeWidgetItem* item = currentItem();
    if (item == 0)
        return -1;

    if (item->isDisabled() || item->parent() == 0)
        return -1;

    for (DeviceMapIterator it = d->devmap.begin(); it != d->devmap.end(); it++)
        if (it.value() == item)
            return it.key();

    return -1;
}

void DeviceTree::showLocal()
{
    // Create initial list
    QDeviceMgr& devices = deviceMgr();
    DeviceMgr::List& list = devices.list();
    for (DeviceMgr::iterator it = list.begin(); it != list.end(); ++it)
        itemAppend((*it)->id());

    // Connect signals
    connect(&devices, SIGNAL(lost(int)),      SLOT(itemDelete(int)));
    connect(&devices, SIGNAL(acquired(int)),  SLOT(itemDisable(int)));
    connect(&devices, SIGNAL(found(int)),     SLOT(itemAppend(int)));
    connect(&devices, SIGNAL(released(int)),  SLOT(itemEnable(int)));
}

void DeviceTree::itemEnable(int deviceId)
{
    QTreeWidgetItem* item = d->devmap[deviceId];
    if (item == 0)
        return;

    item->setDisabled(false);
}

void DeviceTree::itemDisable(int deviceId)
{
    QTreeWidgetItem* item = d->devmap[deviceId];
    if (item == 0)
        return;

    item->setDisabled(true);
}

void DeviceTree::disconnectHost()
{
    QTreeWidgetItem* hostItem = d->currentItem;
    if (hostItem == 0) {
        return;
    }

    // Find matching client
    hostItem->setHidden(true);
    QHash<ClientSocket*, QTreeWidgetItem*>::iterator it;
    for (it = d->hostmap.begin(); it != d->hostmap.end(); ++it) {
        if (it.value() == hostItem) {

            // Get client socket
            ClientSocket* host = it.key();
            d->hostmap.erase(it);

            // Disconnect from client
            deviceMgr().network()->disconnect(host);
            return;
        }
    }
}

void DeviceTree::sharingToggle(bool val)
{
    QtAPI::Device* dev = deviceMgr().device(d->currentDevice);
    if (dev == 0) return;

    // Update flags and select icon
    QIcon icon(":/icons/64x64/fitkit-shared.png");
    if (val) {
        dev->addFlag(Device::Shared);
        if (dev->flags() & Device::Virtual) {
            icon = QIcon(":/icons/64x64/fitkit-vshared.png");
        }
    } else {
        dev->removeFlag(Device::Shared);
        if (dev->flags() & Device::Virtual) {
            icon = QIcon(":/icons/64x64/fitkit-virtual.png");
        } else {
            icon = QIcon(":/icons/64x64/fitkit.png");
        }
    }

    // Notify manager
    deviceMgr().updateDevice(dev->id());

    // Update icon
    QTreeWidgetItem* item = d->devmap[dev->id()];
    if (item == 0)
        return;

    item->setIcon(0, icon);
}

void DeviceTree::itemAppend(int deviceId)
{
    // Get device
	 qDebug() << "DeviceTree itemAppend(" << deviceId << ")";
    QtAPI::Device* dev = deviceMgr().device(deviceId);
	 if (dev == 0) return;

    // Add item
    QTreeWidgetItem* item = new QTreeWidgetItem();

    // Update geometry
    QSize hint = item->sizeHint(0);
    hint.setHeight(iconSize().height() + 4);
    item->setSizeHint(0, hint);

    // Select parent
    QIcon icon = QIcon(":/icons/64x64/fitkit.png");
    QTreeWidgetItem* parent = d->usb;
    if (dev->flags() & Device::Virtual) {

        // Virtual defaults to remote
        parent = d->wan;

        // Select icon
        if (dev->flags() & Device::Shared) {
            icon = QIcon(":/icons/64x64/fitkit-vshared.png");
        } else {
            icon = QIcon(":/icons/64x64/fitkit-virtual.png");
        }

    } else {
        if (dev->flags() & Device::Shared) {
            icon = QIcon(":/icons/64x64/fitkit-shared.png");
        } else {

			  QSettings set;
            if (set.value("Remote/AutoShare", false).toBool()) {
					//automatic sharing
               dev->addFlag(Device::Shared);
               // Notify manager
               deviceMgr().updateDevice(dev->id());
               icon = QIcon(":/icons/64x64/fitkit-shared.png");
         	}
		  }
    }

    // Append text if virtual
    ::Device* r_dev = dev->backend();
    if (dev->flags() & Device::Virtual) {

        // Select parent
        IPDevice* ipdev = static_cast<IPDevice*>(r_dev);
        parent = insertClient(ipdev->client());

        // Update item text
        item->setText(0, tr("FITkit #%1\n%4:%5\nVID 0x%2, PID 0x%3")
                         .arg(deviceId)
                         .arg(dev->vid(),  4, 16, QLatin1Char('0'))
                         .arg(dev->pid(),  4, 16, QLatin1Char('0'))
                         .arg(ipdev->host())
                         .arg(ipdev->port()));
    } else {
        item->setText(0, tr("FITkit #%1\nVID 0x%2, PID 0x%3")
                         .arg(deviceId)
                         .arg(dev->vid(),  4, 16, QLatin1Char('0'))
                         .arg(dev->pid(),  4, 16, QLatin1Char('0')));
    }

    // Append serial if exists
    const QString sn = dev->channelA()->serial();
    if (sn.length() > 0) {
        item->setText(0, item->text(0) + tr("\nSN: %1").arg(sn));
    }

    // Set state
    if (dev->flags() & Device::Acquired) {
        item->setDisabled(true);
    }

    // Add device mapping
    item->setIcon(0, icon);
    d->devmap.insert(deviceId, item);

    parent->addChild(item);
    parent->setExpanded(true);
    parent->setHidden(false);
}

QTreeWidgetItem* DeviceTree::insertClient(ClientSocket* client)
{
    QTreeWidgetItem* item = d->hostmap[client];
    if (!item) {
        item = new QTreeWidgetItem;
        item->setIcon(0, QIcon(":/icons/22x22/network-connect.png"));
        item->setText(0, QString("%1, port %2")
                      .arg(client->host())
                      .arg(client->port()));
    }

    QTreeWidgetItem* parent = d->wan;
    if (client->flags() & IPBackend::Discovered) {
        parent = d->lan;
    }

    QTreeWidgetItem* oldParent = item->parent();
    if (oldParent != parent && oldParent) {
        oldParent->removeChild(item);
        if (oldParent->childCount() <= 0) {
            oldParent->setHidden(true);
        }
    }

    parent->setHidden(false);
    parent->addChild(item);
    parent->setExpanded(true);
    item->setExpanded(true);

    d->hostmap.insert(client, item);
    return item;
}

void DeviceTree::itemDelete(int deviceId)
{
    QTreeWidgetItem* item = d->devmap.take(deviceId);
    if (item == 0)
        return;

    QTreeWidgetItem* parent = item->parent();
    delete item;

    /* Delete empty clients. */
    if (parent && parent != d->usb && parent != d->lan && parent != d->wan) {
        if (parent->childCount() == 0) {

            /* Check if client is disconnected or ad-hoc. */
            bool removed = false;
            QHash<ClientSocket*, QTreeWidgetItem*>::iterator it;
            for (it = d->hostmap.begin(); it != d->hostmap.end(); ++it) {

                /* Only disconnected or WAN. */
                if (it.value() == parent) {
                    ClientSocket* client = it.key();
                    if (!client->isOpen() || client->flags() & IPBackend::Discovered) {
                        qDebug("Deleting host QTreeWidgetItem-ClientSocket mapping");
                        d->hostmap.erase(it);
                        item = parent;
                        parent = parent->parent();
                        parent->removeChild(item);
                        delete item;
                        removed = true;
                        break;
                    }
                }
            }

            /* If not removed, go to top level item. */
            if (!removed) {
                parent = parent->parent();
            }
        }
    }

    /* Hadle top-level item visibility. */
    if (parent) {
        if (parent->childCount() <= 0) {
            parent->setHidden(true);
        }
    }

    itemSelect(currentItem(), 0);
}

void DeviceTree::selectDevice(int deviceId)
{
    QTreeWidgetItem* item = d->devmap[deviceId];
    if (item == 0)
        return;

    setCurrentItem(item);
}

void DeviceTree::selectFirstDevice()
{
    DeviceMapIterator it = d->devmap.begin();
    if (it == d->devmap.end())
        return;

    setCurrentItem(it.value());
}
#include "devicetree.moc"

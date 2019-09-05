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

#include <QWidget>
#include <QMenu>
#include <QTabWidget>
#include <QToolButton>
#include <QTabBar>
#include <QLineEdit>
#include <QSettings>
#include <QContextMenuEvent>
#include <QMessageBox>
#include <QPainter>
#include <libkitclient>
#include <libkitclient/qtapi>
#include "connectiontabs.h"
#include "qdevkit.h"
#include "mainwindow.h"
#include "actioncollection.h"
#include "scriptengine.h"
#include "qdevicemgr.h"
#include "fktreewidget.h"

class ConnectionTabsPrivate
{
   public:
      ConnectionTabsPrivate()
      {}
};

ConnectionTabs::ConnectionTabs(QDevKit* app, QWidget* parent)
   : QTabWidget(parent), Component(app), d ( new ConnectionTabsPrivate() )
{
   // Set attributes
   setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);

   // Set corner widget
   QToolButton* corner = new QToolButton(this);
   corner->setIcon(QIcon(":/icons/48x48/close-current.png"));
   corner->setEnabled(false);
   corner->setAutoRaise(true);
   setCornerWidget(corner);

   // Connect controls
   connect(corner, SIGNAL(clicked()), this, SLOT(removeTab()));
   connect( this,   SIGNAL(currentChanged(int)),
            this,   SLOT(handleTabChange(int)));

   // Connect window actions
   connect( mainWindow().actionCollection()["closeTab"],  SIGNAL(triggered()),
            this,                                         SLOT(removeTab()));

   // Connect DeviceMgr events
   connect( &deviceMgr(),  SIGNAL(lost(int)),
            this,          SLOT(connectionError(int)));

   // Export scriptables
   scriptEngine().registerClass(&Connection::staticMetaObject);
}

ConnectionTabs::~ConnectionTabs()
{
   // Do not notify of tab changes when deleting
   disconnect( this,   SIGNAL(currentChanged(int)),
               this,   SLOT(handleTabChange(int)));

   int num_tabs = count();
   for(int i = 0; i < num_tabs; i++)
      removeTab(i);

   delete d;
}

void ConnectionTabs::setCurrentTab(int tabId)
{
   setCurrentIndex(tabId);
}

Connection* ConnectionTabs::connection(int tabId)
{
   return qobject_cast<Connection*>(widget(tabId));
}

Connection* ConnectionTabs::operator[](int tabId)
{
   return connection(tabId);
}

Connection* ConnectionTabs::current()
{
   return connection(currentIndex());
}

void ConnectionTabs::open(int deviceId)
{
   QtAPI::Device* dev = deviceMgr().acquire(deviceId);

   if(dev == 0)
      return;

   // Set device channel
   QSettings set;
   set.beginGroup("Device");

   //deviceMgr().lock();
   // Prepare Connection
   Connection* conn = new Connection(&app(), dev);

   // Set line property
   int              l_bauds  =            set.value("BaudRate", Device::DEFAULT_RATE).toInt();
   Device::Parity   l_parity = int2parity(set.value("Parity",   parity2int(Device::DEFAULT_PARITY)).toInt());
   Device::Bits     l_bits   = str2bits(  set.value("Bits",     bits2str(Device::DEFAULT_BIT)).toString().toLatin1().data());
   Device::StopBits l_sbits  = str2sbits( set.value("StopBits", sbits2str(Device::DEFAULT_STOPBIT)).toString().toLatin1().data());
   set.endGroup();

   Connection::Channel id = Connection::ChannelA;
   QtAPI::IOChannel* ch[Connection::ChannelCount] = {
       dev->channelA(),
       dev->channelB()
   };

   bool res = true;
   for (int i = 0; i < Connection::ChannelCount; ++i) {

       // Set channel id
       if (i == 0) {
           id = Connection::ChannelA;
       } else {
           id = Connection::ChannelB;
       }

       // Configure line
       ch[i]->setBaudRate(l_bauds);
       ch[i]->configure(l_bits, l_sbits, l_parity);

       // Check if its not already open
       if (ch[i]->isOpen()) {
           qDebug("ConnectionTabs::open(%d) - device is already open\n",
                  deviceId);
           ch[i]->close();
        }

       // Set channel
       res = conn->setChannel(ch[i], id);
       if (!res) {
           break;
       }
   }

   // Handle result
   if (res) {

       // Open default channel
       id = Connection::ChannelA;
       if(set.value("Channel", 1).toInt() == 1) {
          id = Connection::ChannelB;
       }

       // Lock DeviceMgr
       res = res && conn->open(id);

       // Initialize channel
       if (res) {
           conn->initialize();
           conn->startPolling();

           // Append Connection as tab
           //deviceMgr().unlock();
           append(conn);
           return;
       }
   }

   // Connecting failed at some point
   //deviceMgr().unlock();
   deviceMgr().release(dev);
   conn->deleteLater();
}

void ConnectionTabs::append(Connection* conn)
{
    // Select icon
    QIcon icon(":/icons/32x32/device-local.png");
    if (conn->device()->flags() & Device::Virtual) {
        icon = QIcon(":/icons/32x32/device-network.png");
    }

    // Add tab
    QString label = tr("FITkit");
    int tabId = addTab(conn, icon, label);
    setCurrentIndex(tabId);
    updateTab(tabId);

    // Update status just for the first
    if (tabId == 0) {
        emit(connectionCreated(conn->device()->id()));
        emit(connectionChanged(conn->device()->id()));
    }

    // Set focus to input
    conn->input()->setFocus();
    connect(conn, SIGNAL(connectionError(int)),
            this, SLOT(connectionError(int)));
}

void ConnectionTabs::handleTabChange(int tabId)
{
    // Update controls
    cornerWidget()->setEnabled(tabId >= 0);
    mainWindow().actionCollection()["closeTab"]->setEnabled(tabId >= 0);

    // Emit signals
    if(tabId < 0)
        emit(connectionChanged(-1));
    else
    {
        if (count() > 1) {
            Connection* tab = qobject_cast<Connection*>(widget(tabId));
            emit(connectionChanged(tab->device()->id()));
        }
    }
}

void ConnectionTabs::updateTab(int tabId)
{
    Connection* conn = connection(tabId);
    if (conn == 0) {
        return;
    }

    // Update tab text
    QString label = tr("FITkit (Channels: ");
    if (conn->isOpen(Connection::ChannelA)) {
        label.append("A, ");
    }
    if (conn->isOpen(Connection::ChannelB)) {
        label.append("B, ");
    }
    label = label.left(label.length() - 2);
    label.append(")");
    setTabText(tabId, label);
}

void ConnectionTabs::contextMenuEvent(QContextMenuEvent * event)
{
   QMenu menu;
   QAction atInitialize(tr("Reset MCU"), &menu);
   QAction atChannelA(tr("Channel A"), &menu);
   QAction atChannelB(tr("Channel B"), &menu);
   atChannelA.setCheckable(true);
   atChannelB.setCheckable(true);

   // Get tab
   QPoint point = tabBar()->mapFromGlobal(event->globalPos());
   int tabId = tabBar()->tabAt(point);
   if (tabId < 0) {
       return;
   }

   // Get connection
   Connection* conn = connection(tabId);

   // Add global actions
   ActionCollection& mainActions = mainWindow().actionCollection();
   menu.addAction(mainActions["closeTab"]);
   menu.addSeparator();
   menu.addAction(&atInitialize);
   menu.addAction(&atChannelA);
   menu.addAction(&atChannelB);
   menu.addSeparator();
   menu.addMenu(mainWindow().appTree()->treeMenu());

   // Channel settings
   bool channelState[Connection::ChannelCount] = {
       conn->isOpen(Connection::ChannelA),
       conn->isOpen(Connection::ChannelB)
   };

   if(channelState[Connection::ChannelA]) {
      atChannelA.setChecked(true);
      atChannelA.setEnabled(channelState[Connection::ChannelB]);
   }
   if(channelState[Connection::ChannelB]) {
      atChannelB.setChecked(true);
      atChannelB.setEnabled(channelState[Connection::ChannelA]);
   }

   // Disable on detached
   if(!conn->isAttached())
   {
      atInitialize.setEnabled(false);
      atChannelA.setEnabled(false);
      atChannelB.setEnabled(false);
   }

   // Run menu
   QAction* result = menu.exec(event->globalPos());

   // Resolve actions
   if(result == mainActions["closeTab"]) {
      removeTab(tabId);
   }

   // Handle changes to channel A
   if(result == &atChannelA) {
       if (result->isChecked()) {
           conn->open(Connection::ChannelA);
       } else {
           conn->close(Connection::ChannelA);
       }
   }

   // Handle changes to channel B
   if(result == &atChannelB) {
       if (result->isChecked()) {
           conn->open(Connection::ChannelB);
       } else {
           conn->close(Connection::ChannelB);
       }
   }

   // Reinitialize?
   if(result == &atInitialize) {
      connection(tabId)->initialize();
   }

   // Update tab
   updateTab(tabId);
}

void ConnectionTabs::paintEvent(QPaintEvent * event)
{
    if (count() > 0) {
        QTabWidget::paintEvent(event);
        return;
    }

    QPainter p(this);
    p.setOpacity(0.25);

    QPixmap pixmap(":/icons/fitkit-bg.png");
    QPoint pt(contentsRect().center());
    pt.setX(pt.x() - pixmap.width() * 0.5);
    pt.setY(pt.y() - pixmap.height() * 0.5);
    p.drawPixmap(pt, pixmap);
}

bool ConnectionTabs::canClose(int tabId)
{
    if(tabId == -1) {
       tabId = currentIndex();
    }

    if(tabId < 0)
       return false;

    // Check if it's not detached
    Connection* conn = connection(tabId);
    if(conn == 0)
       return false;

    // Ask if device is detached
    if(!conn->isAttached())
    {
       // Show dialog
       int ans = mainWindow().showQuestion(
                tr("Connection is busy."),
                tr("<p>Closing the device by force may result in unexpected "
                   "behaviour if it's under operation.</p>"
                   "<p>Do you really want to close the connection?</p>"));

       // Continue only if answer is Yes
       if(ans == QMessageBox::Yes) {
          return true;
       } else {
           return false;
       }
    }

    return true;
}

bool ConnectionTabs::removeTab(int tabId)
{
   if(tabId == -1) {
      tabId = currentIndex();
   }

   if(tabId < 0)
      return false;

   // Check if it's not detached
   Connection* conn = connection(tabId);
   if(conn == 0)
      return false;

   emit(beforeTabRemoved(tabId));

   // Delete widget
   conn->closeAll();
   conn->deleteLater();

   emit(connectionClosed(conn->device()->id()));
   return true;

}

int ConnectionTabs::indexOf(int deviceId)
{
   for(int i = 0; i < count(); i++)
      if(connection(i)->device()->id() == deviceId)
         return i;

   return -1;
}

Connection* ConnectionTabs::connectionFromDeviceId(int deviceId)
{

   int tabId = indexOf(deviceId);
   if (tabId < 0)
      return 0;

   return connection(tabId);
}

void ConnectionTabs::connectionChange(int deviceId)
{
   int tab = indexOf(deviceId);
   if(tab >= 0)
      setCurrentIndex(tab);
}

void ConnectionTabs::connectionError(int deviceId)
{
   // Attach even detached tab
   int tab = indexOf(deviceId);
   if (tab < 0) {
       return;
   }

   qDebug("DEBUG: Connection devid=%d tabid=%d - connection error.",
          deviceId, tab);

   Connection* conn = connection(tab);
   if (conn == 0)
       return;

   emit(beforeTabRemoved(tab));

   // Delete widget
   conn->closeAll();
   conn->deleteLater();

  qDebug("DEBUG: Connection error - finished.");

  emit(connectionClosed(deviceId));
}

#include "connectiontabs.moc"

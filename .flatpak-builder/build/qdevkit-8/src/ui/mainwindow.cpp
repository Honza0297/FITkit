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

#include <QMainWindow>
#include <QSettings>
#include <QStatusBar>
#include <QToolBar>
#include <QMenuBar>
#include <QDialog>
#include <QWidget>
#include <QIcon>
#include <QListView>
#include <QStandardItemModel>
#include <QCloseEvent>
#include <QMessageBox>
#include <QSpinBox>
#include <QDockWidget>
#include <QTimer>
#include <libkitclient/qtapi>
#include <libkitclient/ip>
#include <fcmake/keychain.h>
#include "mainwindow.h"
#include "devicetree.h"
#include "toolbar.h"
#include "trayicon.h"
#include "settings.h"
#include "aboutdialog.h"
#include "closedialog.h"
#include "devicecustomdialog.h"
#include "connectiontabs.h"
#include "actioncollection.h"
#include "scriptengine.h"
#include "qdevicemgr.h"
#include "qdevkit.h"
#include "fktreewidget.h"
#include "tunnel.h"
#include "buildserver.h"

class MainWindowPrivate
{
   public:
      MainWindowPrivate()
      : tabs(0), toolBar(0), actions(0),
        deviceTree(0), appTree(0), tunnels(0), central(0),
        winSize(0), winPos(0), mnConnection(0), mnView(0), mnPanels(0),
        mnSettings(0), mnHelp(0), preparedToClose(false)
      {}

      ConnectionTabs*   tabs;
      ToolBar*          toolBar;
      ActionCollection* actions;
      DeviceTree*       deviceTree;
      FkTreeWidget*     appTree;
	  TunnelService*    tunnels;
      QStackedWidget*   central;
      QSize*            winSize;
      QPoint*           winPos;

      QMenu* mnConnection;
      QMenu* mnView;
      QMenu* mnPanels;
      QMenu* mnSettings;
      QMenu* mnHelp;
      bool preparedToClose;
};

MainWindow::MainWindow(QDevKit *app)
      : QMainWindow(0), Component(app), d ( new MainWindowPrivate() )
{
}

MainWindow::~MainWindow()
{
   if (d->winSize != 0)
      delete d->winSize;
   if (d->winPos != 0)
      delete d->winPos;
   delete d;
}

void MainWindow::init()
{
   // Adjust settings
   setWindowTitle(qApp->applicationName());
   setWindowIcon(QIcon(":/icons/22x22/qdevkit.png"));

   // Create UI
   createActions();
   createMenus();
   createToolBars();
   createStatusBar();
   createDockWidgets();
   createCentralWidget();

   // Register scriptables
   scriptEngine().registerObject("tabs",       d->tabs);
   scriptEngine().registerObject("toolBar",    d->toolBar);
   scriptEngine().registerObject("deviceTree", d->deviceTree);
   scriptEngine().registerObject("appTree",    d->appTree);
   scriptEngine().registerObject("tunnels",    d->tunnels);
}
ActionCollection& MainWindow::actionCollection()
{
   return *d->actions;
}

ConnectionTabs* MainWindow::tabs()
{
   return d->tabs;
}

DeviceTree* MainWindow::deviceTree()
{
   return d->deviceTree;
}

FkTreeWidget* MainWindow::appTree()
{
   return d->appTree;
}

ToolBar* MainWindow::toolBar()
{
   return d->toolBar;
}

TunnelService* MainWindow::tunnels()
{
	return d->tunnels;
}

int MainWindow::showError(const QString& caption, const QString& msg)
{
   return QMessageBox::critical(0, caption, msg);
}

int MainWindow::showQuestion(const QString& caption, const QString& msg)
{
   return QMessageBox::critical(0, caption, msg, QMessageBox::Yes|QMessageBox::No, QMessageBox::No);
}

int MainWindow::showInfoQuestion(const QString& caption, const QString& msg)
{
   return QMessageBox::question(0, caption, msg, QMessageBox::Yes|QMessageBox::No, QMessageBox::No);
}

int MainWindow::showInformation(const QString& caption, const QString& msg)
{
   return QMessageBox::information(0, caption, msg);
}

void MainWindow::showStatus(const QString& msg, int timeout)
{
   return statusBar()->showMessage(msg, timeout);
}

QString MainWindow::requestPassword(QString login, QString host, QString label)
{
	QDialog dlg;
    dlg.setModal(true);
    dlg.setWindowTitle(tr("Enter password"));

    // Content
    QHBoxLayout* ltHeader = new QHBoxLayout;
    QLabel* lbIcon = new QLabel(&dlg);
	if (label.isEmpty()) {
		label = tr("Please enter password.");
	}
    QLabel* lbHead = new QLabel(label, &dlg);
    lbIcon->setPixmap(QPixmap(":/icons/48x48/applications.png"));
    ltHeader->addWidget(lbIcon);
    ltHeader->addWidget(lbHead);

	QString desc;
	if (!login.isEmpty() && host.isEmpty()) {
		desc = tr("No public key was set for ") +
               login + " @ " + host +
               ".<br>";
	}

    QLabel* lbDesc = new QLabel(desc, &dlg);

    QLineEdit* tbPass = new QLineEdit("", &dlg);
    tbPass->setEchoMode(QLineEdit::Password);

    // Controls
    QPushButton* btOk = new QPushButton(QIcon(":/icons/22x22/bt-ok.png"), tr("&Accept"), &dlg);
    QPushButton* btCancel = new QPushButton(QIcon(":/icons/22x22/bt-cancel.png"), tr("&Cancel"), &dlg);
    btOk->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
    btCancel->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
    connect(btOk,     SIGNAL(clicked()), &dlg, SLOT(accept()));
    connect(btCancel, SIGNAL(clicked()), &dlg, SLOT(reject()));

    QHBoxLayout* ltButtons = new QHBoxLayout();
    ltButtons->setAlignment(Qt::AlignCenter);
    ltButtons->addWidget(btOk);
    ltButtons->addWidget(btCancel);

    // Layout
    QVBoxLayout* layout = new QVBoxLayout(&dlg);
    layout->addLayout(ltHeader);
    layout->addWidget(lbDesc);
    layout->addWidget(tbPass);
    layout->addLayout(ltButtons);

	if(dlg.exec() == QDialog::Accepted) {
		return tbPass->text();
    }

	return QString();
}

void MainWindow::addToDock(Qt::DockWidgetArea area, QDockWidget* widget)
{
   addDockWidget(area, widget);
   d->mnPanels->addAction(widget->toggleViewAction());
}

void MainWindow::removeFromDock(QDockWidget* widget)
{
   if(widget != 0)
   {
      d->mnPanels->removeAction(widget->toggleViewAction());
      removeDockWidget(widget);
   }
}

void MainWindow::createDockWidgets()
{
   // Add FITkit apps
   d->appTree = new FkTreeWidget(&app(), this);
   QDockWidget* appsArea = new QDockWidget(tr("Applications"), this);
   appsArea->setObjectName("AppDock");
   appsArea->setWidget(d->appTree);
   addToDock(Qt::LeftDockWidgetArea, appsArea);
}

void MainWindow::createCentralWidget()
{
   // Central widget container
   d->central = new QStackedWidget(this);
   setCentralWidget(d->central);

   // Add pages
   d->tabs = new ConnectionTabs(&app(), this);
   d->central->addWidget(d->tabs);
   
   // Add devices
   d->deviceTree = new DeviceTree(&app(), this);
   d->central->addWidget(d->deviceTree);

   // Connect tree & connections
   connect( d->deviceTree,  SIGNAL(deviceActivated(int)),
            d->tabs,        SLOT(open(int)));

   // Connect stacked widget
   connect( d->tabs,        SIGNAL(tabInserted(int)),
            this,           SLOT(setCentralPage()));
   connect( d->tabs,        SIGNAL(tabRemoved(int)),
            this,           SLOT(setCentralPage()));

   d->deviceTree->showLocal();

   // Show welcome page
   setCentralPage();

}

void MainWindow::createActions()
{
   d->actions         = new ActionCollection(this);

   // Close actions
   ActionCollection& actions = actionCollection();
   actions.addAction("exit", tr("E&xit"), QIcon(":/icons/48x48/exit.png"));
   actions.addAction("closeTab", tr("&Close current"), QIcon(":/icons/48x48/close-current.png"));
   actions["closeTab"]->setEnabled(false);

   // Connection actions
   actions.addAction("addLocal",  tr("Add &local connection"),  QIcon(":/icons/32x32/device-add.png"));
   actions.addAction("addRemote", tr("Add &remote connection"), QIcon(":/icons/32x32/device-network.png"));

   // Application
   actions.addAction("settings", tr("&Settings"), QIcon(":/icons/32x32/settings.png"));

   // Help
   actions.addAction("help",    tr("&Help"),  QIcon(":/icons/22x22/help.png"));
   actions.addAction("about",   tr("&About"), QIcon(":/icons/22x22/qdevkit.png"));
   actions.addAction("aboutqt", tr("About &Qt"));

   // Connect global actions
   connect(actions["exit"],      SIGNAL(triggered()), &app(),  SLOT(close()));
   connect(actions["about"],     SIGNAL(triggered()), this,    SLOT(showAbout()));
   connect(actions["settings"],  SIGNAL(triggered()), this,    SLOT(showSettings()));
   connect(actions["aboutqt"],   SIGNAL(triggered()), qApp,    SLOT(aboutQt()));
   connect(actions["addLocal"],  SIGNAL(triggered()), this,    SLOT(showDeviceDlg()));
   connect(actions["addRemote"], SIGNAL(triggered()), this,    SLOT(showAddRemote()));
}

void MainWindow::createMenus()
{
   ActionCollection& actions = actionCollection();
   QMenuBar* menuBar = new QMenuBar(this);

   // Connection menu
   d->mnConnection = new QMenu(tr("&Connection"), menuBar);
   d->mnConnection->addAction(actions["addLocal"]);
   d->mnConnection->addAction(actions["addRemote"]);
   d->mnConnection->addSeparator();
   d->mnConnection->addAction(actions["closeTab"]);
   d->mnConnection->addSeparator();
   d->mnConnection->addAction(actions["exit"]);
   menuBar->addMenu(d->mnConnection);

   // View menu
   d->mnView   = new QMenu(tr("&View"), menuBar);
   d->mnPanels = new QMenu(tr("&Panels"), d->mnView);
   d->mnView->addMenu(d->mnPanels);
   d->mnView->addSeparator();
   menuBar->addMenu(d->mnView);

   // Settings menu
   d->mnSettings = new QMenu(tr("&Settings"), menuBar);
   d->mnSettings->addAction(actions["settings"]);
   menuBar->addMenu(d->mnSettings);

   // Help menu
   d->mnHelp = new QMenu(tr("&Help"), menuBar);
   d->mnHelp->addAction(actions["help"]);
   d->mnHelp->addSeparator();
   d->mnHelp->addAction(actions["about"]);
   d->mnHelp->addAction(actions["aboutqt"]);
   menuBar->addMenu(d->mnHelp);

   // Add Menu bar
   setMenuBar(menuBar);
}

void MainWindow::createToolBars()
{
   // Create Tool bar
   d->toolBar = new ToolBar(tr("Toolbar"), this);
   d->toolBar->setAllowedAreas(Qt::TopToolBarArea|Qt::BottomToolBarArea);
   d->toolBar->setMovable(true);
   d->toolBar->setObjectName("ToolBar");
   d->toolBar->setIconSize(QSize(32,32));

   // Import actions
   ActionCollection& actions = actionCollection();
   QStringList toImport = QStringList() << "addLocal" << "addRemote" << "closeTab" << "settings";

   d->toolBar->actionCollection().importActions(actions, toImport);

   // Add ToolBar
   addToolBar(d->toolBar);
}

void MainWindow::createStatusBar()
{
	// Create Status bar
	QMainWindow::setStatusBar(new QStatusBar);

	// Create tunnel service
        d->tunnels = new TunnelService(this, this);
	statusBar()->addPermanentWidget(d->tunnels->widget());
	QTimer::singleShot(50, d->tunnels, SLOT(start()));

    // Listen to settings reload
    connect(&app(), SIGNAL(settingsReloaded()), d->tunnels, SLOT(reloadSettings()));
    connect(d->tunnels, SIGNAL(created()), &buildServer(), SLOT(start()));
    connect(d->tunnels, SIGNAL(stopped()), &buildServer(), SLOT(stop()));
}

bool MainWindow::canClose(bool silent)
{
   // Save settings
   saveSettings();

   if(d->tabs->count() > 0)
   {
      QSettings set;
      if(set.value("General/AskBeforeClose", true).toBool())
      {
         if(silent)
         {
            CloseDialog dlg;
            if(dlg.exec() == QDialog::Rejected)
               return false;

            if(dlg.cbDontAsk->isChecked())
               set.setValue("General/AskBeforeClose", false);
         }

         // Now ask each tab if it's OK to close
         int count = d->tabs->count();
         for(int i = 0; i < count; i++) {
            if(!d->tabs->canClose(i)) {
               return false;
            }
         }

         return true;
      }
   }

   // Default is true
   return true;
}

void MainWindow::showAbout()
{
   AboutDialog dlg;
   dlg.setSizeGripEnabled(false);
   dlg.exec();
}

QString MainWindow::applicationVersion()
{
   return QString(__VERSION);
}

QString MainWindow::qtVersion(bool runtime)
{
   if (runtime) { //runtime
     return QString(qVersion());
   } else { //compiled
     return QString(QT_VERSION_STR);
   }
}

void MainWindow::showDeviceDlg(int deviceId)
{
   DeviceCustomDialog dlg(&app(), this);

   if(deviceId != -1)
      dlg.deviceTree()->selectDevice(deviceId);

   if(dlg.exec() == QDialog::Accepted)
   {
      // Apply device settings
      QtAPI::Device* dev = deviceMgr().acquire(dlg.deviceTree()->selectedDevice());

      // Prepare connection
      Connection* conn = new Connection(&app(), dev);
      Connection::Channel id = Connection::ChannelA;
      QtAPI::IOChannel* ch = dev->channelA();
      if(dlg.channel() == Device::ChannelB) {
         ch = dev->channelB();
         id = Connection::ChannelB;
      }

      // Set custom properties
      ch->setBaudRate(dlg.baudRate());
      ch->configure(dlg.bits(), dlg.stopBits(), dlg.parity());
      conn->setChannel(ch, id);
      conn->open(id);

      // Initialize channel
      conn->initialize();
      conn->startPolling();
      d->tabs->append(conn);
   }
}

void MainWindow::showSettings()
{
   // Prepare container
   QDialog* dlg = new QDialog;
   QVBoxLayout* lt = new QVBoxLayout(dlg);
   dlg->setWindowTitle(tr("Settings"));
   dlg->setWindowIcon(QIcon(":/icons/32x32/settings.png"));

   // Create settings
   Settings* settings = new Settings(&app(), dlg);
   lt->addWidget(settings);

   // Connect
   connect(settings, SIGNAL(accepted()), dlg, SLOT(accept()));
   connect(settings, SIGNAL(rejected()), dlg, SLOT(reject()));

   dlg->exec();
   dlg->deleteLater();
}

void MainWindow::showAddRemote()
{
    // Prepare container
    QDialog dlg(this);
    dlg.setWindowTitle(tr("Add remote device"));
    dlg.setWindowIcon(QIcon(":/icons/32x32/device-network.png"));

    // Add widgets
    QVBoxLayout* dlgLayout = new QVBoxLayout(&dlg);
    QGridLayout* lt = new QGridLayout;
    QLabel* lbAddr = new QLabel(tr("Host address:"));
    lt->addWidget(lbAddr, 0, 0);

    QSettings set;
	 QLineEdit* lnAddr = new QLineEdit(set.value("Remote/DefaultHost", "localhost").toString());
    lt->addWidget(lnAddr, 0, 1);
    QLabel* lbPort = new QLabel(":");
    lt->addWidget(lbPort, 0, 2);
    QSpinBox* sbPort = new QSpinBox;
    sbPort->setRange(1, 65535);
    sbPort->setValue(set.value("Remote/DefaultPort", IPBackend::Port).toInt());
    lt->addWidget(sbPort, 0, 3);
    dlgLayout->addLayout(lt);

    // Error display
    QLabel* lbError = new QLabel;
    lbError->setMargin(4);
    dlgLayout->addWidget(lbError);

    // Add buttons
    QDialogButtonBox* buttons = new QDialogButtonBox;
    buttons->addButton(QDialogButtonBox::Ok);
    buttons->addButton(QDialogButtonBox::Cancel);
    connect(buttons, SIGNAL(accepted()), &dlg, SLOT(accept()));
    connect(buttons, SIGNAL(rejected()), &dlg, SLOT(reject()));
    dlgLayout->addWidget(buttons);

    ClientSocket* client = 0;
    while (true) {

        // Process background events
        QApplication::processEvents();

        // Run dialog
        if (dlg.exec() != QDialog::Accepted)
            break;

        // Display error
        lbError->setText(QString("<center><i>%1%2:%3 ...</i></center>")
                         .arg(tr("Connecting to "))
                         .arg(lnAddr->text())
                         .arg(sbPort->value()));

		  set.setValue("Remote/DefaultHost", lnAddr->text());
		  set.setValue("Remote/DefaultPort", sbPort->value());
	
		  // Accepted, connect
        QByteArray addr(lnAddr->text().toLatin1());
        qDebug("Connecting to remote %s:%d ...", addr.data(), sbPort->value());
        client = deviceMgr().network()->connect(addr.data(), sbPort->value());
        if (client != 0) {

            // Append host
            client->lock();
            client->setFlags(client->flags() & !IPBackend::Discovered);
            client->unlock();
            deviceTree()->insertClient(client);
            break;
        }

        // Display error
        lbError->setText(QString("<center><i>%1</i></center>")
                         .arg(tr("Failed to connect to remote host.")));
    }
}

void MainWindow::updateSVN()
{
   // Prepare container
   QDialog dlg;
   QVBoxLayout lt(&dlg);
   dlg.setWindowTitle(tr("Settings"));
   dlg.setWindowIcon(QIcon(":/icons/32x32/settings.png"));

   // Create settings
   Settings* settings = new Settings(&app(), &dlg);
   lt.addWidget(settings);
   settings->updateSVN();

   // Connect
   connect(settings, SIGNAL(accepted()), &dlg, SLOT(accept()));
   connect(settings, SIGNAL(rejected()), &dlg, SLOT(reject()));

   dlg.exec();
}

void MainWindow::setCentralPage()
{
   if(d->tabs->count() == 0)
      d->central->setCurrentIndex(1);
   else
      d->central->setCurrentIndex(0);
}

bool MainWindow::prepareToClose()
{
   // Check state
   if (d->preparedToClose) {
       return true;
   }

   // Attempt to close all tabs
   int tabcount = d->tabs->count();
   for(int i = 0; i < tabcount; i++) {
      if(!d->tabs->removeTab(i)) {
         return false;
      }
   }

   // Stop polling for new devices
   deviceMgr().stop();

   // Mark window as prepared
   d->preparedToClose = true;
   return true;
}

void MainWindow::closeEvent(QCloseEvent *event)
{

   // Always close if tray is visible
   if(tray().isVisible())
   {
      event->accept();
      return;
   }

   // Already prepared to close
   if (d->preparedToClose) {
       event->accept();
       return;
   }

   if (app().close()) {
       event->accept();
   } else {
       event->ignore();
   }
}

void MainWindow::moveEvent(QMoveEvent *event)
{
   Q_UNUSED(event);
   if (! windowState().testFlag(Qt::WindowMaximized))
   {
      if (d->winPos == 0)
         d->winPos = new QPoint();
      *d->winPos = pos();
   }
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
   Q_UNUSED(event);
   if (! windowState().testFlag(Qt::WindowMaximized))
   {
      if (d->winSize == 0)
         d->winSize = new QSize();
      *d->winSize = size();
   }
}

void MainWindow::saveSettings()
{
   QSettings set;

   // Window settings
   set.setValue("MainWindow/State", saveState());
   if (d->winSize != 0)
      set.setValue("MainWindow/Size",  *d->winSize);
   if (d->winPos != 0)
      set.setValue("MainWindow/Pos",   *d->winPos);
   set.setValue("MainWindow/Maximized", windowState().testFlag(Qt::WindowMaximized));
}

void MainWindow::loadSettings()
{
   QSettings set;

   // Window settings
   if(set.contains("MainWindow/State"))
   {
      resize(set.value("MainWindow/Size").toSize());
      move(set.value("MainWindow/Pos").toPoint());

      if(set.value("MainWindow/Maximized").toBool())
         setWindowState(windowState() ^ Qt::WindowMaximized);

      restoreState(set.value("MainWindow/State").toByteArray());
   }
   else
   {
      // Defaults
      resize(800, 600);
   }
}

void MainWindow::restoreSettings()
{
   QSettings set;
   if(set.contains("MainWindow/State"))
      restoreState(set.value("MainWindow/State").toByteArray());
}

#include "mainwindow.moc"

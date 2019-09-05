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
#include <QSettings>
#include <QDialog>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QMessageBox>
#include <QHash>
#include <QContextMenuEvent>
#include <QPushButton>
#include <QLabel>
#include <QHeaderView>
#include <fcmake/tree.h>
#include <fcmake/app.h>
#include <fcmake/category.h>
#include <fcmake/keychain.h>
#include <libkitclient/qtapi>
#include "fileselector.h"
#include "fktreewidget.h"
#include "mainwindow.h"
#include "devicetree.h"
#include "scriptengine.h"
#include "script.h"
#include "qdevicemgr.h"
#include "qdevkit.h"
#include "connectiontabs.h"
#include "processjob.h"
#include "actioncollection.h"
#include "components.h"
#include "rebuilddialog.h"
#include "jobscheduler.h"
#include "rbuildjob.h"
#include "remoteconfig.h"
#include "buildserver.h"

class FlashItem
{
   public:
      FlashItem()
      {}

      FlashItem(const QString& iname, bool iforce)
      : name(iname), force(iforce)
      {
      }

      QString name;
      bool force;
};

class FkTreeWidget::Private
{
   public:
      Private()
      : widget(0), current(0), tree(0), categories(0), menu(0), treeMenu(0),
        actions(0), btRefresh(0), timerId(-1)
      {}

      QTreeWidget* widget;
      FCMake::App* current;
      FCMake::Tree* tree;
      QList<FCMake::App*> list;
      QHash<QTreeWidgetItem*, FCMake::App*> map;
      QHash<QAction*, FCMake::App*> menuMap;
      QHash<ProcessJob*, FlashItem> flashJobs;
      QHash<ProcessJob*, FCMake::App*> buildJobs;

      FCMake::CategoryList* categories;

      QMenu* menu;
      QMenu* treeMenu;
      ActionCollection* actions;
      QPushButton* btRefresh;

      int timerId;
};

FkTreeWidget::FkTreeWidget(QDevKit* app, QWidget* parent)
   : QWidget(parent), Component(app), d ( new Private() )
{
   // Create app tree
   d->actions = new ActionCollection(this);
   d->tree = new FCMake::Tree();

   // Verify settings
   QSettings set;
   if(set.contains("KitApps/TreeLocation"))
      d->tree->setRoot(set.value("KitApps/TreeLocation").toString());

   // Create menus
   createMenu();
   createTreeMenu();

   // Create content
   createWidgets();
   triggerUpdate(100);
   d->widget->setIconSize(QSize(22,22));

   // Connect
   //connect(d->widget, SIGNAL(itemEntered(QTreeWidgetItem*, int)), this, SLOT(updateCurrent(QTreeWidgetItem*)));
   connect(d->widget, SIGNAL(itemClicked(QTreeWidgetItem*, int)), this, SLOT(updateCurrent(QTreeWidgetItem*)));
   connect(d->widget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*, int)),   this, SLOT(itemExpand(QTreeWidgetItem*, int)));
   connect(d->widget, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(contextMenuRequest(QPoint)));
}

FkTreeWidget::~FkTreeWidget()
{
   clear();
   delete d->tree;
   delete d;
}

void FkTreeWidget::timerEvent(QTimerEvent* event)
{
   Q_UNUSED(event);
   rescan();
   killTimer(d->timerId);
   d->timerId = -1;
}

void FkTreeWidget::triggerUpdate(int msecs)
{
   if(d->timerId != -1)
      killTimer(d->timerId);

   d->timerId = startTimer(msecs);
}


QList<FCMake::App*> FkTreeWidget::appList() const
{
   return d->list;
}

void FkTreeWidget::clean(FCMake::App::CleanOptions options)
{
   FCMake::App* app = currentApp();
   if(app == 0)
      return;

   // Clean application
   qDebug("Cleaning application %s...", app->name().toLatin1().data());
   app->clean(options);

   if (d->widget->currentItem() != 0)
      updateItemState(d->widget->currentItem(), false);
}

void FkTreeWidget::updateCurrent(QTreeWidgetItem* item)
{
   static QTreeWidgetItem* prev = 0;
   if(prev == item)
      return;

   if((prev = item) == 0)
      setCurrentApp(0);
   else
      setCurrentApp(d->map[item]);

}

ProcessJob* FkTreeWidget::buildfg()
{
   return build(true);
}


ProcessJob* FkTreeWidget::build(bool showModal)
{
   FCMake::App* app = currentApp();
   if (app == 0)
      return 0;

   // Guard app rebuild
   if (d->buildJobs.key(app) != 0)
      return d->buildJobs.key(app);

   // Is remote default?
   QSettings set;
   if (set.value("Remote/IsRBuildDefault").toBool()) {
       return remoteBuild(showModal);
   }

   QString makePath = FileSelector::absolutePath(set.value("General/MakeExec","").toString(), FileSelector::File);
   QString fcmakePath = FileSelector::absolutePath(set.value("General/FCMakeExec","").toString(), FileSelector::File);
   QString fkflashPath = FileSelector::absolutePath(set.value("General/FKFlashExec","").toString(), FileSelector::File);

   if (makePath.isEmpty())
   {
      mainWindow().showError(
         tr("GNU make not found!"),
         tr("Please download GNU MAKE (e.g. mingw32-make) and set correct path in General settings.")
         );
      return 0;
   }

   if (app->needXST())
   {
      if (!checkXST())
         return 0;
   }

   if (!checkGCC())
      return 0;

   #ifdef __WIN32
   if (!QFile::exists("env:rm.exe") && !QFile::exists("rm.exe"))
   {
   #else
   if (!QFile::exists("env:rm"))
   {
   #endif
      mainWindow().showError(
         tr("RM not found!"),
         tr("Please download and install GNU RM utility. If the utility is already installed, please check PATH variable.")
         );
      return 0;
   }

   // Reparse to reflect changes
   app->parse();

   // Update Makefile
   app->createMakefile(fcmakePath, fkflashPath);

   // Prepare job
   ProcessJob* job = jobScheduler().create<ProcessJob>(QString("Build: %1").arg(app->name()));
   job->setHighlighter("job.make");
   job->setModal(showModal);
   // Add states
   job->addState("\\*\\sCOMPILE");
//   job->addState("\\*\\sLINKING");
   job->addState("\\*\\sCONVERTING");
   job->addState("\\*\\sSYNTHESIZE");
   job->addState("\\*\\s+HDL Compilation\\s+\\*");
   job->addState("\\*\\s+Design Hierarchy Analysis\\s+\\*");
   job->addState("\\*\\s+HDL Analysis\\s+\\*");
   job->addState("\\*\\s+HDL Synthesis\\s+\\*");
   job->addState("\\*\\s+Advanced HDL Synthesis\\s+\\*");
   job->addState("\\*\\s+Low Level Synthesis\\s+\\*");
   job->addState("\\*\\s+Partition Report\\s+\\*");
   job->addState("\\*\\s+Final Report\\s+\\*");
   job->addState("\\*\\sNGDBUILD \\[EDIF -> NGD\\]");
   job->addState("\\*\\sMAP \\[");
   job->addState("\\*\\sPLACE \\& ROUTE \\[");
   job->addState("Starting Router");
   job->addState("bitgen -w -g");
   job->addState("Running DRC\\.");
   job->addState("Creating bit map\\.\\.\\.");

   // Run process
   job->setDirectory(app->path());
   job->setCommand(makePath);
   jobScheduler().schedule(job);

   // Add to pending
   d->buildJobs.insert(job, app);
   connect(job, SIGNAL(closed(JobWidget*)), this, SLOT(buildFinished(JobWidget*)));
   return job;
}

ProcessJob* FkTreeWidget::remoteBuild(bool showModal)
{
   FCMake::App* app = currentApp();
   if (app == 0)
      return 0;

   // Guard app rebuild
   if (d->buildJobs.key(app) != 0)
      return d->buildJobs.key(app);

   // Reparse to reflect changes
   app->parse();

   // Check build server
   if (!buildServer().isConnected()) {
       mainWindow().showError(tr("Build server not connected"),
                   tr("Connection to build server is not configured.\n") +
		   tr("Please see section 'Network' in settings."));
	   return 0;
   }

   // Default identity
   return startRemoteBuild(app, showModal);
}

ProcessJob* FkTreeWidget::startRemoteBuild(FCMake::App* app, bool showModal)
{
    // Prepare job
    RBuildJob* job = jobScheduler().create<RBuildJob>(QString("Remote Build: %1").arg(app->name()));
    job->setHighlighter("job.make");
    job->setModal(showModal);
    // Add states
    job->addState("Preparing build environment.");
    job->addState("Syncing source files.");
    job->addState("\\*\\sCOMPILE");
 //   job->addState("\\*\\sLINKING");
    job->addState("\\*\\sCONVERTING");
    job->addState("\\*\\sSYNTHESIZE");
    job->addState("\\*\\s+HDL Compilation\\s+\\*");
    job->addState("\\*\\s+Design Hierarchy Analysis\\s+\\*");
    job->addState("\\*\\s+HDL Analysis\\s+\\*");
    job->addState("\\*\\s+HDL Synthesis\\s+\\*");
    job->addState("\\*\\s+Advanced HDL Synthesis\\s+\\*");
    job->addState("\\*\\s+Low Level Synthesis\\s+\\*");
    job->addState("\\*\\s+Partition Report\\s+\\*");
    job->addState("\\*\\s+Final Report\\s+\\*");
    job->addState("\\*\\sNGDBUILD \\[EDIF -> NGD\\]");
    job->addState("\\*\\sMAP \\[");
    job->addState("\\*\\sPLACE \\& ROUTE \\[");
    job->addState("Starting Router");
    job->addState("bitgen -w -g");
    job->addState("Running DRC\\.");
    job->addState("Creating bit map\\.\\.\\.");
    job->addState("Creating bit map\\.\\.\\.");
    job->addState("Remote build finished.");

    // Run process
    job->setTask(app);
    jobScheduler().schedule(job);

    // Add to pending
    d->buildJobs.insert(job, app);
    connect(job, SIGNAL(closed(JobWidget*)), this, SLOT(buildFinished(JobWidget*)));
    return job;
}

void FkTreeWidget::updateItemState(QTreeWidgetItem* item, bool compiled)
{
   QBrush brush;
   QColor color;
   color.setRgb(0,0,0);
   if (!compiled)
      color.setRgb(128,128,128);
   brush.setColor(color);
   item->setForeground(0, brush);
   //item->setDisabled(!compiled);
}

void FkTreeWidget::buildFinished(JobWidget* job)
{
   // Get process job
   ProcessJob* pjob = 0;
   if((pjob = qobject_cast<ProcessJob*>(job)) == 0)
       return;

   // Get process app
   FCMake::App* app = 0;;
   if((app = d->buildJobs.take(pjob)) == 0)
       return;

   // Reparse
   app->parse();

   // Set item state
   QTreeWidgetItem* item = 0;
   if ((item = d->map.key(app)) != 0)
      updateItemState(item, app->isCompiled());

   // Flash any pending jobs
   if(!d->flashJobs.contains(pjob)) {
       return;
   }

   FlashItem fjob = d->flashJobs.take(pjob);
   qDebug("Flashing pending job...");
   setCurrentApp(app);
   flash(fjob.force, fjob.name, true);
   (*d->actions)["flash"]->setEnabled(true);
}

void FkTreeWidget::createWidgets()
{
   // Initialize QTreeWidget
   d->widget = new QTreeWidget(this);
   d->widget->setAlternatingRowColors(true);
   d->widget->setMouseTracking(true);
   d->widget->setAnimated(true);
   d->widget->setContextMenuPolicy(Qt::CustomContextMenu);

   QTreeWidgetItem* header = new QTreeWidgetItem();
   header->setText(0, tr("FITKit applications"));
   header->setIcon(0, QIcon(":/icons/22x22/folder.png"));
   d->widget->setHeaderItem(header);

   // Initialize controls
   d->btRefresh = new QPushButton(QIcon(":/icons/22x22/refresh.png"), "", this);
   d->btRefresh->setFixedWidth(26);
   d->btRefresh->setFixedHeight(26);
   d->btRefresh->setToolTip(tr("Refresh tree"));

   connect(d->btRefresh, SIGNAL(clicked()), this, SLOT(rescan()));

   // Set layout
   QHBoxLayout* ltButtons = new QHBoxLayout();
   ltButtons->setAlignment(Qt::AlignRight);
   ltButtons->addWidget(d->btRefresh);

   QVBoxLayout* ltApp = new QVBoxLayout(this);
   ltApp->addWidget(d->widget);
   ltApp->addLayout(ltButtons);
}

void FkTreeWidget::createMenu()
{
   d->menu = new QMenu(this);
   d->menu->setTitle(tr("Applications"));

   // Prepare actions
   ActionCollection& actions = *d->actions;
   actions.addAction("flash",  tr("&Flash"),  QIcon(":/icons/22x22/next.png"));
   actions.addAction("force",  tr("Flash (forced)"), QIcon(":/icons/22x22/next.png"));
   actions.addAction("build",  tr("B&uild"),  QIcon(":/icons/22x22/build.png"));
   actions.addAction("buildfg",  tr("&Build (on foreground)"),  QIcon(":/icons/22x22/build.png"));
   actions.addAction("rbuild", tr("Remote bu&ild"), QIcon(":/icons/22x22/network.png"));

   actions.addAction("clean",  tr("&Clean (All files)"),   QIcon(":/icons/22x22/undo.png"));
   actions.addAction("cleanmcu",  tr("Clean (MCU files)"),   QIcon(":/icons/22x22/undo.png"));
   actions.addAction("cleanfpga",  tr("Clean (FPGA files)"),   QIcon(":/icons/22x22/undo.png"));

   actions.addAction("readme", tr("&Readme"), QIcon(":/icons/22x22/help.png"));
   actions.addAction("vsim",    tr("Run &simulation (ModelSIM)"), QIcon(":/icons/22x22/next.png"));
   actions.addAction("isim",    tr("Run &simulation (ISIM)"), QIcon(":/icons/22x22/next.png"));
   actions.addAction("ise",    tr("Open project in &ISE"), QIcon(":/icons/22x22/next.png"));

   actions.addAction("showdoc", tr("Show &documentation"), QIcon(":/icons/22x22/help.png"));

   // Bind actions
   connect(actions["flash"],    SIGNAL(triggered()), this, SLOT(flash()));
   connect(actions["force"],    SIGNAL(triggered()), this, SLOT(flashForced()));
   connect(actions["build"],    SIGNAL(triggered()), this, SLOT(build()));
   connect(actions["buildfg"],  SIGNAL(triggered()), this, SLOT(buildfg()));
   connect(actions["rbuild"],   SIGNAL(triggered()), this, SLOT(remoteBuild()));
   connect(actions["clean"],    SIGNAL(triggered()), this, SLOT(clean()));
   connect(actions["cleanmcu"], SIGNAL(triggered()), this, SLOT(cleanMcu()));
   connect(actions["cleanfpga"],SIGNAL(triggered()), this, SLOT(cleanFpga()));
   connect(actions["readme"],   SIGNAL(triggered()), this, SLOT(showReadme()));
   connect(actions["showdoc"],  SIGNAL(triggered()), this, SLOT(showRstDoc()));
   connect(actions["vsim"],      SIGNAL(triggered()), this, SLOT(runModelSIM()));
   connect(actions["isim"],      SIGNAL(triggered()), this, SLOT(runISIM()));
   connect(actions["ise"],      SIGNAL(triggered()), this, SLOT(runXilinxIse()));

   // Setup menu
   d->menu->addAction(actions["readme"]);
   d->menu->addAction(actions["showdoc"]);
   d->menu->addSeparator();
   d->menu->addAction(actions["flash"]);
   d->menu->addAction(actions["force"]);
   d->menu->addSeparator();
   d->menu->addAction(actions["build"]);
   d->menu->addAction(actions["buildfg"]);
   d->menu->addAction(actions["rbuild"]);
   d->menu->addSeparator();
   d->menu->addAction(actions["clean"]);
   d->menu->addAction(actions["cleanmcu"]);
   d->menu->addAction(actions["cleanfpga"]);
   d->menu->addSeparator();
   d->menu->addAction(actions["vsim"]);
   d->menu->addAction(actions["isim"]);
   d->menu->addAction(actions["ise"]);
}

void FkTreeWidget::showRstDoc()
{
   FCMake::App* app = currentApp();
   if(app == 0)
      return;

   if (!components().browser())
   {
      mainWindow().showError(
         tr("reST Browser component not found!"),
         tr("Please install reST Browser plugin")
      );

      return;
   }

   // Reparse to reflect changes
   app->parse();

   // Show doc
   if (app->hasDocumentation())
      components().browser()->browse(app->documentationPath(), app->name());
}

void FkTreeWidget::showReadme()
{
   FCMake::App* app = currentApp();
   if(app == 0)
      return;

   QDialog dlg(this);
   dlg.setWindowTitle(QString("Readme (%1)").arg(app->name()));

   QFrame frLine;
   frLine.setFrameStyle(QFrame::HLine);
   QLabel lbHeading(tr("<h2>Readme: %1</h2>").arg(app->name()));
   QLabel lbContent(app->readme());
   QPushButton btClose(QIcon(":/icons/22x22/bt-ok.png"), tr("OK"));
   btClose.setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);

   QVBoxLayout lt(&dlg);
   lt.addWidget(&lbHeading);
   lt.addWidget(&frLine);
   lt.addWidget(&lbContent);
   lt.addWidget(&btClose, Qt::AlignCenter);

   connect(&btClose, SIGNAL(clicked()), &dlg, SLOT(accept()));

   dlg.exec();
}

void FkTreeWidget::createTreeMenu()
{
   d->treeMenu = new QMenu(this);
   d->treeMenu->setTitle(tr("Flash"));
   d->treeMenu->setIcon(QIcon(":/icons/22x22/next.png"));

   connect(this,        SIGNAL(updated()), this, SLOT(updateTreeMenu()));
   connect(d->treeMenu, SIGNAL(hovered(QAction*)), this, SLOT(menuHover(QAction*)));

   updateTreeMenu();
}

void FkTreeWidget::menuHover(QAction* a)
{
   // Optimize, execute only on action switch
   static QAction* prevAction = 0;
   if(prevAction == a)
      return;

   // Only for mapped actions
   if(!d->menuMap.contains(a))
      return;

   prevAction = a;
   setCurrentApp(d->menuMap[a]);
}

void FkTreeWidget::updateTreeMenu()
{
   d->treeMenu->clear();
   d->menuMap.clear();

   ActionCollection& actions = *d->actions;

   foreach(FCMake::App* app, d->list)
   {
      // Append menu
      QMenu* menu = new QMenu(app->name(), d->treeMenu);
      d->menuMap.insert(menu->menuAction(), app);
      d->treeMenu->addMenu(menu);

      // Add default actions
      menu->addAction(actions["flash"]);
      menu->addAction(actions["force"]);
      menu->addSeparator();
      menu->addAction(actions["readme"]);
/*
      menu->addSeparator();
      menu->addAction(actions["build"]);
      menu->addAction(actions["buildfg"]);
      menu->addAction(actions["clean"]);
      menu->addAction(actions["sim"]);
*/
   }
}

QMenu* FkTreeWidget::menu()
{
   return d->menu;
}

QMenu* FkTreeWidget::treeMenu()
{
   return d->treeMenu;
}

void FkTreeWidget::rescan()
{
   // Terminate all pending jobs
   const QList<ProcessJob*> keys = d->buildJobs.keys();
   foreach(ProcessJob* pjob, keys)
      if (pjob != 0)
         QMetaObject::invokeMethod(pjob, "terminate");

   d->flashJobs.clear();

   // Update location
   QString prev;
   if(d->widget->currentItem())
      prev = d->widget->currentItem()->text(0);

   QSettings set;
   d->tree->setRoot(set.value("KitApps/TreeLocation").toString());

   // Reload tree
   clear();
   populate();
   emit(updated());

   // Set old item
   setCurrentApp(0);
   if(!prev.isEmpty())
   {
      QList<QTreeWidgetItem*> items = d->widget->findItems(prev, Qt::MatchRecursive);
      if(items.size() > 0)
      {
         d->widget->setCurrentItem(items[0]);
         updateCurrent(items[0]);
      }
   }
}

void FkTreeWidget::contextMenuRequest(const QPoint &pos)
{
   QTreeWidgetItem* item = d->widget->itemAt(pos);
   if (item == 0 || !d->map.contains(item))
      return;

   //select the item under cursor (Qt didn't select item if a popup has been visible)
   d->widget->setCurrentItem(item);
   updateCurrent(item);

   FCMake::App* app = currentApp();
   if(app == 0)
      return;

   // Run menu
   QPoint mpos = pos;
   //shift menu (tree->mapToGlobal ignores header)
   mpos += QPoint(2, 2 + d->widget->header()->height());
   d->menu->popup(d->widget->mapToGlobal(mpos));
}

FCMake::Tree* FkTreeWidget::tree() const
{
   return d->tree;
}

void FkTreeWidget::clear()
{
   if(d->categories != 0)
   {
      foreach(FCMake::Category* cat, *d->categories)
         delete cat;

      delete d->categories;
      d->categories = 0;
   }

   d->widget->clear();
   d->map.clear();
   d->list.clear();
   d->buildJobs.clear();
}

void FkTreeWidget::itemExpand(QTreeWidgetItem* item, int col)
{
	Q_UNUSED(col);

	// Only second level items
	if (item->parent() != 0) {
		flash();
	}
}

void FkTreeWidget::populate()
{
   // Verify settings
   qDebug("FkTreeWidget: populating tree from %s", d->tree->root().absolutePath().toStdString().c_str());
   if(!d->tree->isValid())
      return;

   // Clear old list first
   clear();
   d->categories = d->tree->categories();

   QString toolTip = tr("<p>%1</p>"
                        "<b>Author:</b> %2<br>"
                        "<b>Email:</b> <a href='mailto:%3'>%3</a><br>"
                        "<b>Revision:</b> <i>%4</i><br>");

   QTreeWidgetItem *item = 0, *itemCat = 0;
   foreach(FCMake::Category* cat, *d->categories)
   {
      QString icon = QString(":/icons/32x32/category-")
                     .append(cat->icon())
                     .append(".png");

      if(!QFile::exists(icon))
         icon = QString(":/icons/32x32/category-default.png");

      cat->findApps();
      itemCat = new QTreeWidgetItem(d->widget);
      itemCat->setText(0, cat->name());
      itemCat->setIcon(0, QIcon(icon));
      d->widget->addTopLevelItem(itemCat);

      for(FCMake::Category::iterator app = cat->begin(); app != cat->end(); ++app)
      {
         if((*app)->parse())
         {
            item = new QTreeWidgetItem();
            updateItemState(item, (*app)->isCompiled());

            d->map.insert(item, (*app));
            d->list.append((*app));

            item->setText(0, (*app)->name());
            item->setToolTip(0, QString(toolTip).arg((*app)->description(), (*app)->author(), (*app)->email(), (*app)->revision()));
            QSize hint(itemCat->sizeHint(0));
            hint.setHeight(d->widget->iconSize().height() + 4);
            item->setSizeHint(0, hint);
            itemCat->addChild(item);

         }
      }
   }
}

FCMake::App* FkTreeWidget::currentApp()
{
   return d->current;
}

bool FkTreeWidget::setCurrentApp(FCMake::App* app)
{
   d->current = app;

   // Update actions
   if(app == 0)
      return true;

   bool isCompiled = app->isCompiled();
   ProcessJob* appJob = d->buildJobs.key(app);
   d->actions->action("flash")->setEnabled(isCompiled && d->flashJobs.isEmpty());
   d->actions->action("force")->setEnabled(isCompiled && d->flashJobs.isEmpty());
   d->actions->action("clean")->setEnabled((!app->isBinShared()) && (appJob == 0));
   d->actions->action("cleanmcu")->setEnabled(appJob == 0);
   d->actions->action("cleanfpga")->setEnabled((!app->isBinShared()) && (appJob == 0));
   d->actions->action("build")->setEnabled(appJob == 0);
   d->actions->action("buildfg")->setEnabled(appJob == 0);
   d->actions->action("readme")->setEnabled(app->hasReadme());
   d->actions->action("showdoc")->setEnabled(app->hasDocumentation());
   d->actions->action("showdoc")->setVisible(components().browser() != 0);
   d->actions->action("vsim")->setEnabled(app->hasModelSimScript());
   d->actions->action("isim")->setEnabled(app->hasISimScript());
   d->actions->action("ise")->setEnabled(appJob == 0);

   return true;
}

bool FkTreeWidget::setCurrentApp(const QString& app)
{
   QList<QTreeWidgetItem*> match = d->widget->findItems(app, Qt::MatchFixedString);
   if(match.size() > 0)
   {
      setCurrentApp(d->map[match[0]]);
      return true;
   }

   return false;
}

bool FkTreeWidget::flash(QtAPI::Device* device, bool force, bool onlyFlash)
{
   FCMake::App* app = currentApp();
   if(app == 0)
      return false;

   if(!components().flash())
   {
      mainWindow().showError(
         tr("Flash component not found!"),
         tr("Please install suitable flashing component "
            "like FKFlash plugin.")
            );

      return false;
   }

   // Flash app
   setEnabled(false);
   components().flash()->flash(device, app->name(), app->binFilePath(), app->hexFile1Path(), app->hexFile2Path(), force);
   setEnabled(true);
   
   // Run terminal
   if (!onlyFlash) {
       ConnectionTabs* tabs = mainWindow().tabs();
       if (tabs->indexOf(device->id()) == -1) {
           tabs->open(device->id());
	   }
   }   

   return true;
}

bool FkTreeWidget::flash(bool force, const QString& app, bool rebuilded)
{
   // Check item
   if (!app.isEmpty())
      setCurrentApp(app);

   // Select item for given app
   bool found_item = false;
   for(QHash<QTreeWidgetItem*,FCMake::App*>::iterator it = d->map.begin(); it != d->map.end(); ++it)
   {
      if(it.value() == d->current)
      {
	     found_item = true;
         d->widget->setCurrentItem(it.key());
         break;
      }
   }
   
   if(d->widget->currentItem() == 0 || !found_item)
       return false;
   if(d->widget->currentItem()->isDisabled() || d->widget->currentItem()->childCount() > 0)
       return false;

   // Handle update dialog
   QSettings set;
   bool recompile = !d->current->isCompiled();
   bool isUpdated = d->current->isUpdated();
   bool askBeforeFlash = set.value("General/AskBeforeFlash", true).toBool();

   if ((!recompile) && (!isUpdated && askBeforeFlash))
   {
      // Do not run if already rebuilded
      if(rebuilded)
      {
         qDebug("Previous rebuild failed.");
         return false;
      }

      // Run rebuild dialog
      qDebug("Running rebuild dialog.");
      RebuildDialog dlg;
      dlg.exec();

      if(dlg.cbDontAsk->isChecked())
         set.setValue("General/AskBeforeFlash", false);


      QDialogButtonBox::StandardButton getResult();

      // If want to rebuild
      if (dlg.getResult() == QDialogButtonBox::Yes)
         recompile = true;

      // Cancel button
      if(dlg.getResult() == QDialogButtonBox::Cancel)
         return false;
   }

   if (recompile)
   {
      // Do not run if already rebuilded
      if(rebuilded) // previous rebuild failed, return
         return false;

      // Run job synchronously
      ProcessJob* buildJob = 0;
      if ((buildJob = build()) == 0)
      {
         qDebug("flash(): can't start buildJob");
         return false;
      }

      // Set build job pending
      (*d->actions)["flash"]->setEnabled(false);
      connect(buildJob, SIGNAL(closed(JobWidget*)), this, SLOT(buildFinished(JobWidget*)));
      d->flashJobs.insert(buildJob, FlashItem(app, force));
      return true;
   }

   // Begin flashing
   QtAPI::Device* dev = 0;
   bool res = false;

   Connection* tab = mainWindow().tabs()->current();
   if (tab != 0)
   {
      //Flash device in active tab
      dev = tab->detach(true);
      dev->channelB()->close();
      res = flash(dev, force, true);
      dev->channelB()->close();
      dev->channelB()->open();
      tab->attach();

      //reset MCU
      tab->initialize();
      return res;
   }

   int deviceId = mainWindow().deviceTree()->selectedDevice();

   if ((deviceId < 0) && (mainWindow().deviceTree()->devices() == 1))
   {
      //device not selected, select the first device
      mainWindow().deviceTree()->selectFirstDevice();
      deviceId = mainWindow().deviceTree()->selectedDevice();
   }

   if (deviceId < 0)
   {
      mainWindow().showInformation(
         tr("No device selected."),
         tr("<p>Select device that should be programmed</p>"));

      return false;
   }

   dev = deviceMgr().acquire(deviceId);
   if (dev == 0)
   {
      qDebug("DEBUG: FkTreeWidget: Can't acquire");
      return false;
   }
   res = flash(dev, force, true);
   dev->channelB()->close();
   deviceMgr().release(dev);

/*	
   // Run terminal
   ConnectionTabs* tabs = mainWindow().tabs();
   tabs->open(dev->id());
*/
   return true;
}

void FkTreeWidget::makeFinished(JobWidget* job)
{
   // Get process job
   ProcessJob* pjob = 0;
   if((pjob = qobject_cast<ProcessJob*>(job)) == 0)
      return;

   //Remove app from buildJobs
   d->buildJobs.remove(pjob);
}

void FkTreeWidget::runMake(const QString& target, const QString& title)
{
   FCMake::App* app = currentApp();
   if (app == 0)
      return;

   QSettings set;
   QString makePath = FileSelector::absolutePath(set.value("General/MakeExec","").toString(), FileSelector::File);
   QString fcmakePath = FileSelector::absolutePath(set.value("General/FCMakeExec","").toString(), FileSelector::File);

   if (makePath.isEmpty())
   {
      mainWindow().showError(
         tr("GNU make not found!"),
         tr("Please download GNU MAKE (e.g. mingw32-make) and set correct path in General settings.")
         );
      return;
   }

   // Update Makefile
   app->createMakefile(fcmakePath);

   // Prepare job
   ProcessJob* job = jobScheduler().create<ProcessJob>(title.arg(app->name()));
   job->setHighlighter("job.make");
   job->setModal(true);

   // Run process
   job->setDirectory(app->path());
   job->setCommand(makePath, QStringList() << target);
   jobScheduler().schedule(job);

   // Add to pending
   d->buildJobs.insert(job, app);

   connect(job, SIGNAL(closed(JobWidget*)), this, SLOT(makeFinished(JobWidget*)));
}

void FkTreeWidget::runModelSIM()
{
   #ifdef __WIN32
   if ( (!QFile::exists("env:vsim.exe")) )
   {
   #else
   if ( (!QFile::exists("env:vsim")) )
   {
   #endif
      mainWindow().showError(
         tr("ModelTech ModelSIM not found!"),
         tr("Please download and install ModelTech ModelSIM. If the application is already installed, please check PATH variable.")
         );
      return;
   }

   runMake("sim", "Simulation: %1");
}

void FkTreeWidget::runISIM()
{
   #ifdef __WIN32
   if ( (!QFile::exists("env:xtclsh.exe")) || (!QFile::exists("env:fuse.exe")) )
   {
   #else
   if ( (!QFile::exists("env:xtclsh")) || (!QFile::exists("env:fuse")) )
   {
   #endif
      mainWindow().showError(
         tr("Xilinx FUSE or XTCLSH not found!"),
         tr("Please download and install latest Xilinx ISE (at least 12.4). If the application is already installed, please check PATH variable.")
         );
      return;
   }

   runMake("isim", "Simulation: %1");
}

void FkTreeWidget::runXilinxIse()
{
   #ifdef __WIN32
   if ( (!QFile::exists("env:ise.exe")) )
   {
   #else
   if ( (!QFile::exists("env:ise")) )
   {
   #endif
      mainWindow().showError(
         tr("XILINX ISE not found!"),
         tr("Please download and install XILINX ISE. If the application is already installed, please check PATH variable.")
         );
      return;
   }

   runMake("ise", "ISE: %1");
}

bool FkTreeWidget::checkGCCVersion()
{
   #ifdef __WIN32
   if (!QFile::exists("env:msp430-gcc.exe"))
      return false;
   #else
   if (!QFile::exists("env:msp430-gcc"))
      return false;
   #endif

   QProcess gcc;
   gcc.start("msp430-gcc", QStringList() << "-dumpspecs");
   if (!gcc.waitForStarted(1000))
       return true; //ignore the check

   gcc.closeWriteChannel();

   if (!gcc.waitForFinished(1000))
        return true; //ignore the check

   QString str = QString(gcc.readAll());
   if ((!str.contains("mmcu=msp430x2617:",Qt::CaseInsensitive)) || (!str.contains("mmcu=msp430x168:",Qt::CaseInsensitive)))
      return false;

   gcc.terminate();
   return true;
}

bool FkTreeWidget::checkGCC()
{
   QSettings set;
   if (!set.value("General/CheckForApps", true).toBool())
      return true;

   #ifdef __WIN32
   if (!QFile::exists("env:msp430-gcc.exe"))
   {
   #else
   if (!QFile::exists("env:msp430-gcc"))
   {
   #endif
      mainWindow().showError(
         tr("MSP430-GCC not found!"),
         tr("Please download and install MSP430 GCC. If the toolchain is already installed, please check PATH variable.")
         );
      return false;
   }

   if (!checkGCCVersion())
   {
      mainWindow().showError(
         tr("MSP430-GCC error"),
         tr("Please download and install latest MSP430 GCC. The installed version doesn't support required MCU models.")
         );
      return false;
   }

   return true;
}

bool FkTreeWidget::checkXST()
{
   QSettings set;
   if (!set.value("General/CheckForApps", true).toBool())
      return true;

   #ifdef __WIN32
   if ( (!QFile::exists("env:xst.exe")) )
   {
   #else
   if ( (!QFile::exists("env:xst")) )
   {
   #endif

      mainWindow().showError(
         tr("XILINX ISE not found!"),
         tr("Please download and install XILINX ISE. If the application is already installed, please check PATH variable.")
         );
      return false;
   }

   return true;
}
#include "fktreewidget.moc"

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

#include <QPushButton>
#include <QDir>
#include <QLabel>
#include <QMenu>
#include <QScrollArea>
#include <QDialog>
#include <QProgressBar>

#ifdef __WIN32
  #include <windows.h>
#endif

#include <fcmake/app.h>
#include <fcmake/tree.h>
#include <fcmake/filelist.h>

#include "rbuildjob.h"
#include "fktreeconfig.h"
#include "fileselector.h"
#include "fktreewidget.h"
#include "mainwindow.h"
#include "processjob.h"
#include "jobscheduler.h"
#include "generalconfig.h"

class FkTreeConfig::Private
{
   public:
      Private()
         : fsTree(0), ltApps(0), btInstall(0),
           atRefresh(0), atCheckout(0), atDelete(0), atConfigure(0),
           atInstallFile(0), atInstallRemote(0), snapshot(0),
           appTree(0), timerId(-1), rescanOnUpdate(false)
      {}

      FileSelector* fsTree;
      QVBoxLayout* ltApps;
      QPushButton* btInstall;

      QAction* atRefresh;
      QAction* atCheckout;
      QAction* atDelete;
      QAction* atConfigure;
      QAction* atInstallFile;
      QAction* atInstallRemote;

      FCMake::FileList* snapshot;
      QList<FkAppWidget*> appList;
      FkTreeWidget* appTree;

      int timerId;
      bool rescanOnUpdate;
};

FkTreeConfig::FkTreeConfig(Settings *parent)
   : ConfigComponent(parent), d (new Private() )
{
   // Create widgets
   createWidgets();

   // Load defaults
   QSettings set;
   set.beginGroup("KitApps");

   bool firstRun = !ObjectSettings::keyExists(set, &d->fsTree->lineEdit());
   ObjectSettings::setObjectText(set, &d->fsTree->lineEdit(), QDir::home().absoluteFilePath("fitkit-svn"));

   set.endGroup();

   // Inspect path
   triggerUpdate(firstRun);
   connect(d->fsTree,  SIGNAL(changed()), this, SLOT(triggerUpdate()));
   connect(d->appTree, SIGNAL(updated()), this, SLOT(populate()));
}

FkTreeConfig::~FkTreeConfig()
{
   clear();
   delete d;
}

void FkTreeConfig::timerEvent(QTimerEvent* event)
{
   Q_UNUSED(event);
   update();
   killTimer(d->timerId);
   d->timerId = -1;
}

void FkTreeConfig::triggerUpdate(bool rescan)
{
   if(d->timerId != -1)
      killTimer(d->timerId);

   d->rescanOnUpdate = rescan;
   d->timerId = startTimer(100);
}

void FkTreeConfig::save()
{
   QSettings set;
   set.beginGroup("KitApps");

   ObjectSettings::saveObjectText(set, &d->fsTree->lineEdit());

   set.endGroup();
   set.sync();
}

void FkTreeConfig::clear()
{
   foreach(FkAppWidget* app, d->appList)
      delete app;

   d->appList.clear();
}

void FkTreeConfig::populate()
{
   QDir path(d->fsTree->file());
   if(!path.exists())
      return;

   clear();
   const QList<FCMake::App*> list = d->appTree->appList();
   foreach(FCMake::App* app, list)
   {
      FkAppWidget* appWidget = new FkAppWidget(app, settings);
      d->appList << appWidget;
      d->ltApps->addWidget(appWidget);
   }
}

void FkTreeConfig::checkout()
{
   // Save current path
   save();

   // Load SVN properties
   QSettings set;
   set.beginGroup("KitApps");

   QString path, user, pass;
   path = set.value("SvnPath", "http://merlin.fit.vutbr.cz/svn/FITkit/trunk").toString();
   user = set.value("SvnUser", "").toString();
   pass = set.value("SvnPass", "").toString();

   set.endGroup();

   // Checkout and reload tree
   checkout(path, user, pass);
}

void FkTreeConfig::createWidgets()
{
   // Reference app tree
   d->appTree = settings->mainWindow().appTree();

   // Add location bar
   QString treeHeading = tr("Path:");
   QLabel* lbTree = new QLabel(QString("<b>") + treeHeading + "</b>", this);
   d->fsTree = new FileSelector(this, treeHeading);
   d->fsTree->setMode(FileSelector::Directory);
   d->fsTree->lineEdit().setObjectName("TreeLocation");

   // Add list controls
   d->btInstall = new QPushButton(QIcon(":/icons/22x22/next.png"), "", this);
   d->btInstall->setFixedWidth(65);
   d->btInstall->setFixedHeight(26);

   // Add install menu
   QMenu* mnInstall   = new QMenu(d->btInstall);
   d->atRefresh       = new QAction(QIcon(":/icons/22x22/refresh.png"), tr("Refresh tree"),   mnInstall);
   d->atCheckout      = new QAction(QIcon(":/icons/22x22/vcs_update.png"), tr("Update"),   mnInstall);
   d->atDelete        = new QAction(QIcon(":/icons/22x22/vcs_remove.png"), tr("Delete local copy"),   mnInstall);
   d->atConfigure     = new QAction(QIcon(":/icons/22x22/vcs_status.png"), tr("Repository settings"),   mnInstall);
   d->atInstallFile   = new QAction(QIcon(":/icons/22x22/folder.png"), tr("Add local application"), mnInstall);
   d->atInstallRemote = new QAction(QIcon(":/icons/22x22/download.png"), tr("Download application"), mnInstall);
   d->atInstallFile->setEnabled(false);
   d->atInstallRemote->setEnabled(false);

   // Connect
   connect(d->atDelete,    SIGNAL(triggered()),  this, SLOT(deltree()));
   connect(d->atRefresh,   SIGNAL(triggered()),  this, SLOT(update()));
   connect(d->atCheckout,  SIGNAL(triggered()),  this, SLOT(checkout()));
   connect(d->atConfigure, SIGNAL(triggered()),  this, SLOT(configure()));

   mnInstall->addAction(d->atRefresh);
   mnInstall->addAction(d->atCheckout);
   mnInstall->addAction(d->atConfigure);
   mnInstall->addSeparator();
   mnInstall->addAction(d->atInstallFile);
   mnInstall->addAction(d->atInstallRemote);
   mnInstall->addSeparator();
   mnInstall->addAction(d->atDelete);
   d->btInstall->setMenu(mnInstall);

   QGridLayout* ltLocation = new QGridLayout();
   ltLocation->addWidget(lbTree,        0, 0);
   ltLocation->addWidget(d->fsTree,     0, 1);
   ltLocation->addWidget(d->btInstall,  0, 2);

   // Add application list
   QScrollArea* appsArea = new QScrollArea(this);
   appsArea->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
   appsArea->setBackgroundRole(QPalette::Base);
   appsArea->setAutoFillBackground(true);
   appsArea->setMinimumWidth(550);

   QWidget* content = new QWidget(this);
   appsArea->setWidget(content);
   appsArea->setWidgetResizable(true);

   d->ltApps = new QVBoxLayout(content);
   d->ltApps->setAlignment(Qt::AlignTop|Qt::AlignLeft);

   QVBoxLayout* ltList = new QVBoxLayout(this);
   ltList->addLayout(ltLocation);
   ltList->addWidget(appsArea);
}

void FkTreeConfig::update()
{
   // Update location
   if(!d->fsTree->file().isEmpty())
   {
      // Rescan app tree
      clear();
      save();

      // Conditional rescan
      if(d->rescanOnUpdate)
         d->appTree->rescan();

      // Refresh list
      populate();
   }
}

void FkTreeConfig::configure()
{
   QSettings set;
   set.beginGroup("KitApps");

   bool cache;
   QString path, user, pass;
   path = set.value("SvnPath", "http://merlin.fit.vutbr.cz/svn/FITkit/trunk").toString();
   user = set.value("SvnUser", "").toString();
   pass = set.value("SvnPass", "").toString();
   cache = set.value("SvnCache", false).toBool();

   QDialog dlg;
   dlg.setWindowTitle(tr("Repository settings"));
   dlg.setWindowIcon(settings->windowIcon());
   dlg.setMinimumWidth(400);

   QLabel* lbIcon = new QLabel(&dlg);
   QLabel* lbHead = new QLabel(tr("<h2>Repository settings</h2>"), &dlg);
   lbIcon->setPixmap(QPixmap(":/icons/48x48/vcs_status.png"));

   QFrame* hr = new QFrame(&dlg);
   hr->setFrameStyle(QFrame::HLine);

   QFrame* hr2 = new QFrame(&dlg);
   hr2->setFrameStyle(QFrame::HLine);

   QLabel* lbPath = new QLabel(tr("<b>Path:</b>"), &dlg);
   QLabel* lbUser = new QLabel(tr("<b>Username:</b>"), &dlg);
   QLabel* lbPass = new QLabel(tr("<b>Password:</b>"), &dlg);

   QLineEdit* tbPath = new QLineEdit(path, &dlg);
   QLineEdit* tbUser = new QLineEdit(user, &dlg);
   QLineEdit* tbPass = new QLineEdit(pass, &dlg);
   tbPass->setEchoMode(QLineEdit::Password);

   QCheckBox* chNocache = new QCheckBox(tr("No auth cache"), &dlg);
   chNocache->setChecked(!cache);

   QPushButton* btOk = new QPushButton(QIcon(":/icons/22x22/bt-ok.png"), tr("&Accept"), &dlg);
   QPushButton* btCancel = new QPushButton(QIcon(":/icons/22x22/bt-cancel.png"), tr("&Cancel"), &dlg);
   btOk->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
   btCancel->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);

   QHBoxLayout* ltButtons = new QHBoxLayout();
   ltButtons->setAlignment(Qt::AlignCenter);
   ltButtons->addWidget(btOk);
   ltButtons->addWidget(btCancel);

   connect(btOk,     SIGNAL(clicked()), &dlg, SLOT(accept()));
   connect(btCancel, SIGNAL(clicked()), &dlg, SLOT(reject()));

   QGridLayout* lt = new QGridLayout(&dlg);
   lt->addWidget(lbIcon, 0, 0);
   lt->addWidget(lbHead, 0, 1);
   lt->addWidget(hr,     1, 0, 1, 2);
   lt->addWidget(lbPath, 2, 0);
   lt->addWidget(tbPath, 2, 1);
   lt->addWidget(lbUser, 3, 0);
   lt->addWidget(tbUser, 3, 1);
   lt->addWidget(lbPass, 4, 0);
   lt->addWidget(tbPass, 4, 1);
   lt->addWidget(chNocache, 5, 0, 1, 2, Qt::AlignRight);
   lt->addWidget(hr2,     6, 0, 1, 2);
   lt->addLayout(ltButtons, 7, 0, 1, 2);

   if(dlg.exec() == QDialog::Accepted)
   {
      set.setValue("SvnPath",  tbPath->text());
      set.setValue("SvnUser",  tbUser->text());
      set.setValue("SvnPass",  tbPass->text());
      set.setValue("SvnCache", !chNocache->isChecked());
   }

   set.endGroup();
}

static void removeDirTree(const QString& path)
{
   QStringList files;
   QDir dir(path);

   // Delete all children files
   files = dir.entryList(QDir::Files|QDir::Hidden|QDir::Readable);
   foreach(const QString& fn, files)
   {
      #ifdef __WIN32
      ::SetFileAttributes(dir.absoluteFilePath(fn).toStdString().c_str(), FILE_ATTRIBUTE_NORMAL);
      #endif
      if (!QFile::remove(dir.absoluteFilePath(fn)))
         qDebug("Failed to remove: %s",dir.absoluteFilePath(fn).toStdString().c_str());
   }

   // Recurse into children directories
   files = dir.entryList(QDir::Dirs|QDir::NoDotAndDotDot|QDir::Hidden|QDir::Readable);

   foreach(const QString& fn, files)
      removeDirTree(dir.absoluteFilePath(fn));

   #ifdef __WIN32
   ::SetFileAttributes(dir.absolutePath().toStdString().c_str(), FILE_ATTRIBUTE_NORMAL);
   #endif
   dir.rmdir(dir.absolutePath());
}

void FkTreeConfig::deltree()
{
   // Update location
   if(!d->fsTree->file().isEmpty())
   {
      QDir dir(d->fsTree->file());
      if (!dir.exists())
         return;

      removeDirTree(d->fsTree->file());

//       qDebug("Removing path: %s", d->fsTree->file().toStdString().c_str());
      if(!dir.rmpath(d->fsTree->file()))
         qDebug("Failed to remove '%s'.", d->fsTree->file().toStdString().c_str());

      clear();
      d->fsTree->check();
   }
}

void FkTreeConfig::checkout(const QString& url, const QString& user, const QString& pass)
{
   QSettings set;
   QString cmd = settings->general().svnPath();
   if (cmd.isEmpty())
   {
      settings->mainWindow().showError(
         tr("Subversion not found!"),
         tr("Please download Subversion and set correct path in General settings.")
         );
      return;
   }

   bool useRBuild = set.value("Remote/IsRBuildDefault").toBool();
   if(settings->general().makePath().isEmpty() && !useRBuild)
   {
      settings->mainWindow().showError(
         tr("GNU make not found!"),
         tr("Please download GNU MAKE (e.g. mingw32-make) and set correct path in General settings.")
         );
      return;
   }

   QString path = d->fsTree->file();
   QDir dir;
   if(path.isEmpty() || !dir.mkpath(path))
   {
      settings->mainWindow().showError(
         tr("Invalid location given!"),
         tr("Cannot download SVN tree into this location: %1").arg(path)
         );

      return;
   }

   // Make file snapshot
   d->snapshot = new FCMake::FileList(QDir(d->fsTree->file()));

   // Prepare job
   ProcessJob* job = settings->jobs().create<ProcessJob>(tr("Repository update"));
   job->setModal(true);
   //enabled button can cause the another job action won't be triggered as object can be destroyed meanwhile
   if (job->displayButton() != 0)
      job->displayButton()->setEnabled(false);

   job->setAutoClose(true);
   job->setDirectory(path);
   job->progress()->setRange(0, 0);
   job->setHighlighter("job.subversion");

   // Run process
   QStringList args;

   bool svnExists = QDir(path).exists(".svn");
   if (svnExists)
      args << "update";
   else
      args << "checkout";

   if(!set.value("KitApps/SvnCache", false).toBool())
      args << "--no-auth-cache";

   args << "--non-interactive";

   if(!user.isEmpty())
   {
      args << "--username=" + user;

      if(!pass.isEmpty())
         args << "--password=" + pass;
   }

   if(!svnExists)
      args << url;

   args << path;

   // Run checkout
   job->setCommand(cmd, args);
   connect(job, SIGNAL(closed(int)), this, SLOT(updateLibfitkit(int)));
   settings->jobs().schedule(job);
}

void FkTreeConfig::updateLibfitkit(int prev)
{
   // Check and update
   QSettings set;
   Q_UNUSED(prev);
   QString gmakePath = settings->general().makePath();
   QString fcmakePath = settings->general().fcmakePath();
   QString fkflashPath = settings->general().fkflashPath();

   // Generate Makefile
   bool useRBuild = set.value("Remote/IsRBuildDefault", false).toBool();
   if ((gmakePath.isEmpty() && !useRBuild) || (d->appTree == 0) || (d->appTree->tree() == 0))
      return;

   FCMake::App* app = d->appTree->tree()->app("mcu/libfitkit");
   if (app != 0)
   {
      app->createMakefile(fcmakePath, fkflashPath);
      updateFinish(0);

      // Update libfitkit state
      if (!useRBuild) {
          ProcessJob* updateJob = settings->jobs().create<ProcessJob>(tr("Build: libfitkit"));
          updateJob->setDirectory(app->path());
          updateJob->setCommand(gmakePath, QStringList() << "-t");
          settings->jobs().schedule(updateJob);
      } else {
          // Prepare job
          RBuildJob* updateJob = settings->jobs().create<RBuildJob>(QString("Remote Build: %1").arg(app->name()));
          updateJob->setHighlighter("job.make");
          //updateJob->setModal();
          // Add states
          updateJob->addState("Preparing build environment.");
          updateJob->addState("Syncing source files.");         
          updateJob->addState("Remote build finished.");
          // Run process
          updateJob->setTask(app);
          settings->jobs().schedule(updateJob);
      }
   }
}

void FkTreeConfig::updateFinish(int prev)
{
   Q_UNUSED(prev);

   if(d->snapshot == 0)
   {
      qDebug("Tree snapshot not found.");
      return;
   }

   qDebug("Updating libfitkit mtimes");

   // Update MTimes
   FCMake::FileList* list = new FCMake::FileList(QDir(d->fsTree->file()));
   list->filterChanges(*d->snapshot);
   d->snapshot->loadFromXML();
   list->setMtimeFrom(*d->snapshot);

   d->fsTree->check();
   triggerUpdate();

   // Cleanup
   delete list;
   delete d->snapshot;
   d->snapshot = 0;
}

class FkAppWidget::Private
{
   public:
      Private()
      : app(0), lbText(0), lbIcon(0)
      {}

      FCMake::App* app;
      Settings* settings;

      QAction* atCompile;
      QAction* atClean;
      QLabel* lbText;
      QLabel* lbIcon;
};

FkAppWidget::FkAppWidget(FCMake::App* app, Settings* settings)
   : QWidget(settings), d ( new Private() )
{
   // Create widgets
   d->settings = settings;
   d->app = app;
   createWidgets();

   // Load texts
   loadTexts();

   // Update geometry
   setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
}

FkAppWidget::~FkAppWidget()
{
   delete d;
}

void FkAppWidget::update()
{
   QString fcmakePath = d->settings->general().fcmakePath();
   QString fkflashPath = d->settings->general().fkflashPath();

   if ((d->app != 0) && (d->app->createMakefile(fcmakePath, fkflashPath)))
      qDebug("Updated.");

   loadTexts();
}

void FkAppWidget::parse()
{
   d->atClean->setEnabled(true);
   d->atCompile->setEnabled(true);
   d->app->parse();
   loadTexts();
}

void FkAppWidget::build()
{
   // Set current app
   FkTreeWidget* appTree = d->settings->mainWindow().appTree();
   appTree->setCurrentApp(d->app);

   // Run job
   ProcessJob* job = appTree->build();
   if (job != 0)
   {
      connect(job, SIGNAL(closed(JobWidget*)), this, SLOT(parse()));
      d->atClean->setEnabled(false);
      d->atCompile->setEnabled(false);
   }
}

void FkAppWidget::clean()
{
   // Set current app
   FkTreeWidget* appTree = d->settings->mainWindow().appTree();
   appTree->setCurrentApp(d->app);

   // Run dialog
   appTree->clean();
   loadTexts();
}

void FkAppWidget::showReadme()
{
   // Set current app
   FkTreeWidget* appTree = d->settings->mainWindow().appTree();
   appTree->setCurrentApp(d->app);

   appTree->showReadme();
}

void FkAppWidget::createWidgets()
{
   // Create fields
   d->lbText   = new QLabel(this);
   d->lbText->setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
   d->lbText->setWordWrap(true);

   // Create icon
   d->lbIcon   = new QLabel(this);
   d->lbIcon->setPixmap(QPixmap(":/icons/48x48/applications.png"));
   d->lbIcon->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
   d->lbIcon->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Maximum);
   d->lbIcon->setMinimumWidth(60);

   // Help button
   QPushButton* btHelp = new QPushButton(QIcon(":/icons/22x22/help.png"), "", this);
   btHelp->setEnabled(d->app->hasReadme());
   btHelp->setFixedWidth(26);
   btHelp->setFixedHeight(26);

   connect(btHelp,   SIGNAL(clicked()),   this, SLOT(showReadme()));

   // Actions button
   QMenu* menu = new QMenu(this);
   QPushButton* btMenu = new QPushButton(QIcon(":/icons/22x22/next.png"), "", this);
   btMenu->setFixedWidth(55);
   btMenu->setFixedHeight(26);
   btMenu->setMenu(menu);

   QAction* atUpdate = new QAction(QIcon(":/icons/22x22/app-update.png"), tr("&Refresh"), btMenu);
   connect(atUpdate, SIGNAL(triggered()), this, SLOT(update()));
   menu->addAction(atUpdate);

   d->atCompile = new QAction(QIcon(":/icons/22x22/build.png"), tr("Re&build"), btMenu);
   connect(d->atCompile, SIGNAL(triggered()), this, SLOT(build()));
   menu->addAction(d->atCompile);

   d->atClean = new QAction(QIcon(":/icons/22x22/undo.png"), tr("&Clean"), btMenu);
   connect(d->atClean, SIGNAL(triggered()), this, SLOT(clean()));
   menu->addAction(d->atClean);

   // Set layout
   QHBoxLayout* ltRow = new QHBoxLayout();
   ltRow->addWidget(d->lbIcon);
   ltRow->addWidget(d->lbText);

   QHBoxLayout* ltButtons = new QHBoxLayout();
   ltButtons->addWidget(btHelp);
   ltButtons->addWidget(btMenu);
   ltRow->addLayout(ltButtons);

   // Create rule
   QFrame* hr = new QFrame(this);
   hr->setFrameStyle(QFrame::HLine);

   // Set main layout
   QVBoxLayout* ltMain = new QVBoxLayout(this);
   ltMain->addLayout(ltRow);
   ltMain->addWidget(hr);
}

void FkAppWidget::loadTexts()
{
   // Get state
   QString state;
   if(!d->app->isUpdated())
   {
      d->lbIcon->setPixmap(QPixmap(":/icons/48x48/applications-update.png"));
      state += tr("<b><font color='orange'> (build outdated) </font></b>");
   }
   else
      d->lbIcon->setPixmap(QPixmap(":/icons/48x48/applications.png"));

   if(!d->app->isCompiled())
      state += tr("<b><font color='red'> (not compiled) </font></b>");

   QString text = tr("<b>%1</b><br>"
                        "%2<br>"
                        "<small>"
                           "<span>%3, <a href='mailto:%4'>%4</a></span><br>"
                           "Revision: <b>%5</b> %6"
                        "</small>");

   text = text.arg(d->app->name())
              .arg(d->app->description())
              .arg(d->app->author()).arg(d->app->email())
              .arg(d->app->revision())
              .arg(state);

   d->lbText->setText(text);
}

#include "fktreeconfig.moc"

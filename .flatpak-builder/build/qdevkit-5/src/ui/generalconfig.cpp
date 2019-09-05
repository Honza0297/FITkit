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

#include <QListWidget>
#include <QGroupBox>
#include <QCheckBox>
#include <QLabel>
#include <QList>
#include <QDir>

#include "generalconfig.h"
#include "fileselector.h"
#include "objectsettings.h"
#include "qdevkit.h"

class GeneralConfig::Private
{
   public:
      Private()
      {}

      QCheckBox* askBeforeClose;
      QCheckBox* askBeforeFlash;
      QCheckBox* checkForApps;
      QCheckBox* trayShow;
      QCheckBox* trayMessages;
      QCheckBox* jobsShowTasks;
      FileSelector* fsMake;
      FileSelector* fsSvn;
      FileSelector* fsFcmake;
      FileSelector* fsFkflash;

      // Localization
      QList<QString> qmList;
      QListWidget*  lcList;
};

GeneralConfig::GeneralConfig(Settings *parent)
   : ConfigComponent(parent), d( new Private() )
{
   // Setup UI
   createGeneralPage();
   createLocalizationPage();

   QSettings set;
   set.beginGroup("General");

   // General settings
   ObjectSettings::setObjectChecked(set, d->askBeforeClose, true);
   ObjectSettings::setObjectChecked(set, d->askBeforeFlash, true);
   ObjectSettings::setObjectChecked(set, d->checkForApps, true);
   ObjectSettings::setObjectChecked(set, d->jobsShowTasks,  false);

   // Defaults
   QString defMake = "make";
   QString defSvn = "svn";

   // Win32 defaults
   #ifdef __WIN32
   defMake = "gmake";
   #endif

   // Paths
   bool firstRun = !set.contains("SvnExec");

   if (firstRun) 
   {
      QDir dir(QCoreApplication::applicationDirPath());
      dir.cd("../contrib/svn");
      if (dir.exists("svn.exe"))
         defSvn = "../contrib/svn/svn.exe";
   }

   ObjectSettings::setObjectText(set, &d->fsMake->lineEdit(),    defMake);
   ObjectSettings::setObjectText(set, &d->fsSvn->lineEdit(),     defSvn);
   ObjectSettings::setObjectText(set, &d->fsFcmake->lineEdit(),  "fcmake");
   ObjectSettings::setObjectText(set, &d->fsFkflash->lineEdit(),  "fkflash");

   // System tray set
   ObjectSettings::setObjectChecked(set, d->trayShow, false);
   ObjectSettings::setObjectChecked(set, d->trayMessages, false);

   // Set locale
   QString lc(set.value("Locale", "").toString());
   if(!lc.isEmpty())
      d->lcList->setCurrentRow(d->qmList.indexOf(lc));
   else
      d->lcList->setCurrentRow(0);

   set.endGroup();

   // Set dependencies
   setDependencies();
   connect(d->trayShow, SIGNAL(stateChanged(int)), this, SLOT(setDependencies()));

   // First run
   if(firstRun)
      save();
}

GeneralConfig::~GeneralConfig()
{
   delete d;
}

void GeneralConfig::save()
{
   QSettings set;
   set.beginGroup("General");

   ObjectSettings::saveObjectBool(set, d->askBeforeClose);
   ObjectSettings::saveObjectBool(set, d->askBeforeFlash);
   ObjectSettings::saveObjectBool(set, d->checkForApps);
   ObjectSettings::saveObjectBool(set, d->jobsShowTasks);
   ObjectSettings::saveObjectBool(set, d->trayShow);
   ObjectSettings::saveObjectBool(set, d->trayMessages);

   // Paths
   ObjectSettings::saveObjectText(set, &d->fsMake->lineEdit());
   ObjectSettings::saveObjectText(set, &d->fsSvn->lineEdit());
   ObjectSettings::saveObjectText(set, &d->fsFcmake->lineEdit());
   ObjectSettings::saveObjectText(set, &d->fsFkflash->lineEdit());

   // Save locale
   int index = d->lcList->currentRow();
   if(index >= 0)
   {
      QString code = d->qmList[index];
      set.setValue("Locale", code);
   }

   set.endGroup();
}

QString GeneralConfig::makePath()
{ return d->fsMake->absolutePath(); }

QString GeneralConfig::svnPath()
{ return d->fsSvn->absolutePath(); }

QString GeneralConfig::fcmakePath()
{ return d->fsFcmake->absolutePath(); }

QString GeneralConfig::fkflashPath()
{ return d->fsFkflash->absolutePath(); }

void GeneralConfig::createGeneralPage()
{
   // Create group
   QWidget*   page = new QWidget(this);
   createPage(page, tr("&General"));

   QGroupBox* gbApplication = new QGroupBox(tr("Application settings"), page);
   QGroupBox* gbTray        = new QGroupBox(tr("System tray settings"), page);
   QGroupBox* gbPaths       = new QGroupBox(tr("External paths"), page);

   // Create items
   d->askBeforeClose = new QCheckBox(tr("Ask before closing"), gbApplication);
   d->askBeforeClose->setObjectName("AskBeforeClose");

   d->askBeforeFlash = new QCheckBox(tr("Ask for rebuild of out-dated project before programming"), gbApplication);
   d->askBeforeFlash->setObjectName("AskBeforeFlash");

   d->checkForApps = new QCheckBox(tr("Check if the required applications (ISE, GCC) are installed"), gbApplication);
   d->checkForApps->setObjectName("CheckForApps");
   
   d->jobsShowTasks = new QCheckBox(tr("Show running tasks by default"), gbApplication);
   d->jobsShowTasks->setObjectName("ShowTasks");
   
   d->trayShow = new QCheckBox(tr("Show system tray icon"), gbTray);
   d->trayMessages = new QCheckBox(tr("Show system tray messages"), gbTray);
   d->trayShow->setObjectName("TrayShow");
   d->trayMessages->setObjectName("TrayMessages");

   QLabel* lbMake = new QLabel(tr("Make executable"), this);
   d->fsMake = new FileSelector(gbPaths, lbMake->text());
   d->fsMake->setFilePattern("GNU Make (make gmake gmake.exe mingw32-make mingw32-make.exe)");
   d->fsMake->lineEdit().setObjectName("MakeExec");

   QLabel* lbSvn = new QLabel(tr("SVN executable"), this);
   d->fsSvn = new FileSelector(gbPaths, lbSvn->text());
   d->fsSvn->setFilePattern("Subversion executable (svn svn.exe)");
   d->fsSvn->lineEdit().setObjectName("SvnExec");

   QLabel* lbFcmake = new QLabel(tr("FCMake executable"), this);
   d->fsFcmake = new FileSelector(gbPaths, lbFcmake->text());
   d->fsFcmake->setFilePattern("FCMake executable (fcmake fcmake.exe)");
   d->fsFcmake->lineEdit().setObjectName("FCMakeExec");

   QLabel* lbFkflash = new QLabel(tr("FKFlash executable"), this);
   d->fsFkflash = new FileSelector(gbPaths, lbFkflash->text());
   d->fsFkflash->setFilePattern("FKFlash executable (fkflash fkflash.exe)");
   d->fsFkflash->lineEdit().setObjectName("FKFlashExec");

   // Set layouts
   QVBoxLayout* ltMain = new QVBoxLayout(page);
   ltMain->addWidget(gbApplication);
   ltMain->addWidget(gbPaths);
   ltMain->addWidget(gbTray);

   QVBoxLayout* ltapplication = new QVBoxLayout(gbApplication);
   ltapplication->addWidget(d->askBeforeClose);
   ltapplication->addWidget(d->jobsShowTasks);
   ltapplication->addWidget(d->askBeforeFlash);
   ltapplication->addWidget(d->checkForApps);

   QVBoxLayout* ltTray = new QVBoxLayout(gbTray);
   ltTray->addWidget(d->trayShow);
   ltTray->addWidget(d->trayMessages);

   QGridLayout* ltPaths = new QGridLayout(gbPaths);
   ltPaths->addWidget(lbMake,       0, 0);
   ltPaths->addWidget(d->fsMake,    0, 1);
   ltPaths->addWidget(lbSvn,        1, 0);
   ltPaths->addWidget(d->fsSvn,     1, 1);
   ltPaths->addWidget(lbFcmake,     2, 0);
   ltPaths->addWidget(d->fsFcmake,  2, 1);
   ltPaths->addWidget(lbFkflash,    3, 0);
   ltPaths->addWidget(d->fsFkflash, 3, 1);
}

void GeneralConfig::createLocalizationPage()
{
   // Create page
   QGroupBox* page = new QGroupBox("", this);
   createPage(page, tr("Localiza&tion"));
   QVBoxLayout* ltPage = new QVBoxLayout(page);

   // Create heading
   QLabel* lbLocale = new QLabel(page);
   lbLocale->setText(tr("Please restart the application after localization change."));
   QFont font = lbLocale->font();
   font.setBold(true);
   lbLocale->setFont(font);
   ltPage->addWidget(lbLocale);

   // Create line
   QFrame* line = new QFrame(page);
   line->setFrameStyle(QFrame::HLine);
   ltPage->addWidget(line);

   // Localization
   d->lcList = new QListWidget(this);
   d->lcList->setObjectName("Locale");
   ltPage->addWidget(d->lcList);

   // append default item
   QListWidgetItem* defaultItem = new QListWidgetItem(d->lcList);
   defaultItem->setText("Default");
   d->qmList.append("");

   // Populate localization
   QDir localeDir(settings->app().localePath());
   QStringList files;
   files << "en";
   files << localeDir.entryList(QDir::Files|QDir::Readable|QDir::NoDotAndDotDot);
   foreach(const QString& file, files)
   {
      QString country = file.mid(file.indexOf("_")+1, 2);
      if(!country.isEmpty())
      {
         QListWidgetItem* item = new QListWidgetItem(d->lcList);
         item->setText(QLocale::languageToString(QLocale(country).language()));

         d->qmList.append(country);
      }
   }
}

void GeneralConfig::setDependencies()
{
   // Popups & silent start depend on tray icon
   d->trayMessages->setEnabled(d->trayShow->isChecked());
}

#include "generalconfig.moc"

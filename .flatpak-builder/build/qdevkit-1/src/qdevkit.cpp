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

#include <QApplication>
#include <QSettings>
#include <QTranslator>
#include <QProcess>
#include <QLocale>
#include <QTimer>
#include <QDir>
#include <QTime> //TODO: debug

#include "qdevkit.h"
#include "mainwindow.h"
#include "scriptengine.h"
#include "qdevicemgr.h"
#include "trayicon.h"
#include "pluginmgr.h"
#include "components.h"
#include "jobscheduler.h"
#include "buildserver.h"

class QDevKit::Private
{
   public:
      Private()
      :  window(0), scripts(0), devices(0), systray(0), plugins(0), jobs(0),
         components(0), buildServer(0)
      {}

      MainWindow*    window;
      ScriptEngine*  scripts;
      QDeviceMgr*    devices;
      TrayIcon*      systray;
      PluginMgr*     plugins;
      JobScheduler*  jobs;
      Components*    components;
	  BuildServer*   buildServer;
      QStringList    args;
      QString        localePath;
      QTranslator    translator;
};

QDevKit::QDevKit(int argc, char* argv[])
   : QObject(), d( new Private() )
{
   // Parse CLI arguments
   for(int i = 0; i < argc; i++)
      d->args << argv[i];

   // Set search paths
   addSearchPaths();

   // Set locale path
   QDir dir = qApp->applicationDirPath();
   dir.cdUp();
   dir.cd("share");
   dir.cd("qdevkit");
   dir.cd("locale");
   d->localePath = dir.absolutePath();

   // Install translator
   QSettings set;
   setLocale(set.value("General/Locale", "").toString());
   init();
}

QDevKit::~QDevKit()
{
   // Delete unparented objects
   d->window->deleteLater();
   delete d->components;
   delete d;
   qDebug("QDevKit: cleanup finished");
}

void QDevKit::addSearchPaths()
{
   // Set separator
   bool added = false;
   QString appPath = QDir(QCoreApplication::applicationDirPath()).absolutePath();

   QString envSep  = ":";
   #ifdef __WIN32
      envSep  = ";";
   #endif

   QStringList environment = QProcess::systemEnvironment();
   foreach(const QString& keyPair, environment)
   {
      // Divide
      int opEqual = keyPair.indexOf("=");
      QString key = keyPair.left(opEqual);
      QString val = keyPair.mid(opEqual + 1, keyPair.size() - key.size());

      // Check
      if (key.compare("PATH",Qt::CaseInsensitive) == 0)
      {
         QStringList paths = val.split(envSep);
         if (!paths.contains(appPath))
            paths.insert(0, appPath);

         foreach(const QString& pth, paths) {
           qDebug("DEBUG: register search path: %s", pth.toStdString().c_str());
         }

         QDir::setSearchPaths("env", paths);
         added = true;
         break;
      }
   }

   if (!added)
      QDir::setSearchPaths("env", QStringList() << appPath);
}

const QString& QDevKit::localePath() const
{
   return d->localePath;
}

const QStringList& QDevKit::args() const
{
   return d->args;
}

void QDevKit::init()
{
   // Create application objects
   QTime perf, total;
   perf.start(); total.start();
   d->scripts  = new ScriptEngine(this);
   d->devices  = new QDeviceMgr(this);
   d->window   = new MainWindow(this); // It is root (unparented)
   d->systray  = new TrayIcon(this);
   d->plugins  = new PluginMgr(this);
   d->jobs     = new JobScheduler(this);
   d->components = new Components(this); // It is root (unparented)
   d->buildServer = new BuildServer(this);
   qDebug("Time: constructors took %d msecs", perf.elapsed()); perf.restart();

   // Show main window
   d->window->init();
   qDebug("Time: mainwindow init took %d msecs", perf.elapsed()); perf.restart();
   d->jobs->init();

   // Initialize ScriptEngine
   d->scripts->registerObject("app",          this);
   d->scripts->registerObject("mainWindow",   d->window);
   d->scripts->registerObject("deviceMgr",    d->devices);
   d->scripts->registerObject("tray",         d->systray);
   d->scripts->registerObject("pluginMgr",    d->plugins);
   d->scripts->registerObject("jobScheduler", d->plugins);

   // Create tray icon
   d->systray->setup();

   // Initialize Plugins
   QTimer::singleShot(100, d->plugins, SLOT(loadAll()));

   // Load window configuration
   perf.restart();
   d->window->loadSettings();
   qDebug("Time: window settings took %d msecs", perf.elapsed()); perf.restart();
   d->window->show();
   qDebug("Time: initialization took %d msecs", total.elapsed());

   // Initialize devices
   d->devices->start();
}

bool QDevKit::setLocale(QString code)
{
   if(code.isEmpty())
      code = QLocale::system().name();

   bool loaded = d->translator.load(QString("qdevkit_") + code, localePath());
   qApp->installTranslator(&d->translator);

   return loaded;
}

void QDevKit::reloadSettings()
{
   // Relay notification to listeners
   emit(settingsReloaded());

   // Watch last closed window
   if(!d->window->isVisible() && !d->systray->isVisible())
      close();
}

bool QDevKit::close(bool silent)
{
   // Ask main window
   if(!d->window->canClose(silent))
   {
      qDebug("DEBUG: Main window refused to close.");
      return false;
   }

   // Prepare main window to close
   if(!d->window->prepareToClose())
   {
      qDebug("DEBUG: Main window couldn't close some connection.");
      return false;
   }
   qDebug("DEBUG: Window prepared to close.");

   // Terminate all jobs
   d->jobs->terminateAll();
   qDebug("DEBUG: Scheduled jobs terminated.");

   // Emit signal
   emit(aboutToClose());

   // Unload plugins
   d->plugins->unloadAll();
   qDebug("DEBUG: Plugins unloaded.");

   // Close window
   d->systray->setVisible(false);
   d->window->close();
   qDebug("DEBUG: Window closed.");

   return true;
}

MainWindow& QDevKit::mainWindow()
{
   return *d->window;
}

QDeviceMgr& QDevKit::deviceMgr()
{
   return *d->devices;
}

TrayIcon& QDevKit::tray()
{
   return *d->systray;
}

ScriptEngine& QDevKit::scriptEngine()
{
   return *d->scripts;
}

PluginMgr& QDevKit::pluginMgr()
{
   return *d->plugins;
}

JobScheduler& QDevKit::jobScheduler()
{
   return *d->jobs;
}

Components& QDevKit::components()
{
   return *d->components;
}

BuildServer& QDevKit::buildServer()
{
	return *d->buildServer;
}

QVariant QDevKit::settingsValue(const QString& key, QVariant def)
{
   QSettings set;
   return set.value(key, def);
}

void QDevKit::setSettingsValue(const QString& key, QVariant value)
{
   QSettings set;
   set.setValue(key, value);
}

#include "qdevkit.moc"

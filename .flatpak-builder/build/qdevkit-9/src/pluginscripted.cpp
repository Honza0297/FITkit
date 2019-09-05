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

#include "pluginscripted.h"
#include "script.h"
#include "scriptengine.h"
#include <QUrl>

class PluginScriptedPrivate
{
   public:
      PluginScriptedPrivate()
      : script(0), timer(0), loaded(0)
      {}
      
      Script*        script;
      int            timer;
      bool           loaded;
};

//---------------------------------------------------------------------------------------------------------------
// PluginProcess - process with timeout functionality
//---------------------------------------------------------------------------------------------------------------
PluginProcess::PluginProcess()
{
   timer.setSingleShot(true);

   QObject::connect(this, SIGNAL(finished(int, QProcess::ExitStatus)), &loop, SLOT(quit()));    
   QObject::connect(this, SIGNAL(error(QProcess::ProcessError)), this, SLOT(errorEvent(QProcess::ProcessError)));    
   
   QObject::connect(&timer, SIGNAL(timeout()), this, SLOT(kill()));
}

void PluginProcess::errorEvent(QProcess::ProcessError error)
{
   Q_UNUSED(error);
   loop.exit(1);
}

int PluginProcess::run(QString program, QStringList args, int timeout)
{
   timer.stop();
   if (timeout > 0)
      timer.start(timeout);
  
   start(program, args);

   int status = loop.exec();
   timer.stop();

   return status;
}

//---------------------------------------------------------------------------------------------------------------
// THttp - Http with timeout functionality 
//---------------------------------------------------------------------------------------------------------------
THttp::THttp()
{
   timer.setSingleShot(true);
   QObject::connect(this, SIGNAL(done(bool)), &loop, SLOT(quit()));
   QObject::connect(&timer, SIGNAL(timeout()), this, SLOT(timeout()));
}

void THttp::timeout()
{
   loop.exit(1);
}

int THttp::download(QString address, int timeout)
{
   QUrl url(address);

   timer.stop();
   if (timeout > 0) 
      timer.start(timeout);

   setHost(url.host(), (quint16)url.port(80));
   get(url.toEncoded(QUrl::RemoveScheme | QUrl::RemoveAuthority));

   int status = loop.exec();
   timer.stop();

   return status;     
}


//---------------------------------------------------------------------------------------------------------------
// PluginScripted 
//---------------------------------------------------------------------------------------------------------------
PluginScripted::PluginScripted(PluginLoader *loader)
   : PluginBase(loader), d( new PluginScriptedPrivate() )
{
   QString moduleName = QString("Plugin") + data()->name();
   QString scriptPath = QDir(loader->path()).absoluteFilePath(data()->library() + ".py");
   if((d->script = loader->scriptEngine().load(scriptPath, moduleName)) == 0)
      return;
   
   // Prepare variables
   d->script->registerObject("plugin", this);
   
   // Load init section
   d->script->call("init");
}

PluginScripted::~PluginScripted()
{
   loader()->scriptEngine().unload(d->script);
   d->script = 0;
   delete d;
}

int PluginScripted::load()
{
   if(d->script == 0)
      return false;
   
   d->loaded = d->script->call("load").toBool();
   return d->loaded;
}

int PluginScripted::unload()
{
   if(d->script == 0)
      return false;
   
   d->loaded = !d->script->call("unload").toBool();
   return d->loaded;
}

int PluginScripted::configure()
{
   if(d->script == 0)
      return false;
   
   return d->script->call("configure").toBool();
}

bool PluginScripted::isLoaded()
{
   return d->loaded;
}

void PluginScripted::singleShot(int interval)
{
   QTimer::singleShot(interval, this, SIGNAL(timeout()));
}

void PluginScripted::setTimer(int interval)
{
   if(interval < 1)
      killTimer(d->timer);
   else
      d->timer = startTimer(interval);
}

void PluginScripted::timerEvent(QTimerEvent* event)
{
   Q_UNUSED(event);
   emit(timeout());
}
    
void PluginScripted::runProcess(QString program, QStringList args, QVariant id, QString dir)
{
	if (program.length() == 0) {
      emit(processFinished((id == 0) ? program : id, -1, -1, 0, 0));
		return;
	}
		

	PluginProcess* ps = new PluginProcess();
   if (!dir.isEmpty())
      ps->setWorkingDirectory(dir);
   
   int retval = ps->run(program, args, 10000);

   if (retval == 0) {
      emit(processFinished((id == 0) ? program : id, ps->exitCode(), (int)ps->exitStatus(), QString(ps->readAllStandardOutput()), QString(ps->readAllStandardError())));
   } else {
      emit(processFinished((id == 0) ? program : id, (int)ps->error(), -1, 0, 0));
   }
}

void PluginScripted::download(QString address, int timeout, QVariant id)
{
   THttp http;
   int retval = http.download(address, timeout);

   emit(downloadFinished((id == 0) ? address : id, (retval == 1) ? -1 : http.error(), QString(http.readAll())));
}

#include "pluginscripted.moc"

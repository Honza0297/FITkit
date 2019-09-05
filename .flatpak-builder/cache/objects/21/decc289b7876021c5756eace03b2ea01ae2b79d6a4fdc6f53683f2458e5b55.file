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

#include <QFileInfo>
#ifdef DEBUG
#undef _DEBUG
#endif
#include <PythonQt/PythonQt.h>
#include <PythonQt/PythonQt_QtAll.h>
#ifdef DEBUG
#define _DEBUG
#endif

#include "scriptengine.h"
#include "script.h"
#include "qdevkit.h"

class ScriptEnginePrivate
{
   public:
      ScriptEnginePrivate()
          : quiet(false), engine(0)
      {}

      bool       quiet;
      PythonQt*  engine;
      ScriptList scripts;
      ObjectMap  objects;
      QList<const QMetaObject*> clslist;
};

ScriptEngine::ScriptEngine(QDevKit* app)
   : QObject(app), Component(app), d(new ScriptEnginePrivate())
{
   // Initialize engine
   //PythonQt::init(PythonQt::RedirectStdOut);
   PythonQt::init(PythonQt::IgnoreSiteModule | PythonQt::RedirectStdOut);
   PythonQt_QtAll::init();
   d->engine = PythonQt::self();
   d->engine->registerQObjectClassNames(QStringList() << "IOChannel" << "Device");
   d->clslist.clear();

   // Initialize main module
   d->scripts.append(new Script(d->engine->getMainModule()));
   d->scripts.front()->eval("from PythonQt import *");
   d->scripts.front()->eval("import sys");
   d->scripts.front()->eval("setdefaultencoding = sys.setdefaultencoding");
   d->scripts.front()->eval("import site");
   d->scripts.front()->eval("setdefaultencoding('utf-8')");

   // Connect stdout
   connect(d->engine, SIGNAL(pythonStdOut(const QString&)),
           this,     SLOT(printOutput(const QString&)));

   connect(d->engine, SIGNAL(pythonStdErr(const QString&)),
           this,     SLOT(printOutput(const QString&)));

   // Set defaults
   setQuiet(false);


   qDebug("ScriptEngine: initialized");
}

ScriptEngine::~ScriptEngine()
{
   foreach(Script* script, d->scripts)
      delete script;

   d->scripts.clear();
   d->clslist.clear();
   //PythonQt::cleanup();

   delete d;

   qDebug("ScriptEngine: cleanup finished");
}

void ScriptEngine::printOutput(const QString& str)
{
   qDebug("%s",str.toStdString().c_str());
   emit(outputPrinted(str));
}

Script* ScriptEngine::load(const QString& file, const QString& module)
{
   // If module is empty, parse in main
   if(module.isEmpty())
   {
      Script* main = d->scripts[0];
      main->evalFile(file);
      return main;
   }

   // Parse python script
   PythonQtObjectPtr code = d->engine->createUniqueModule();

   // Set import path
   QString importPath = QFileInfo(file).absolutePath();
   d->engine->setModuleImportPath(code.object(), QStringList() << importPath);

   // Evaluate file
   code.evalFile(file);
   if(code.isNull())
   {
      qDebug("DEBUG: ScriptEngine: cannot parse file '%s'.", file.toStdString().c_str());
      return 0;
   }

   // Create Script
   Script* script = new Script(code);
   d->scripts.append(script);

   // Register objects
   for(ObjectMap::iterator it = d->objects.begin(); it != d->objects.end(); ++it)
      script->registerObject(it.key(), it.value());

   return script;
}

void ScriptEngine::unload(Script* script)
{
   if(!d->scripts.contains(script))
      return;

   int index = d->scripts.indexOf(script);
   d->scripts.remove(index);
   delete script;
}

void ScriptEngine::registerObject(const QString& name, QObject* obj)
{
   // For every already registered
   foreach(Script* script, d->scripts)
      script->registerObject(name, obj);

   // Store for new scripts
   d->objects[name] = obj;
}

QVariant ScriptEngine::eval(const QString& script)
{
   return d->scripts.front()->eval(script);
}

QList<const QMetaObject *> ScriptEngine::classList()
{
	return d->clslist;
}

void ScriptEngine::registerClass(const QMetaObject* obj)
{
   d->engine->registerClass(obj);
   d->clslist.append(obj);
}

void ScriptEngine::setQuiet(bool state)
{
   d->quiet = state;
}

bool ScriptEngine::isQuiet() const
{
   return d->quiet;
}

#include "scriptengine.moc"

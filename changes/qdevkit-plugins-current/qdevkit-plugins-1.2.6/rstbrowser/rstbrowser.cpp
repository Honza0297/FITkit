/***************************************************************************
 *   Copyright (C) 2009 Brno University of Technology,                     *
 *   Faculty of Information Technology                                     *
 *   Author(s): Marek Vavrusa    <xvavru00 AT stud.fit.vutbr.cz>           *
 *              Zdenek Vasicek   <vasicek  AT fit.vutbr.cz>                *
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

#include <QtPlugin>
#include <qdevkit/components.h>
#include <qdevkit/script.h>
#include <qdevkit/scriptengine.h>

#include "rstbrowser.h"

class RstBrowser::Private
{
   public:
      Private()
         : isLoaded(false)
      {}

      bool isLoaded;
      QString name;
      QString version;
};

RstBrowser::RstBrowser()
   : d( new Private() )
{
   d->name = "RstBrowser";
   d->version = "0.1.0";
}

RstBrowser::~RstBrowser()
{
   delete d;
}

bool RstBrowser::isLoaded()
{
   return d->isLoaded;
}

int RstBrowser::load()
{
   d->isLoaded = true;
   components().setBrowser(this);

   return true;
}

int RstBrowser::unload()
{
   d->isLoaded = false;
   components().setBrowser(0);

   return true;
}

int RstBrowser::configure()
{
   return true;
}

void RstBrowser::browse(const QString& docFilePath, const QString& appName)
{
   QVariantList args;
   QDir path(loader()->path());
   QDir dpath(QFileInfo(docFilePath).absolutePath());

   QStringList paths;

   paths.append(dpath.absolutePath());

   if (dpath.cd("img"))
      paths.append(dpath.absolutePath());

/*
   foreach(const QString& pth, paths) {
       qDebug("DEBUG: rst search path: %s", pth.toStdString().c_str());
   }
*/
   QDir::setSearchPaths("rst", paths);

/*
   if (!path.exists("rstbrowser.py"))
   {
      qDebug("DEBUG: Can't find browser script.");
      return;
   }

   Script* script = scriptEngine().load(path.absoluteFilePath("rstbrowser.py"), "rstbrowser");
*/
   Script* script = scriptEngine().load(":/scripts/rstbrowser.py", "rstbrowser");

   if (script == 0)
   {
      qDebug("DEBUG: Failed to load browser script.");
      return;
   }

   script->registerObject("plugin", loader());
   args << docFilePath;
   args << appName;
   script->call("showDocument", args);

   scriptEngine().unload(script);
}

Q_EXPORT_PLUGIN2(pnp_RstBrowser, RstBrowser)

#include "rstbrowser.moc"

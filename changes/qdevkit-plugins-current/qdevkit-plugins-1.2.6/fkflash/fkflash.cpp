/***************************************************************************
 *   Copyright (C) 2008 Brno University of Technology,                     *
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
#include <libkitclient/qtapi>

#include "fkflash.h"

class FkFlash::Private
{
   public:
      Private()
         : isLoaded(false)
      {}

      bool isLoaded;
      QString name;
      QString version;
};

FkFlash::FkFlash()
   : d( new Private() )
{
   d->name = "FKFlash";
   d->version = "0.3.0";
}

FkFlash::~FkFlash()
{
   delete d;
}

bool FkFlash::isLoaded()
{
   return d->isLoaded;
}

int FkFlash::load()
{
   qDebug("FkFlash: load");
   d->isLoaded = true;
   components().setFlash(this);

   return true;
}

int FkFlash::unload()
{
   qDebug("FkFlash: unload");
   d->isLoaded = false;
   components().setFlash(0);

   return true;
}

int FkFlash::configure()
{
   return true;
}

void FkFlash::flash(QtAPI::Device* dev, const QString& name, const QString& bin, const QString& hex, const QString& hex2, bool force)
{
   QVariantList args;
   args << name;
   args << bin;
   args << hex;
   args << hex2;
   args << force;

   Script* script = scriptEngine().load(":/scripts/fkflash.py", "fkflash");

   if(script == 0)
   {
      qDebug("DEBUG: Failed to load script.");
      return;
   }

   script->registerObject("plugin", loader());
   script->registerObject("DEVICE", dev);
   script->registerObject("ChannelA", dev->channelA());
   script->registerObject("ChannelB", dev->channelB());
   script->call("flash", args);
   scriptEngine().unload(script);
}

Q_EXPORT_PLUGIN2(pnp_FkFlash, FkFlash)

#include "fkflash.moc"


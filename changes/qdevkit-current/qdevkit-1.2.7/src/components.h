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

#ifndef COMPONENTS_H
#define COMPONENTS_H

#include "component.h"
#include "plugininterfaces.h"
#include "qdevkit_export.h"

class QDEVKIT_EXPORT Components : public Component
{
   public:
      Components(QDevKit* app);

      void setFlash(FlashInterface* iface);
      FlashInterface* flash() const;

      void setBrowser(BrowserInterface* iface);
      BrowserInterface* browser() const;

   private:
      FlashInterface* cflash;
      BrowserInterface* cbrowser;
};

#endif
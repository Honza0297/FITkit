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

#include "configcomponent.h"

ConfigComponent::ConfigComponent(Settings *parent)
   : QWidget(parent), settings(parent), tabs(0)
{
   connect(parent, SIGNAL(accepted()), this, SLOT(save()));
}

int ConfigComponent::createPage(QWidget* contents, QString text, QIcon icon)
{
   // Create on first use
   if(tabs == 0)
   {
      pageLayout = new QVBoxLayout(this);
      tabs = new QTabWidget(this);
      pageLayout->addWidget(tabs);
   }

   // Add tab
   return tabs->addTab(contents, icon, text);
}

#include "configcomponent.moc"
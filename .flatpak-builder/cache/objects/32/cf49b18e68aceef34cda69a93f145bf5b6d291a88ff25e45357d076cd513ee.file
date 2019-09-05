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
#include <QDockWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGroupBox>

#include "pythonqtconsole.h"
#include <qdevkit/plugin.h>
#include <qdevkit/mainwindow.h>
#include <PythonQt/PythonQt.h>
#include <PythonQt/PythonQtScriptingConsole.h>

PythonQtConsole::PythonQtConsole()
   : m_widget(0)
{
}

int PythonQtConsole::load()
{
   // Create DockWidget
   m_widget = new QDockWidget(tr("PythonQt console"));
   m_widget->setObjectName("PythonQtConsole");

   QGroupBox* gbWidget = new QGroupBox(m_widget);
   gbWidget->setFlat(true);
   m_widget->setWidget(gbWidget);

   QVBoxLayout* lt = new QVBoxLayout(gbWidget);

   PythonQtScriptingConsole* con = new PythonQtScriptingConsole(gbWidget, PythonQt::self()->getMainModule(), 0);
   lt->addWidget(con);

   QHBoxLayout* ltBottom = new QHBoxLayout();
   lt->addLayout(ltBottom);

   QPushButton* btClr = new QPushButton(tr("&Clear"), gbWidget);
   ltBottom->addStretch();
   ltBottom->addWidget(btClr);

   // Add DockWidget
   mainWindow().addToDock(Qt::BottomDockWidgetArea, m_widget);
   m_widget->resize(350, m_widget->height());

   connect(btClr, SIGNAL(clicked()), con, SLOT(clear()));
   return true;
}

int PythonQtConsole::unload()
{
   delete m_widget;
   m_widget = 0;
   return true;
}

int PythonQtConsole::configure()
{
   return true;
}

Q_EXPORT_PLUGIN2(pnp_PythonQtConsole, PythonQtConsole)

#include "pythonqtconsole.moc"

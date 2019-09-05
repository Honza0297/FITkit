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
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QGroupBox>

#include "scriptconsole.h"
#include <qdevkit/plugin.h>
#include <qdevkit/mainwindow.h>
#include <qdevkit/scriptengine.h>

ScriptConsole::ScriptConsole()
   : m_widget(0)
{
}

int ScriptConsole::load()
{
   // Create DockWidget
   m_widget = new QDockWidget(tr("Script console"));
   m_widget->setObjectName("ScriptConsole");

   QGroupBox* gbWidget = new QGroupBox(m_widget);
   gbWidget->setFlat(true);
   m_widget->setWidget(gbWidget);

   QVBoxLayout* lt = new QVBoxLayout(gbWidget);
   m_terminal = new QTextEdit(gbWidget);
   m_terminal->setTextInteractionFlags(Qt::TextBrowserInteraction);
   m_terminal->setFocusPolicy(Qt::NoFocus);
   m_terminal->setReadOnly(true);
   lt->addWidget(m_terminal);

   /* Input */
   QHBoxLayout* ltBottom = new QHBoxLayout();
   lt->addLayout(ltBottom);

   /* Create widgets */
   QPushButton* btCmd = new QPushButton(tr("&Command"), gbWidget);
   m_input    = new QLineEdit(gbWidget);

   /* Add to layout */
   ltBottom->addWidget(m_input);
   ltBottom->addWidget(btCmd);

   // Add DockWidget
   mainWindow().addToDock(Qt::BottomDockWidgetArea, m_widget);
   m_widget->resize(350, m_widget->height());

   // Connect
   ScriptEngine& scripts = scriptEngine();
   scripts.setQuiet(true);
   connect(m_input, SIGNAL(returnPressed()), this, SLOT(cmd()));
   connect(btCmd, SIGNAL(clicked()), this, SLOT(cmd()));
   connect(&scripts, SIGNAL(outputPrinted(const QString&)), this, SLOT(print(const QString&)));
   return true;
}

int ScriptConsole::unload()
{
   ScriptEngine& scripts = scriptEngine();
   scripts.setQuiet(false);
   disconnect(&scripts, SIGNAL(outputPrinted(const QString&)), m_terminal, SLOT(append(const QString&)));
   delete m_widget;
   m_widget = 0;
   m_terminal = 0;

   return true;
}

int ScriptConsole::configure()
{
   return true;
}

void ScriptConsole::cmd()
{
   print(QString(">") + m_input->text() + "\n");
   QString out = scriptEngine().eval(m_input->text()).toString();
   if(!out.isEmpty())
      print(out);

   m_input->clear();
}

void ScriptConsole::print(const QString& text)
{
   if(m_terminal != 0)
   {
      m_terminal->moveCursor(QTextCursor::End);
      m_terminal->insertPlainText(text);
      m_terminal->moveCursor(QTextCursor::End);
   }
}

Q_EXPORT_PLUGIN2(pnp_ScriptConsole, ScriptConsole)

#include "scriptconsole.moc"

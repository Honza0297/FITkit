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

#ifndef PYTHONQT_CONSOLE_H
#define PYTHONQT_CONSOLE_H

#include <QObject>
#include <QDockWidget>
#include <QTextEdit>
#include <QLineEdit>

#include <qdevkit/plugininterfaces.h>

class QDKPLUGIN_EXPORT PythonQtConsole : public QObject, public PluginInterface
{
   Q_OBJECT
   Q_INTERFACES(PluginInterface)

   private:
      QDockWidget* m_widget;

   public:
      PythonQtConsole();

      bool isLoaded()
      { return (m_widget != 0); }

      int load();
      int unload();
      int configure();
};

#endif

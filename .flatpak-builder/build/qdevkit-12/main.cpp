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
#include <QDir>
#include <stdlib.h>   

#include "qdevkit.h"

int main(int argc, char *argv[])
{
   // Run QApplication   
   QApplication app(argc, argv);
   app.setOrganizationName("VUT FIT");
   app.setOrganizationDomain("fit.vutbr.cz");
   app.setApplicationName("QDevKit");

   //Python libraries path
   QDir dir(app.applicationDirPath());
   if (dir.cd("../lib/python"))
   {
      QString env = "PYTHONPATH=" + dir.absolutePath();
      qDebug("Python libraries:%s",dir.absolutePath().toStdString().c_str());
#ifdef __WIN32
      _putenv(_strdup(env.toStdString().c_str()));
#else
      putenv(strdup(env.toStdString().c_str()));
#endif
   }

   // Create application
   QDevKit qdevkit(argc, argv);

   // Run event-loop
   return app.exec();
}

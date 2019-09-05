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

#ifndef PLUGINSCRIPTED_H
#define PLUGINSCRIPTED_H

#include "pluginbase.h"
#include "pluginloader.h"
#include "qdevkit_export.h"
#include <QProcess>
#include <QTimer>
#include <QHttp>

class PluginScriptedPrivate;

class QDEVKIT_EXPORT PluginProcess : public QProcess 
{
   Q_OBJECT
   private:
      QEventLoop loop;
      QTimer timer;

   public:
      PluginProcess();
      int run(QString program, QStringList args, int timeout=0); // 0 - ok, 1 - error

   protected slots:
      void errorEvent(QProcess::ProcessError error);
};

class QDEVKIT_EXPORT THttp: public QHttp
{
   Q_OBJECT
   private:
      QEventLoop loop;
      QTimer timer;

   protected slots:
      void timeout();

   public:
      THttp();
      int download(QString address, int timeout = 10000); //0 - ok, 1 - timeout
};

class QDEVKIT_EXPORT PluginScripted : public PluginBase
{
   Q_OBJECT
   Q_PROPERTY(bool loaded READ isLoaded)
   
   public:
      PluginScripted(PluginLoader* loader);
      ~PluginScripted();
      
      int load();
      int unload();
      bool isLoaded();
      int configure();
      
   public slots:
      void setTimer(int interval);
      void singleShot(int interval);
      void runProcess(QString program, QStringList args, QVariant id = 0, QString dir = ""); //blocking
      void download(QString address, int timeout = 10000, QVariant id = 0); //blocking
      
   signals:
      void timeout();
      void processFinished(QVariant id, int exitCode, int exitStatus, QString stdOut, QString stdErr);
           // exitStatus: -1 ... error (exitCode contains the reason), 0 ... normal exit,  1 ... crashed
      void downloadFinished(QVariant id, int status, QString data);
      
   protected:
      void timerEvent(QTimerEvent* event);
  
   private:
      PluginScriptedPrivate *d;

};

#endif

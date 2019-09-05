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

#ifndef CONNECTION_H
#define CONNECTION_H

#include <QWidget>
#include <QTextEdit>
#include <QLineEdit>
#include <QMutex>
#include <QThread>
#include <libkitclient/qtapi>
#include "component.h"
#include "qdevkitui_export.h"

class Highlighter;

class QDEVKITUI_EXPORT Connection : public QWidget, Component
{
   Q_OBJECT
   Q_PROPERTY(bool isAttached READ isAttached)
   Q_PROPERTY(bool isReady READ isReady)

   friend class ConnectionTabs;

   public:

      enum Channel {
         ChannelA     = 0,
         ChannelB     = 1,
         ChannelCount = 2
      };

      Connection(QDevKit* app, QtAPI::Device* dev, QWidget* parent = 0);
      ~Connection();

      /* Scriptable accessors */
      bool isAttached();
      bool isReady();
      bool isOpen(Channel id);
      bool setChannel(QtAPI::IOChannel* ch, Channel id);

      Q_INVOKABLE QtAPI::Device* device();
      Q_INVOKABLE QLineEdit*  input();
      Q_INVOKABLE QTextEdit*  terminal(Channel id = ChannelB);
      Q_INVOKABLE QtAPI::IOChannel* channel(Channel id = ChannelB);
      Q_INVOKABLE QtAPI::Device* detach(bool notify = true);
      Q_INVOKABLE void attach(QtAPI::Device* device = 0);

   public slots:
      void startPolling();
      void stopPolling();
      bool initialize();
      bool open(Channel id);
      bool close(Channel id);
      bool closeAll();

   signals:
      void ready(int device_id);
      void connectionError(int deviceId);
      void commandReceived(int device_id, const QString& command, const QStringList& parameters);

   private slots:
      void reloadSettings();
      void poll(int id);
      void send();
      void readyChanged();

   private:
      class ReadThread;
      class Private;
      Private *d;

      void createWidgets();
      void setReady(bool state);
      void handleSpecialChars(int id, QString& text, bool* emitCmdReceived);
};

class QDEVKITUI_EXPORT Connection::ReadThread : public QThread
{
   Q_OBJECT

   public:
      ReadThread(Connection* connection);
      ~ReadThread();

      void stop(bool wait_finish = true);
      void start(int pollRate = 100);
      QString getData(int id);
      void clearData(int id);

   public slots:
      void setReading(bool state);
      void enqueueCmd(const QString& cmd);

   signals:
      void dataReady(int id);

   protected:
      void run();
      void timerEvent(QTimerEvent* event);

   private:
      class Private;
      Private *d;

};

#endif

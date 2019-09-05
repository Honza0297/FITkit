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

#include <QWidget>
#include <QSettings>
#include <QFont>
#include <QMenu>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QBoxLayout>
#include <QTimer>
#include <QCompleter>
#include <QStringListModel>
#include <QMessageBox>
#include <QApplication>
#include <QQueue>
#include <ctype.h>
#include <libkitclient/qtapi>
#include "connection.h"
#include "connectiontabs.h"
#include "highlighter.h"
#include "qdevicemgr.h"
#include "qdevkit.h"
#include "mainwindow.h"
#include "lookconfig.h"

class Connection::Private
{
   public:
      Private(Connection* parent, QtAPI::Device* cdev)
      : activeChannel(0), device(cdev), isAttached(true), input(0),
        btCmd(0), highlighter(0), isReady(false), readThr(parent)
      {
          channel[ChannelA] = channel[ChannelB] = 0;
          terminal[0] = terminal[1] = 0;
      }

      int activeChannel;
      QtAPI::Device*    device;
      QtAPI::IOChannel* channel[Connection::ChannelCount];
      bool            isAttached;
      QTextEdit*      terminal[Connection::ChannelCount];
      QLineEdit*      input;
      QPushButton*    btCmd;
      Highlighter*    highlighter;
      bool            isReady;
      int             fsmState[2];
      QString         cmdString;

      QMutex       deviceLock;
      QMutex       terminalLock;
      ReadThread   readThr;
};

class Connection::ReadThread::Private
{
   public:
      Private(Connection* cparent)
      : parent(cparent), isTerminated(false), timerId(-1)
      {}

      Connection*     parent;
      QByteArray      buffer[2];
      QMutex          bufferLock;
      bool            isTerminated;
      int             timerId;
      QQueue<QString> writeQueue;
};

Connection::Connection(QDevKit* app, QtAPI::Device* dev, QWidget* parent)
   : QWidget(parent), Component(app), d( new Private(this, dev) )
{
   // Setup UI
   createWidgets();

   // Load settings
   reloadSettings();

   // Connect signals
   connect(d->input, SIGNAL(returnPressed()),    this, SLOT(send()));
   connect(d->btCmd, SIGNAL(clicked()),          this, SLOT(send()));
   connect(app,      SIGNAL(settingsReloaded()), this, SLOT(reloadSettings()));
}

Connection::~Connection()
{
   qDebug("DEBUG: Releasing device %p\n", d->device);
   deviceMgr().release(d->device);
   delete d;
}

bool Connection::open(Channel id)
{
    // Open channel
    int ret = d->channel[id]->open();
    if (ret != IOChannel::Ok && ret != IOChannel::AlreadyOpen) {
        QMessageBox::warning(
                    this,
                    tr("Cannot open device channel"),
                    tr("<p>Opening device channel \"<b>%0</b>\" "
                       "failed with error code \"%1\".</p>"
                       "<p>Please check your permissions and<br/>"
                       "add yourself to the group <b>dialout</b> or similar..</p>"
                       "<p><i>You should have write permissions to devices"
                       "<b>/dev/ttyUSB*</b>.</i></p>")
                    .arg(id == ChannelA ? 'a' : 'b').arg(ret));

        return false;
    }

    d->terminal[id]->show();
    d->channel[id]->setDtr(false);
    d->channel[id]->setRts(false);
    d->channel[id]->setDtr(true);
    d->channel[id]->setRts(true);
    return true;
}

bool Connection::close(Channel id)
{
    // Check channel
    if(d->channel[id] == 0) {
        return false;
    }

    // Attached or not, close device
    if(d->channel[id]->isOpen()) {
        d->terminal[id]->hide();
        d->channel[id]->setDtr(false);
        d->channel[id]->setRts(false);
        d->channel[id]->close();
    }

    return true;
}

bool Connection::closeAll()
{
    // Stop polling
    stopPolling();

    // Stop both channels
    return close(ChannelA) && close(ChannelB);
}

bool Connection::setChannel(QtAPI::IOChannel* ch, Channel id)
{
    // Assign channel
    if (id < ChannelCount) {
        d->channel[id] = ch;
        return true;
    }

    return false;
}

bool Connection::initialize()
{
   d->fsmState[ChannelA] = d->fsmState[ChannelB] = 0; //reset FSM
   setReady(false);

   //init completer
   QStringListModel* model = qobject_cast<QStringListModel*>(d->input->completer()->model());
   model->stringList().clear();
   model->stringList() << "HELP";

   Channel id = ChannelB;
   d->channel[id]->setDtr(false);
   d->channel[id]->setRts(false);
   d->channel[id]->setDtr(true);
   d->channel[id]->setRts(true);

   return true;
}

void Connection::readyChanged()
{
   if (d->isReady)
   {
      emit(ready(device()->id()));
   }
}

void Connection::setReady(bool state)
{
   if (d->isReady != state)
   {
      d->isReady = state;
      //readyChanged event has to be delayed
      QTimer::singleShot(500, this, SLOT(readyChanged()));
   }
}

bool Connection::isAttached()
{
   return d->isAttached;
}

bool Connection::isReady()
{
   return d->isReady;
}

bool Connection::isOpen(Channel id)
{
    return d->channel[id]->isOpen();
}

QtAPI::Device* Connection::device()
{
   return d->device;
}

QTextEdit* Connection::terminal(Channel id)
{
    if (id < ChannelCount) {
        return d->terminal[id];
    }

    return 0;
}

QLineEdit* Connection::input()
{
   return d->input;
}

void Connection::createWidgets()
{
   /* Terminals */
   for (int i = 0; i < ChannelCount; ++i) {
       d->terminal[i] = new QTextEdit(this);
       d->terminal[i]->setObjectName("terminal");
       d->terminal[i]->setTextInteractionFlags(Qt::TextBrowserInteraction);
       d->terminal[i]->setFocusPolicy(Qt::NoFocus);
       d->terminal[i]->setReadOnly(true);
       d->terminal[i]->setAcceptRichText(true);
       d->terminal[i]->hide();
   }

   /* Create widgets */
   d->btCmd    = new QPushButton(tr("&Send"), this);
   d->btCmd->setObjectName("button");
   d->input    = new QLineEdit(this);
   d->input->setObjectName("input");
   d->input->setFocusPolicy(Qt::StrongFocus);

   /* Highlighter & Completer */
   d->highlighter = new Highlighter("terminal",
                                    d->terminal[ChannelB]->document());

   if(d->highlighter->size() == 0)
   {
      LookConfig::setHighlighterDefaults("terminal");
      d->highlighter->load();
   }

   QCompleter* completer = new QCompleter(QStringList() << "HELP", d->input);
   completer->setCaseSensitivity(Qt::CaseInsensitive);
   d->input->setCompleter(completer);

   /* Add to layout */
   QVBoxLayout* lt = new QVBoxLayout(this);
   QHBoxLayout* ltTop = new QHBoxLayout();
   QHBoxLayout* ltBottom = new QHBoxLayout();
   ltBottom->addWidget(d->input);
   ltBottom->addWidget(d->btCmd);
   ltTop->addWidget(d->terminal[ChannelA]);
   ltTop->addWidget(d->terminal[ChannelB]);
   lt->addLayout(ltTop);
   lt->addLayout(ltBottom);
}

QtAPI::Device* Connection::detach(bool notify)
{
   // TODO: block until is available

   // Lock connection
   d->deviceLock.lock();

   d->isAttached = false;
   stopPolling();

   // Lock reading
   d->terminalLock.lock();

   // Display notification
   if(notify)
   {
      d->terminal[ChannelA]->setEnabled(false);
      d->terminal[ChannelB]->setEnabled(false);
      d->input->setEnabled(false);
      d->btCmd->setEnabled(false);
   }

   qDebug("DEBUG: Connection: device detached");
   return d->device;
}

void Connection::attach(QtAPI::Device* device)
{
   // Omit already attached
   if(isAttached())
      return;

   // Attach if device specified
   if(device != 0 && device != d->device)
   {
      d->device = device;
      setChannel(d->device->channelA(), ChannelA);
      setChannel(d->device->channelB(), ChannelB);
   }

   // Clear notification
   d->terminal[ChannelA]->setEnabled(true);
   d->terminal[ChannelB]->setEnabled(true);
   d->btCmd->setEnabled(true);
   d->input->setEnabled(true);
   d->input->setFocus();

   // Unlock reading
   d->terminalLock.unlock();
   startPolling();
   d->isAttached = true;

   d->deviceLock.unlock();
   qDebug("DEBUG: Connection: device attached");
}

void Connection::startPolling()
{
   connect(&d->readThr, SIGNAL(dataReady(int)), this, SLOT(poll(int)));
   d->readThr.start();
}

void Connection::stopPolling()
{
   disconnect(&d->readThr, SIGNAL(dataReady(int)), this, SLOT(poll(int)));
   d->readThr.stop();
}

QtAPI::IOChannel* Connection::channel(Channel id)
{
    if (id < ChannelCount) {
        return d->channel[id];
    }

    return 0;
}

void Connection::handleSpecialChars(int id, QString& text, bool* emitCmdReceived)
{
   char ch;
   int &state = d->fsmState[id];
   bool containsGT = false;
   QByteArray data = text.toLatin1();
   int data_len = text.size();
   text.clear();

   //WARNING: prijimana data mohou byt rozdelena do vice paketu, pokud je nutne nejaka data extrahovat,
   //         musi se ukladat do staticke/globalni promenne

   if (emitCmdReceived != 0)
      *emitCmdReceived = false;

   for (int i = 0; i < data_len; i++) {
      ch = data[i];

      switch (state) {
         case 0:
            if (ch == '\x1b')
            {
               state = 1;
            }
            else if (ch == '\x01') //STX (start command transfer)
            {
               state = 10;
               d->cmdString.clear();
            }
            else
            {
               text += ch;

               if (isspace(ch))
                  break;

               containsGT = false; //after > can not be any char
               if (ch == '>')
                  containsGT = true;
            }
            break;

         case 1: //ESC received
            state = 0;
            if (ch == '[')
               state = 2;
            break;

         case 2: //ESC sequence (first char)
         case 3: //ESC sequence (next chars)
            if ((state == 2) && (ch == '2')) {
               state = 4;
            }
            else if ((!isdigit(ch)) && (ch != 'm') && (ch != ';'))
            {
               i--; //char has to be processed again
               state = 0;
            }
            else
               state = 3;
            break;

         case 4: // received: \x1b[2
            if (ch == 'J')
            {
               state = 0;
               text.clear();
               d->terminal[ChannelB]->clear();
            }
            else
            {
               i--; //char has to be processed again
               state = 3;
            }
            break;

         case 10: //command
            if (ch == 0x03)
            {
               //emit EVENT
               if (emitCmdReceived != 0)
                  *emitCmdReceived = true;
               qDebug("DEBUG: handleSpecialChars cmdReceived:%s",d->cmdString.toStdString().c_str());
               state = 0;
            }
            else
            {
               d->cmdString += ch;
            }
            break;

      }
   }

   // Initialization char
   if (containsGT) {
      setReady(true);
   }
}

void Connection::poll(int id)
{
   if(!d->terminalLock.tryLock())
      return;

   // Check for -1 (read error)
   if (id == -1) {
       d->terminalLock.unlock();
       int deviceId = device()->id();
       emit connectionError(deviceId);
       QApplication::processEvents();
       mainWindow().showError(tr("Serial connection to FITkit was lost"),
                              tr("Device was probably disconnected "
                                 "from the computer.\n"
                                 "Please check the cabling and the "
                                 "device and try again."));
       return;
   }

   // Check id
   if (id < 0 || id >= ChannelCount) {
       qWarning("Connection::poll() invalid id received: %d", id);
       d->terminalLock.unlock();
       return;
   }

   QString inbuf(d->readThr.getData(id));

   /*! \todo Special chars handling should occur outside event loop to prevent UI stuttering. */
   bool emitCmdReceived = false;
   if (id == ChannelB) {
       handleSpecialChars(id, inbuf, &emitCmdReceived);
   }

   if (!inbuf.isEmpty())
   {
      // Append text
      d->terminal[id]->moveCursor(QTextCursor::End);
      d->terminal[id]->insertPlainText(inbuf);
      d->terminal[id]->moveCursor(QTextCursor::End);
   }

   d->terminalLock.unlock();

   if (emitCmdReceived)
   {
      QStringList cmdList = d->cmdString.split(';', QString::SkipEmptyParts);
      if (cmdList.count() > 0)
      {
         QString cmdID = cmdList.takeFirst();
         emit(commandReceived(device()->id(), cmdID, cmdList));
      }
   }
}

void Connection::send()
{
   d->terminalLock.lock();

   if(d->input->text().length())
   {
      QString text(d->input->text());

      // Append to history
      // TODO: better history key handling
      QStringListModel* model = qobject_cast<QStringListModel*>(d->input->completer()->model());
      if(model != NULL) {
          if(!model->stringList().contains(text, Qt::CaseInsensitive))
          {
             model->insertRows(model->rowCount(), 1);
             model->setData(model->index(model->rowCount() - 1), text);
          }
      }

      // Send data
      d->readThr.enqueueCmd(text);

      // Clear input
      d->input->clear();
   }

   d->terminalLock.unlock();
}

void Connection::reloadSettings()
{
   // Update highlighter
   d->highlighter->load();

   QFont font(d->highlighter->fontFamily);
   font.setPointSize(d->highlighter->fontSize);

   for (int i = 0; i < ChannelCount; ++i) {
       d->terminal[i]->setFont(font);
   }

   d->highlighter->rehighlight();
}

Connection::ReadThread::ReadThread(Connection* connection)
   : QThread(connection), d( new Private(connection) )
{
}

Connection::ReadThread::~ReadThread()
{
   stop();
   delete d;
}

void Connection::ReadThread::stop(bool wait_finish)
{
   qDebug("DEBUG: ReadThread: stop");
   setReading(false);

#ifndef __WIN32
   if (isRunning())
      d->parent->channel()->terminate();
#endif

   if(d->timerId != -1)
   {
      killTimer(d->timerId);
      d->timerId = -1;
   }

   if (wait_finish) {
      wait();
   }
}

void Connection::ReadThread::start(int pollRate)
{
   qDebug("DEBUG: ReadThread: start");
   clearData(Connection::ChannelA);
   clearData(Connection::ChannelB);
   setReading(true);

   if(d->timerId == -1) {
      d->timerId = startTimer(pollRate);
   }

   QThread::start();
}

void Connection::ReadThread::timerEvent(QTimerEvent* event)
{
	Q_UNUSED(event);
}

QString Connection::ReadThread::getData(int id)
{
   //request to send received data
   QString out;
   d->bufferLock.lock();

   if (d->buffer[id].length() > 0)
   {
      out = QString::fromLatin1(d->buffer[id].constData(), d->buffer[id].length());
      d->buffer[id].clear();
   }

/* int retChars = 0;  
   if (d->buffer.length() > 0)
   {
      // return incomplete vt100 into d->buffer
      if (d->buffer.endsWith("\x1b")) retChars = 1;
      if (d->buffer.endsWith("\x1b[")) retChars = 2;
      if (d->buffer.endsWith("\x1b[2")) retChars = 3;
      if (d->buffer.endsWith("\x1b[4")) retChars = 3;
      if (d->buffer.endsWith("\x1b[24")) retChars = 4;

      out = d->buffer.left(d->buffer.length() - retChars);
      d->buffer = d->buffer.right(retChars);
   }
*/
   d->bufferLock.unlock();
   return out;
}

void Connection::ReadThread::setReading(bool state)
{
   d->isTerminated = !state;
}

void Connection::ReadThread::clearData(int id)
{
   d->bufferLock.lock();
   d->buffer[id].clear();
   d->bufferLock.unlock();
}

void Connection::ReadThread::enqueueCmd(const QString& cmd)
{
   d->bufferLock.lock();
   d->writeQueue.enqueue(cmd);
   d->bufferLock.unlock();
}

void Connection::ReadThread::run()
{
   int res = 0;
   char buffer[64];

   QtAPI::IOChannel* channel = 0;
   Connection::Channel id = Connection::ChannelA;
   while (!d->isTerminated)
   {
      // Switch channel
      if (id == Connection::ChannelA) {
          id = Connection::ChannelB;
      } else {
          id = Connection::ChannelA;
      }

      // Select channel
      channel = d->parent->channel(id);
      if (!d->parent->terminal(id)->isVisible()) {
          continue;
      }
      
      // Process writes
      d->bufferLock.lock();
      while(!d->writeQueue.isEmpty()) {
         QString cmd = d->writeQueue.dequeue();
         cmd.append("\r\n");
         QByteArray ba = cmd.toLatin1();
         QtAPI::IOChannel* wrchannel = d->parent->channel(Connection::ChannelB);
         if(wrchannel->write(ba.data(), ba.length()) < 0)
         {
            qDebug("DEBUG: Connection: could not send data");
            stop(false);
            d->bufferLock.unlock();
            qDebug("DEBUG: ReadThread: finished");
            return;
         } else {
            qDebug("DEBUG: Connection: sent command '%s'",
                   cmd.trimmed().toStdString().c_str());
         }
      }
      d->bufferLock.unlock();

      // Read
      res = channel->readsome(buffer, 64, 100);
      if (res < 0) {
         qDebug("DEBUG: ReadThread: read(%p, 64, 100) = %d", buffer, res);
         emit(dataReady(-1));
         break; //read terminated / IO error
      }

      // Handle result
      if (res > 0)
      {
         //buffer[res] = '\0';
         d->bufferLock.lock();
         d->buffer[id].append(buffer, res);
         d->bufferLock.unlock();

         //received >, send buffer immediately
         for(int i = 0; i < res; ++i) {
            if(!isalpha(buffer[i])) {
               emit(dataReady((int)id));
               break;
            }
         }
      }
   }

   qDebug("DEBUG: ReadThread: finished");
};

#include "connection.moc"

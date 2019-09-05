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

#include <QProcess>
#include <QPushButton>
#include <QTextEdit>
#include <QHBoxLayout>
#include <QSyntaxHighlighter>
#include <QProgressBar>
#include <QDialog>
#include <QDir>

#include "processjob.h"
#include "highlighter.h"
#include "lookconfig.h"
#include "overlaywidget.h"
#include "jobscheduler.h"

class ProcessJob::Private
{
   public:
      Private()
      : ps(0), text(0), hl(0), btDisplay(0), dlg(0), stateId(0), lastIndex(0),
        modal(false), alwaysClose(false)
      {}

     QProcess *ps;
     QTextEdit* text;
     Highlighter* hl;
     QPushButton* btDisplay;
     QString command;
     QStringList args;
     QList<QRegExp> states;
     QDialog* dlg;
     int stateId;
     int lastIndex;
     bool modal;
     bool alwaysClose;
};

ProcessJob::ProcessJob(JobScheduler* scheduler, const QString& label)
   : JobWidget(scheduler, label), d( new Private() )
{
   // Initialize
   createProcess();
   createWidgets();
}

ProcessJob::~ProcessJob()
{
   d->dlg->deleteLater();
   delete d;
}

void ProcessJob::addState(const QString& pattern)
{
   d->states.append(QRegExp(pattern));
}

void ProcessJob::createProcess()
{
   d->ps = new QProcess(widget());
   connect(d->ps, SIGNAL(readyReadStandardError()), this, SLOT(readData()));
   connect(d->ps, SIGNAL(readyReadStandardOutput()), this, SLOT(readData()));
   connect(d->ps, SIGNAL(finished(int, QProcess::ExitStatus)), this, SLOT(finish(int, QProcess::ExitStatus)));
}

void ProcessJob::setHighlighter(const QString& context)
{
   d->hl->setContext(context);
   d->hl->load();

   // Try to load defaults
   if(d->hl->size() == 0)
   {
      LookConfig::setHighlighterDefaults(context);
      d->hl->load();
   }

   QFont font(d->hl->fontFamily);
   font.setPointSize(d->hl->fontSize);
   if (d->text != 0)
      d->text->setFont(font);

   d->hl->rehighlight();
}

void ProcessJob::createWidgets()
{
   // Create text output
   d->text = new QTextEdit(widget());
   d->text->setTextInteractionFlags(Qt::TextSelectableByMouse);
   d->text->setReadOnly(true);
   d->text->setLineWrapMode(QTextEdit::NoWrap);
   d->text->setFont(QFont("Monospaced"));
   d->text->hide();

   // Create highlighter
   d->hl = new Highlighter(QString(), d->text->document());

   // Create progress
   d->btDisplay = new QPushButton(QIcon(":/icons/22x22/go-up.png"), "", widget());
   d->btDisplay->setToolTip(tr("Show task details."));
   connect(d->btDisplay, SIGNAL(clicked()), this, SLOT(dialogShow()));

   // Create dialog
   d->dlg = new QDialog(0);
   d->dlg->setObjectName("ProcessJobDialog");
   d->dlg->setMinimumWidth(500);
   d->dlg->setMinimumHeight(400);
   d->dlg->setModal(true);
   d->dlg->hide();

   // Create dialog layout
   QVBoxLayout* ltDlg = new QVBoxLayout(d->dlg);
   ltDlg->addWidget(d->text);

   // Connect dialog
   connect(cancelButton(), SIGNAL(clicked()),   d->dlg, SLOT(reject()));
   connect(d->dlg,         SIGNAL(finished(int)), this, SLOT(dialogFinished(int)));

   // Append buttons
   addButton(d->btDisplay);
   addWidget(d->text);

   // Set default state
   progress()->setRange(0, 100);
   progress()->setValue(0);
}

void ProcessJob::setModal(bool state)
{
   d->modal = state;
}

bool ProcessJob::isModal()
{
	return d->modal;
}

void ProcessJob::setAutoClose(bool state)
{
   d->alwaysClose = state;
}

bool ProcessJob::autoClose()
{
	return d->alwaysClose;
}

QPushButton* ProcessJob::displayButton()
{
   return d->btDisplay;
}

int ProcessJob::state()
{
    return d->stateId;
}

int ProcessJob::setState(int val)
{
    int old = d->stateId;
    d->stateId = val;
    return old;
}

int ProcessJob::updateState()
{
    // Check next state
    if(d->states.count() > 0 && d->stateId < d->states.count())
    {
        // Get last block start
        int index = 0;
        if(d->stateId != 0)
            index = text()->toPlainText().indexOf(d->states[d->stateId], d->lastIndex);
        else
        {
            // Look for first match on initial state
            foreach(const QRegExp& rx, d->states)
            {
                if((index = text()->toPlainText().indexOf(rx, d->lastIndex)) >= 0)
                {
                    d->stateId = d->states.indexOf(rx);
                    break;
                }
            }
        }

        // If found state match
        if(index != -1)
        {
            // Move to next state
            ++d->stateId;
            d->lastIndex = index;

            // Update progress
            updateProgress(d->stateId * 100 / d->states.count());
        }
    }

    return d->stateId;
}

void ProcessJob::dialogFinished(int state)
{
   // Append as previous
   mState &= ~Job::Maximized;
   d->text->hide();
   overlay()->layout()->addWidget(widget());

   // Reconnect dialogs
   disconnect(displayButton(), SIGNAL(clicked()),   d->dlg, SLOT(accept()));
   connect(displayButton(),    SIGNAL(clicked()),     this, SLOT(dialogShow()));

   // Store window size
   QSettings set;
   set.beginGroup("ProcessWindow");
   if((d->hl != 0) && (!d->hl->context().isEmpty()))
   {
      set.beginGroup(d->hl->context());
      set.setValue("WindowSize",  d->dlg->size());
      set.endGroup();
   }
   set.endGroup();

   // Minimize task if it wasn't canceled
   if(state == QDialog::Accepted)
   {
      connect(d->btDisplay, SIGNAL(clicked()), this, SLOT(dialogShow()));
      d->btDisplay->setIcon(QIcon(":/icons/22x22/go-up.png"));
      d->btDisplay->setToolTip(tr("Show task details."));
      overlay()->setVisible(true);
      scheduler()->updateDetails();
   }
}


void ProcessJob::dialogShow()
{
      // Check flags
      if(mState & Job::Maximized)
      {
         qDebug("ProcessJob: already maximized");
         return;
      }

      // Flag as maximized
      mState |= Job::Maximized;
      overlay()->setVisible(false);
      scheduler()->updateDetails();

      // Update dialog window
      QSettings set;
      d->dlg->setWindowTitle(name());
      d->btDisplay->setIcon(QIcon(":/icons/22x22/go-down.png"));
      d->btDisplay->setToolTip(tr("Hide task details."));
      d->dlg->layout()->addWidget(widget());
      d->dlg->layout()->addWidget(d->text);

      // Restore dialog size
      set.beginGroup("ProcessWindow");
      if ((d->hl != 0) && (!d->hl->context().isEmpty()))
      {
         set.beginGroup(d->hl->context());
         if (set.contains("WindowSize"))
            d->dlg->resize(set.value("WindowSize").toSize());
         set.endGroup();
      }
      set.endGroup();

      // Reconnect buttons
      connect(displayButton(),    SIGNAL(clicked()),   d->dlg, SLOT(accept()));
      disconnect(displayButton(), SIGNAL(clicked()),  this, SLOT(dialogShow()));

      // Show
      d->text->show();
      d->dlg->show();
}

void ProcessJob::terminate()
{
   if(mState & Terminated)
   {
      qDebug("ProcessJob: already terminated");
      return;
   }

   d->ps->kill();
   JobWidget::terminate();
}

void ProcessJob::setCommand(const QString& command, QStringList args)
{
   d->command = command;
   d->args = args;

   // Handle whitespace
   if(d->command.contains(" ") || d->command.contains("\t"))
      d->command = "\"" + d->command + "\"";
}

void ProcessJob::run()
{
   QString appPath = QDir(QCoreApplication::applicationDirPath()).absolutePath();

   // Prepare progress
   d->stateId = 0;
   d->lastIndex = 0;
   d->text->clear();

   // Mark as running
   JobWidget::run();

   // Handle empty command
   if(d->command.isEmpty())
   {
      d->text->append(tr("Command not found: %1").arg(d->command));
      finish(1, d->ps->exitStatus());
      return;
   }

   // Set default state
   progress()->setValue(0);

   // Modify PATH variable (append appPath)
   QStringList env = QProcess::systemEnvironment();
   #ifdef __WIN32
   env.replaceInStrings(QRegExp("^PATH=(.*)", Qt::CaseInsensitive), "PATH=\\1;" + appPath);
   #else
   env.replaceInStrings(QRegExp("^PATH=(.*)", Qt::CaseInsensitive), "PATH=\\1:" + appPath);
   #endif
   d->ps->setEnvironment(env);

   // Run process
   d->ps->start(d->command, d->args);
   if(!d->ps->waitForStarted(500))
   {
      if (d->ps->error() == QProcess::FailedToStart)
         d->text->append("Process execution failed with error: FailedToStart");

      if (d->ps->error() == QProcess::Crashed)
         d->text->append("Process execution failed with error: Crashed");

      finish(d->ps->exitCode(), d->ps->exitStatus());
      return;
   }

   // Show modality if not already maximized
   if(d->modal && !(mState & Job::Maximized))
      dialogShow();
}

void ProcessJob::setDirectory(const QString& dir)
{
   d->ps->setWorkingDirectory(dir);
}

void ProcessJob::finish(int code, QProcess::ExitStatus status)
{
   progress()->setRange(0, 100);
   progress()->setValue(100);

   if(status == QProcess::NormalExit && code == 0)
   {
      if(!(mState & Maximized) || d->alwaysClose)
         JobWidget::close();
      else
      {
         // Now close is legit
         cancelButton()->setIcon(QIcon(":/icons/22x22/bt-apply.png"));
         disconnect(cancelButton(), SIGNAL(clicked()), this, SLOT(terminate()));
         connect(cancelButton(), SIGNAL(clicked()), this, SLOT(close()));
      }
   }
   else
   {
      // Popup
      if(!(mState & Maximized))
         dialogShow();
   }
}

void ProcessJob::readData()
{
   // Append data
   int position = -1;
   if(d->text->textCursor().atEnd())
      position = d->text->textCursor().position();

   d->text->moveCursor(QTextCursor::End);
   d->text->insertPlainText(d->ps->readAllStandardError());
   d->text->insertPlainText(d->ps->readAllStandardOutput());
   d->text->moveCursor(QTextCursor::End);

   if(position != -1)
      d->text->textCursor().setPosition(position);

   // Update state
   updateState();
}

QTextEdit *ProcessJob::text()
{
    return d->text;
}

#include "processjob.moc"

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
#include <QBuffer>
#include <QLabel>
#include <fcmake/remote.h>

#include "rbuildjob.h"
#include "highlighter.h"
#include "lookconfig.h"
#include "overlaywidget.h"
#include "mainwindow.h"
#include "jobscheduler.h"
#include "buildserver.h"

class RBuildJob::Private
{
public:
    Private()
        : bufpos(0), buffer(), app(0), thread(0), stateId(0), lastIndex(0)
    {}

    int bufpos;
    QBuffer buffer;
    FCMake::App* app;
    RBThread* thread;
    int stateId;
    int lastIndex;
};

RBuildJob::RBuildJob(JobScheduler* scheduler, const QString& label)
    : ProcessJob(scheduler, label), d(new Private)
{
    // Initialize thread
    d->thread = new RBThread(this);
    connect(d->thread, SIGNAL(finished()), this, SLOT(finish()));

    // Initialize output stream
    d->buffer.open(QIODevice::ReadWrite);
    connect(d->thread, SIGNAL(readyRead()), this, SLOT(readData()));
}

RBuildJob::~RBuildJob()
{
    d->buffer.close();
    delete d;
}

void RBuildJob::setCommand(const QString& command, QStringList args)
{
	Q_UNUSED(command);
	Q_UNUSED(args);
	qDebug("RBuildJob: setCommand() not available");
}

void RBuildJob::setTask(FCMake::App* app)
{
    d->app = app;
}

void RBuildJob::dialogFinished(int state)
{
    // Terminate thread if running
    if (state == QDialog::Rejected && d->thread->isRunning()) {
        d->thread->terminate();
    }

    ProcessJob::dialogFinished(state);
}

void RBuildJob::terminate()
{
    if(mState & Terminated)
    {
        qDebug("RBuildJob: already terminated");
        return;
    }
    qDebug("RBuildJob: terminating...");

    d->thread->terminate();
    JobWidget::terminate();
}

void RBuildJob::run()
{
    // Prepare progress
    d->stateId = 0;
    d->lastIndex = 0;
    text()->clear();

    // TODO: implement cancellation points.
    cancelButton()->setEnabled(false);

    // Mark as running
    JobWidget::run();

    // Set default state
    progress()->setValue(0);

    // Start thread
    d->bufpos = 0;
    d->thread->start(&d->buffer, d->app, &scheduler()->buildServer());

    // Show modality if not already maximized
    if(isModal() && !(mState & Job::Maximized))
        dialogShow();
}

void RBuildJob::finish()
{
    progress()->setRange(0, 100);
    progress()->setValue(100);

    if(!(mState & Maximized) || autoClose())
        JobWidget::close();
    else
    {
        // Now close is legit
        // TODO: implement cancellation points.
        cancelButton()->setEnabled(true);
        cancelButton()->setIcon(QIcon(":/icons/22x22/bt-apply.png"));
        disconnect(cancelButton(), SIGNAL(clicked()), this, SLOT(terminate()));
        connect(cancelButton(), SIGNAL(clicked()), this, SLOT(close()));
    }
}

void RBuildJob::readData()
{
    // Append data
    QTextEdit *log = text();
    int position = -1;
    if(log->textCursor().atEnd())
        position = log->textCursor().position();

    // Get buffer end
    int bufend = d->buffer.buffer().size();
    log->moveCursor(QTextCursor::End);
    log->insertPlainText(QString(d->buffer.buffer()
                                 .mid(d->bufpos, bufend - d->bufpos)));
    log->moveCursor(QTextCursor::End);

    // Forward bufpos
    d->bufpos = bufend;

    if(position != -1)
        log->textCursor().setPosition(position);

    // Update state
    updateState();
}

RBThread::RBThread(QObject* parent)
    : QThread(parent), mServer(0)
{
}

void RBThread::start(QIODevice* stream, FCMake::App* app, BuildServer* server)
{
    connect(stream, SIGNAL(readyRead()), this, SLOT(notifyRead()));
    mStream = stream;
    mApp = app;
    mServer = server;
    QThread::start();
}

void RBThread::run()
{
    // Check
    if (!mStream || !mApp || !mServer) {
        return;
    }

    /*! \todo Correct terminating (which won't crash sometimes). */

    // Connect
	FCMake::Remote* remote = mServer->createRemote();
	if (!remote) {
		mStream->write("Error: Failed to connect to build server.\n");
		return;
	}

    // Prepare build environment
    mStream->write("Preparing build environment.\n");
    if (!remote->prepareBuild()) {
        mStream->write("Error: Failed to prepare build environment.\n");
        return;
    }

    // Build application
    FCMake::Tree tree(mApp->path());
    mStream->write("Syncing source files.\n");
    if (!remote->build(tree, mApp, "all", mStream)) {
        mStream->write("Error: Failed to build application.\n");
        return;
    }
    mStream->write("Remote build finished.\n");

    // Invalidate
	delete remote;
    mStream = 0;
    mApp = 0;
	mServer = 0;
}

void RBThread::notifyRead()
{
    emit readyRead();
}

#include "rbuildjob.moc"

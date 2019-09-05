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

#ifndef RBUILDJOB_H
#define RBUILDJOB_H

#include <QWidget>
#include <QProcess>
#include <QThread>
#include <fcmake/app.h>

#include "processjob.h"
#include "qdevkitui_export.h"
#include "buildserver.h"

class QPushButton;
class JobScheduler;

class QDEVKITUI_EXPORT RBuildJob : public ProcessJob
{
    Q_OBJECT

public:

    explicit RBuildJob(JobScheduler* scheduler, const QString& label = QString());
    ~RBuildJob();

    /* Virtual */
    Q_INVOKABLE virtual void setCommand(const QString& command, QStringList args = QStringList());

    /* Scriptable */
    Q_INVOKABLE void setTask(FCMake::App* app);

public slots:
    void terminate();

protected slots:
    void run();
    void finish();
    void dialogFinished(int state);
    void readData();

signals:
    void finished();
      
private:
    class Private;
    Private *d;
};

class QDEVKITUI_EXPORT RBThread : public QThread
{
    Q_OBJECT

public:
    RBThread(QObject* parent = 0);
	void start(QIODevice* stream, FCMake::App* app, BuildServer* server);
    void run();

signals:
    void readyRead();

private slots:
    void notifyRead();

private:
    QIODevice* mStream;
    FCMake::App* mApp;
	BuildServer* mServer;
};

#endif

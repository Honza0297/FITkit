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

#include <QStatusBar>
#include <QProgressBar>
#include <QPushButton>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QDialog>
#include <QSettings>

#include "jobscheduler.h"
#include "jobwidget.h"
#include "mainwindow.h"
#include "overlaywidget.h"

class JobScheduler::Private
{
   public:
      Private()
          : prevHead(0), progress(0), details(0), detailsVisible(false)
      {}

      JobQueue queue;
      Job*     prevHead;
      QProgressBar* progress;
      QPushButton*  details;
      bool detailsVisible;
};

JobScheduler::JobScheduler(QDevKit *app)
   : QObject(app), Component(app), d ( new Private() )
{
}

JobScheduler::~JobScheduler()
{
   delete d;
   qDebug("JobScheduler: cleanup finished");
}

JobScheduler& JobScheduler::schedule(Job* job)
{
   // Put into queue
   if(!d->queue.contains(job))
      append(job);

   JobWidget* jobWidget = qobject_cast<JobWidget*>(job);

   if(job->depends().size() == 0)
   {
      // No dependencies, run job
      QMetaObject::invokeMethod(job, "run", Qt::QueuedConnection);
      if(jobWidget != 0)
         setObserved(jobWidget);
   }
   else
   {
      // Schedule dependencies
      foreach(Job* dep, job->depends())
         schedule(dep);
   }

   return *this;
}

JobScheduler& JobScheduler::schedule(JobList list)
{
   // Make dependencies as a sequence
   Job* prev = 0;
   foreach(Job* job, list)
   {
      if(prev != 0)
         job->dependsOn(prev);

      prev = job;
   }

   // Schedule first item
   schedule(list[0]);

   return *this;
}

void JobScheduler::terminateAll()
{
   qDebug("DEBUG: Terminating %d scheduled jobs.", d->queue.count());
   foreach(Job* job, d->queue)
      remove(job);
}

JobScheduler& JobScheduler::append(Job* job)
{
   if(!d->queue.contains(job))
   {
      notifyInit(job, Started);
      connect(job, SIGNAL(finished(Job*)), this, SLOT(remove(Job*)));
      job->setParent(this);
      d->queue.enqueue(job);
      notify();
   }
   else
      qDebug("DEBUG: JobScheduler: job already in queue");

   return *this;
}

JobScheduler& JobScheduler::remove(Job* job)
{

   if(d->queue.contains(job))
   {
      disconnect(job);
      notifyInit(job, Finished);
      d->queue.removeAll(job);
      job->deleteLater();
      notify();
   }
   else
      qDebug("DEBUG: JobScheduler: job not in queue");

   return *this;
}

void JobScheduler::notifyInit(Job* job, State state)
{
   JobWidget* jobWidget = 0;
   if((jobWidget = qobject_cast<JobWidget*>(job)) == 0)
      return;

   switch(state)
   {
      case Started:
         mainWindow().showStatus(tr("Task '%1' started.").arg(jobWidget->name()));
         break;
      case Finished:
         mainWindow().showStatus(tr("Task '%1' finished.").arg(jobWidget->name()));
         break;
      default:
         qDebug("JobScheduler::notifyInit: unhandled state %d", state);
         break;
   }
}

void JobScheduler::init()
{
   QSettings set;

   d->progress = new QProgressBar();
   d->progress->setRange(0, 100);
   d->progress->setValue(0);
   d->progress->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Maximum);
   d->progress->setFixedWidth(200);
   d->progress->setFixedHeight(20);
   d->progress->setToolTip(tr("No running tasks."));
   mainWindow().statusBar()->addPermanentWidget(d->progress);

   d->details = new QPushButton(QIcon(":/icons/22x22/go-up.png"), "");
   d->details->setFixedWidth(26);
   d->details->setFixedHeight(22);
   d->details->setEnabled(false);
   d->details->setToolTip(tr("Show running tasks."));
   mainWindow().statusBar()->addPermanentWidget(d->details);
   connect(d->details, SIGNAL(clicked()), this, SLOT(detailsToggle()));

   if(set.value("General/ShowTasks", false).toBool())
      detailsToggle();
}

void JobScheduler::setObserved(JobWidget* job)
{
   // Update progress text
   QProgressBar* jobProgress = job->progress();
   d->details->setEnabled(true);
   d->progress->setFormat(tr("%p % (%1 pending)").arg(d->queue.count() - 1));
   d->progress->setTextVisible(true);
   jobProgress->setFormat("%p %");
   jobProgress->setTextVisible(true);

   // Update progressbar
   d->progress->setRange(jobProgress->minimum(), jobProgress->maximum());
   d->progress->setValue(jobProgress->value());

   disconnect(d->progress);
   connect(job->progress(), SIGNAL(valueChanged(int)), d->progress, SLOT(setValue(int)));
}

void JobScheduler::notify()
{
   if(d->queue.isEmpty())
   {
      disconnect(d->progress);
      d->progress->setRange(0, 100);
      d->progress->setValue(0);
      d->progress->setToolTip("");
      d->progress->setTextVisible(false);
      d->details->setEnabled(false);
   }

   // Update details
   updateDetails();
}

void JobScheduler::detailsToggle()
{
   // Update state & button
   if((d->detailsVisible = !d->detailsVisible))
   {
      d->details->setIcon(QIcon(":/icons/22x22/go-down.png"));
      d->details->setToolTip(tr("Hide running tasks."));
   }
   else
   {
      d->details->setIcon(QIcon(":/icons/22x22/go-up.png"));
      d->details->setToolTip(tr("Show running tasks."));
   }

   // Update detail widgets
   updateDetails();
}

void JobScheduler::updateDetails()
{
   // Show widget
   JobWidget *jobWidget = 0;
   QWidget* prev = mainWindow().statusBar();
   QString tip = tr("<b>Currently %1 tasks pending :</b>").arg(d->queue.size());
   tip += "<ol>";
   foreach(Job* job, d->queue)
   {
      if((jobWidget = qobject_cast<JobWidget*>(job)) != 0)
      {
         OverlayWidget* w = jobWidget->overlay();
         if(d->detailsVisible && !(jobWidget->state() & Job::Maximized))
         {
            w->setAlignWidget(prev);
            w->raise();
            w->show();
            prev = w;
         }
         else
            w->hide();

         tip += QString("<li>%1</li>").arg(jobWidget->name());
      }
   }

   tip += "</ol><br/>";
   d->progress->setToolTip(tip);
}

#include "jobscheduler.moc"

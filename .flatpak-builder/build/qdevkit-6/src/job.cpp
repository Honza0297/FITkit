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

#include "job.h"
#include "jobscheduler.h"

Job::Job(JobScheduler* scheduler, const QString& label)
   : QObject(scheduler), mState(0), mLabel(label), mSched(scheduler)
{
   mDeps.clear();
}

Job::~Job()
{
}

void Job::run()
{
   mState = Running;
   emit(started(this));
}

void Job::terminate()
{
   if(mState & Terminated)
      return;
   
   mState |= Terminated;
   finish();
}

void Job::finish()
{
   qDebug("Job: finished");
   if(mState & Stopped)
      return;

   mState |= Stopped;
   emit(finished(this));
}

Job& Job::dependsOn(Job* job)
 {
    // Protect
    if(this == job)
    {
       qDebug("Job: error: circular dependency");
       return *this;
    }
    
    // Add dependency
    mDeps << job;
    connect(job,  SIGNAL(finished(Job*)), this, SLOT(removeDep(Job*)));
    
    return *this;
 }

 void Job::removeDep(Job* job)
 {
   mDeps.removeAll(job);

   // If one dependency is broken, terminate all
   if(job->state() & Terminated)
   {
      mState |= ChildTerminated;
      foreach(Job* dep, mDeps)
         QMetaObject::invokeMethod(dep, "terminate");
   }

   // Reschedule if it has not deps
   if(mDeps.isEmpty())
   {
      if(mState & ChildTerminated)
         QMetaObject::invokeMethod(this, "terminate");
      else
         scheduler()->schedule(this);
   }
 }

#include "job.moc"

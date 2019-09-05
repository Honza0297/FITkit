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

#ifndef JOB_H
#define JOB_H

#include <QObject>
#include "qdevkit_export.h"

class JobScheduler;
class Job;

typedef QList<Job*> JobList;

class QDEVKIT_EXPORT Job : public QObject
{
   Q_OBJECT
   Q_PROPERTY(int state READ state);
   Q_PROPERTY(QString label READ label);

   friend class JobMgr;
   
   public:
      explicit Job(JobScheduler* scheduler, const QString& label = QString());
      ~Job();

      /* Scriptable */
      Q_INVOKABLE Job& dependsOn(Job* job);

      /* Properties */
      int state()                      { return mState; }
      QString label()                  { return mLabel; }
      const JobList& depends()         { return mDeps; }
      JobScheduler* scheduler() const  { return mSched; }

      /* Enums */
      enum State
      {
         Stopped         = 0x01,
         Running         = 0x02,
         Terminated      = 0x04,
         Minimized       = 0x08,
         Maximized       = 0x10,
         ChildTerminated = 0x20
      };
      
   public slots:
      void run();
      void terminate();

   protected slots:
      void finish();
      void removeDep(Job* job);

   protected:      
      int     mState;
      QString mLabel;
      JobList mDeps;
      JobScheduler* mSched;

   signals:
      void started(Job*);
      void finished(Job*);

};

#endif

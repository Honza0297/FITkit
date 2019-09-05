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

#ifndef JOBSCHEDULER_H
#define JOBSCHEDULER_H

#include <QQueue>
#include "component.h"
#include "job.h"
#include "qdevkit_export.h"

class JobWidget;
typedef QQueue<Job*> JobQueue;

class QDEVKIT_EXPORT JobScheduler : public QObject, Component
{
   Q_OBJECT

   public:
      JobScheduler(QDevKit *app);
      ~JobScheduler();

      void init();
      void terminateAll();

      /* Scriptable */
      Q_INVOKABLE JobScheduler& schedule(Job* job);
      Q_INVOKABLE JobScheduler& schedule(JobList list);

      /* Accessors */
      MainWindow& window()
      { return Component::mainWindow(); }

	  BuildServer& buildServer()
	  { return Component::buildServer(); }

      /* Operators */
      JobScheduler& operator<<(Job* job)
      { append(job); return *this; }

      /* Templates */
      template <class T>
      T* create(const QString& label = QString())
      {
         T* job = new T(this, label);
         append(job);
         return job;
      }

      /* Enums */
      enum State
      {
         Started,
         Finished
      };

   public slots:
      JobScheduler& append(Job* job);
      JobScheduler& remove(Job* job);
      void updateDetails();

   private slots:
      void notify();
      void notifyInit(Job* job, State state);
      void setObserved(JobWidget* job);
      void detailsToggle();

   private:
      class Private;
      Private *d;

};

#endif

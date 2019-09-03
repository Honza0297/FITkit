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

#ifndef JOBWIDGET_H
#define JOBWIDGET_H

#include "job.h"
#include "qdevkitui_export.h"

class QWidget;
class QPushButton;
class QProgressBar;
class OverlayWidget;
class JobScheduler;

class QDEVKITUI_EXPORT JobWidget : public Job
{
   Q_OBJECT
   Q_PROPERTY(QString name READ name WRITE setName)
   
   public:
      explicit JobWidget(JobScheduler* scheduler, const QString& name = QString());
      ~JobWidget();

      QString name();
      QWidget* widget() const;
      OverlayWidget* overlay() const;
      QPushButton* cancelButton() const;
      QProgressBar* progress() const;

      void setName(const QString&);

   public slots:
      void close();
      void terminate();
      void updateProgress(int val);

   signals:
      void closed(int state);
      void closed(JobWidget* job);

   protected:
      void addButton(QWidget* bt);
      void addWidget(QWidget* w);

   private:
      void createWidgets();

      /* Data pointer */
      class Private;
      Private *d;
};

#endif

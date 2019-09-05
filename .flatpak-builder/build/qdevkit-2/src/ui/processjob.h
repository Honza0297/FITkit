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

#ifndef PROCESSJOB_H
#define PROCESSJOB_H

#include <QWidget>
#include <QProcess>

#include "jobwidget.h"
#include "qdevkitui_export.h"

class QTextEdit;
class QPushButton;
class JobScheduler;

class QDEVKITUI_EXPORT ProcessJob : public JobWidget
{
   Q_OBJECT
   Q_PROPERTY(int state READ state WRITE setState);

   public:
      explicit ProcessJob(JobScheduler* scheduler, const QString& label = QString());
      ~ProcessJob();

      /* Virtual */
      Q_INVOKABLE virtual void setCommand(const QString& command, QStringList args = QStringList());

      /* Scriptable */
      Q_INVOKABLE void setHighlighter(const QString& context);
      Q_INVOKABLE void setDirectory(const QString& dir);
      Q_INVOKABLE void setModal(bool state);
	  Q_INVOKABLE bool isModal();
      Q_INVOKABLE void setAutoClose(bool state);
	  Q_INVOKABLE bool autoClose();
      Q_INVOKABLE void addState(const QString& pattern);
      Q_INVOKABLE QPushButton* displayButton();

      /* Properties. */
      int state();
      int setState(int val);
      int updateState();

   public slots:
      void terminate();

   protected slots:
      void finish(int code, QProcess::ExitStatus status);
      void dialogShow();
      void dialogFinished(int state);
      virtual void run();
      virtual void readData();

   protected:
      QTextEdit *text();

   signals:
      void finished(int code);
      
   private:
      class Private;
      Private *d;

      void createProcess();
      void createWidgets();
};

#endif

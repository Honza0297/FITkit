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

#include <QPushButton>
#include <QProgressBar>
#include <QLabel>
#include <QVBoxLayout>

#include "jobwidget.h"
#include "jobscheduler.h"
#include "mainwindow.h"
#include "overlaywidget.h"

class JobWidget::Private
{
   public:
      Private()
      : widget(0), progress(0), btClose(0), lt(0), ltButtons(0)
      {}

      OverlayWidget* overlay;
      QWidget*       widget;
      QLabel*        name;
      QProgressBar*  progress;
      QPushButton*   btClose;
      QVBoxLayout*   lt;
      QHBoxLayout*   ltButtons;
};

JobWidget::JobWidget(JobScheduler* scheduler, const QString& name)
   : Job(scheduler, name), d( new Private() )
{
   createWidgets();
   setName(name);

   // Initialize
   d->progress->setFormat(tr("Task waiting."));
   d->progress->setTextVisible(true);
   d->progress->setValue(0);
}

JobWidget::~JobWidget()
{
   d->overlay->deleteLater();
   d->widget->deleteLater();
   delete d;
}

void JobWidget::updateProgress(int val)
{
   d->progress->setValue(val);
}

void JobWidget::createWidgets()
{
   d->widget = new QWidget();
   
   // Create progress
   d->name     = new QLabel("", d->widget);
   d->progress = new QProgressBar(d->widget);
   d->progress->setToolTip(tr("Task progress."));

   // Create controls
   d->btClose = new QPushButton(QIcon(":/icons/22x22/bt-close.png"), "", d->widget);
   d->btClose->setToolTip(tr("Cancel task."));
   connect(d->btClose, SIGNAL(clicked()), this, SLOT(terminate()));

   // Create layout
   d->lt = new QVBoxLayout(d->widget);
   d->lt->addWidget(d->name);
   d->lt->addWidget(d->progress);

   // Create buttons layout
   d->ltButtons = new QHBoxLayout();
   d->ltButtons->setAlignment(Qt::AlignRight);
   d->ltButtons->addWidget(d->btClose);
   d->lt->addLayout(d->ltButtons);

   d->widget->setMinimumWidth(200);
   d->widget->setMinimumHeight(100);

   // Create overlay
   d->overlay = new OverlayWidget(&scheduler()->window(), &scheduler()->window());
   d->overlay->setAutoFillBackground(true);
   d->overlay->setFrameStyle(QFrame::Raised|QFrame::StyledPanel);
   d->overlay->resize(210, 110);

   QHBoxLayout* ltOverlay = new QHBoxLayout(d->overlay);
   ltOverlay->addWidget(d->widget);
}

void JobWidget::addButton(QWidget* bt)
{
   d->ltButtons->addWidget(bt);
}

void JobWidget::addWidget(QWidget* w)
{
   d->lt->addWidget(w);
}

void JobWidget::terminate()
{
   if(mState & Terminated)
      return;
   
//    qDebug("%s terminated", name().toStdString().c_str());
   Job::terminate();
   close();
}

void JobWidget::close()
{  
//    qDebug("%s finished", name().toStdString().c_str());
   if(!(mState & Stopped))
      Job::finish();
   
   emit(closed(mState));
   emit(closed(this));
}

QString JobWidget::name()
{
   return d->name->text();
}

QWidget* JobWidget::widget() const
{
   return d->widget;
}

QProgressBar* JobWidget::progress() const
{
   return d->progress;
}

QPushButton* JobWidget::cancelButton() const
{
   return d->btClose;
}

OverlayWidget* JobWidget::overlay() const
{
   return d->overlay;
}

void JobWidget::setName(const QString& name)
{
   d->name->setText(name);
}

#include "jobwidget.moc"

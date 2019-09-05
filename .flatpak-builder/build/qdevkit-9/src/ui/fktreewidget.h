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

#ifndef FKTREEWIDGET_H
#define FKTREEWIDGET_H

#include <QWidget>
#include <QMenu>

#include "component.h"
#include "qdevkitui_export.h"
#include <fcmake/app.h>
#include <fcmake/tree.h>
#include <fcmake/key.h>

namespace QtAPI {
   class Device;
};

class QTreeWidgetItem;
class ProcessJob;
class RBuildJob;
class JobWidget;
using namespace FCMake;

class QDEVKITUI_EXPORT FkTreeWidget : public QWidget, Component
{
   Q_OBJECT

   public:
      explicit FkTreeWidget(QDevKit* app, QWidget* parent = 0);
      ~FkTreeWidget();

      QMenu* menu();
      QMenu* treeMenu();
      App* currentApp();
      QList<App*> appList() const;
      Tree* tree() const;

   public slots:

      /* Tree manipulation */
      void clean(App::CleanOptions options = App::CleanAll);

      void cleanMcu() {
          return clean(App::CleanMcuOnly);
      }
      void cleanFpga() {
         return clean(App::CleanFpgaOnly);
      }

      void rescan();
      void triggerUpdate(int msecs = 100);
      void showReadme();
      void showRstDoc();
      bool setCurrentApp(const QString& app);
      bool setCurrentApp(FCMake::App* app);
      void runMake(const QString& target, const QString& title="Progress: %1");
      void runISIM();
      void runModelSIM();
      void runXilinxIse();

      /* App manipulation */
      ProcessJob* build(bool showModal=false);
      ProcessJob* buildfg();
      ProcessJob* remoteBuild(bool showModal = true);
      ProcessJob* startRemoteBuild(FCMake::App* app, bool showModal);
      void buildFinished(JobWidget* job);
      void makeFinished(JobWidget* job);

      /* Flashing */
      bool flashForced(const QString& app = QString()) { return flash(true, app); }
      bool flash(bool force = false, const QString& app = QString(), bool rebuilded = 0);

   signals:
      void updated();

   protected:
      void timerEvent(QTimerEvent* event);

   protected slots:
      void itemExpand(QTreeWidgetItem* item, int col);
      void populate();
      void clear();
      void updateTreeMenu();
      void menuHover(QAction* a);
      void updateCurrent(QTreeWidgetItem* item);
      void contextMenuRequest(const QPoint &pos);

   private:
      class Private;
      Private *d;
      void createWidgets();
      void createMenu();
      void createTreeMenu();
      void updateItemState(QTreeWidgetItem* item, bool compiled);
      bool flash(QtAPI::Device* device, bool force = false, bool onlyFlash = false);
      bool checkGCCVersion();
      bool checkGCC();
      bool checkXST();
};

#endif

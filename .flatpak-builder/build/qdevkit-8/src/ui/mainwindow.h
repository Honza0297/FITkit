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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMenu>
#include <QMainWindow>
#include <QWidget>
#include <QStackedWidget>

#include "component.h"
#include "qdevkitui_export.h"

class ToolBar;
class ConnectionTabs;
class Terminal;
class DeviceTree;
class FkTreeWidget;
class ActionCollection;
class TunnelService;

class MainWindowPrivate;

class QDEVKITUI_EXPORT MainWindow : public QMainWindow, Component
{
   Q_OBJECT

   public:
      MainWindow(QDevKit *app);
      ~MainWindow();

      void init();
      bool canClose(bool silent = false);
      bool prepareToClose();
      void saveSettings();
      void loadSettings();
      void restoreSettings();

      ActionCollection& actionCollection();

      /* Scriptable API */
      Q_INVOKABLE ConnectionTabs* tabs();
      Q_INVOKABLE DeviceTree* deviceTree();
      Q_INVOKABLE FkTreeWidget* appTree();
      Q_INVOKABLE ToolBar* toolBar();
 	   Q_INVOKABLE TunnelService* tunnels();
      Q_INVOKABLE void addToDock(Qt::DockWidgetArea area, QDockWidget* widget);
      Q_INVOKABLE void removeFromDock(QDockWidget* widget);
      Q_INVOKABLE int showError(const QString& caption, const QString& msg);
      Q_INVOKABLE int showQuestion(const QString& caption, const QString& msg);
      Q_INVOKABLE int showInfoQuestion(const QString& caption, const QString& msg);
      Q_INVOKABLE int showInformation(const QString& caption, const QString& msg);
      Q_INVOKABLE void showStatus(const QString& msg, int timeout = 0);
	   Q_INVOKABLE QString requestPassword(QString login = QString(), QString host = QString(), QString label = QString());
      Q_INVOKABLE QString applicationVersion();
      Q_INVOKABLE QString qtVersion(bool runtime = true);

   public slots:
      void showAbout();
      void showSettings();
      void showAddRemote();
      void showDeviceDlg(int deviceId = -1);
      void updateSVN();

   private slots:
      void setCentralPage();

   protected:
      void createCentralWidget();
      void createActions();
      void createMenus();
      void createToolBars();
      void createStatusBar();
      void createDockWidgets();
      void closeEvent(QCloseEvent *event);
      void resizeEvent(QResizeEvent *event);
      void moveEvent(QMoveEvent *event);

   private:
      MainWindowPrivate *d;
};

#endif

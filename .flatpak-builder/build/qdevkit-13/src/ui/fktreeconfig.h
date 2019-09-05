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

#ifndef FKTREE_CONFIG_H
#define FKTREE_CONFIG_H

#include <QWidget>

#include "configcomponent.h"
#include "qdevkitui_export.h"

namespace FCMake
{
   class App;
}

class QDEVKITUI_EXPORT FkTreeConfig : public ConfigComponent
{
   Q_OBJECT

   public:
      FkTreeConfig(Settings *parent);
      ~FkTreeConfig();

      void checkout(const QString& url, const QString& user = QString(), const QString& pass = QString());

   public slots:
      void update();
      void clear();
      void populate();
      void checkout();
      void deltree();
      void configure();

   protected:
      void timerEvent(QTimerEvent* event);

   private slots:
      void save();
      void triggerUpdate(bool rescan = true);
      void updateLibfitkit(int prev);
      void updateFinish(int prev);

   private:
      class Private;
      Private *d;
      void createWidgets();
};

class QDEVKITUI_EXPORT FkAppWidget : public QWidget
{
   Q_OBJECT

   public:
      FkAppWidget(FCMake::App* app, Settings* parent);
      ~FkAppWidget();

   protected slots:
      void clean();
      void update();
      void build();
      void parse();
      void showReadme();

   private:
      class Private;
      Private *d;
      void createWidgets();
      void loadTexts();
};

#endif

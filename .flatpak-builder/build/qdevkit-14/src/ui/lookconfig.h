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

#ifndef LOOK_CONFIG_H
#define LOOK_CONFIG_H

#include "configcomponent.h"
#include "qdevkitui_export.h"

class Highlighter;
class ContextItem;
typedef QList<ContextItem> ContextList; 

class QDEVKITUI_EXPORT LookConfig : public ConfigComponent
{
   Q_OBJECT

   public:
      LookConfig(Settings *parent);
      ~LookConfig();

      static void setHighlighterDefaults(const QString& context = QString());

   protected:
      void createFontPage();
      void createHighlightPage();
      static ContextList getContextList();
      static void setTerminalDefaults();
      static void setFCMakeDefaults();
      static void setSvnDefaults();

   private slots:
      void save();
      void updateSample();
      void updateSizeList();
      void updateLanguage(int row);
      void selectRule(QListWidgetItem* cur, QListWidgetItem* prev);
      void updateRule(QListWidgetItem* item = 0);
      void pickForeground();
      void pickBackground();
      void createRule();
      void removeRule();
      void changeRules(int index);
      void reloadRules();
      void revertRules();
         
   private:
      class Private;
      Private *d;
};

#endif

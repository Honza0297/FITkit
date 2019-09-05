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

#ifndef GENERAL_CONFIG_H
#define GENERAL_CONFIG_H

#include "configcomponent.h"
#include "qdevkitui_export.h"

class QDEVKITUI_EXPORT GeneralConfig : public ConfigComponent
{
   Q_OBJECT
   Q_PROPERTY(QString makePath READ makePath);
   Q_PROPERTY(QString svnPath READ svnPath);
   Q_PROPERTY(QString fcmakePath READ fcmakePath);
   Q_PROPERTY(QString fkflashPath READ fkflashPath);

   public:
      GeneralConfig(Settings *parent);
      ~GeneralConfig();

      /* Accessors */
      QString makePath();
      QString svnPath();
      QString fcmakePath();
      QString fkflashPath();

   protected:
      void createGeneralPage();
      void createLocalizationPage();

   private slots:
      void save();
      void setDependencies();

   private:
      class Private;
      Private *d;
};

#endif

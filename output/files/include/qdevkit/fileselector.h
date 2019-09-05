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

#ifndef FILESELECTOR_H
#define FILESELECTOR_H

#include <QWidget>
#include <QLineEdit>
#include "qdevkitui_export.h"

class QDEVKITUI_EXPORT FileSelector : public QWidget
{
   Q_OBJECT

   public:

      enum Mode
      {
         File = 0,
         Directory = 1
      };

      explicit FileSelector(QWidget *parent = 0, const QString& label = QString());
      virtual ~FileSelector();

      QString file();
      static QString absolutePath(const QString& file, Mode mode = FileSelector::File);
      QString absolutePath();

      QLineEdit& lineEdit();
      void setMode(Mode mode = File);
      void setCaption(const QString& caption);
      void setFilePattern(const QString& pattern);
      void setDefault(const QString& file);

   public slots:
      bool check();
      QString openFile();
      
   signals:
      void changed();

   private:
      class Private;
      Private *d;
};

#endif

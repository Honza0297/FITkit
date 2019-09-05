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

#include "objectsettings.h"

namespace ObjectSettings
{
   bool keyExists(QSettings& set, QObject* obj)
   { return set.contains(obj->objectName()); }
   
   void setObjectChecked(QSettings& set, QCheckBox* obj, bool def)
   { obj->setChecked(set.value(obj->objectName(), def).toBool()); }

   void setObjectInt(QSettings& set, QSpinBox* obj, int def)
   { obj->setValue(set.value(obj->objectName(), def).toInt()); }

   void setObjectFont(QSettings& set, QFontComboBox* obj, QString def)
   { obj->setCurrentFont(QFont(set.value(obj->objectName(), def).toString())); }

   void setObjectText(QSettings& set, QLineEdit* obj, QString def)
   { obj->setText(set.value(obj->objectName(), def).toString()); }

   void setObjectCombo(QSettings& set, QComboBox* obj, int def)
   {
      int index = def;
      if(set.contains(obj->objectName()))
         index = set.value(obj->objectName()).toInt();
      
      obj->setCurrentIndex(index);
   }
   
   void setObjectComboFromText(QSettings& set, QComboBox* obj, QString def)
   {
      int index = 0;
      if(set.contains(obj->objectName()))
         def = set.value(obj->objectName(), def).toString();
      
      if((index = obj->findText(def)) >= 0)
         obj->setCurrentIndex(index);
   }

   void setObjectItem(QSettings& set, QListWidget* obj, QString def)
   {
      QString it = set.value(obj->objectName(), def).toString();
      QList<QListWidgetItem*> items = obj->findItems(it, Qt::MatchFixedString);
      if(items.size() > 0)
         obj->setCurrentItem(items[0]);
   }

   void saveObjectBool(QSettings& set, QCheckBox* obj)
   { set.setValue(obj->objectName(), obj->isChecked()); }

   void saveObjectText(QSettings& set, QLineEdit* obj)
   { set.setValue(obj->objectName(), obj->text()); }

   void saveObjectInt(QSettings& set, QSpinBox* obj)
   { set.setValue(obj->objectName(), obj->value()); }

   void saveObjectFont(QSettings& set, QFontComboBox* obj)
   { set.setValue(obj->objectName(), obj->currentFont()); }

   void saveObjectCombo(QSettings& set, QComboBox* obj)
   { set.setValue(obj->objectName(), obj->currentIndex()); }

   void saveObjectComboText(QSettings& set, QComboBox* obj)
   { set.setValue(obj->objectName(), obj->currentText()); }

   void saveObjectItem(QSettings& set, QListWidget* obj)
   {
      QListWidgetItem* item = obj->currentItem();
      if(item != 0)
         set.setValue(obj->objectName(), item->text());
   }

};

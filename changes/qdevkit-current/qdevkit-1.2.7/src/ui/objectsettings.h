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

#ifndef OBJECTSETTINGS_H
#define OBJECTSETTINGS_H

#include <QSettings>
#include <QCheckBox>
#include <QSpinBox>
#include <QFontComboBox>
#include <QLineEdit>
#include <QComboBox>
#include <QListWidget>
#include "qdevkitui_export.h"

namespace ObjectSettings
{
   QDEVKITUI_EXPORT bool keyExists(QSettings& set, QObject* obj);

   /* Loaders */
   QDEVKITUI_EXPORT void setObjectChecked(QSettings& set, QCheckBox* obj, bool def = false);
   QDEVKITUI_EXPORT void setObjectInt(QSettings& set, QSpinBox* obj, int def = 0);
   QDEVKITUI_EXPORT void setObjectFont(QSettings& set, QFontComboBox* obj, QString def = "");
   QDEVKITUI_EXPORT void setObjectText(QSettings& set, QLineEdit* obj, QString def = "");
   QDEVKITUI_EXPORT void setObjectCombo(QSettings& set, QComboBox* obj, int def = 0);
   QDEVKITUI_EXPORT void setObjectComboFromText(QSettings& set, QComboBox* obj, QString def);
   QDEVKITUI_EXPORT void setObjectItem(QSettings& set, QListWidget* obj, QString def = "");

   /* Savers */
   QDEVKITUI_EXPORT void saveObjectBool(QSettings& set, QCheckBox* obj);
   QDEVKITUI_EXPORT void saveObjectText(QSettings& set, QLineEdit* obj);
   QDEVKITUI_EXPORT void saveObjectInt(QSettings& set, QSpinBox* obj);
   QDEVKITUI_EXPORT void saveObjectFont(QSettings& set, QFontComboBox* obj);
   QDEVKITUI_EXPORT void saveObjectCombo(QSettings& set, QComboBox* obj);
   QDEVKITUI_EXPORT void saveObjectComboText(QSettings& set, QComboBox* obj);
   QDEVKITUI_EXPORT void saveObjectItem(QSettings& set, QListWidget* obj);
};

#endif

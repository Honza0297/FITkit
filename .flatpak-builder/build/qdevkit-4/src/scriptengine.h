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

#ifndef SCRIPTENGINE_H
#define SCRIPTENGINE_H

#include <QObject>
#include <QVector>
#include <QMap>

#include "component.h"
#include "qdevkit_export.h"

/* Typemaps */
class Script;
class ScriptEnginePrivate;
typedef QVector<Script*> ScriptList;
typedef QMap<QString, QObject*> ObjectMap;

class QDEVKIT_EXPORT ScriptEngine : public QObject, Component
{
   Q_OBJECT
   Q_PROPERTY(bool quiet READ isQuiet WRITE setQuiet)
   
   public:
      ScriptEngine(QDevKit* app);
      ~ScriptEngine();

      /* Script runners */
      Script* load(const QString& file, const QString& module = QString());     
      QVariant eval(const QString& script);
      
      void  unload(Script* script);
      
      /* Object registration */
      QList<const QMetaObject *> classList();
      void registerObject(const QString& name, QObject* obj);
      void registerClass(const QMetaObject* obj);
      
      /* Output control */
      void setQuiet(bool state);
      bool isQuiet() const;
      
   protected slots:
      void printOutput(const QString& str);
      
   signals:
      void outputPrinted(const QString& output);

   private:
      ScriptEnginePrivate* d;
};

#endif

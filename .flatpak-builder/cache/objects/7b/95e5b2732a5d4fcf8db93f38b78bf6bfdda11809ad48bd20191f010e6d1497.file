/***************************************************************************
 *   Copyright (C) 2008 Brno University of Technology,                     *
 *   Faculty of Information Technology                                     *
 *   Author(s): Marek Vavrusa    <xvavru00 AT stud.fit.vutbr.cz>           *
 *              Zdenek Vasicek   <vasicek  AT fit.vutbr.cz>                *
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

#ifndef _FCMAKE_FILELIST_H_
#define _FCMAKE_FILELIST_H_

#include <QList>
#include <QMap>
#include <QDir>
#include <QString>
#include "fcmake_export.h"

namespace FCMake
{

enum FileListItemType {
   Dir, 
   File
};

struct FCMAKE_EXPORT FileListItem {
  QString filePath;
  FileListItemType type;
  int size;
  int mtime;
};

static inline bool operator==(const FileListItem& i1, const FileListItem& i2) {
    return i1.filePath == i2.filePath && i1.type == i2.type && 
           i1.size == i2.size && i1.mtime == i2.mtime;
}

//class FileList;

typedef QList<FileListItem> QFileList;
typedef QMap<QString, FileListItem*> QFileListMap;

class FCMAKE_EXPORT FileList : public QFileList
{
   public:
      FileList(const QDir& rootDir, bool refreshNow = true);
      ~FileList();

      const QDir& root();
      QFileListMap* map();

      void filterChanges(FileList& oldList);
      void setMtimeFrom(FileList& list);
      void refresh();

      bool writeToXML(const QString& filePath = QString("base/filelist.xml"));
      bool loadFromXML(const QString& filePath = QString("base/filelist.xml"));

   protected:
      void list(const QDir &dir);

   private:
      class Private;
      Private *d;
};

};

#endif // _FCMAKE_FILELIST_H_

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

#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QDomElement>
#include <QDomNode>

#ifdef __WIN32
#include <sys/utime.h>
#else
#include <utime.h>
#endif
#include "filelist.h"

namespace FCMake
{

class FileList::Private
{
   public:
      Private(const QDir& root) : root(root) {}
      QDir root;
      QString xmlFilePath;
};

FileList::FileList(const QDir& root, bool refreshNow) : d(new Private(root))
{
   //if xmlFilePath not empty, read the list
   if (refreshNow)
      refresh();
}

FileList::~FileList()
{
   delete d;
}

const QDir& FileList::root()
{
   return d->root;
}

void FileList::refresh()
{
   clear();
   list(d->root);
}

void FileList::list(const QDir &dir)
{
   QString filePath;
   bool buildDir;
   QStringList filter;
   FileListItem item;

   //include the following files only
   filter << "*.c" << "*.h" << "*.vhd" << "*.vhdl" << "*.xml" << "*.inc" << "*.bin" << "*.hex" << "*.a";
   //is build directory?
   buildDir = dir.dirName() == "build";

   //append files
   foreach (QFileInfo entry, dir.entryInfoList(filter, QDir::NoDotAndDotDot | QDir::Files | QDir::Readable, QDir::Name))
   {
      filePath = entry.absoluteFilePath();
      if ((buildDir) && !(filePath.endsWith(".bin") || filePath.endsWith(".hex") || filePath.endsWith(".a"))) 
         continue;

      item.filePath = d->root.relativeFilePath(filePath);
      item.type = File;
      item.size = entry.size();
      item.mtime = entry.lastModified().toTime_t();
      append(item);
   }

   if (buildDir)
      return;

   //append directories
   foreach (QFileInfo entry, dir.entryInfoList(QDir::NoDotAndDotDot | QDir::Dirs | QDir::Readable, QDir::Name))
   {
      filePath = entry.absoluteFilePath();

      item.filePath = d->root.relativeFilePath(filePath);
      item.type = Dir;
      item.size = 0;
      item.mtime = entry.lastModified().toTime_t();
      append(item);

      list(QDir(filePath));
   }
}

QFileListMap* FileList::map() 
{
   QFileListMap* map = new QFileListMap();
   for (iterator item = begin(); item != end(); item++)
   {
      map->insert(item->filePath, &(*item));
//      map->insert(item->filePath, item-begin());
   }
   return map;
}

void FileList::filterChanges(FileList& oldList)
{
  if (oldList.root() != d->root)
  {
     qDebug("Can't compare - different root directories given");
     return;
  }

  QFileList newList;
  QFileListMap* map = oldList.map();
  FileListItem* itm;
  for (iterator item = begin(); item != end(); item++)
  {
     itm = map->value(item->filePath, 0);
     if ((itm == 0) || //new file
         (itm->mtime != item->mtime) //updated file
        )
     {
        newList.append(*item);
     }
  }

  clear();
  for (iterator item = newList.begin(); item != newList.end(); item++)
  {
     append(*item);
  }
}

//Write list to XML file
bool FileList::writeToXML(const QString& filePath)
{
   QFile xmlFile(d->root.absoluteFilePath(filePath));
   if (!xmlFile.open(QIODevice::WriteOnly))
      return false;
   
   QTextStream stream(&xmlFile);
   stream << "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n<itemlist>\n";
   for (iterator item = begin(); item != end(); item++)
   {
      stream << "  <item type=\"" << ((item->type == Dir) ? "dir\" " : "file\"") << " ";
      stream << "name=\"" << item->filePath.toUtf8() << "\" ";
      if (item->type == File)
         stream << "size=\"" << item->size << "\" ";
      stream << "mtime=\"" << item->mtime <<"\" ";
      stream << "/>\n";
   }
   stream << "</itemlist>\n";
   xmlFile.close();

   return true;
}

//Load list from XML file
bool FileList::loadFromXML(const QString& filePath)
{
   clear();

   QFile xmlFile(d->root.absoluteFilePath(filePath));
   QDomDocument doc;
   FileListItem item;

   // Load document
   if (!doc.setContent(&xmlFile, true))
   {
      qDebug("Unable to parse XML file");
      return false;
   }

   // Parse header
   QDomElement root = doc.documentElement();
   if(root.tagName() != "itemlist")
      return false;

   for (QDomElement n = root.firstChildElement(); !n.isNull(); n = n.nextSiblingElement())
   {
      if (n.tagName() != "item")
      {
         qDebug("Unknown element %s", n.tagName().toStdString().c_str());
         return false;
      }

      item.type = File;
      item.filePath = n.attribute("name","");
      if (item.filePath.isEmpty()) 
         continue;

      if ((n.attribute("type") != "file") && (n.attribute("type") != "dir"))
      {
         qDebug("Unknown item type %s", n.attribute("type").toStdString().c_str());
         return false;
      }

      if (n.attribute("type") == "dir")
         item.type = Dir;

      item.size = n.attribute("size","0").toInt();
      item.mtime = n.attribute("mtime","0").toInt();

      append(item);
   }   
   // Parse data

   return true;
}

//nastavi u soboru co jsou v seznamu list stejne mtime jako ma soubor v list
void FileList::setMtimeFrom(FileList& list)
{
  struct utimbuf utb;
  FileListItem* itm;
  QString path;
  QFileListMap* map = list.map();

  for (iterator item = begin(); item != end(); item++)
  {
     itm = map->value(item->filePath, 0);
     if (itm != 0) //file item is in list, change mtime
     {
        path = QDir::toNativeSeparators(d->root.absoluteFilePath(item->filePath));
        utb.actime = itm->mtime;
        utb.modtime = itm->mtime;
        qDebug("Set mtime: %s to: %d",path.toStdString().c_str(), itm->mtime);

        if (utime(path.toStdString().c_str(), &utb) < 0)
           qDebug("Can't set mtime: %s", path.toStdString().c_str());
     }
  }

}
};

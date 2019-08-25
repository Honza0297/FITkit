/***************************************************************************
 *   Copyright (C) 2009 Brno University of Technology,                     *
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

#ifndef _FCMAKE_APP_H_
#define _FCMAKE_APP_H_

#include <QString>
#include <QDomElement>
#include <QList>
#include <QDir>
#include "fcmake_export.h"

#define LIBFITKIT_PATH "mcu/libfitkit"

typedef QList<QDir> QDirList;

struct FCMAKE_EXPORT SourceListItem {

  SourceListItem(QString path = QString(), QStringList* headers = 0)
	  : filePath(path), headerFiles(headers), simFile(false), library("") {}
	  
  QString      filePath;
  QStringList* headerFiles;
  bool         simFile;
  QString      library;
};

static inline bool operator==(const SourceListItem& i1, const SourceListItem& i2) {
    return i1.filePath == i2.filePath;
}

typedef QList<SourceListItem> QMSourceList;

namespace FCMake
{

class FCMAKE_EXPORT QSourceList : public QMSourceList
{
	public:
		bool contains(const QString& filePath);
};

class Category;

class FCMAKE_EXPORT App
{
   public:
      static const char* MCU_DIR;
      static const char* FPGA_DIR;
      
      enum Target
      {
         Unknown = 0,
         Project,
         Library,
         Package
      };
     
      enum CleanOptions
      {
         CleanFpgaOnly = 0, //build/fpga/*.*, build/*.bin
         CleanMcuOnly,      //build/mcu/*.*,  build/*.hex
         CleanFpgaMcu,      //build/mcu/*.*,  build/fpga/*.*
         CleanAll           //build/*.*, MakeFile
      };

      App(const QString& path = QString(), Category* cat = 0);
      ~App();
      
      bool load(const QString& path);
      bool load(const QString& path, const QString& svnroot);
      QString path();
      
      bool parse();
      bool createMakefile(const QString& fcmakePath = QString(),
                          const QString& fkflashPath = QString(),
                          QIODevice* dest = 0);
      bool createRemoteMakefile(const QString& remoteHost,
                                const QString& fcmakePath = QString(),
                                const QString& fcmakeFlags = QString(),
                                const QString& fkflashPath = QString(),
                                QIODevice* dest = 0);
      bool clean(CleanOptions options = CleanFpgaMcu);

      Category* category();
      const QString& name();
      const QString& revision();
      const QString& author();
      const QString& email();
      const QString& description();
      const QString& outputPrefix();
      const QString& readme();

      QSourceList files();    //list of source files (*.c, *.h, *.vhd)
      QStringList packages(); //list of package files (*.xml)
      QStringList fpgaBinaries(); //fpga binaries (*.ucf, *.ngc)

      const QString& binFilePath(bool mustexist=true); //empty if bin file doesn't exist and mustexist=true
      const QString& hexFile1Path(bool mustexist=true); //empty if hex file doesn't exist and mustexist=true
      const QString& hexFile2Path(bool mustexist=true); //empty if hex file doesn't exist and mustexist=true
      const QString  documentationPath(); //empty id doc doesn't exist

      bool isCompiled();
      bool isUpdated();
      bool hasReadme();
      bool hasDocumentation();
      bool hasModelSimScript();
      bool hasISimScript();
      bool needXST(); //if XST is needed to compile the project
      bool isBinShared(); //bin file is shared with another application
      App* sharedApp();
      
   protected:
      enum Section
      {
         FpgaSection = 0,
         McuSection
      };

      bool parse(bool parseIncludeFile);
      bool checkElement(QDomElement& element);
      bool parseElementFiles(Section section, QDomElement& element, QSourceList* slist);
      bool getFpgaFiles(QDomElement& element);
      bool getMcuFiles(QDomElement& element);
      bool parseInclude(Section section, const QString& path, QSourceList* slist);
      bool cleanDir(QString path, bool isBuildDir, bool cleanAll);
      bool parseCheck();
      void setParentApp(App* parentApp);

   private:
      class Private;
      Private *d;
};

}

#endif // _FCMAKE_APP_H_

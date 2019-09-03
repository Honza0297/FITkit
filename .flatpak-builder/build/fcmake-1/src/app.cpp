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

#include <QDir>
#include <QTextStream>
#include <QDateTime>
#include <sys/stat.h>
#ifdef __WIN32
#include <sys/utime.h>
#else
#include <utime.h>
#endif
#include "app.h"
#include "tree.h"
#include "category.h"

namespace FCMake
{

// Static variables
const char* App::MCU_DIR  = "mcu";
const char* App::FPGA_DIR = "fpga";

bool QSourceList::contains(const QString& filePath)
{
   for (int i = 0; i < count(); i++) {
       if (at(i).filePath == filePath) {
           return true;
       }
   }

   return false;
}

class App::Private
{
   public:
      Private()
         : parsed(false), category(0), parentApp(0),
           target(App::Unknown), fpgaUseProject(0)
      {}

      bool parsed;
      Category* category;
      App* parentApp;
      QDir path;
      QDir pathMcu;
      QDir pathFpga;
      QDir treeRoot;
      QString projectFilePath;
      QString binFilePath; //fpga bitstream
      QString hexFile1Path; //mcu firmware / mcu library (MSP430Fx1xx)
      QString hexFile2Path; //mcu firmware / mcu library (MSP430Fx1xx)
      QString readme;

      App::Target target;
      QString outputPrefix;
      QString name;
      QString revision;
      QString author;
      QString email;
      QString description;
      QString dcmFrequency;
      QString fpgaChip;
      QString optMode;
      QString toplevelEntity;
      QString ucfFile;
      QString ngcPath;
      QString architecture;
      QString library;
      App* fpgaUseProject;
      bool mathLibrary;

      QSourceList fpgaFiles;
      QSourceList mcuFiles;
      QStringList includeFiles;
};


App::App(const QString& path, Category* category)
   : d ( new Private() )
{
   if (!path.isEmpty())
      load(path);
   d->category = category;
}

App::~App()
{
   delete d;
}

Category* App::category()
{
   return d->category;
}

void App::setParentApp(App* parentApp)
{
   d->parentApp = parentApp;
}

const QString& App::name()
{
   return d->name;
}

const QString& App::revision()
{
   return d->revision;
}

const QString& App::author()
{
   return d->author;
}

const QString& App::email()
{
   return d->email;
}

const QString& App::description()
{
   return d->description;
}

const QString& App::outputPrefix()
{
   return d->outputPrefix;
}

QSourceList App::files()
{
    QSourceList out;
    SourceListItem projectfile;
    projectfile.filePath = d->projectFilePath;
    projectfile.headerFiles = 0;
    out.append(projectfile);
    foreach(const SourceListItem& item, d->mcuFiles)
        out.append(item);
    foreach(const SourceListItem& item, d->fpgaFiles)
        out.append(item);

    if (d->fpgaUseProject != 0) 
       foreach(const SourceListItem& item, d->fpgaUseProject->files())
          out.append(item);

    return out;
}

QStringList App::packages()
{
    QStringList out;
    foreach(const QString& item, d->includeFiles)
         out.append(item);
    return out;
}

QStringList App::fpgaBinaries() //files for ngdbuild
{
    QStringList out;
    if (!d->ucfFile.isEmpty())
       out.append(d->path.absoluteFilePath(d->ucfFile));

    if (!d->ngcPath.isEmpty()) {
       QDir ngcDir = QDir(d->path.absoluteFilePath(d->ngcPath));
       QStringList files = ngcDir.entryList(QDir::Files|QDir::NoDotAndDotDot);
       foreach(const QString& fn, files) {
           out.append(ngcDir.absoluteFilePath(fn));
       }
    }

    return out;
}

const QString& App::binFilePath(bool mustexist)
{
   if ((d->binFilePath.isEmpty()) && (!mustexist)) 
   {
      d->binFilePath = "build/" + d->outputPrefix + ".bin";
      if (d->fpgaUseProject != 0) 
         d->binFilePath = "build/" + d->fpgaUseProject->d->outputPrefix + ".bin";
      d->binFilePath = d->path.absoluteFilePath(d->binFilePath);
   }    
   return d->binFilePath;
}

bool App::isBinShared()
{
   return d->fpgaUseProject != 0;
}

App* App::sharedApp()
{
   return d->fpgaUseProject;
}

const QString& App::hexFile1Path(bool mustexist)
{
   if ((d->hexFile1Path.isEmpty()) && (!mustexist)) 
   {
      d->hexFile1Path = "build/" + d->outputPrefix + "_f1xx." + ((d->target == Project) ? "hex" : "a");
      d->hexFile1Path = d->path.absoluteFilePath(d->hexFile1Path);
   }    
   return d->hexFile1Path;
}

const QString& App::hexFile2Path(bool mustexist)
{
   if ((d->hexFile2Path.isEmpty()) && (!mustexist)) 
   {
      d->hexFile2Path = "build/" + d->outputPrefix + "_f2xx." + ((d->target == Project) ? "hex" : "a");
      d->hexFile2Path = d->path.absoluteFilePath(d->hexFile2Path);
   }    
   return d->hexFile2Path;
}

bool App::hasReadme()
{
   return d->path.exists("README");
}

bool App::hasDocumentation()
{
   return d->path.exists("doc/index.rst");
}

const QString App::documentationPath()
{
   if (!hasDocumentation())
      return QString();

   return d->path.absoluteFilePath("doc/index.rst");
}

bool App::hasISimScript()
{
   return d->pathFpga.exists("sim/isim.tcl");
}

bool App::hasModelSimScript()
{
   return d->pathFpga.exists("sim/sim.fdo");
}

const QString& App::readme()
{
   return d->readme;
}

bool App::load(const QString& path)
{
   return load(path, QString());
}

bool App::load(const QString& path, const QString& svnroot)
{
   if (path.isEmpty())
      return false;

   d->parsed = false;
   d->projectFilePath.clear();

   if (QFileInfo(path).isFile())
   {  //project file given
      d->path = QDir(QFileInfo(path).absolutePath());
      d->projectFilePath = path;
   }
   else //project path given
   {
      d->path = QDir(path);
      if (d->path.exists("project.xml"))
         d->projectFilePath = d->path.absoluteFilePath("project.xml");
      if (d->path.exists("library.xml"))
         d->projectFilePath = d->path.absoluteFilePath("library.xml");
      if (d->projectFilePath.isEmpty())
         return false;
   }

   d->pathMcu = d->path;
   d->pathMcu.cd(MCU_DIR);
   d->pathFpga = d->path;
   d->pathFpga.cd(FPGA_DIR);

   // Find tree root
   d->treeRoot = Tree::findRoot((svnroot.isEmpty()) ? d->path : QDir(svnroot));
   if (!d->treeRoot.exists())
   {
      qDebug("Unable to find root directory");
      return false;
   }
//   qDebug("Root directory: %s", d->treeRoot.absolutePath().toStdString().c_str());
//    qDebug("FCMake::App: intialized on path %s", d->path.absolutePath().toStdString().c_str());
   return true;
}

QString App::path()
{
   return d->path.absolutePath();
}

bool App::checkElement(QDomElement& element)
{
//TODO: CHYBA - element.tagName bude vzdy prazdny, kdyz element NEEXISTUJE!!
   if (element.isNull())
      return false;

   if (!element.nextSiblingElement(element.tagName()).isNull())
   {
      qDebug("Only one <%s> element allowed", element.tagName().toStdString().c_str());
      return false;
   }

   return true;
}

bool App::parseElementFiles(Section section, QDomElement& element, QSourceList* slist)
{
   QString filePath;

   SourceListItem itm;
   itm.headerFiles = new QStringList();

   QDirList dirList;
   dirList << ((section == McuSection) ? d->pathMcu : d->pathFpga) << d->path << d->treeRoot;

   App* pa = d->parentApp;
   while ((pa) && (pa->d->parentApp))
         pa = pa->d->parentApp;

   QDirList projDirList;
   if (pa)
      projDirList << ((section == McuSection) ? pa->d->pathMcu : pa->d->pathFpga) << pa->d->path << pa->d->treeRoot;

   for (QDomElement n = element.firstChildElement(); !n.isNull(); n = n.nextSiblingElement())
   {
      QString location = n.attribute("location", "");
      if ((location == "project") && (d->parentApp == 0))
         location.clear();

      if (n.tagName() == "file")
      {

         filePath = Tree::findFile(n.text(), (location == "project") ? projDirList : dirList);

         if (filePath.isEmpty())
         {
            qDebug("File %s not found", n.text().toStdString().c_str());
            return false;
         }

         if (!slist->contains(filePath))
         {
            itm.filePath = filePath;
            itm.simFile = (section == FpgaSection) && (n.attribute("context","") == "sim");
            itm.library = (section == FpgaSection) ? n.attribute("library","") : "";
            slist->append(itm);
         }
      }
      else if (n.tagName() == "files")
      {
         foreach (const QString file, n.text().split(" ", QString::SkipEmptyParts))
         {
            filePath = Tree::findFile(file, (location == "project") ? projDirList : dirList);

            if (filePath.isEmpty())
            {
               qDebug("File %s not found", n.text().toStdString().c_str());
               return false;
            }

            if (!slist->contains(filePath))
            {
               itm.filePath = filePath;
               itm.simFile = (section == FpgaSection) && (n.attribute("context","") == "sim");
               itm.library = (section == FpgaSection) ? n.attribute("library","") : "";
               slist->append(itm);
            }
         }

      }
      else if (n.tagName() == "include")
      {
         filePath = Tree::findFile(n.text(), (location == "project") ? projDirList : dirList);

         if(filePath.isEmpty())
         {
            qDebug("File %s not found", n.text().toStdString().c_str());
            return false;
         }

         if(!parseInclude(section, filePath, slist))
            return false;
      }
      else if ((n.tagName() == "headerfile") && (section == McuSection))
      {
         filePath = Tree::findFile(n.text(), (location == "project") ? projDirList : dirList);

         if (filePath.isEmpty())
         {
            qDebug("Header file %s not found", n.text().toStdString().c_str());
            return false;
         }

         if (!itm.headerFiles->contains(filePath))
            itm.headerFiles->append(filePath);

      }
      else
      {
         qDebug("Unknown element <%s> inside <%s> element",
                n.tagName().toStdString().c_str(), element.tagName().toStdString().c_str());
         return false;
      }
   }

   return true;
}

bool App::parseInclude(Section section, const QString& path, QSourceList* slist)
{
   App incApp(path);

   incApp.setParentApp(this);

   if (!incApp.parse(true))
   {
      qDebug("Can't parse include file %s", path.toStdString().c_str());
      return false;
   }

   if (incApp.d->target != Package)
      qDebug("Warning: include file is not package");

   if (section == McuSection)
   {
      if (incApp.d->mathLibrary)
         d->mathLibrary = true;

      foreach (SourceListItem item, incApp.d->mcuFiles)
      {
         if (!slist->contains(item.filePath))
            slist->append(item);
      }

   }
   else if (section == FpgaSection)
   {
      foreach (SourceListItem item, incApp.d->fpgaFiles)
      {
         if (!slist->contains(item.filePath))
            slist->append(item);
      }
   }

   //propagate the included file towards to the parent project
   App* pa = this;
   while (pa) {
     if (!pa->d->includeFiles.contains(path))
        pa->d->includeFiles.append(path);
     pa = pa->d->parentApp;
   }

   return true;
}

bool App::getFpgaFiles(QDomElement& element)
{
   return parseElementFiles(FpgaSection, element, &d->fpgaFiles);
}

bool App::getMcuFiles(QDomElement& element)
{
   return parseElementFiles(McuSection, element, &d->mcuFiles);
}

bool App::parse()
{
   return parse(false);
}

bool App::parse(bool parseIncludeFile)
{
   if (d->projectFilePath.isEmpty())
   {
      qDebug("Project file does not exist.");
      return false;
   }

   // Parse readme
   if ((hasReadme()) && (!parseIncludeFile))
   {
      QFile rfile(d->path.absoluteFilePath("README"));
      if (rfile.open(QFile::ReadOnly))
      {
         QTextStream in(&rfile);
         d->readme = in.readAll();
      }
   }

   // Init file paths
   d->binFilePath = "";
   d->hexFile1Path = "";
   d->hexFile2Path = "";

   // Load document
   QDomDocument doc;
   QFile projectFile(d->projectFilePath);
   QString errorMsg;
   int errorLine;
   if (!doc.setContent(&projectFile, true, &errorMsg, &errorLine))
   {
      qDebug("Unable to parse XML file.\n  Syntax error on line %d: %s", errorLine, errorMsg.toStdString().c_str());
      return false;
   }

   QDomElement rootNode, node;

   // Check header element
   rootNode = doc.documentElement();
   if (rootNode.tagName() == "project") d->target = Project;
   if (rootNode.tagName() == "library") d->target = Library;
   if ((parseIncludeFile) && (rootNode.tagName() == "package")) d->target = Package;

   if (d->target == Unknown)
   {
      qDebug("Unexpected root element \"%s\"", rootNode.tagName().toStdString().c_str());
      return false;
   }

   d->outputPrefix = rootNode.attribute("outputprefix", "project");
   d->fpgaFiles.clear();
   d->mcuFiles.clear();
   d->includeFiles.clear();
   d->mathLibrary = false;

   // Find file paths
   if (d->path.exists("build/"+d->outputPrefix+".bin"))
      d->binFilePath = d->path.absoluteFilePath("build/"+d->outputPrefix+".bin");

   if (d->target == Project)
   {
      if (d->path.exists("build/"+d->outputPrefix+"_f1xx.hex"))
         d->hexFile1Path = d->path.absoluteFilePath("build/"+d->outputPrefix+"_f1xx.hex");

      if (d->path.exists("build/"+d->outputPrefix+"_f2xx.hex"))
         d->hexFile2Path = d->path.absoluteFilePath("build/"+d->outputPrefix+"_f2xx.hex");
   }

   if (d->target == Library)
   {
      if (d->path.exists("build/"+d->outputPrefix+"_f1xx.a"))
         d->hexFile1Path = d->path.absoluteFilePath("build/"+d->outputPrefix+"_f1xx.a");

      if (d->path.exists("build/"+d->outputPrefix+"_f2xx.a"))
         d->hexFile2Path = d->path.absoluteFilePath("build/"+d->outputPrefix+"_f2xx.a");
   }

   // Check root elements
   node = rootNode.firstChildElement("mcu");
   if (checkElement(node))
   {
      if (node.attribute("mathlibrary", "no") == "yes")
      {
         d->mathLibrary = true;
      }

      if(!getMcuFiles(node))
      {
         qDebug("failed to get mcu files");
         return false;
      }

   }
   else if (d->target != Package)
   {
      qDebug("Element mcu not found");
      return false;
   }

   node = rootNode.firstChildElement("fpga");
   if ((d->target != Library) && (checkElement(node)))
   {
      if (d->fpgaUseProject != 0)
      {
         delete d->fpgaUseProject;
         d->fpgaUseProject = 0;
      }

      d->architecture = node.attribute("architecture", "bare");

      if ((d->target == Project) && ((!d->architecture.isEmpty()) && (d->architecture != "none")) && (!node.hasAttribute("use")))
      {
         QDomElement incNode = doc.createElement("include");
         node.insertBefore(incNode, node.firstChildElement());
         incNode.appendChild(doc.createTextNode("fpga/chips/architecture_" + d->architecture +"/package.xml"));
      }

      d->dcmFrequency = node.attribute("dcmfrequency","25MHz");
      if (!((d->dcmFrequency == "20MHz") || (d->dcmFrequency == "25MHz") || (d->dcmFrequency == "40MHz") || (d->dcmFrequency == "50MHz")  || (d->dcmFrequency == "75MHz") || (d->dcmFrequency == "100MHz")))
      {
         qDebug("Unknown DCM frequency");
         return false;
      }

      d->toplevelEntity = node.attribute("toplevelentity","fpga");
      d->fpgaChip = node.attribute("fpgachip","xc3s50-4-pq208");
      d->optMode = node.attribute("optimization","speed:1");

      d->ucfFile = node.attribute("ucffile","");
      if ((!d->ucfFile.isEmpty()) && (!d->path.exists(d->ucfFile)))
      {
         qDebug("UCF file %s not found", d->ucfFile.toStdString().c_str());
         return false;
      }

      d->ngcPath = node.attribute("ngcpath","");
      if ((!d->ngcPath.isEmpty()) && (!d->path.exists(d->ngcPath)))
      {
         qDebug("NGC directory %s not found", d->ngcPath.toStdString().c_str());
         return false;
      }

      d->library = node.attribute("library","work");

      if (node.hasAttribute("use"))
      {
         if (node.hasChildNodes())
         {
            qDebug("Attribute \"use\" forbids to include/use additional files");
            return false;
         }

         QString useFilePath = Tree::findFile(node.attribute("use",""), QDirList() << d->path << d->treeRoot);

         d->fpgaUseProject = new App(useFilePath);
         if (!d->fpgaUseProject->parse())
         {
            qDebug("Can't use the file %s (parse error)", node.attribute("use","").toStdString().c_str());
            return false;
         }

         d->binFilePath.clear();
         if (d->fpgaUseProject->d->path.exists("build/"+d->fpgaUseProject->d->outputPrefix+".bin"))
            d->binFilePath = d->fpgaUseProject->d->path.absoluteFilePath("build/"+d->fpgaUseProject->d->outputPrefix+".bin");

      }

      if (!getFpgaFiles(node)) //only syntax check
      {
         qDebug("failed to get fpga files");
         return false;
      }

   }
   else if (d->target == Project)
   {
      qDebug("Element fpga not found");
      return false;
   }

   node = rootNode.firstChildElement("name");
   if(checkElement(node))
      d->name = node.text();

   node = rootNode.firstChildElement("revision");
   if(checkElement(node))
      d->revision = node.text();

   node = rootNode.firstChildElement("author");
   if(checkElement(node))
      d->author = node.text();

   node = rootNode.firstChildElement("authoremail");
   if(checkElement(node))
      d->email = node.text();

   if (d->target == Project)
   {
      node = rootNode.firstChildElement("description");
      if(checkElement(node))
         d->description = node.text();
   }

   d->parsed = true;
   return true;
}

//remove generated files and build/*.* except HEX and BIN (cleanAll = false)
bool App::cleanDir(QString path, bool isBuildDir, bool cleanAll)
{
   QDir dir(path);
   QString filePath;
   bool res = true;

   qDebug("Clean:%s",path.toStdString().c_str());

   foreach (QFileInfo entry, dir.entryInfoList(QDir::NoDotAndDotDot | QDir::Dirs | QDir::Files | QDir::Readable))
   {
      filePath = entry.absoluteFilePath();
      if (entry.isDir())
      {
         if (cleanDir(filePath, false, cleanAll))
         {
               res = dir.rmdir(filePath);
               if (!res)
                  qDebug("Can't delete directory: %s",filePath.toStdString().c_str());
         }
         else
         {
               res = false;
         }
      }

      if (entry.isFile())
      {

         if ((cleanAll) ||
             ((entry.fileName() == d->outputPrefix + ".bin") && (d->fpgaUseProject != 0)) ||
             ((entry.fileName() != d->outputPrefix + "_f1xx.hex") && (entry.fileName() != d->outputPrefix + "_f2xx.hex") &&
              (entry.fileName() != d->outputPrefix + ".bin") && (entry.fileName() != d->outputPrefix + ".a"))
            )
         {
            if (!dir.remove(filePath))
            {
               qDebug("Can't delete file: %s",filePath.toStdString().c_str());
               res = false;
            }
         }
      }
   }

   return res;
}

bool App::parseCheck()
{
   // Parse first
   if(!d->parsed)
   {
      if(!parse())
      {
         qDebug("Unable to parse project file.");
         return false;
      }
   }

   return true;
}

bool App::clean(CleanOptions options)
{
   bool res = true;
   if (!parseCheck())
      return false;

   if (options == CleanFpgaOnly)
   {
      if (d->fpgaUseProject != 0)
         return false;

      if (QFile::exists(binFilePath()))
         res = QFile::remove(binFilePath());

      if ((d->path.exists("build/fpga")) && (res))
      {
         QString buildPath = d->path.absoluteFilePath("build/fpga");
         if (!cleanDir(buildPath, true, true))
            res = false;
      }

   }
   else if (options == CleanMcuOnly)
   {
      if (QFile::exists(hexFile1Path()))
         res = QFile::remove(hexFile1Path());

      if (QFile::exists(hexFile2Path()))
         res = res && QFile::remove(hexFile2Path());

      if(d->path.exists("build/mcu"))
      {
         QString buildPath = d->path.absoluteFilePath("build/mcu");
         if (!cleanDir(buildPath, true, true))
            res = false;
      }
   }
   else if ((options == CleanFpgaMcu) || (options == CleanAll))
   {
      if ((d->path.exists("Makefile")) && (!d->path.remove("Makefile")))
      {
         qDebug("Unable to delete Makefile file");
         res = false;
      }

      if(d->path.exists("build"))
      {
         QString buildPath = d->path.absoluteFilePath("build");
         if (!cleanDir(buildPath, true, options == CleanAll))
            res = false;
         if ((res) && (options == CleanAll))
            d->path.rmdir("build");
      }

   }

   // Reparse to reflect changes
   parse();

   return res;
}

bool App::needXST()
{
  if ((d->target == Project) && (d->fpgaUseProject != 0))
     if (!d->fpgaUseProject->d->binFilePath.isEmpty())
        return false;
  return true;
}

bool App::isCompiled()
{
   if (!parseCheck())
      return false;

   if (d->target == Project)
   {
      if (d->fpgaUseProject != 0)
      {
         if (d->fpgaUseProject->d->binFilePath.isEmpty())
            return false;
      }
      return (!d->binFilePath.isEmpty()) && (!d->hexFile1Path.isEmpty()) && (!d->hexFile2Path.isEmpty());
   }

   if (d->target == Library)
      return ((!d->hexFile1Path.isEmpty()) && (!d->hexFile2Path.isEmpty()));

   return false;
}

bool App::isUpdated()
{
   //qDebug("CHECK %s",d->path.absolutePath().toStdString().c_str());
   if ((!parseCheck()) || (!isCompiled()) || (d->projectFilePath.isEmpty()))
      return false;

   QDateTime date;
   QDateTime maxDate;
   if (d->target == Project)
   {
      //maxDate init: BIN depends on the files generated by fcmake (these have the same mtime as XML file)
      maxDate = QFileInfo(d->projectFilePath).lastModified();
     //qDebug("CHECK - projectFilePath %s lastmod: %u", d->projectFilePath.toLatin1().data(), maxDate.toTime_t());

      foreach (SourceListItem item, d->fpgaFiles)
      {
         date = QFileInfo(item.filePath).lastModified();
       if (date > maxDate) { 
          maxDate = date;
          //qDebug("CHECK - fpgaFile %s new lastmod: %u", item.filePath.toLatin1().data(), maxDate.toTime_t());
       }
      }

      if (d->fpgaUseProject != 0)
      {
         //as the used project doesn't depend on our sources,
         //it is sufficient to check isCompiled() only!
       if (!d->fpgaUseProject->isCompiled()) {
         qDebug("CHECK - fpgaUseProject is not compiled");
           return false;
       }
      }

     if ((!d->binFilePath.isEmpty()) && (QFileInfo(d->binFilePath).lastModified() < maxDate)) {
        //qDebug("CHECK - binFilePath %s lastmod: %u is older than maxDate", 
        //       d->binFilePath.toLatin1().data(), QFileInfo(d->binFilePath).lastModified().toTime_t());
         return false;
     }
   }

   if ((d->hexFile1Path.isEmpty()) || (d->hexFile2Path.isEmpty()))
   {
      qDebug("hex empty");
      return false;
   }

   maxDate = QDateTime(); //null time
   foreach (SourceListItem item, d->mcuFiles)
   {
      date = QFileInfo(item.filePath).lastModified();
     if (date > maxDate) {
        maxDate = date;
        // qDebug("CHECK - mcuFile %s lastmod: %u is the earliest", item.filePath.toLatin1().data(), date.toTime_t());
     }
   }

   //libfitkit source files dependency
   if (d->treeRoot.absoluteFilePath(LIBFITKIT_PATH) != d->path.absolutePath())
   {
      App libapp(d->treeRoot.absoluteFilePath(LIBFITKIT_PATH));
      libapp.parse();
     if (!libapp.isUpdated())
         return false;

      foreach (SourceListItem item, libapp.d->mcuFiles)
      {
         date = QFileInfo(item.filePath).lastModified();
       if (date > maxDate) { 
          maxDate = date;
          //qDebug("CHECK - libapp.mcuFile %s lastmod: %u is the earliest", item.filePath.toLatin1().data(), date.toTime_t());
       }
      }
   }

   //qDebug("CHECK - hexFile1 %s lastmod: %u maxDate: %u", d->hexFile1Path.toLatin1().data(), QFileInfo(d->hexFile1Path).lastModified().toTime_t(), maxDate.toTime_t());
   //qDebug("CHECK - hexFile2 %s lastmod: %u maxDate: %u", d->hexFile2Path.toLatin1().data(), QFileInfo(d->hexFile2Path).lastModified().toTime_t(), maxDate.toTime_t());

   // Warning: Do not remove toTime_t()
   // Win32 implementation is stupid enough to return false on equal mtimes
   if (QFileInfo(d->hexFile1Path).lastModified().toTime_t() < maxDate.toTime_t())
      return false;

   if (QFileInfo(d->hexFile2Path).lastModified().toTime_t() < maxDate.toTime_t())
      return false;

   return true;
}

bool copyMTime(const QString& fromFilePath, const QString& toFilePath)
{
   struct stat sb;
   struct utimbuf utb;

   if (stat(fromFilePath.toStdString().c_str(), &sb) < 0)
      return false;

   utb.actime = sb.st_atime; //access time
   utb.modtime = sb.st_mtime; //modification time

   if (utime(toFilePath.toStdString().c_str(), &utb) < 0)
      return false;

   return true;
}

bool App::createMakefile(const QString& fcmakePath,
                         const QString& fkflashPath,
                         QIODevice* dest)
{
   if (!parseCheck())
      return false;
   //==========================================================================
   //Output generation - MCU
   //==========================================================================

   //Create build directory (if not exists)
   if(!d->path.exists("build"))
   {
      if(!d->path.mkdir("build"))
      {
         qDebug("Unable to create <build> directory");
         return false;
      }
   }

   if (d->target != Library)
   {
      if (!d->path.exists("build/mcu"))
      {
         if (!d->path.mkdir("build/mcu"))
         {
            qDebug("Unable to create <build/mcu> directory");
            return false;
         }
      }

      if(!d->path.exists("build/fpga"))
      {
         if(!d->path.mkdir("build/fpga"))
         {
            qDebug("Unable to create <build/fpga> directory");
            return false;
         }
      }
   }

   // Create project Makefile
   if (d->fpgaUseProject != 0)
      d->fpgaUseProject->createMakefile(fcmakePath, fkflashPath);


   // Create project Makefile
   QFile makeFile(d->path.absoluteFilePath("Makefile"));
   if (!dest) {
       dest = &makeFile;
       if (!makeFile.open(QFile::WriteOnly))
       {
           qDebug("Unable to create Makefile");
           return false;
       }
   }

   QTextStream out(dest);
   if (d->target == Library)
      out << "TARGET = library\n";
   out << "BASE = " << d->path.relativeFilePath(d->treeRoot.absolutePath()) << "\n";
   if (!fcmakePath.isEmpty())
      out << "FCMAKE = " << fcmakePath << "\n";
   if (!fkflashPath.isEmpty()) {
      out << "FKFLASH = " << fkflashPath << "\n";
	} else if (!fcmakePath.isEmpty() && QFileInfo(QString(fcmakePath).replace("fcmake","fkflash")).exists()) {
      out << "FKFLASH = " << QString(fcmakePath).replace("fcmake","fkflash") << "\n";
	}
   if (!fcmakePath.isEmpty() && QFileInfo(QString(fcmakePath).replace("fcmake","fkterm")).exists()) {
      out << "FKTERM = " << QString(fcmakePath).replace("fcmake","fkterm") << "\n";
	}
   if (!fcmakePath.isEmpty() && QFileInfo(QString(fcmakePath).replace("fcmake","fktest")).exists()) {
      out << "FKTEST = " << QString(fcmakePath).replace("fcmake","fktest") << "\n";
	}
   out << "PROJECT = " << d->path.relativeFilePath(d->projectFilePath) << "\n";

   out << "OUTPUTPREFIX = " << d->outputPrefix << "\n";
   if (d->mathLibrary)
      out << "LIBRARIES = -lm\n";

   //project depends on libfitkit library
   bool hasDependencies = (d->treeRoot.absoluteFilePath(LIBFITKIT_PATH) != d->path.absolutePath());
   if (d->fpgaUseProject != 0)
   {
      hasDependencies = true;
      out << "DEPENDENCIES = " << d->path.relativeFilePath(d->fpgaUseProject->path()) << "\n";
   }


   if ((d->target == Project) && (d->fpgaUseProject == 0))
   {

      QStringList chipList = d->fpgaChip.split("-", QString::KeepEmptyParts);
      if ((chipList.count() != 3) || (chipList[0].isEmpty()) || (chipList[1].isEmpty()) || (chipList[2].isEmpty()))  {
         qDebug("Invalid chip identification string \"%s\"", d->fpgaChip.toStdString().c_str());
         return false;
      }

      out << "FPGACHIP = " << chipList[0] << "\n";
      out << "FPGASPEEDGRADE = " << chipList[1] << "\n";
      out << "FPGAPACKAGE = " << chipList[2] << "\n";

   }
   out << "\n";

   out << "all:";
   if (hasDependencies)
      out << " dependencycheck";

   if (d->target == Library)
      out << " build/" << d->outputPrefix << "_f1xx.a build/" << d->outputPrefix << "_f2xx.a\n";

   if (d->target == Project)
   {
      out << " build/" << d->outputPrefix << "_f1xx.hex";
      out << " build/" << d->outputPrefix << "_f2xx.hex";
      if (d->fpgaUseProject == 0)
         out << " build/" << d->outputPrefix << ".bin";
      out << "\n";
   }


   QString lastModifiedFile = d->projectFilePath;
   QDateTime lastModifiedDate = QFileInfo(d->projectFilePath).lastModified();
   foreach (QString file, d->includeFiles)
   {
       QDateTime date = QFileInfo(file).lastModified();
       if (date > lastModifiedDate)
       {
          lastModifiedDate = date;
          lastModifiedFile = file;
       }
//TODO: lastModifiedMcuFile, lastModifiedFpgaFile - jinak se zbytecne pri zmene package XML, ktery souvisi pouze s MCU sekci kompiluje FPGA
   }

//   out << "\n";
//   out << "Makefile: " << d->path.relativeFilePath(d->projectFile) << "\n" << "\t$(FCMAKE) $*\n";

   out << "\n#MCU part\n";
   out << "#=====================================================================\n";
   if (d->target == Project)
   {
      out << "HEXFILE_F1XX = build/" << d->outputPrefix << "_f1xx.hex\n";
      out << "HEXFILE_F2XX = build/" << d->outputPrefix << "_f2xx.hex\n\n";
   }

   QString ofiles1;
   QString ofiles2;

   QStringList includeList;
   foreach (SourceListItem item, d->mcuFiles)
   {
      if (item.headerFiles == 0)
         continue;

      foreach (QString file, *(item.headerFiles))
      {
        QFileInfo fi(file);
        QString adir = d->path.relativeFilePath(fi.absolutePath());
        if (!includeList.contains(adir))
           includeList.append(adir);
      }
   }

   if (!includeList.isEmpty())
   {
      out << "INCLUDE_ARGS = -I" << includeList.join(" -I") << "\n\n";
/*      foreach (QString file, includeList) {
         out << "-I" << file << " ";
      }
      out << "\n\n"; */
   }

   foreach (SourceListItem item, d->mcuFiles)
   {
      QFileInfo fi(item.filePath);
      QString ofile;
      QString srcfiles = d->path.relativeFilePath(item.filePath);
      if (item.headerFiles != 0)
      {
         foreach (QString file, *(item.headerFiles))
            srcfiles += " " + d->path.relativeFilePath(file);
      }

      ofile =  "build/";
      if (d->target == Project)
         ofile += "mcu/";
      ofile += fi.completeBaseName();

      if (!ofiles1.isEmpty()) ofiles1 += " ";
      ofiles1 += ofile + "_f1xx.o";

      if (!ofiles2.isEmpty()) ofiles2 += " ";
      ofiles2 += ofile + "_f2xx.o";

      out << ofile << "_f1xx.o" << ": " << srcfiles << "\n";
      out << "\t$(comp_tpl_f1xx)\n\n";
      //out << "\t$(CC) $(COPT_F1XX) -o $@ -c $<\n\n";

      out << ofile << "_f2xx.o" << ": " << srcfiles << "\n";
      out << "\t$(comp_tpl_f2xx)\n\n";
      //out << "\t$(CC) $(COPT_F2XX) -o $@ -c $<\n\n";
   }

   out << "OBJFILES_F1XX = " << ofiles1 << "\n";
   out << "OBJFILES_F2XX = " << ofiles2 << "\n\n";

   //==========================================================================
   //Output generation - FPGA
   //==========================================================================
   if (d->target == Project)
   {
      out << "#FPGA part\n";
      out << "#=====================================================================\n";
      if (!d->ucfFile.isEmpty())
         out << "FPGAUCF = " << d->ucfFile << "\n";

      if (!d->ngcPath.isEmpty())
         out << "NGCPATH = " << d->path.relativeFilePath(d->path.absoluteFilePath(d->ngcPath)) << "\n";

      out << "BINFILE = ";
      if (d->fpgaUseProject != 0)
      {
         out << d->path.relativeFilePath(d->fpgaUseProject->d->path.absoluteFilePath("build/" + d->fpgaUseProject->d->outputPrefix+".bin"));
      }
      else
      {
         out << "build/" << d->outputPrefix << ".bin";
      }
      out << "\n";

      // VHDL configuration package
      QFile prjFile(d->path.absoluteFilePath("build/fpga/" + d->outputPrefix + "_config.vhd"));
      if (!prjFile.open(QIODevice::WriteOnly))
      {
         qDebug("Unable to create config file");
         return false;
      }
      QTextStream outp(&prjFile);

      outp << "-- fpga_config.vhd: user constants\nuse " << d->library << ".clkgen_cfg.all;\n\n";
      outp << "package fpga_cfg is\n";
      outp << "   constant DCM_FREQUENCY : dcm_freq := DCM_" << d->dcmFrequency << ";\n";
      outp << "end fpga_cfg;\n\n";
      outp << "package body fpga_cfg is\nend fpga_cfg;\n";
      prjFile.close();

      if (!copyMTime(d->projectFilePath, prjFile.fileName())) //konfigurace zavisi pouze na project.xml
         qDebug("Warning: Can't alter config mtime");

      // XILINX ISE - XST synthesis project file
      prjFile.setFileName(d->path.absoluteFilePath("build/fpga/" + d->outputPrefix + ".prj"));
      if (!prjFile.open(QIODevice::WriteOnly))
      {
         qDebug("Unable to create XST project file");
         return false;
      }
      outp.setDevice(&prjFile);

      if (d->architecture != "none")
         outp << "vhdl " << d->library << " \"" << d->path.relativeFilePath(d->path.absoluteFilePath("build/fpga/" + d->outputPrefix + "_config.vhd")) << "\"\n";

      #define getlib(l1,l2) (((l1).isEmpty()) ? (l2) : (l1))

      bool first = true;
      foreach (SourceListItem item, d->fpgaFiles)
      {
         if (item.simFile) continue;

         outp << "vhdl " << getlib(item.library,d->library) << " \"" << d->path.relativeFilePath(item.filePath) << "\"\n";

         out << "HDLFILES ";
         out << ((first) ? " = " : "+= ");
         out << d->path.relativeFilePath(item.filePath) << "\n";

         first = false;
      }
      out << "\n";
      prjFile.close();

      if (!copyMTime(lastModifiedFile, prjFile.fileName()))
         qDebug("Warning: Can't alter project mtime");

      // XILINX ISE - LSO file
      prjFile.setFileName(d->path.absoluteFilePath("build/fpga/" + d->outputPrefix + ".lso"));
      if (!prjFile.open(QIODevice::WriteOnly))
      {
         qDebug("Unable to create LSO file");
         return false;
      }

      prjFile.write(d->library.toStdString().c_str(), 4);
      prjFile.close();

      if (!copyMTime(d->projectFilePath, prjFile.fileName()))
         qDebug("Warning: Can't alter lso mtime");

      // XILINX ISE - syntesize script
      prjFile.setFileName(d->path.absoluteFilePath("build/fpga/" + d->outputPrefix + ".xst"));
      if (!prjFile.open(QIODevice::WriteOnly))
      {
         qDebug("Unable to create XST script file");
         return false;
      }

      QStringList optList = d->optMode.split(":", QString::KeepEmptyParts);
      if (optList.count() == 1) optList.append("1");
      if (optList.count() >= 1) optList[0] = optList[0].toUpper();

      if ((optList.count() != 2) || ((optList[0] != "SPEED") && (optList[0] != "AREA")) || ((optList[1] != "1") && (optList[1] != "2"))) {
         qDebug("Invalid optimization goal/effort string \"%s\", please use speed:1, area:1, speed:2 or area:2", d->optMode.toStdString().c_str());
         return false;
      }

      outp.setDevice(&prjFile);
      outp << "set -tmpdir build/fpga -xsthdpdir build/fpga\n";
      outp << "run -ifn build/fpga/" + d->outputPrefix + ".prj ";
      outp << "-ifmt mixed -opt_mode " << optList[0] << " -opt_level " << optList[1] << " ";
      outp << "-ofn build/fpga/" + d->outputPrefix + ".ngc ";
      outp << "-ofmt NGC -lso build/fpga/" + d->outputPrefix + ".lso ";
      outp << "-p " << d->fpgaChip << " -top " << d->toplevelEntity << " -rtlview yes";
      prjFile.close();

      if (!copyMTime(d->projectFilePath, prjFile.fileName()))
         qDebug("Warning: Can't alter xst script mtime");


      QDir simPath = d->pathFpga; simPath.cd("sim");
      
      // ModelSIM - FDO script
      if (hasModelSimScript())
      {
         prjFile.setFileName(d->path.absoluteFilePath("build/fpga/" + d->outputPrefix + "_sim.fdo"));
         if (!prjFile.open(QIODevice::WriteOnly))
         {
            qDebug("Unable to create FDO script file");
            return false;
         }

         outp.setDevice(&prjFile);
         outp << "variable VHDLFILES\n";
         outp << "set SIMMODEL \"" << simPath.relativeFilePath(d->path.absoluteFilePath("build/fpga/" +
                  d->outputPrefix + ".timesim.vhd"));
         if (d->library != "work") outp << "@" << d->library;
         outp << "\"\n\n";
         foreach (SourceListItem item, d->fpgaFiles)
         {
            QString lib = getlib(item.library,d->library);
            
            outp << "lappend VHDLFILES \"" << simPath.relativeFilePath(item.filePath);
            if (lib != "work") outp << "@" << lib;
            outp << "\"\n";
            if (item.filePath.endsWith("clkgen_config.vhd")) { //dependency HACK
               outp << "lappend VHDLFILES \"" << simPath.relativeFilePath(d->path.absoluteFilePath("build/fpga/" + d->outputPrefix + "_config.vhd"));
               if (lib != "work") outp << "@" << lib;
               outp << "\"\n";
            }
         }
         outp << "\nsource \"" << simPath.relativeFilePath(d->treeRoot.absoluteFilePath("base/modelsim.fdo")) << "\"\n";
         prjFile.close();

         if (!copyMTime(lastModifiedFile, prjFile.fileName()))
            qDebug("Warning: Can't alter FDO script mtime");
      }

      // ISIM - TCL script
      if (hasISimScript())
      {
         QDir fpgaBuildPath = d->path; fpgaBuildPath.cd("build/fpga");

         prjFile.setFileName(d->path.absoluteFilePath("build/fpga/" + d->outputPrefix + "_isim.prj"));
         if (!prjFile.open(QIODevice::WriteOnly))
         {
            qDebug("Unable to create ISIM project file");
            return false;
         }
         outp.setDevice(&prjFile);

         //config
         if (d->architecture != "none")
            outp << "vhdl " << d->library << " \"" << d->outputPrefix << "_config.vhd" << "\"\n";

         //project files
         foreach (SourceListItem item, d->fpgaFiles)
         {
            outp << "vhdl " << getlib(item.library,d->library) << " \"" << fpgaBuildPath.relativeFilePath(item.filePath) << "\"\n";
         }

         //testbench files
         foreach (QString item, simPath.entryList(QStringList() << "*.vhd" << "*.vhdl", QDir::Files, QDir::Name))
         {
            outp << "vhdl " << d->library << " \"" << fpgaBuildPath.relativeFilePath(simPath.absoluteFilePath(item)) << "\"\n";
         }

         prjFile.close();
         if (!copyMTime(lastModifiedFile, prjFile.fileName()))
            qDebug("Warning: Can't alter ISIM PRJ mtime");

         //-----------------------------------------------------------------------------------------------
         prjFile.setFileName(d->path.absoluteFilePath("build/fpga/" + d->outputPrefix + "_sim.tcl"));
         if (!prjFile.open(QIODevice::WriteOnly))
         {
            qDebug("Unable to create FDO script file");
            return false;
         }

         outp.setDevice(&prjFile);

         outp << "set TESTBENCH_SCRIPT \"" << fpgaBuildPath.relativeFilePath(d->pathFpga.absoluteFilePath("sim/isim.tcl")) << "\"\n";
         outp << "set SIM_ENVIRONMENT \"isim\"\n";
         outp << "set ISIM_PRJ \"" << d->outputPrefix << "_isim.prj\"\n";
         outp << "set ISIM_SIMULATOR \"" << d->outputPrefix << "_isim\"\n";
         outp << "set ISIM_SCRIPT \"" << d->outputPrefix << "_isim.tcl\"\n";
         outp << "source \"" << simPath.relativeFilePath(d->treeRoot.absoluteFilePath("base/xilinxisim.tcl")) << "\"\n";
         prjFile.close();

         if (!copyMTime(lastModifiedFile, prjFile.fileName()))
            qDebug("Warning: Can't alter ISIM TCL script mtime");

         //-----------------------------------------------------------------------------------------------
         prjFile.setFileName(d->path.absoluteFilePath("build/fpga/" + d->outputPrefix + "_xsim.tcl"));
         if (!prjFile.open(QIODevice::WriteOnly))
         {
            qDebug("Unable to create FDO script file");
            return false;
         }

         outp.setDevice(&prjFile);

         outp << "set TESTBENCH_SCRIPT \"" << fpgaBuildPath.relativeFilePath(d->pathFpga.absoluteFilePath("sim/isim.tcl")) << "\"\n";
         outp << "set SIM_ENVIRONMENT \"ise\"\n";
         outp << "source \"" << simPath.relativeFilePath(d->treeRoot.absoluteFilePath("base/xilinxisim.tcl")) << "\"\n";
         prjFile.close();

         if (!copyMTime(lastModifiedFile, prjFile.fileName()))
            qDebug("Warning: Can't alter ISIM TCL script mtime");
                  
      }

      //XILINX ISE - TCL script which creates the ISE project file
      prjFile.setFileName(d->path.absoluteFilePath("build/fpga/" + d->outputPrefix + "_ise.tcl"));
      if (!prjFile.open(QIODevice::WriteOnly))
      {
         qDebug("Unable to create ISE TCL script file");
         return false;
      }

      outp.setDevice(&prjFile);
      outp << "#============================================================================\n";
      outp << "# Run: \n";
      outp << "#    xtclsh " << d->outputPrefix << "_ise.tcl  - creates XILINX ISE project file\n";
      outp << "#    ise " << d->outputPrefix << "_project.ise - opens the project\n";
      outp << "#============================================================================\n";
      QDir fpgaBuildPath = d->path;
      fpgaBuildPath.cd("build/fpga");
      outp << "source \"" << fpgaBuildPath.relativeFilePath(d->treeRoot.absoluteFilePath("base/xilinxise.tcl")) << "\"\n\n";
      outp << "project_new \"" << d->outputPrefix << "_project\"\n";
      outp << "project_set_props\n";

//      outp << "puts \"Libraries\"\n";


      outp << "puts \"Adding source files\"\n";
      foreach (SourceListItem item, d->fpgaFiles)
      {
         if (item.simFile) continue;

         outp << "xfile add \"" << fpgaBuildPath.relativeFilePath(item.filePath) << "\"\n";
         if (item.filePath.endsWith("clkgen_config.vhd")) //dependency HACK
            outp << "xfile add \"" <<  fpgaBuildPath.relativeFilePath(d->path.absoluteFilePath("build/fpga/" + d->outputPrefix + "_config.vhd")) << "\"\n";
      }
      
      if ((hasModelSimScript()) || (hasISimScript())) {

           //simulation files (view simulation)
           outp << "puts \"Adding simulation files\"\n";

           foreach (SourceListItem item, d->fpgaFiles)
           {
              if (!item.simFile) continue;
              outp << "xfile add \"" << fpgaBuildPath.relativeFilePath(item.filePath) << "\" -view Simulation\n";
           }
   
           foreach (QString item, simPath.entryList(QStringList() << "*.vhd" << "*.vhdl", QDir::Files, QDir::Name)) {
              outp << "xfile add \"" <<  fpgaBuildPath.relativeFilePath(simPath.absoluteFilePath(item)) << "\" -view Simulation\n";
           }

      }

      QStringList libs; libs << "work"; 
      QString lib;

      outp << "puts \"Libraries\"\n";
      
      foreach (SourceListItem item, d->fpgaFiles)
      {
         if (item.simFile) continue;
         lib = getlib(item.library,d->library);
         if (lib == "work") continue;
         if (!libs.contains(lib)) 
         {
             outp << "lib_vhdl new \"" << lib << "\"\n";
             libs << lib;
         }

         outp << "lib_vhdl add_file \"" << lib << "\" \"" << QFileInfo(item.filePath).fileName() << "\"\n";
         if (item.filePath.endsWith("clkgen_config.vhd")) //dependency HACK
            outp << "lib_vhdl add_file \"" << lib << "\" \"" << d->outputPrefix << "_config.vhd" << "\"\n";
      }

      if ((hasModelSimScript()) || (hasISimScript())) {
           foreach (SourceListItem item, d->fpgaFiles)
           {
              if (!item.simFile) continue;
              lib = getlib(item.library,d->library);
              if (lib == "work") continue;

              if (!libs.contains(lib)) 
              {
                 outp << "lib_vhdl new \"" << lib << "\"\n";
                 libs << lib;
              }

              outp << "lib_vhdl add_file \"" << lib << "\" \"" << QFileInfo(item.filePath).fileName() << "\"\n";
           }

           if (d->library != "work") 
           {
              if (!libs.contains(d->library)) 
              {
                 outp << "lib_vhdl new \"" << d->library << "\"\n";
                 libs << d->library;
              }

              foreach (QString item, simPath.entryList(QStringList() << "*.vhd" << "*.vhdl", QDir::Files, QDir::Name)) {
                  outp << "lib_vhdl add_file \"" << d->library << "\" \"" << QFileInfo(item).fileName() << "\"\n";
              }
           }
           
           outp << "project_set_isimscript \"" << d->outputPrefix << "_xsim.tcl\"\n";
      }
      
      outp << "project_set_top \"" << d->toplevelEntity << "\"\n";

      if (!d->ngcPath.isEmpty())
         outp << "project_set_ngcpath \"" << fpgaBuildPath.relativeFilePath(d->path.absoluteFilePath(d->ngcPath)) << "\"\n";

      outp << "project_close\n";
      prjFile.close();

      if (!copyMTime(lastModifiedFile, prjFile.fileName()))
         qDebug("Warning: Can't alter ISE TCL script mtime");

      QString ofile = "build/fpga/" + d->outputPrefix;
      if (d->fpgaUseProject == 0)
      {
         out << "build/" << d->outputPrefix << ".bin: ";
         out << ofile << ".par.ncd " << ofile << ".pcf\n\n";

         //out << "\t$(BITGEN) $(BITGENFLAGS) $< build/" << d->outputPrefix << ".bit ";
         //out << ofile << ".pcf && $(RM) xilinx_device_details.xml\n\n";
      }
   }

   if (!d->includeFiles.isEmpty())
   {
      bool first = true;
      foreach (QString file, d->includeFiles)
      {
          out << "PKGS_LIST " << ((first) ? "= " : "+= ") << d->path.relativeFilePath(file) << "\n";
          first = false;
      }
      out << "\n";

   }

   out << "include $(BASE)/base/Makefile.inc\n";

   if (!dest) {
       makeFile.close();

       //projit includeFiles a vzit nejnovejsi cas
       if (!copyMTime(lastModifiedFile, makeFile.fileName()))
          qDebug("Warning: Can't alter Makefile mtime");
   }

   return true;
}

bool App::createRemoteMakefile(const QString& remoteHost,
                               const QString& fcmakePath,
                               const QString& fcmakeFlags,
                               const QString& fkflashPath,
                               QIODevice* dest)
{
    if (!parseCheck()) 
        return false;

    // Create project Makefile
    QFile makeFile(d->path.absoluteFilePath("Makefile"));
    if (!dest) {
        dest = &makeFile;
        if (!makeFile.open(QFile::WriteOnly))
        {
            qDebug("Unable to create Makefile");
            return false;
        }
    }

    // Create Makefile
    QTextStream out(dest);

    // Variables
    QString fcmake(fcmakePath);
    if (fcmake.isEmpty()) {
        fcmake = "fcmake";
    }

    if (d->target == Library)
       out << "TARGET = library\n";
    out << "BASE = " << d->path.relativeFilePath(d->treeRoot.absolutePath()) << "\n";
    out << "HOST = " << remoteHost << "\n";
    if (!fcmakePath.isEmpty())
       out << "FCMAKE = " << fcmake << "\n";
    out << "FCMAKEFLG = " << fcmakeFlags << "\n";

	 if (!fkflashPath.isEmpty())
       out << "FKFLASH = " << fkflashPath << "\n";

    out << "HEXFILE_F1XX = " << "build/" << d->outputPrefix << "_f1xx." << ((d->target == Project) ? "hex" : "a") << "\n";
    out << "HEXFILE_F2XX = " << "build/" << d->outputPrefix << "_f2xx." << ((d->target == Project) ? "hex" : "a") << "\n";
    out << "BINFILE = " << "build/" << d->outputPrefix << ".bin\n";
    out << "\n";

    if (d->target == Project)
    {
      bool first = true;
      foreach (SourceListItem item, d->fpgaFiles)
      {
         if (item.simFile) continue;

         out << "HDLFILES ";
         out << ((first) ? " = " : "+= ");
         out << d->path.relativeFilePath(item.filePath) << "\n";
         first = false;
      }
      out << "\n";
    }

    bool first = true;
    foreach (SourceListItem item, d->mcuFiles)
    {
       out << "MCUFILES ";
       out << ((first) ? " = " : "+= ");
       out << d->path.relativeFilePath(item.filePath) << "\n";
       first = false;
    }
    if (!first)
       out << "\n";

    /*
    //TODO: zavislosti na souborech v nasledujicich includovanych balicich
    if (!d->includeFiles.isEmpty())
    {
      out << "\n";
      bool first = true;
      foreach (QString file, d->includeFiles)
      {
          out << "PKGS_LIST " << ((first) ? "= " : "+= ") << d->path.relativeFilePath(file) << "\n";
          first = false;
      }
      out << "\n";
    }
    */

    out << "include $(BASE)/base/Remote.inc\n";

    // Close if not passed
    if (!dest) {
        makeFile.close();
    }

    return true;
}

}

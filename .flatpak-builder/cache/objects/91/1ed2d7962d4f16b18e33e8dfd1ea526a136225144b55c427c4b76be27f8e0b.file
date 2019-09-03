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

#include <QCoreApplication>
#include <QTextStream>
#include <QString>
#include <QDir>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "tree.h"
#include "app.h"
#include "filelist.h"
#include "getarg.h"
#include "remote.h"
#include "key.h"
//#include "unistd.h"

using namespace FCMake;

//TODO: XML v adresari BASE, ktery bude obsahovat nastavistelne veci?
//TODO: pokud se zmeni XML, automaticky v makefile jej zavolat!

/*
fcmake --generate [project.xml]
fcmake --clean [project.xml]
fcmake --cleanall [project.xml]
fcmake --updatelist [project.xml]  (create a list of all files and store it in base/filelist.xml)
*/

int help(const char* name, Arg::List& args);

#ifdef _WIN32
#include <conio.h>
#endif

char* getpassword()
{
#ifdef _WIN32
  int ch;
  char* buf = (char *)malloc(1024);
  int i = 0;
  buf[0] = 0;

  while (1) {
      ch = getch();
      if ((ch == 10) || (ch == 13)) { //enter
         break; 
      } else if (ch == 3) { //break
         free(buf);
         buf = 0;
         break;
      } else if (ch == 8) { //backspace
         if (i > 0) i--;
         buf[i] = 0;
      } else if (ch <= 255) {
         buf[i] = ch;
         i++;
      }
  }         

  printf("\n");
  fflush(stdout);
  return buf;
#else 
  return getpass("");
#endif
}

int main(int argc, char *argv[])
{
   QCoreApplication mainApp(argc, argv);
   mainApp.setOrganizationName("VUT FIT");
   mainApp.setOrganizationDomain("fit.vutbr.cz");
   mainApp.setApplicationName("QDevKit");

   // Targets
   bool build = false;
   bool remote = false;
   bool generate = false;
   bool genlist = false;
   bool clean = false;
   bool cleanAll = false;
   bool cleanMcu = false;
   bool cleanFpga = false;
   bool isError = false;
   bool noPublic = false;

   QString remoteCmd;
   QString remoteHost;
   QString appPath = QDir::current().absolutePath(); //current directory
	QString appRoot;

   // Get arguments
   Arg::List args(argc, argv);
   args.push_back('g', "--generate",     "           Generate Makefile from project.xml. (default action)");
   args.push_back('r', "--remote",       "[host]       Generate Makefile for a remote build.");
   args.push_back('p', "--password-only","      Disable authentication using public-key.");
   args.push_back('b', "--build",        "              Build current project.");
   args.push_back('n', "--remote-build", "[host] Build current project on a remote host.");
   args.push_back('u', "--updatelist",   "         Create a list of all files and store it in base/filelist.");
   args.push_back('c', "--clean",        "              Clean generated files excluding Makefile.");
   args.push_back('a', "--cleanall",     "           Clean all generated files including Makefile.");
   args.push_back('f', "--cleanfpga",    "          Clean files (build/fpga)");
   args.push_back('m', "--cleanmcu",     "           Clean files (build/mcu)");
   args.push_back('h', "--help",         "               Show this help.");
	args.push_back('s', "--svn-root",     "[path]     SVN tree path.");

   // Scan arguments
   Arg::Param* arg = 0;
   while((arg = args.next()) != 0)
   {
      switch(arg->code)
      {
      case 'p':   noPublic = true;  break;
      case 'g':   generate = true;  break;
      case 'r':
          generate = true;
          remote = true;
          if (!(arg = args.next())) {
              fprintf(stderr, "!! no remote host given.\n");
              return help(argv[0], args);
          }
          remoteHost = args.arg();
          break;
      case 'b':   build    = true;  break;
      case 'n':
          remote = true;

          // Remote host
          if (!(arg = args.next())) {
              fprintf(stderr, "!! no remote host given.\n");
              return help(argv[0], args);
          }
          remoteHost = args.arg();

          // Command
          if (!args.next()) {
              fprintf(stderr, "!! no remote host command given.\n");
              return help(argv[0], args);
          }
          remoteCmd = args.arg();
          break;
      case 'u':   genlist  = true;  break;
      case 'c':   clean    = true;  break;
      case 'a':   cleanAll = true;  clean = true; break; // CleanAll includes clean
      case 'm':   cleanMcu = true;  break;
      case 'f':   cleanFpga = true; break;
      case 'h':   return help(argv[0], args); break;
      case 's':  
          // Remote host
          if (!(arg = args.next())) {
              fprintf(stderr, "!! no tree path given.\n");
              return help(argv[0], args);
          }

			 appRoot = args.arg();
			 if (!QFileInfo(appRoot).isDir()) {
              fprintf(stderr, "!! tree path not found.\n");
              return help(argv[0], args);
			 }
			 appRoot = QFileInfo(appRoot).absoluteFilePath();
			 break;

      default:
          QFileInfo info(args.arg());
          if(info.exists())
              appPath = info.canonicalPath();
          break;
      }
   }

   // default action - generate
   if ((!build) && (!remote) && (!clean) && (!cleanAll) && (!cleanMcu) && (!cleanFpga) && (!genlist))
      generate = true;

   if ((clean || cleanAll) && (cleanMcu || cleanFpga))
   {
      qCritical("Invalid combination of clean parameters\n\n");
      help(argv[0], args);
      return 1;
   }

	if (appRoot.isEmpty()) {
       appRoot = (QFileInfo(appPath).isFile()) ? QFileInfo(appPath).absolutePath() : appPath;
	}

   // Initialize tree
   Tree tree(appRoot);
   qDebug("App path: %s", appPath.toStdString().c_str());
   qDebug("Tree path: %s", tree.root().absolutePath().toStdString().c_str());

   // Initialize libfitkit
   App* libApp = tree.app(LIBFITKIT_PATH);
   if (libApp == 0)
   {
      qCritical("can't find libfitkit directory\n\n");
      help(argv[0], args);
      return 1;
   }

   if (genlist)
   {
      qDebug("Generate file list (root directory: %s)", tree.root().absolutePath().toStdString().c_str());

      FileList list(tree.root());
      if (list.writeToXML())
         qDebug("File list updated successfully");
      else
         qCritical("unable to create the file base/filelist.xml\n");

      return 0;
   }

   // Initialize application
   App app;
   if (!app.load(appPath, appRoot))
   {
      qCritical("can't find either project.xml or library.xml\n\n");
      help(argv[0], args);
      return 1;
   }

   // Target: build
   if (build)
   {
       qCritical("build not implemented yet\n");
   }

   // Target: remote-build
   if (remote)
   {
       Key key(remoteHost);

       if (generate) {

           QString fcmakePath;

           fcmakePath = mainApp.applicationFilePath();
           char * fPath = getenv("FCMAKE_APP");
           if ((fPath!=NULL) && (QFile::exists(fPath)))
              fcmakePath = fPath;
           qDebug("FCMake path: %s", fcmakePath.toStdString().c_str());

           // Create local Makefile and associated files
           if (app.createMakefile(fcmakePath)) {
               if (app.path() != libApp->path()) {
                   libApp->createMakefile(fcmakePath);
               }
           }

           // Create Makefile for remote use
           if (!app.createRemoteMakefile(remoteHost, fcmakePath, QString(noPublic ? "-p" : ""))) {
               qDebug("Failed to create remote Makefile.");
               return 1;
           }

           qDebug("Project remote Makefile successfully created.");

       } else {

           // Create new pubkey if not exists
           Remote remote(key.host(), key.port());
           if ((noPublic) || (!key.exists())) {
               printf("Enter password for '%s': ", key.identity().toLatin1().data());
               fflush(stdout);

               char* password = getpassword();
               if (password == 0) {
                   fprintf(stderr, "Terminated.\n");
                   return 1;
               }

               // Check connection
               printf("Initializing connection.\n");

               if (!remote.connect(key.login(), QString(password))) {
                  free(password);
                  fprintf(stderr, "Error: Connection failed.\n");
                  return 1;
               }
   
               free(password);

               if (!noPublic) {
                  // Initialize public key
                  printf("Key not exists, creating.\n");
                  if(!remote.initKeys(&key)) {
                      fprintf(stderr, "Error: Failed to create public key.\n");
                      return 1;
                  }
               }

           } else {
               // Connect using public key
               printf("Authenticating using public-key.\n");
               if(!remote.connect(&key)) {
                   fprintf(stderr, "Error: Connection failed.\n");
                   return 1;
               }
           }

           // Prepare build environment
           printf("Preparing build environment.\n");
           if (!remote.prepareBuild()) {
               fprintf(stderr, "Error: Failed to prepare build environment.\n");
               return 1;
           }

           // Build application
           QTextStream stream(stdout, QIODevice::WriteOnly|QIODevice::Unbuffered);
           printf("Compiling application.\n");
           if (!remote.build(tree, &app, remoteCmd, stream.device())) {
               fprintf(stderr, "Error: Failed to build application.\n");
               return 1;
           }
       }

       return 0;
   }

   // Target: clean
   if (clean)
   {

     if (!app.clean((cleanAll) ? App::CleanAll : App::CleanFpgaMcu))
     {
        qCritical("Can't clean\n");
        isError = true;
     }
   }

   // Target: cleanfpga
   if (cleanFpga)
   {

     if (!app.clean(App::CleanFpgaOnly))
     {
        qCritical("Can't clean FPGA files\n");
        isError = true;
     }
   }

   // Target: cleanmcu
   if (cleanMcu)
   {

     if (!app.clean(App::CleanMcuOnly))
     {
        qCritical("Can't clean MCU files\n");
        isError = true;
     }
   }

   // Target: generate
   if (generate)
   {
     QString fcmakePath;

     fcmakePath = mainApp.applicationFilePath();
     char * fPath;
     fPath = getenv("FCMAKE_APP");
     if ((fPath!=NULL) && (QFile::exists(fPath)))
        fcmakePath = fPath;
     qDebug("FCMake path: %s", fcmakePath.toStdString().c_str());

     // Create Makefile
     if (app.createMakefile(fcmakePath))
     {
        qDebug("Project make files successfully created.");

         // Check flags
        if (app.isCompiled()) qDebug("Project is compiled");
        if (app.isUpdated())  qDebug("Project is up-to-date");

        // refresh libfitkit Makefile
        if ((app.path() != libApp->path()) && (libApp->createMakefile(fcmakePath)))
        {
           qDebug("libfitkit make files successfully created.");
           if (libApp->isCompiled()) qDebug("libfitkit is compiled");
           if (libApp->isUpdated())  qDebug("libfitkit is up-to-date");
        }
     }
     else
     {
        qDebug("Unable to create necessary files.");
        isError = true;
     }
   }

   delete libApp;

   return isError ? EXIT_FAILURE : EXIT_SUCCESS;
}

int help(const char* name, Arg::List& args)
{
   // Show help
   printf("Usage: %s [options] [project.xml]\n", name);
   printf("Options (version " __VERSION "):\n");

   for(Arg::List::iterator it = args.begin(); it < args.end(); ++it)
      printf("   -%c, %s %s\n", (*it).code, (*it).name, (*it).desc);

   printf("\n");
   printf("Examples:\n");
   printf("\t %s -b                      ... builds current application\n", name);
   printf("\t %s -b apps/myapp           ... builds given application\n", name);
   printf("\t %s -r user@host            ... generate Makefile for remote build\n", name);
   printf("\t %s -n user@host apps/myapp ... builds given application on a remote host\n", name);
   printf("\n");
   printf("When no project.xml path given, FCMake looks in current directory.\n");
   return 0;
}

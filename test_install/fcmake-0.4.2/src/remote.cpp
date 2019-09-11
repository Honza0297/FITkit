/***************************************************************************
 *   Copyright (C) 2010 Brno University of Technology,                     *
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

#include <QTemporaryFile>
#include <QBuffer>
#include <QStack>
#include <QDateTime> 
#include <QHash>
#include <QMutex>
#include <QDirIterator>
//#include <QtNetwork/QHostInfo>
#include <libssh/libssh.h>
#include <libssh/sftp.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <cstdlib>
#include "remote.h"

#ifndef S_IRWXU
#define S_IRWXU 0x01C0
#endif

namespace FCMake
{

class Remote::Private
{
public:
   Private() : port(-1), key(0), session(0), sftp(0), connected(false)
   {}
   
   int port;
   QString host;
   QString host_rtree;
   Key* key;
   ssh_session session;
   sftp_session sftp;
   bool connected;
   QList<ssh_channel> channels;
   QMutex operationMutex; /* Locked during libssh operations to prevent 
                                * crashing on ~Remote() during I/O. */
};

Remote::Remote(const QString& host, int port) : d(new Private)
{
   d->port = 22;
   d->host = "";
/*
	QHostInfo info = QHostInfo::fromName(host);
   if (info.error() != QHostInfo::NoError) {
      qDebug() << "FCMake Error: Host lookup failed (" << info.errorString() << ")";
      return;
   }
   foreach (const QHostAddress &address, info.addresses())
           qDebug() << "FCMake Info: Found address " << address.toString();
*/

   d->port = port;
   d->host = host;

   // Init session
   d->session = ssh_new();
   if (d->session == 0) {
      return;
   }


   int timeout = 5;
   ssh_options_set(d->session, SSH_OPTIONS_TIMEOUT, &timeout);
   ssh_options_set(d->session, SSH_OPTIONS_PORT, &port);
   ssh_options_set(d->session, SSH_OPTIONS_HOST, host.toLatin1().data());
   ssh_options_set(d->session, SSH_OPTIONS_KNOWNHOSTS, "~/.ssh/known_hosts_qdevkit");
//   ssh_options_set(d->session, SSH_OPTIONS_LOG_VERBOSITY, "3");
   
}

Remote::~Remote()
{
   d->operationMutex.lock();
   
   // Disconnect session
   if (d->session) {
      disconnect();
      ssh_free(d->session);
   }
   
   // Free all forwarding channels
   foreach(ssh_channel ch, d->channels) {
      channel_close(ch);
      channel_free(ch);
   }
   d->channels.clear();
   
   d->operationMutex.unlock();
   
   delete d;
}

bool Remote::connect(Key* key)
{
   // Already connected
   if (d->connected) {
      return true;
   }

   // Handshake
   if (!handShake()) {
      return false;
   }
   
   // Assign key
   if (key == 0) {
      disconnect();
      return false;
   }
   if (d->key) {
      delete d->key;
   }
   d->key = key;
   
   // Get private key
   QTemporaryFile tmpkey;
   if (!tmpkey.open()) {
      return false;
   }
   tmpkey.write(d->key->key());
   tmpkey.close();
   
   // Load key from file
   ssh_private_key priv = 0;
   priv = privatekey_from_file(d->session, tmpkey.fileName().toLatin1().data(), 0, 0);
   if (priv == 0) {
      qDebug("FCMake Error: Failed to create private key instance."); 
      return false;
   }
   
   // Derive public key
   ssh_public_key pub = publickey_from_privatekey(priv);
   ssh_string pubstr = publickey_to_string(pub);
   
   // Login to remote using public key
   d->operationMutex.lock();
   QString login(key->login());
   int ret = ssh_userauth_pubkey(d->session, login.toLatin1().data(), pubstr, priv);
   privatekey_free(priv);
   publickey_free(pub);
   string_free(pubstr);
   d->operationMutex.unlock();
   
   if (ret != SSH_AUTH_SUCCESS) {
      qDebug("FCMake Error: Public-key authentication failed (error code: %d, error: %s)", ret, ssh_get_error(d->session));
      return false;
   }
   
   // Setup channels
   if (!setup()) {
      qDebug("FCMake Error: Failed to set-up command and transfer channels.");
      disconnect();
      return false;
   }

   return d->connected = true;
}

bool Remote::connect(const QString& login, const QString& passwd)
{
   // Already connected
   if (d->connected) {
      return true;
   }

	ssh_options_set(d->session, SSH_OPTIONS_USER, login.toLatin1().data());
   
   // Handshake
   if (!handShake()) {
      return false;
   }
   
   // Authenticate using password
   d->operationMutex.lock();

   // Try to authenticate
   int rc = ssh_userauth_none(d->session, NULL);
   if (rc == SSH_AUTH_ERROR) {
      qDebug("FCMake Error: Auth none denied (error code: %d, error: %s)", rc, ssh_get_error(d->session));
//      return false;
   }  else {
      qDebug("FCMake Info: Auth none done");
	}

   // Try to authenticate
   int method = ssh_auth_list(d->session);

	rc = SSH_AUTH_ERROR;
	if (method & SSH_AUTH_METHOD_PASSWORD) {
       qDebug("FCMake Info: Try to authenticate using password");
	 	 rc = ssh_userauth_password(d->session, login.toLatin1().data(), passwd.toLatin1().data());
	}

   // If the authentication fails, authenticate using interactive keyboard
   if ((rc != SSH_AUTH_SUCCESS) && (method & SSH_AUTH_METHOD_INTERACTIVE)) 
   {
       qDebug("FCMake Info: Try to authenticate using method interactive (error code: %d, method: %d, error: %s)", rc, method, ssh_get_error(d->session));
      
       rc = ssh_userauth_kbdint(d->session, NULL, NULL);
       while (rc == SSH_AUTH_INFO) 
       {
            const char* name = ssh_userauth_kbdint_getname(d->session);
            const char* instruction = ssh_userauth_kbdint_getinstruction(d->session);
            int n = ssh_userauth_kbdint_getnprompts(d->session);
            if (n > 2) n = 2;

            //if (name && strlen(name) > 0) printf("name: %s\n", name);
            //if (instruction && strlen(instruction) > 0) printf("instructions: %s\n", instruction);
            
            for (int i = 0; i < n; i++) 
            {
                char echo;
                const char* prompt = ssh_userauth_kbdint_getprompt(d->session, i, &echo);
                if (prompt == NULL) 
                   break;

                if (echo) 
                {
                    if (ssh_userauth_kbdint_setanswer(d->session, i, login.toLatin1().data()) < 0) 
                    {
                       d->operationMutex.unlock();
                       qDebug("FCMake Error: Permission denied (kbdint failed)");
                       return false;
                    }

                } else {

                    if (ssh_userauth_kbdint_setanswer(d->session, i, passwd.toLatin1().data()) < 0) 
                    {
                       d->operationMutex.unlock();
                       qDebug("FCMake Error: Permission denied (kbdint failed)");
                       return false;
                    }

                }

            }
 
            rc = ssh_userauth_kbdint(d->session, NULL, NULL);
		 }

   }
   d->operationMutex.unlock();

   if (rc != SSH_AUTH_SUCCESS) 
   {
      qDebug("FCMake Error: Permission denied (error code: %d, method: %d, error: %s)", rc, method, ssh_get_error(d->session));
      disconnect();
      return false;
   } else {
       qDebug("FCMake Info: Authentication finished");
	}		

   
   // Setup channels
   if (!setup()) {
      qDebug("FCMake Error: Failed to set-up command and transfer channels.");
      disconnect();
      return false;
   }
   
   return d->connected = true;
}

bool Remote::disconnect()
{
   if (d->sftp) {
      sftp_free(d->sftp);
      d->sftp = 0;
   }
   
   if (d->connected) {
      ssh_disconnect(d->session);
      d->host_rtree.clear();
      d->connected = false;
      return true;
   }
   
   return false;
}

int Remote::exec(const QString& cmd, QIODevice* out)
{
   // Create channel
   d->operationMutex.lock();
   ssh_channel channel = channel_new(d->session);
   if (channel == 0) {
      qDebug("FCMake Error: exec failed: '%s'.", ssh_get_error(d->session));
      d->operationMutex.unlock();
      return false;
   }
   
   // Open session
   if (channel_open_session(channel) != SSH_OK) {
      qDebug("FCMake Error: exec failed: '%s'.", ssh_get_error(d->session));
      channel_free(channel);
      d->operationMutex.unlock();
      return -1;
   }
   
   // Execute command
   QString rcmd("PATH=/mnt/data/tools/qdevkit:$PATH ");
   rcmd.append(cmd);
   int rc = channel_request_exec(channel, rcmd.toLatin1().data());
   if (rc != SSH_OK) {
      qDebug("FCMake Error: exec failed: '%s'.", ssh_get_error(d->session));
      channel_close(channel);
      channel_free(channel);
      d->operationMutex.unlock();
      return rc;
   }
   
   char buffer[64];
   int written = 0;
   int nbytes = channel_read(channel, buffer, sizeof(buffer), 0);
   while (nbytes > 0) {
      if (out) {
         out->write(buffer, nbytes);
      }
      written += nbytes;
      nbytes = channel_read(channel, buffer, sizeof(buffer), 0);
   }
   
   if (nbytes < 0) {
      qDebug("FCMake Error: exec failed to receive command output.");
      channel_close(channel);
      channel_free(channel);
      d->operationMutex.unlock();
      return -1;
   }
   
   // Close session
   channel_send_eof(channel);
   channel_close(channel);
   channel_free(channel);
   d->operationMutex.unlock();
   return written;
}

bool Remote::initKeys(Key* ident)
{
   // Retrieve keys
   QByteArray raw_key;
   QBuffer iobuf;
   iobuf.setBuffer(&raw_key);
   if (!iobuf.open(QIODevice::ReadWrite)) {
      return false;
   }
   
   // Create keys
   QString cmd;
   cmd.append("isauth=$(grep FITkit $HOME/.ssh/authorized_keys 2>/dev/null);");
   cmd.append("(");
   cmd.append("[ -f $HOME/.ssh/fitkit-build.pub ] && ");
   cmd.append("[ -f $HOME/.ssh/fitkit-build ] && ");
   cmd.append("[ ! -z \"$isauth\" ]");
   cmd.append(") || (");
   cmd.append("mkdir -p $HOME/.ssh &>/dev/null;");
   cmd.append("rm \"$HOME/.ssh/fitkit-build\" &>/dev/null;");
   cmd.append("ssh-keygen -t rsa -C \"FITkit build key\" -P \"\" ");
   cmd.append("-f \"$HOME/.ssh/fitkit-build\" -q;");
   cmd.append("cat $HOME/.ssh/fitkit-build.pub >> $HOME/.ssh/authorized_keys");
   cmd.append(");");
   cmd.append("cat $HOME/.ssh/fitkit-build");
   if (exec(cmd, &iobuf) < 0) {
      return false;
   }
   
   // Check data
   if (!raw_key.size()) {
      return false;
   }
   
   // Received new key
   ident->store(raw_key);
   printf("Authentication key stored.\n");
   
   return true;
}

bool Remote::prepareBuild()
{
   // Retrieve keys
   QByteArray tree_rpath;
   QBuffer iobuf;
   iobuf.setBuffer(&tree_rpath);
   if (!iobuf.open(QIODevice::ReadWrite)) {
      return false;
   }
   
   if (exec("bserver-prepare", &iobuf) < 0) {
      return false;
   }
   
   // Check data
   if (!tree_rpath.size()) {
      return false;
   }
   
   // Received new key
   d->host_rtree = QString(tree_rpath);
   printf("Remote build directory: '%s'\n", tree_rpath.data());
   return true;
}

void Remote::addRequiredFiles(QStringList& additional, const QString& fpgaBuildPath, const QString& prefix)
{
   additional << fpgaBuildPath + "/" + prefix + "_config.vhd"
              << fpgaBuildPath + "/" + prefix + ".prj"
              << fpgaBuildPath + "/" + prefix + ".lso"
              << fpgaBuildPath + "/" + prefix + ".xst"
              << fpgaBuildPath + "/" + prefix + "_sim.fdo"
              << fpgaBuildPath + "/" + prefix + "_ise.tcl";
   
}

bool Remote::build(Tree& tree, App* app, const QString& cmd, QIODevice* out)
{
   QByteArray build_log;
   QBuffer iobuf;
   if (!out) {
      iobuf.setBuffer(&build_log);
      if (!iobuf.open(QIODevice::ReadWrite)) {
         return false;
      }
      out = &iobuf;
   }
   
   // Build directory
   QString rtree_path = d->host_rtree;
   QDir rtree(rtree_path);
   
   // Parse file list
   app->parse();
   
   // Assemble a list of needed files
   QString path;
   QDir appDir(app->path());
   QString prefix(app->outputPrefix());
   QSourceList list(app->files());
   App *shapp = app->sharedApp();
   
   // Append additional files
   QStringList additional;
   
   if (app->isBinShared()) {
      QDir shappDir(shapp->path());
      addRequiredFiles(additional, shappDir.absoluteFilePath("build/fpga/"), prefix);
   } else {
      addRequiredFiles(additional, appDir.absoluteFilePath("build/fpga/"), prefix);
   }
   QDateTime maxDate = QFileInfo(app->binFilePath()).lastModified();
   QDateTime date;
   date = QFileInfo(app->hexFile1Path()).lastModified(); if (date < maxDate) maxDate = date;
   date = QFileInfo(app->hexFile2Path()).lastModified(); if (date < maxDate) maxDate = date;
   
   //list of packages defined in application dir
   foreach(const QString& fn, app->packages()) {
       if (fn.contains(appDir.absolutePath())) {
          out->write(QString("Additional-package %1\n").arg(fn).toLatin1().data());
          additional.append(fn);
       }
   }

   //header files
   foreach(SourceListItem item, list) {
      if (item.headerFiles == 0) continue;
      
      foreach(const QString& fn, *(item.headerFiles)) {
          additional.append(fn);
      }
   }

   // Add extra content
   QDir extraDir(appDir.absoluteFilePath("mcu"));
   QStringList files(extraDir.entryList(QDir::Files|QDir::NoDotAndDotDot));
   foreach(const QString& fn, files) {
      if (fn.endsWith("~") || fn.endsWith(".bak")) continue;
      additional.append(extraDir.absoluteFilePath(fn));
   }

   extraDir = QDir(appDir.absoluteFilePath("fpga"));
   files = extraDir.entryList(QDir::Files|QDir::NoDotAndDotDot);
   foreach(const QString& fn, files) {
      if (fn.endsWith("~") || fn.endsWith(".bak")) continue;
      additional.append(extraDir.absoluteFilePath(fn));
   }

   //fpga ngdbuild files
   foreach(const QString& fn, app->fpgaBinaries()) {
      additional.append(appDir.absoluteFilePath(fn));
   }

   // Append additional content
   foreach(const QString& file, additional) {
      path = appDir.absoluteFilePath(file);
      if (!list.contains(path)) {
         list.append(SourceListItem(path));
      }
   }
   
   QTemporaryFile mfile, shmfile;
   mfile.open();
   app->createMakefile(QString(), QString(), &mfile);
   
   if (app->isBinShared()) {
      QDir shappDir(shapp->path());
      shmfile.open();
      shapp->createMakefile(QString(), QString(), &shmfile);
   }

   // Upload needed files
   int up_count = list.size();
   int up_id = 0;
   foreach(SourceListItem item, list) {
      path = tree.root().relativeFilePath(item.filePath);
      
      if (QFile(item.filePath).exists()) {
         //  ==========================================================================================                
         //            if (QFileInfo(item.filePath).lastModified() < maxDate) continue; 
         //  ==========================================================================================                
         
         ++up_id;
         QString upmsg(QString("(%1%) Uploading: '%2'\n")
                       .arg(up_id*100/up_count).arg(path));
         int retries = 10;
         out->write(upmsg.toLatin1().data(), upmsg.size());
         while (!upload(tree, path)) {
            if (--retries == 0) {
               return false;
            }
         }
      }
   }
   
   // Upload Makefile (mtime > project mtime)
   upload(tree, tree.root().relativeFilePath(appDir.absoluteFilePath("Makefile")), mfile.fileName());
   if (app->isBinShared()) {
      QDir shappDir(shapp->path());
      upload(tree, tree.root().relativeFilePath(shappDir.absoluteFilePath("Makefile")), shmfile.fileName());
   }
   
   if (app->isBinShared()) {
      path = appDir.absoluteFilePath(shapp->path());
      QString projectPath(tree.root().relativeFilePath(path));
      QString rcmd("bserver-make ");
      rcmd.append(rtree.absoluteFilePath(projectPath));
      if (!cmd.isEmpty()) {
         rcmd.append(" ");
         rcmd.append(cmd);
      }
      out->write("Compiling... '");
      out->write(rcmd.toLatin1().data());
      out->write("'\n");
      
      if (exec(rcmd, out) < 0) {
         iobuf.close();
         return false;
      }
      
      // Download output
      if (out == &iobuf) {
         printf("%s\n", QString(build_log).toLatin1().data());
      }
   }
   
   path = appDir.absoluteFilePath("project.xml");
   QString projectPath(tree.root().relativeFilePath(path));
   QString rcmd("bserver-make ");
   rcmd.append(rtree.absoluteFilePath(projectPath));
   if (!cmd.isEmpty()) {
      rcmd.append(" ");
      rcmd.append(cmd);
   }
   
   out->write("Compiling... '");
   out->write(rcmd.toLatin1().data());
   out->write("'\n");
   
   if (exec(rcmd, out) < 0) {
      iobuf.close();
      return false;
   }
   
   // Download output
   if (out == &iobuf) {
      printf("%s\n", QString(build_log).toLatin1().data());
   }
   
   // Download built objects
   path = appDir.absoluteFilePath("build/fpga/");
   if (app->isBinShared())  {
      QDir shappDir(shapp->path());
      path = shappDir.absoluteFilePath("build/fpga/");
   }
   
   if (out) {
      out->write("Downloading files...\n");
   }
   download(tree, tree.root().relativeFilePath(path + "/" + prefix + ".srp"));
   download(tree, tree.root().relativeFilePath(path + "/" + prefix + ".par.par"));
   download(tree, tree.root().relativeFilePath(path + "/" + prefix + ".map.map"));
   download(tree, tree.root().relativeFilePath(path + "/" + prefix + ".timesim.vhd"));
   
   download(tree, tree.root().relativeFilePath(app->binFilePath(false)));
   download(tree, tree.root().relativeFilePath(app->hexFile1Path(false)));
   download(tree, tree.root().relativeFilePath(app->hexFile2Path(false)));
   
   // Cleanup
   rcmd.clear();
   rcmd.append("rm -r ");
   rcmd.append(rtree_path);
   if (!cmd.isEmpty()) {
      rcmd.append(" ");
   }
   
   out->write("Cleaning up... '");
   out->write(rtree_path.toLatin1().data());
   out->write("'\n");
   if (exec(rcmd, out) < 0) {
      iobuf.close();
      return false;
   }
   
   return true;
}

bool Remote::upload(Tree& tree, const QString& relpath, const QString& src)
{
   // Find recursive directory sequence
   QStack<QString> dirStack;
   QDir cur(tree.root().absoluteFilePath(relpath));
   cur.cdUp();
   while (cur.absolutePath() != tree.root().absolutePath()) {
      dirStack.append(cur.dirName());
      cur.cdUp();
   }
   
   /* Lock and carry operation. */
   d->operationMutex.lock();
   
   // Create directory structure
   QString rpath(d->host_rtree);
   rpath.append("/");
   while (!dirStack.empty()) {
      /* Ignore errors if the directory already exists. */
      rpath.append(dirStack.top());
      const char* dirname = rpath.toLatin1().data();
      sftp_mkdir(d->sftp, dirname, S_IRWXU);
      rpath.append("/");
      dirStack.pop();
   }
   
   // Upload file
   rpath = d->host_rtree;
   rpath.append("/");
   rpath.append(relpath);
   int mode = O_WRONLY | O_CREAT | O_TRUNC;
   const char* raw_rpath = rpath.toLatin1().data();
   sftp_file rfile = 0;
   rfile = sftp_open(d->sftp, raw_rpath, mode, S_IRWXU);
   if (!rfile) {
      d->operationMutex.unlock();
      return false;
   }
   
   // Read content of a local file
   QString path(src);
   if (path.isEmpty()) {
      path = tree.root().absoluteFilePath(relpath);
   }
   QFile lfile(path);
   lfile.open(QFile::ReadOnly);
   QByteArray lcontent(lfile.readAll());
   lfile.close();
   
   // Transfer file content
   int nb = sftp_write(rfile, lcontent.data(), lcontent.size());
   if (nb != lcontent.size()) {
      sftp_close(rfile);
      d->operationMutex.unlock();
      return false;
   }
   if (sftp_close(rfile) != SSH_OK) {
      d->operationMutex.unlock();
      return false;
   }
   
   /* Unlock. */
   printf("Uploaded: '%s'\n", relpath.toLatin1().data());
   d->operationMutex.unlock();
   
   return true;
}

bool Remote::download(Tree& tree, const QString& relpath, const QString& dst)
{
   // Open remote file
   QString rpath(d->host_rtree);
   rpath.append("/");
   rpath.append(relpath);
   int mode = O_RDONLY;
   const char* raw_rpath = rpath.toLatin1().data();
   sftp_file rfile = 0;
   
   /* Lock and carry operation. */
   d->operationMutex.lock();
   rfile = sftp_open(d->sftp, raw_rpath, mode, 0);
   if ((!rfile) || (relpath.isEmpty())) {
      printf("Download: '%s' (file not exists)\n", relpath.toLatin1().data());
      d->operationMutex.unlock();
      return false;
   }
   
   // Create local file
   char buf[8092];
   QString path(dst);
   if (path.isEmpty()) {
      path = tree.root().absoluteFilePath(relpath);
   }
   QFile lfile(path);
   lfile.open(QFile::WriteOnly);
   
   // Read remote file
   ssize_t nbytes = sftp_read(rfile, buf, sizeof(buf));
   while (nbytes > 0)
   {
      if (lfile.write(buf, nbytes) != nbytes)
      {
         sftp_close(rfile);
         lfile.remove();
         d->operationMutex.unlock();
         return false;
      }
      
      nbytes = sftp_read(rfile, buf, sizeof(buf));
   }
   
   lfile.close();
   
   // Failed read
   if (nbytes < 0)
   {
      sftp_close(rfile);
      d->operationMutex.unlock();
      return false;
   }
   
   // Close remote file
   if (sftp_close(rfile) != SSH_OK)
   {
      d->operationMutex.unlock();
      return false;
   }
   
   /* Unlock. */
   printf("Downloaded: '%s'\n", relpath.toLatin1().data());
   d->operationMutex.unlock();
   return true;
}

Channel Remote::openForward(const QString& remoteHost, int remotePort, int localPort)
{
   /* Setup channel forwarding. */
   d->operationMutex.lock();
   ssh_channel fwd = channel_new(d->session);
   int rc = channel_open_forward(fwd,
                                 remoteHost.toLatin1().data(), remotePort,
                                 "localhost", localPort);
   if (rc != SSH_OK)
   {
      channel_free(fwd);
      d->operationMutex.unlock();
      return 0;
   }
   
   /* Store forwarding channel. */
   d->channels.append(fwd);
   d->operationMutex.unlock();
   return (Channel)fwd;
}

int Remote::poll(Channel ch, int msecs)
{
   ssh_channel rch = (ssh_channel)ch;
   d->operationMutex.lock();
   int ret = channel_poll(rch, msecs);
   d->operationMutex.unlock();
   return ret;
}

int Remote::read(Channel ch, char *dst, size_t maxlen)
{
   ssh_channel rch = (ssh_channel)ch;
   d->operationMutex.lock();
   int ret = channel_read(rch, dst, maxlen, 0);
   d->operationMutex.unlock();
   return ret;
}

int Remote::write(Channel ch, const char* src, size_t len)
{
   ssh_channel rch = (ssh_channel)ch;
   d->operationMutex.lock();
   int ret = channel_write(rch, src, len);
   d->operationMutex.unlock();
   return ret;
}

bool Remote::close(Channel ch)
{
   d->operationMutex.lock();
   if (d->channels.contains((ssh_channel)ch)) {
      d->channels.removeAll((ssh_channel)ch);
      ssh_channel rch = (ssh_channel)ch;
      channel_close(rch);
      channel_free(rch);
      d->operationMutex.unlock();
      return true;
   }
   
   d->operationMutex.unlock();
   return false;
}

bool Remote::handShake()
{
   // Check connection
   if (d->connected) {
      return true;
   }
   
   d->operationMutex.lock();
   int rc = ssh_connect(d->session);
   d->operationMutex.unlock();
   if (rc != SSH_OK) {
      qDebug("FCMake Error: ssh_connect failed (error: %s)", ssh_get_error(d->session));
      return false;
   }
   
   // Verify server
   if (!verifyHost()) {
      qDebug("FCMake Error: Failed to verify remote host.");
      disconnect();
      return false;
   }
   
   return true;
}

bool Remote::setup()
{
   d->operationMutex.lock();
   if (!d->sftp) {
      if (!(d->sftp = sftp_new(d->session))) {
         qDebug("FCMake Error: SFTP new failed (error: %s)", ssh_get_error(d->session));
         d->operationMutex.unlock();
         return false;
      }
      
      if (sftp_init(d->sftp) != SSH_OK) {
         qDebug("FCMake Error: SFTP init failed (error: %s)", ssh_get_error(d->session));
         d->operationMutex.unlock();
         return false;
      }
   }
   
   d->operationMutex.unlock();
   return true;
}

bool Remote::verifyHost()
{
   unsigned char *hash = NULL;
   char *hexa = 0;
   
   d->operationMutex.lock();
   int state = ssh_is_server_known(d->session);
   
   int hlen = ssh_get_pubkey_hash(d->session, &hash);
   d->operationMutex.unlock();
   if (hlen < 0) {
      qDebug("FCMake Error: Server could not get public-key hash.");
      return false;
   }
   
   
   switch (state)
   {
   case SSH_SERVER_KNOWN_OK:
      break; /* ok */
   case SSH_SERVER_KNOWN_CHANGED:
      qDebug("FCMake Error: SSH_SERVER_KNOWN_CHANGED");
      free(hash);
      return false;
   case SSH_SERVER_FOUND_OTHER:
      qDebug("FCMake Error: SSH_SERVER_FOUND_OTHER");
      return false;
   case SSH_SERVER_FILE_NOT_FOUND:
   case SSH_SERVER_NOT_KNOWN:
      /* Automatically accept. */
      /*! \todo Automatical accept should be optional
         *        for security reasons. */
      d->operationMutex.lock();
      hexa = ssh_get_hexa(hash, hlen);
      if (ssh_write_knownhost(d->session) < 0) {
         free(hash);
         d->operationMutex.unlock();
         return false;
      }
      d->operationMutex.unlock();
      break;
   case SSH_SERVER_ERROR:
      free(hash);
      return false;
   }
   
   free(hash);
   return true;
}

};

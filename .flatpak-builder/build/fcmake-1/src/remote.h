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

#ifndef _FCMAKE_REMOTE_H_
#define _FCMAKE_REMOTE_H_

#include <QString>
#include <QIODevice>
#include "key.h"
#include "app.h"
#include "tree.h"
#include "fcmake_export.h"

namespace FCMake
{

typedef void* Channel;

class FCMAKE_EXPORT Remote
{
    public:

    static const int DefaultPort = 22;

    Remote(const QString& host, int port = DefaultPort);
    ~Remote();

    bool connect(Key* key);
    bool connect(const QString& login, const QString& passwd);
    bool disconnect();

    int exec(const QString& cmd, QIODevice* out);

    bool initKeys(Key* ident);
    bool prepareBuild();
    bool build(Tree& tree, App* app, const QString& cmd = QString(), QIODevice* out = 0);
    bool upload(Tree& tree, const QString& relpath, const QString& src = QString());
    bool download(Tree& tree, const QString& relpath, const QString& dst = QString());

	Channel openForward(const QString& remoteHost, int remotePort, int localPort);
	int poll(Channel ch, int msecs);
	int read(Channel ch, char *dest, size_t maxlen);
	int write(Channel ch, const char* src, size_t len);
	bool close(Channel ch);

protected:
    bool handShake();
    bool setup();
    bool verifyHost();
    void addRequiredFiles(QStringList& additional, const QString& fpgaBuildPath, const QString& prefix);

private:
    class Private;
    Private* d;
};

};

#endif // _FCMAKE_REMOTE_H_

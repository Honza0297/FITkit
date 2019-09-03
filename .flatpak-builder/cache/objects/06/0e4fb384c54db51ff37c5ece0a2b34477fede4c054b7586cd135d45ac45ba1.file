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
#include <QCryptographicHash>
#include <QSettings>
#include <libssh/libssh.h>
#include "key.h"
#include "remote.h"

namespace FCMake
{

Key::Key(const QString& identity)
{
    mIdentity = identity;
	 mKey = exists() ? qUncompress(QSettings().value("Keys/" + identity).toByteArray()) : QByteArray();
}

bool Key::exists() const
{
    return QSettings().contains("Keys/" + mIdentity);
}

QString Key::login() const
{
    return mIdentity.left(mIdentity.indexOf("@"));
}

QString Key::host() const
{
    int begin = mIdentity.indexOf("@");
    int end = mIdentity.indexOf(":");
    int len = -1;
    if (begin >= 0) {
        len = end - begin;
    }

    return mIdentity.mid(begin + 1, len - 1);
}

int Key::port() const
{
    int begin = mIdentity.indexOf(":");
    if (begin < 0) {
        return Remote::DefaultPort;
    }

    return mIdentity.mid(begin + 1).toInt();
}

const QString& Key::identity() const
{
    return mIdentity;
}

void Key::setIdentity(QString identity)
{
	mIdentity = identity;
}

QByteArray Key::key() const
{
    return mKey;
}

QByteArray Key::pubkey() const
{
    // Load key to temporary file
    QTemporaryFile tmpkey;
    if (!tmpkey.open()) {
        return QByteArray();
    }
    tmpkey.write(key());
    tmpkey.close();

    // Load key from file
    ssh_private_key priv = 0;
    ssh_session session = ssh_new();
    priv = privatekey_from_file(session, tmpkey.fileName().toLatin1().data(), 0, 0);
    ssh_free(session);
    if (priv == 0) {
        return QByteArray();
    }

    ssh_public_key pub = publickey_from_privatekey(priv);
    ssh_string str = publickey_to_string(pub);

    QByteArray strkey;
    size_t len = string_len(str);
    char* cstr = string_to_char(str);
    strkey.resize(len);
    memcpy(strkey.data(), cstr, len);

    string_free(str);
    privatekey_free(priv);
    publickey_free(pub);

    return strkey;
}

QByteArray Key::pubkeyHash() const
{
    QCryptographicHash md5(QCryptographicHash::Md5);
    md5.addData(pubkey());
    return md5.result().toHex();
}

void Key::setKey(QByteArray value)
{
    mKey = value;
}

QString Key::password() const
{
    return mPassword;
}

void Key::setPassword(QString pass)
{
    mPassword = pass;
}

void Key::store(const QByteArray& key)
{
    QString key_id("Keys/");
    key_id.append(mIdentity);


    QSettings set;
	if (set.contains(key_id)) {
		set.remove(key_id);
	}

    set.setValue(key_id, qCompress(key));
    set.sync();
}

void Key::remove()
{
    QString key_id("Keys/");
    key_id.append(mIdentity);

    QSettings set;
    set.remove(key_id);
}

};

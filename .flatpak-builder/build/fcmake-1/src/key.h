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

#ifndef _FCMAKE_KEY_H
#define _FCMAKE_KEY_H

#include <QByteArray>
#include <QString>
#include "fcmake_export.h"

namespace FCMake
{

class FCMAKE_EXPORT Key
{

public:
    Key(const QString& identity);
    Key(const Key& other)
        : mIdentity(other.mIdentity), mPassword(other.mPassword), mKey(other.mKey)
    {}

    bool exists() const;
    QString login() const;
    QString host() const;
    int port() const;
    const QString& identity() const;
	void setIdentity(QString identity);
    QByteArray key() const;
    QByteArray pubkey() const;
    QByteArray pubkeyHash() const;
    void setKey(QByteArray value);
    QString password() const;
    void setPassword(QString pass);
    void store(const QByteArray& key);
    void remove();

private:
    QString mIdentity;
    QString mPassword;
    QByteArray mKey;
};

};

#endif // _FCMAKE_KEY_H

/***************************************************************************
 *   Copyright (C) 2011 Brno University of Technology,                     *
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

#include <QStringList>
#include <QSettings>
#include "keychain.h"

namespace FCMake
{

KeyChain::KeyChain()
{
}

int KeyChain::count()
{
    QSettings set;
    set.beginGroup("Keys");
    int ret = set.childKeys().count();
    set.endGroup();
    return ret;
}

QList<Key> KeyChain::keys()
{
    QList<Key> list;
    QSettings set;
    set.beginGroup("Keys");
    QStringList ids = set.childKeys();
    set.endGroup();

    foreach(const QString& id, ids) {
        list.append(Key(id));
    }

    return list;
}

void KeyChain::store(const Key& key)
{
    QSettings set;
    set.beginGroup("Keys");
    set.setValue(key.identity(), key.key());
    set.endGroup();
}

void KeyChain::remove(const Key& key)
{
    QSettings().remove("Keys/" + key.identity());
}

};

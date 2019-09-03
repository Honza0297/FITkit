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

#ifndef _FCMAKE_KEYCHAIN_H
#define _FCMAKE_KEYCHAIN_H

#include <QList>
#include "key.h"
#include "fcmake_export.h"

namespace FCMake
{

class FCMAKE_EXPORT KeyChain
{
    public:
        KeyChain();

        int count();
        QList<Key> keys();
        bool exists(const QString& id);
        void store(const Key& key);
        void remove(const Key& key);
};

};

#endif // _FCMAKE_KEYCHAIN_H

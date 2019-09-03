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
 *                                                                         *
 *  \file    ftdibackend.h                                                 *
 *  \version 1.0                                                           *
 *  \author  Marek Vavrusa <xvavru00@stud.fit.vutbr.cz>                    *
 *  \brief   Implementation of an FTDI manager backend.                    *
 *                                                                         *
 ***************************************************************************/

#ifndef FTDIBACKEND_H
#define FTDIBACKEND_H

#include "devicemgr.h"
#include "libkitclient_export.h"

class KITCLIENT_EXPORT FTDIBackend : public DeviceBackend
{
    public:

        FTDIBackend(DeviceMgr* mgr = 0);
        ~FTDIBackend();

        /* Device manager device construction APIs. */
        Device* create(DeviceData* data);
        bool initialize(Device* device);
        bool isReady(DeviceData* dev);

        /* Device manager list handling APIs. */
        bool prepare();
        void update(DeviceData::List& incoming);

    private:
        class Private;
        Private *d;
};

#endif

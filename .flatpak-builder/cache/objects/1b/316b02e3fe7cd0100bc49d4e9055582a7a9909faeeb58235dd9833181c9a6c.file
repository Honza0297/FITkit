/***************************************************************************
 *   Copyright (C) 2010 Brno University of Technology,                     *
 *   Faculty of Information Technology                                     *
 *   Author(s): Marek Vavrusa    <xvavru00 AT stud.fit.vutbr.cz>           *
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
 *  \file    qtapi_device.h                                                *
 *  \version 1.0                                                           *
 *  \author  Marek Vavrusa <xvavru00@stud.fit.vutbr.cz>                    *
 *  \brief   Qt API for Device with signals, slots and scriptable API.     *
 *                                                                         *
 ***************************************************************************/

#ifndef QTAPI_DEVICE_H
#define QTAPI_DEVICE_H

#include <QObject>
#include "device.h"
#include "libkitclient_export.h"

/*! \brief API namespace.
 */
namespace QtAPI
{

class IOChannel;

/*! \brief Device Qt wrapper.
 *
 *  Wrapper adds Qt properties and scriptable accessors.
 */
class KITCLIENT_EXPORT Device : public QObject
{
   Q_OBJECT

public:

   /*! \brief FTDI channel enumerator.
    */
   enum ChannelId { ChannelA   = ::Device::ChannelA,  //!< Use channel A
                    ChannelB   = ::Device::ChannelB   //!< Use channel B
                  };

   /*! \brief RS232 bits control.
    *   Explanation of RS232 framing at
    *   http://www.wcscnet.com/Tutorials/SerialComm/Page1.htm
    */
   enum Bits { Bits7 = ::Device::Bits7,       //!< Character has 7 bits
               Bits8 = ::Device::Bits8        //!< Character has 8 bits
             };

   /*! \brief RS232 stop-bits control.
    */
   enum StopBits { StopBits1  = ::Device::StopBits1,   //!< 1   Stop bit
                   StopBits15 = ::Device::StopBits15,  //!< 1.5 Stop bit
                   StopBits2  = ::Device::StopBits2    //!< 2   Stop bits
                 };

   /*! \brief RS232 parity control.
    */
   enum Parity { ParityNone  = ::Device::ParityNone,  //!< None parity bit
                 ParityOdd   = ::Device::ParityOdd,   //!< Odd parity check mode
                 ParityEven  = ::Device::ParityEven,  //!< Even parity check mode
                 ParityMark  = ::Device::ParityMark,  //!< Logical 0 - no data sent
                 ParitySpace = ::Device::ParitySpace  //!< Logical 1 - no data sent
               };

   /*! \brief Data flow direction.
    */
   enum Stream { Input  = ::Device::Input, //!< Input direction
                 Output = ::Device::Output //!< Output direction
               };

   /*! \brief Device state.
    */
   enum State {  Acquired    = ::Device::Acquired,    //!< Device is acquired
                 Checked     = ::Device::Checked,     //!< Device is checked as valid
                 DeleteLater = ::Device::DeleteLater, //!< Device is scheduled for deletion
                 New         = ::Device::New,         //!< Device is found
                 Virtual     = ::Device::Virtual,     //!< Device is virtual
                 Shared      = ::Device::Shared       //!< Device is shared
              };

   /*! \brief Device identifier property. */
   Q_PROPERTY(int id READ id)

   /*! \brief Device vendor identifier property. */
   Q_PROPERTY(int vid READ vid)

   /*! \brief Device product identifier property. */
   Q_PROPERTY(int pid READ pid)

   /*! \brief Device flags property. */
   Q_PROPERTY(int flags READ flags WRITE setFlags)

   /*! \brief Device constructor.
    *
    *  Create wrapper from Device instance.
    */
   Device(::Device* data);

   /*! \brief Device destructor.
    *
    *  \warning This does not free underlying device instance.
    */
    ~Device();

   /*! \brief Device identifier.
    *  \return Device identifier.
    */
   int id();

   /*! \brief Vendor identifier.
    *  \return Vendor identifier.
    */
   int vid();

   /*! \brief Product identifier.
    *  \return Product identifier.
    */
   int pid();

   /*! \brief Device flags.
    *  \return Device flags.
    */
   int flags();

   /*! \brief Set device flags.
    *  \return Device flags.
    */
   int setFlags(int flags);

   /*! \brief Add device flag.
    *  \return Device flags.
    */
   int addFlag(int flag);

   /*! \brief Remove device flag.
    *  \return Device flags.
    */
   int removeFlag(int flag);

   /*! \brief Device backend.
    *  \return Instance of underlying device.
    */
   ::Device* backend();

   /*! \brief Return first channel.
    *  \return First or only channel.
    */
   Q_INVOKABLE IOChannel* channelA();

   /*! \brief Return second channel.
    *  \return Second or only channel.
    */
   Q_INVOKABLE IOChannel* channelB();

   /*! \brief Return specified channel.
    *  \param chan Channel string identifier ("a", "b")
    *  \return Specified channel or 0.
    */
   Q_INVOKABLE IOChannel* channel(const QString& chan);

   /*! \brief Device channel accessor.
     * \param chan Channel identifier ( 'a', 'b' )
     * \return Reference to requested channel.
     */
   Q_INVOKABLE IOChannel* operator[](const char chan) {
      return channel(QString(chan));
   }

private:

   class Private;
   Private *d;
};

};

#endif

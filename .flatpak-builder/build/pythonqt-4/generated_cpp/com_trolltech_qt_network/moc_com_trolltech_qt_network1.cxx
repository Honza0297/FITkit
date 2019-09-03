/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_network1.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "com_trolltech_qt_network1.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_network1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QUdpSocket[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       2,  114, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
      93,   89,   27,   27, 0x0a,
     159,  129,  124,   27, 0x0a,
     240,  205,  124,   27, 0x0a,
     329,  307,  124,   27, 0x0a,
     379,  362,  124,   27, 0x2a,
     424,  397,  124,   27, 0x0a,
     478,  362,  124,   27, 0x0a,
     541,  511,  124,   27, 0x0a,
     622,  586,  124,   27, 0x0a,
     685,  511,  124,   27, 0x0a,
     731,  586,  124,   27, 0x0a,
     813,  362,  795,   27, 0x0a,
     852,  362,  845,   27, 0x0a,
     924,  885,  845,   27, 0x0a,
    1027,  993,  845,   27, 0x2a,
    1109, 1080,  845,   27, 0x2a,
    1171, 1148,   27,   27, 0x0a,
    1260, 1224,  845,   27, 0x0a,

 // enums: name, flags, count, data
    1326, 0x0,    4,  122,
    1335, 0x1,    4,  130,

 // enum data: key, value
    1344, uint(PythonQtWrapper_QUdpSocket::DefaultForPlatform),
    1363, uint(PythonQtWrapper_QUdpSocket::ShareAddress),
    1376, uint(PythonQtWrapper_QUdpSocket::DontShareAddress),
    1393, uint(PythonQtWrapper_QUdpSocket::ReuseAddressHint),
    1344, uint(PythonQtWrapper_QUdpSocket::DefaultForPlatform),
    1363, uint(PythonQtWrapper_QUdpSocket::ShareAddress),
    1376, uint(PythonQtWrapper_QUdpSocket::DontShareAddress),
    1393, uint(PythonQtWrapper_QUdpSocket::ReuseAddressHint),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QUdpSocket[] = {
    "PythonQtWrapper_QUdpSocket\0\0QUdpSocket*\0"
    "parent\0new_QUdpSocket(QObject*)\0"
    "new_QUdpSocket()\0obj\0"
    "delete_QUdpSocket(QUdpSocket*)\0bool\0"
    "theWrappedObject,address,port\0"
    "bind(QUdpSocket*,QHostAddress,unsigned short)\0"
    "theWrappedObject,address,port,mode\0"
    "bind(QUdpSocket*,QHostAddress,unsigned short,QUdpSocket::BindMode)\0"
    "theWrappedObject,port\0"
    "bind(QUdpSocket*,unsigned short)\0"
    "theWrappedObject\0bind(QUdpSocket*)\0"
    "theWrappedObject,port,mode\0"
    "bind(QUdpSocket*,unsigned short,QUdpSocket::BindMode)\0"
    "hasPendingDatagrams(QUdpSocket*)\0"
    "theWrappedObject,groupAddress\0"
    "joinMulticastGroup(QUdpSocket*,QHostAddress)\0"
    "theWrappedObject,groupAddress,iface\0"
    "joinMulticastGroup(QUdpSocket*,QHostAddress,QNetworkInterface)\0"
    "leaveMulticastGroup(QUdpSocket*,QHostAddress)\0"
    "leaveMulticastGroup(QUdpSocket*,QHostAddress,QNetworkInterface)\0"
    "QNetworkInterface\0multicastInterface(QUdpSocket*)\0"
    "qint64\0pendingDatagramSize(QUdpSocket*)\0"
    "theWrappedObject,data,maxlen,host,port\0"
    "readDatagram(QUdpSocket*,char*,qint64,QHostAddress*,unsigned short*)\0"
    "theWrappedObject,data,maxlen,host\0"
    "readDatagram(QUdpSocket*,char*,qint64,QHostAddress*)\0"
    "theWrappedObject,data,maxlen\0"
    "readDatagram(QUdpSocket*,char*,qint64)\0"
    "theWrappedObject,iface\0"
    "setMulticastInterface(QUdpSocket*,QNetworkInterface)\0"
    "theWrappedObject,datagram,host,port\0"
    "writeDatagram(QUdpSocket*,QByteArray,QHostAddress,unsigned short)\0"
    "BindFlag\0BindMode\0DefaultForPlatform\0"
    "ShareAddress\0DontShareAddress\0"
    "ReuseAddressHint\0"
};

void PythonQtWrapper_QUdpSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QUdpSocket *_t = static_cast<PythonQtWrapper_QUdpSocket *>(_o);
        switch (_id) {
        case 0: { QUdpSocket* _r = _t->new_QUdpSocket((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUdpSocket**>(_a[0]) = _r; }  break;
        case 1: { QUdpSocket* _r = _t->new_QUdpSocket();
            if (_a[0]) *reinterpret_cast< QUdpSocket**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QUdpSocket((*reinterpret_cast< QUdpSocket*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->bind((*reinterpret_cast< QUdpSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->bind((*reinterpret_cast< QUdpSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< QUdpSocket::BindMode(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->bind((*reinterpret_cast< QUdpSocket*(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->bind((*reinterpret_cast< QUdpSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->bind((*reinterpret_cast< QUdpSocket*(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2])),(*reinterpret_cast< QUdpSocket::BindMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->hasPendingDatagrams((*reinterpret_cast< QUdpSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->joinMulticastGroup((*reinterpret_cast< QUdpSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->joinMulticastGroup((*reinterpret_cast< QUdpSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])),(*reinterpret_cast< const QNetworkInterface(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->leaveMulticastGroup((*reinterpret_cast< QUdpSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->leaveMulticastGroup((*reinterpret_cast< QUdpSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])),(*reinterpret_cast< const QNetworkInterface(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QNetworkInterface _r = _t->multicastInterface((*reinterpret_cast< QUdpSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkInterface*>(_a[0]) = _r; }  break;
        case 14: { qint64 _r = _t->pendingDatagramSize((*reinterpret_cast< QUdpSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 15: { qint64 _r = _t->readDatagram((*reinterpret_cast< QUdpSocket*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< QHostAddress*(*)>(_a[4])),(*reinterpret_cast< unsigned short*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 16: { qint64 _r = _t->readDatagram((*reinterpret_cast< QUdpSocket*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< QHostAddress*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 17: { qint64 _r = _t->readDatagram((*reinterpret_cast< QUdpSocket*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 18: _t->setMulticastInterface((*reinterpret_cast< QUdpSocket*(*)>(_a[1])),(*reinterpret_cast< const QNetworkInterface(*)>(_a[2]))); break;
        case 19: { qint64 _r = _t->writeDatagram((*reinterpret_cast< QUdpSocket*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QHostAddress(*)>(_a[3])),(*reinterpret_cast< unsigned short(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QUdpSocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QUdpSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QUdpSocket,
      qt_meta_data_PythonQtWrapper_QUdpSocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QUdpSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QUdpSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QUdpSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QUdpSocket))
        return static_cast<void*>(const_cast< PythonQtWrapper_QUdpSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QUdpSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QUrlInfo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       1,  194, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   25,   26,   25, 0x0a,
     165,   51,   26,   25, 0x0a,
     377,  264,   26,   25, 0x0a,
     476,  473,   26,   25, 0x0a,
     503,  499,   25,   25, 0x0a,
     548,  535,  530,   25, 0x0a,
     593,  535,  530,   25, 0x0a,
     669,  652,  644,   25, 0x0a,
     686,  652,  530,   25, 0x0a,
     703,  652,  530,   25, 0x0a,
     727,  652,  530,   25, 0x0a,
     745,  652,  530,   25, 0x0a,
     767,  652,  530,   25, 0x0a,
     788,  652,  530,   25, 0x0a,
     807,  652,  530,   25, 0x0a,
     839,  652,  829,   25, 0x0a,
     863,  652,  829,   25, 0x0a,
     883,  535,  530,   25, 0x0a,
     931,  652,  644,   25, 0x0a,
     966,  947,  530,   25, 0x0a,
     993,  947,  530,   25, 0x0a,
    1020,  652,  644,   25, 0x0a,
    1041,  652, 1037,   25, 0x0a,
    1083, 1064,   25,   25, 0x0a,
    1106, 1064,   25,   25, 0x0a,
    1149, 1130,   25,   25, 0x0a,
    1197, 1177,   25,   25, 0x0a,
    1234, 1177,   25,   25, 0x0a,
    1289, 1267,   25,   25, 0x0a,
    1316, 1130,   25,   25, 0x0a,
    1363, 1344,   25,   25, 0x0a,
    1393, 1064,   25,   25, 0x0a,
    1443, 1421,   25,   25, 0x0a,
    1469, 1064,   25,   25, 0x0a,
    1496, 1064,   25,   25, 0x0a,
    1531,  652, 1524,   25, 0x0a,

 // enums: name, flags, count, data
    1547, 0x0,    9,  198,

 // enum data: key, value
    1562, uint(PythonQtWrapper_QUrlInfo::ReadOwner),
    1572, uint(PythonQtWrapper_QUrlInfo::WriteOwner),
    1583, uint(PythonQtWrapper_QUrlInfo::ExeOwner),
    1592, uint(PythonQtWrapper_QUrlInfo::ReadGroup),
    1602, uint(PythonQtWrapper_QUrlInfo::WriteGroup),
    1613, uint(PythonQtWrapper_QUrlInfo::ExeGroup),
    1622, uint(PythonQtWrapper_QUrlInfo::ReadOther),
    1632, uint(PythonQtWrapper_QUrlInfo::WriteOther),
    1643, uint(PythonQtWrapper_QUrlInfo::ExeOther),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QUrlInfo[] = {
    "PythonQtWrapper_QUrlInfo\0\0QUrlInfo*\0"
    "new_QUrlInfo()\0"
    "name,permissions,owner,group,size,lastModified,lastRead,isDir,isFile,i"
    "sSymLink,isWritable,isReadable,isExecutable\0"
    "new_QUrlInfo(QString,int,QString,QString,qint64,QDateTime,QDateTime,bo"
    "ol,bool,bool,bool,bool,bool)\0"
    "url,permissions,owner,group,size,lastModified,lastRead,isDir,isFile,is"
    "SymLink,isWritable,isReadable,isExecutable\0"
    "new_QUrlInfo(QUrl,int,QString,QString,qint64,QDateTime,QDateTime,bool,"
    "bool,bool,bool,bool,bool)\0"
    "ui\0new_QUrlInfo(QUrlInfo)\0obj\0"
    "delete_QUrlInfo(QUrlInfo*)\0bool\0"
    "i1,i2,sortBy\0static_QUrlInfo_equal(QUrlInfo,QUrlInfo,int)\0"
    "static_QUrlInfo_greaterThan(QUrlInfo,QUrlInfo,int)\0"
    "QString\0theWrappedObject\0group(QUrlInfo*)\0"
    "isDir(QUrlInfo*)\0isExecutable(QUrlInfo*)\0"
    "isFile(QUrlInfo*)\0isReadable(QUrlInfo*)\0"
    "isSymLink(QUrlInfo*)\0isValid(QUrlInfo*)\0"
    "isWritable(QUrlInfo*)\0QDateTime\0"
    "lastModified(QUrlInfo*)\0lastRead(QUrlInfo*)\0"
    "static_QUrlInfo_lessThan(QUrlInfo,QUrlInfo,int)\0"
    "name(QUrlInfo*)\0theWrappedObject,i\0"
    "__ne__(QUrlInfo*,QUrlInfo)\0"
    "__eq__(QUrlInfo*,QUrlInfo)\0owner(QUrlInfo*)\0"
    "int\0permissions(QUrlInfo*)\0"
    "theWrappedObject,b\0setDir(QUrlInfo*,bool)\0"
    "setFile(QUrlInfo*,bool)\0theWrappedObject,s\0"
    "setGroup(QUrlInfo*,QString)\0"
    "theWrappedObject,dt\0"
    "setLastModified(QUrlInfo*,QDateTime)\0"
    "setLastRead(QUrlInfo*,QDateTime)\0"
    "theWrappedObject,name\0setName(QUrlInfo*,QString)\0"
    "setOwner(QUrlInfo*,QString)\0"
    "theWrappedObject,p\0setPermissions(QUrlInfo*,int)\0"
    "setReadable(QUrlInfo*,bool)\0"
    "theWrappedObject,size\0setSize(QUrlInfo*,qint64)\0"
    "setSymLink(QUrlInfo*,bool)\0"
    "setWritable(QUrlInfo*,bool)\0qint64\0"
    "size(QUrlInfo*)\0PermissionSpec\0ReadOwner\0"
    "WriteOwner\0ExeOwner\0ReadGroup\0WriteGroup\0"
    "ExeGroup\0ReadOther\0WriteOther\0ExeOther\0"
};

void PythonQtWrapper_QUrlInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QUrlInfo *_t = static_cast<PythonQtWrapper_QUrlInfo *>(_o);
        switch (_id) {
        case 0: { QUrlInfo* _r = _t->new_QUrlInfo();
            if (_a[0]) *reinterpret_cast< QUrlInfo**>(_a[0]) = _r; }  break;
        case 1: { QUrlInfo* _r = _t->new_QUrlInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< qint64(*)>(_a[5])),(*reinterpret_cast< const QDateTime(*)>(_a[6])),(*reinterpret_cast< const QDateTime(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9])),(*reinterpret_cast< bool(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11])),(*reinterpret_cast< bool(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13])));
            if (_a[0]) *reinterpret_cast< QUrlInfo**>(_a[0]) = _r; }  break;
        case 2: { QUrlInfo* _r = _t->new_QUrlInfo((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< qint64(*)>(_a[5])),(*reinterpret_cast< const QDateTime(*)>(_a[6])),(*reinterpret_cast< const QDateTime(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9])),(*reinterpret_cast< bool(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11])),(*reinterpret_cast< bool(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13])));
            if (_a[0]) *reinterpret_cast< QUrlInfo**>(_a[0]) = _r; }  break;
        case 3: { QUrlInfo* _r = _t->new_QUrlInfo((*reinterpret_cast< const QUrlInfo(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrlInfo**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QUrlInfo((*reinterpret_cast< QUrlInfo*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->static_QUrlInfo_equal((*reinterpret_cast< const QUrlInfo(*)>(_a[1])),(*reinterpret_cast< const QUrlInfo(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->static_QUrlInfo_greaterThan((*reinterpret_cast< const QUrlInfo(*)>(_a[1])),(*reinterpret_cast< const QUrlInfo(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->group((*reinterpret_cast< QUrlInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isDir((*reinterpret_cast< QUrlInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isExecutable((*reinterpret_cast< QUrlInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isFile((*reinterpret_cast< QUrlInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isReadable((*reinterpret_cast< QUrlInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isSymLink((*reinterpret_cast< QUrlInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isValid((*reinterpret_cast< QUrlInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isWritable((*reinterpret_cast< QUrlInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QDateTime _r = _t->lastModified((*reinterpret_cast< QUrlInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 16: { QDateTime _r = _t->lastRead((*reinterpret_cast< QUrlInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->static_QUrlInfo_lessThan((*reinterpret_cast< const QUrlInfo(*)>(_a[1])),(*reinterpret_cast< const QUrlInfo(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->name((*reinterpret_cast< QUrlInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->__ne__((*reinterpret_cast< QUrlInfo*(*)>(_a[1])),(*reinterpret_cast< const QUrlInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->__eq__((*reinterpret_cast< QUrlInfo*(*)>(_a[1])),(*reinterpret_cast< const QUrlInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { QString _r = _t->owner((*reinterpret_cast< QUrlInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->permissions((*reinterpret_cast< QUrlInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: _t->setDir((*reinterpret_cast< QUrlInfo*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 24: _t->setFile((*reinterpret_cast< QUrlInfo*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 25: _t->setGroup((*reinterpret_cast< QUrlInfo*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 26: _t->setLastModified((*reinterpret_cast< QUrlInfo*(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 27: _t->setLastRead((*reinterpret_cast< QUrlInfo*(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 28: _t->setName((*reinterpret_cast< QUrlInfo*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 29: _t->setOwner((*reinterpret_cast< QUrlInfo*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: _t->setPermissions((*reinterpret_cast< QUrlInfo*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->setReadable((*reinterpret_cast< QUrlInfo*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 32: _t->setSize((*reinterpret_cast< QUrlInfo*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 33: _t->setSymLink((*reinterpret_cast< QUrlInfo*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 34: _t->setWritable((*reinterpret_cast< QUrlInfo*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: { qint64 _r = _t->size((*reinterpret_cast< QUrlInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QUrlInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QUrlInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QUrlInfo,
      qt_meta_data_PythonQtWrapper_QUrlInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QUrlInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QUrlInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QUrlInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QUrlInfo))
        return static_cast<void*>(const_cast< PythonQtWrapper_QUrlInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QUrlInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

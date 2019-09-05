/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_network0.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "com_trolltech_qt_network0.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_network0.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QAbstractNetworkCache[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      69,   62,   39,   38, 0x0a,
     105,   38,   39,   38, 0x2a,
     137,  133,   38,   38, 0x0a,
     214,  197,  190,   38, 0x0a,
     248,  197,   38,   38, 0x0a,
     310,  289,  278,   38, 0x0a,
     368,  344,   38,   38, 0x0a,
     432,  289,  410,   38, 0x0a,
     496,  470,  278,   38, 0x0a,
     555,  289,  550,   38, 0x0a,
     591,  470,   38,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QAbstractNetworkCache[] = {
    "PythonQtWrapper_QAbstractNetworkCache\0"
    "\0QAbstractNetworkCache*\0parent\0"
    "new_QAbstractNetworkCache(QObject*)\0"
    "new_QAbstractNetworkCache()\0obj\0"
    "delete_QAbstractNetworkCache(QAbstractNetworkCache*)\0"
    "qint64\0theWrappedObject\0"
    "cacheSize(QAbstractNetworkCache*)\0"
    "clear(QAbstractNetworkCache*)\0QIODevice*\0"
    "theWrappedObject,url\0"
    "data(QAbstractNetworkCache*,QUrl)\0"
    "theWrappedObject,device\0"
    "insert(QAbstractNetworkCache*,QIODevice*)\0"
    "QNetworkCacheMetaData\0"
    "metaData(QAbstractNetworkCache*,QUrl)\0"
    "theWrappedObject,metaData\0"
    "prepare(QAbstractNetworkCache*,QNetworkCacheMetaData)\0"
    "bool\0remove(QAbstractNetworkCache*,QUrl)\0"
    "updateMetaData(QAbstractNetworkCache*,QNetworkCacheMetaData)\0"
};

void PythonQtWrapper_QAbstractNetworkCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QAbstractNetworkCache *_t = static_cast<PythonQtWrapper_QAbstractNetworkCache *>(_o);
        switch (_id) {
        case 0: { QAbstractNetworkCache* _r = _t->new_QAbstractNetworkCache((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractNetworkCache**>(_a[0]) = _r; }  break;
        case 1: { QAbstractNetworkCache* _r = _t->new_QAbstractNetworkCache();
            if (_a[0]) *reinterpret_cast< QAbstractNetworkCache**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QAbstractNetworkCache((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1]))); break;
        case 3: { qint64 _r = _t->cacheSize((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 4: _t->clear((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1]))); break;
        case 5: { QIODevice* _r = _t->data((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 6: _t->insert((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 7: { QNetworkCacheMetaData _r = _t->metaData((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkCacheMetaData*>(_a[0]) = _r; }  break;
        case 8: { QIODevice* _r = _t->prepare((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCacheMetaData(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->remove((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->updateMetaData((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCacheMetaData(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QAbstractNetworkCache::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QAbstractNetworkCache::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractNetworkCache,
      qt_meta_data_PythonQtWrapper_QAbstractNetworkCache, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QAbstractNetworkCache::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QAbstractNetworkCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractNetworkCache::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractNetworkCache))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractNetworkCache*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractNetworkCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QAbstractSocket[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      68,   50,   33,   32, 0x0a,
     130,  126,   32,   32, 0x0a,
     188,  171,   32,   32, 0x0a,
     217,  171,  212,   32, 0x0a,
     248,  171,  241,   32, 0x0a,
     281,  171,  241,   32, 0x0a,
     312,  171,  212,   32, 0x0a,
     342,  171,   32,   32, 0x0a,
     401,  366,   32,   32, 0x0a,
     511,  481,   32,   32, 0x2a,
     607,  571,   32,   32, 0x0a,
     713,  682,   32,   32, 0x2a,
     768,  171,   32,   32, 0x0a,
     834,  171,  805,   32, 0x0a,
     858,  171,  212,   32, 0x0a,
     882,  171,  212,   32, 0x0a,
     913,  171,  212,   32, 0x0a,
     952,  171,  939,   32, 0x0a,
     998,  171,  983,   32, 0x0a,
    1026,  171,  939,   32, 0x0a,
    1064,  171, 1056,   32, 0x0a,
    1091,  171,  983,   32, 0x0a,
    1132,  171, 1118,   32, 0x0a,
    1156,  171,  241,   32, 0x0a,
    1218, 1189,  241,   32, 0x0a,
    1258, 1189,  241,   32, 0x0a,
    1327, 1302,   32,   32, 0x0a,
    1396, 1374,   32,   32, 0x0a,
    1442, 1302,   32,   32, 0x0a,
    1510, 1488,   32,   32, 0x0a,
    1548, 1374,   32,   32, 0x0a,
    1623, 1593,   32,   32, 0x0a,
    1686, 1664,   32,   32, 0x0a,
    1778, 1729,  212,   32, 0x0a,
    1909, 1869,  212,   32, 0x2a,
    2014, 1980,  212,   32, 0x2a,
    2085, 2056,   32,   32, 0x0a,
    2177, 2147,   32,   32, 0x0a,
    2273, 2250,   32,   32, 0x0a,
    2339,  171, 2335,   32, 0x0a,
    2407, 2383, 2374,   32, 0x0a,
    2496,  171, 2468,   32, 0x0a,
    2554,  171, 2525,   32, 0x0a,
    2601, 2578,  212,   32, 0x0a,
    2643,  171,  212,   32, 0x2a,
    2681, 2578,  212,   32, 0x0a,
    2720,  171,  212,   32, 0x2a,
    2755, 2578,  212,   32, 0x0a,
    2797,  171,  212,   32, 0x2a,
    2835, 2578,  212,   32, 0x0a,
    2874,  171,  212,   32, 0x2a,
    2935, 2909,  241,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QAbstractSocket[] = {
    "PythonQtWrapper_QAbstractSocket\0\0"
    "QAbstractSocket*\0socketType,parent\0"
    "new_QAbstractSocket(QAbstractSocket::SocketType,QObject*)\0"
    "obj\0delete_QAbstractSocket(QAbstractSocket*)\0"
    "theWrappedObject\0abort(QAbstractSocket*)\0"
    "bool\0atEnd(QAbstractSocket*)\0qint64\0"
    "bytesAvailable(QAbstractSocket*)\0"
    "bytesToWrite(QAbstractSocket*)\0"
    "canReadLine(QAbstractSocket*)\0"
    "close(QAbstractSocket*)\0"
    "theWrappedObject,address,port,mode\0"
    "connectToHost(QAbstractSocket*,QHostAddress,unsigned short,QIODevice::"
    "OpenMode)\0"
    "theWrappedObject,address,port\0"
    "connectToHost(QAbstractSocket*,QHostAddress,unsigned short)\0"
    "theWrappedObject,hostName,port,mode\0"
    "connectToHost(QAbstractSocket*,QString,unsigned short,QIODevice::OpenM"
    "ode)\0"
    "theWrappedObject,hostName,port\0"
    "connectToHost(QAbstractSocket*,QString,unsigned short)\0"
    "disconnectFromHost(QAbstractSocket*)\0"
    "QAbstractSocket::SocketError\0"
    "error(QAbstractSocket*)\0flush(QAbstractSocket*)\0"
    "isSequential(QAbstractSocket*)\0"
    "isValid(QAbstractSocket*)\0QHostAddress\0"
    "localAddress(QAbstractSocket*)\0"
    "unsigned short\0localPort(QAbstractSocket*)\0"
    "peerAddress(QAbstractSocket*)\0QString\0"
    "peerName(QAbstractSocket*)\0"
    "peerPort(QAbstractSocket*)\0QNetworkProxy\0"
    "proxy(QAbstractSocket*)\0"
    "readBufferSize(QAbstractSocket*)\0"
    "theWrappedObject,data,maxlen\0"
    "readData(QAbstractSocket*,char*,qint64)\0"
    "readLineData(QAbstractSocket*,char*,qint64)\0"
    "theWrappedObject,address\0"
    "setLocalAddress(QAbstractSocket*,QHostAddress)\0"
    "theWrappedObject,port\0"
    "setLocalPort(QAbstractSocket*,unsigned short)\0"
    "setPeerAddress(QAbstractSocket*,QHostAddress)\0"
    "theWrappedObject,name\0"
    "setPeerName(QAbstractSocket*,QString)\0"
    "setPeerPort(QAbstractSocket*,unsigned short)\0"
    "theWrappedObject,networkProxy\0"
    "setProxy(QAbstractSocket*,QNetworkProxy)\0"
    "theWrappedObject,size\0"
    "setReadBufferSize(QAbstractSocket*,qint64)\0"
    "theWrappedObject,socketDescriptor,state,openMode\0"
    "setSocketDescriptor(QAbstractSocket*,int,QAbstractSocket::SocketState,"
    "QIODevice::OpenMode)\0"
    "theWrappedObject,socketDescriptor,state\0"
    "setSocketDescriptor(QAbstractSocket*,int,QAbstractSocket::SocketState)\0"
    "theWrappedObject,socketDescriptor\0"
    "setSocketDescriptor(QAbstractSocket*,int)\0"
    "theWrappedObject,socketError\0"
    "setSocketError(QAbstractSocket*,QAbstractSocket::SocketError)\0"
    "theWrappedObject,option,value\0"
    "setSocketOption(QAbstractSocket*,QAbstractSocket::SocketOption,QVarian"
    "t)\0"
    "theWrappedObject,state\0"
    "setSocketState(QAbstractSocket*,QAbstractSocket::SocketState)\0"
    "int\0socketDescriptor(QAbstractSocket*)\0"
    "QVariant\0theWrappedObject,option\0"
    "socketOption(QAbstractSocket*,QAbstractSocket::SocketOption)\0"
    "QAbstractSocket::SocketType\0"
    "socketType(QAbstractSocket*)\0"
    "QAbstractSocket::SocketState\0"
    "state(QAbstractSocket*)\0theWrappedObject,msecs\0"
    "waitForBytesWritten(QAbstractSocket*,int)\0"
    "waitForBytesWritten(QAbstractSocket*)\0"
    "waitForConnected(QAbstractSocket*,int)\0"
    "waitForConnected(QAbstractSocket*)\0"
    "waitForDisconnected(QAbstractSocket*,int)\0"
    "waitForDisconnected(QAbstractSocket*)\0"
    "waitForReadyRead(QAbstractSocket*,int)\0"
    "waitForReadyRead(QAbstractSocket*)\0"
    "theWrappedObject,data,len\0"
    "writeData(QAbstractSocket*,const char*,qint64)\0"
};

void PythonQtWrapper_QAbstractSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QAbstractSocket *_t = static_cast<PythonQtWrapper_QAbstractSocket *>(_o);
        switch (_id) {
        case 0: { QAbstractSocket* _r = _t->new_QAbstractSocket((*reinterpret_cast< QAbstractSocket::SocketType(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QAbstractSocket**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QAbstractSocket((*reinterpret_cast< QAbstractSocket*(*)>(_a[1]))); break;
        case 2: _t->abort((*reinterpret_cast< QAbstractSocket*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->atEnd((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { qint64 _r = _t->bytesAvailable((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 5: { qint64 _r = _t->bytesToWrite((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->canReadLine((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->close((*reinterpret_cast< QAbstractSocket*(*)>(_a[1]))); break;
        case 8: _t->connectToHost((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[4]))); break;
        case 9: _t->connectToHost((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3]))); break;
        case 10: _t->connectToHost((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[4]))); break;
        case 11: _t->connectToHost((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3]))); break;
        case 12: _t->disconnectFromHost((*reinterpret_cast< QAbstractSocket*(*)>(_a[1]))); break;
        case 13: { QAbstractSocket::SocketError _r = _t->error((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractSocket::SocketError*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->flush((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isSequential((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isValid((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { QHostAddress _r = _t->localAddress((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress*>(_a[0]) = _r; }  break;
        case 18: { unsigned short _r = _t->localPort((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< unsigned short*>(_a[0]) = _r; }  break;
        case 19: { QHostAddress _r = _t->peerAddress((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress*>(_a[0]) = _r; }  break;
        case 20: { QString _r = _t->peerName((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 21: { unsigned short _r = _t->peerPort((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< unsigned short*>(_a[0]) = _r; }  break;
        case 22: { QNetworkProxy _r = _t->proxy((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy*>(_a[0]) = _r; }  break;
        case 23: { qint64 _r = _t->readBufferSize((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 24: { qint64 _r = _t->readData((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 25: { qint64 _r = _t->readLineData((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 26: _t->setLocalAddress((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2]))); break;
        case 27: _t->setLocalPort((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2]))); break;
        case 28: _t->setPeerAddress((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2]))); break;
        case 29: _t->setPeerName((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: _t->setPeerPort((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2]))); break;
        case 31: _t->setProxy((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QNetworkProxy(*)>(_a[2]))); break;
        case 32: _t->setReadBufferSize((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 33: { bool _r = _t->setSocketDescriptor((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[3])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->setSocketDescriptor((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { bool _r = _t->setSocketDescriptor((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: _t->setSocketError((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[2]))); break;
        case 37: _t->setSocketOption((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< QAbstractSocket::SocketOption(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 38: _t->setSocketState((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[2]))); break;
        case 39: { int _r = _t->socketDescriptor((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 40: { QVariant _r = _t->socketOption((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< QAbstractSocket::SocketOption(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 41: { QAbstractSocket::SocketType _r = _t->socketType((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractSocket::SocketType*>(_a[0]) = _r; }  break;
        case 42: { QAbstractSocket::SocketState _r = _t->state((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractSocket::SocketState*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->waitForBytesWritten((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->waitForBytesWritten((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->waitForConnected((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->waitForConnected((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: { bool _r = _t->waitForDisconnected((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { bool _r = _t->waitForDisconnected((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->waitForReadyRead((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: { bool _r = _t->waitForReadyRead((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 51: { qint64 _r = _t->writeData((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QAbstractSocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QAbstractSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractSocket,
      qt_meta_data_PythonQtWrapper_QAbstractSocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QAbstractSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QAbstractSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractSocket))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QAuthenticator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      48,   31,   32,   31, 0x0a,
      75,   69,   32,   31, 0x0a,
     114,  110,   31,   31, 0x0a,
     175,  158,  153,   31, 0x0a,
     222,  199,  153,   31, 0x0a,
     261,  199,  153,   31, 0x0a,
     330,  309,  300,   31, 0x0a,
     386,  158,  362,   31, 0x0a,
     419,  158,  411,   31, 0x0a,
     445,  158,  411,   31, 0x0a,
     495,  468,   31,   31, 0x0a,
     565,  539,   31,   31, 0x0a,
     624,  602,   31,   31, 0x0a,
     657,  158,  411,   31, 0x0a,
     679,  110,  153,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QAuthenticator[] = {
    "PythonQtWrapper_QAuthenticator\0\0"
    "QAuthenticator*\0new_QAuthenticator()\0"
    "other\0new_QAuthenticator(QAuthenticator)\0"
    "obj\0delete_QAuthenticator(QAuthenticator*)\0"
    "bool\0theWrappedObject\0isNull(QAuthenticator*)\0"
    "theWrappedObject,other\0"
    "__ne__(QAuthenticator*,QAuthenticator)\0"
    "__eq__(QAuthenticator*,QAuthenticator)\0"
    "QVariant\0theWrappedObject,opt\0"
    "option(QAuthenticator*,QString)\0"
    "QHash<QString,QVariant>\0"
    "options(QAuthenticator*)\0QString\0"
    "password(QAuthenticator*)\0"
    "realm(QAuthenticator*)\0"
    "theWrappedObject,opt,value\0"
    "setOption(QAuthenticator*,QString,QVariant)\0"
    "theWrappedObject,password\0"
    "setPassword(QAuthenticator*,QString)\0"
    "theWrappedObject,user\0"
    "setUser(QAuthenticator*,QString)\0"
    "user(QAuthenticator*)\0"
    "__nonzero__(QAuthenticator*)\0"
};

void PythonQtWrapper_QAuthenticator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QAuthenticator *_t = static_cast<PythonQtWrapper_QAuthenticator *>(_o);
        switch (_id) {
        case 0: { QAuthenticator* _r = _t->new_QAuthenticator();
            if (_a[0]) *reinterpret_cast< QAuthenticator**>(_a[0]) = _r; }  break;
        case 1: { QAuthenticator* _r = _t->new_QAuthenticator((*reinterpret_cast< const QAuthenticator(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAuthenticator**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QAuthenticator((*reinterpret_cast< QAuthenticator*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->isNull((*reinterpret_cast< QAuthenticator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->__ne__((*reinterpret_cast< QAuthenticator*(*)>(_a[1])),(*reinterpret_cast< const QAuthenticator(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->__eq__((*reinterpret_cast< QAuthenticator*(*)>(_a[1])),(*reinterpret_cast< const QAuthenticator(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QVariant _r = _t->option((*reinterpret_cast< QAuthenticator*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { QHash<QString,QVariant> _r = _t->options((*reinterpret_cast< QAuthenticator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHash<QString,QVariant>*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->password((*reinterpret_cast< QAuthenticator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->realm((*reinterpret_cast< QAuthenticator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: _t->setOption((*reinterpret_cast< QAuthenticator*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 11: _t->setPassword((*reinterpret_cast< QAuthenticator*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->setUser((*reinterpret_cast< QAuthenticator*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: { QString _r = _t->user((*reinterpret_cast< QAuthenticator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->__nonzero__((*reinterpret_cast< QAuthenticator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QAuthenticator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QAuthenticator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAuthenticator,
      qt_meta_data_PythonQtWrapper_QAuthenticator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QAuthenticator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QAuthenticator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QAuthenticator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAuthenticator))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAuthenticator*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAuthenticator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QFtp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       5,  199, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   28,   22,   21, 0x0a,
      54,   21,   22,   21, 0x2a,
      69,   65,   21,   21, 0x0a,
     112,   95,   88,   21, 0x0a,
     159,  138,  134,   21, 0x0a,
     177,   95,   21,   21, 0x0a,
     205,   95,  134,   21, 0x0a,
     245,  218,  134,   21, 0x0a,
     311,  289,  134,   21, 0x2a,
     354,   95,  340,   21, 0x0a,
     387,   95,  376,   21, 0x0a,
     408,   95,  134,   21, 0x0a,
     437,   95,  425,   21, 0x0a,
     458,   95,  450,   21, 0x0a,
     508,  477,  134,   21, 0x0a,
     583,  557,  134,   21, 0x2a,
     635,  613,  134,   21, 0x2a,
     659,   95,  654,   21, 0x0a,
     685,  138,  134,   21, 0x0a,
     705,   95,  134,   21, 0x2a,
     748,  717,  134,   21, 0x0a,
     799,  777,  134,   21, 0x2a,
     820,   95,  134,   21, 0x2a,
     833,  138,  134,   21, 0x0a,
     885,  854,  134,   21, 0x0a,
     960,  934,  134,   21, 0x2a,
    1022,  990,  134,   21, 0x0a,
    1098, 1071,  134,   21, 0x2a,
    1153, 1128,  134,   21, 0x0a,
    1208, 1179,   88,   21, 0x0a,
    1244,   95, 1233,   21, 0x0a,
    1259,  613,  134,   21, 0x0a,
    1314, 1281,  134,   21, 0x0a,
    1344,  138,  134,   21, 0x0a,
    1365,  218,  134,   21, 0x0a,
    1426, 1404,  134,   21, 0x0a,
    1480,   95, 1468,   21, 0x0a,

 // enums: name, flags, count, data
    1493, 0x0,   15,  219,
    1501, 0x0,    5,  249,
    1507, 0x0,    6,  259,
    1513, 0x0,    2,  271,
    1526, 0x0,    2,  275,

 // enum data: key, value
    1539, uint(PythonQtWrapper_QFtp::None),
    1544, uint(PythonQtWrapper_QFtp::SetTransferMode),
    1560, uint(PythonQtWrapper_QFtp::SetProxy),
    1569, uint(PythonQtWrapper_QFtp::ConnectToHost),
    1583, uint(PythonQtWrapper_QFtp::Login),
    1589, uint(PythonQtWrapper_QFtp::Close),
    1595, uint(PythonQtWrapper_QFtp::List),
    1600, uint(PythonQtWrapper_QFtp::Cd),
    1603, uint(PythonQtWrapper_QFtp::Get),
    1607, uint(PythonQtWrapper_QFtp::Put),
    1611, uint(PythonQtWrapper_QFtp::Remove),
    1618, uint(PythonQtWrapper_QFtp::Mkdir),
    1624, uint(PythonQtWrapper_QFtp::Rmdir),
    1630, uint(PythonQtWrapper_QFtp::Rename),
    1637, uint(PythonQtWrapper_QFtp::RawCommand),
    1648, uint(PythonQtWrapper_QFtp::NoError),
    1656, uint(PythonQtWrapper_QFtp::UnknownError),
    1669, uint(PythonQtWrapper_QFtp::HostNotFound),
    1682, uint(PythonQtWrapper_QFtp::ConnectionRefused),
    1700, uint(PythonQtWrapper_QFtp::NotConnected),
    1713, uint(PythonQtWrapper_QFtp::Unconnected),
    1725, uint(PythonQtWrapper_QFtp::HostLookup),
    1736, uint(PythonQtWrapper_QFtp::Connecting),
    1747, uint(PythonQtWrapper_QFtp::Connected),
    1757, uint(PythonQtWrapper_QFtp::LoggedIn),
    1766, uint(PythonQtWrapper_QFtp::Closing),
    1774, uint(PythonQtWrapper_QFtp::Active),
    1781, uint(PythonQtWrapper_QFtp::Passive),
    1789, uint(PythonQtWrapper_QFtp::Binary),
    1796, uint(PythonQtWrapper_QFtp::Ascii),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFtp[] = {
    "PythonQtWrapper_QFtp\0\0QFtp*\0parent\0"
    "new_QFtp(QObject*)\0new_QFtp()\0obj\0"
    "delete_QFtp(QFtp*)\0qint64\0theWrappedObject\0"
    "bytesAvailable(QFtp*)\0int\0"
    "theWrappedObject,dir\0cd(QFtp*,QString)\0"
    "clearPendingCommands(QFtp*)\0close(QFtp*)\0"
    "theWrappedObject,host,port\0"
    "connectToHost(QFtp*,QString,unsigned short)\0"
    "theWrappedObject,host\0"
    "connectToHost(QFtp*,QString)\0QFtp::Command\0"
    "currentCommand(QFtp*)\0QIODevice*\0"
    "currentDevice(QFtp*)\0currentId(QFtp*)\0"
    "QFtp::Error\0error(QFtp*)\0QString\0"
    "errorString(QFtp*)\0theWrappedObject,file,dev,type\0"
    "get(QFtp*,QString,QIODevice*,QFtp::TransferType)\0"
    "theWrappedObject,file,dev\0"
    "get(QFtp*,QString,QIODevice*)\0"
    "theWrappedObject,file\0get(QFtp*,QString)\0"
    "bool\0hasPendingCommands(QFtp*)\0"
    "list(QFtp*,QString)\0list(QFtp*)\0"
    "theWrappedObject,user,password\0"
    "login(QFtp*,QString,QString)\0"
    "theWrappedObject,user\0login(QFtp*,QString)\0"
    "login(QFtp*)\0mkdir(QFtp*,QString)\0"
    "theWrappedObject,dev,file,type\0"
    "put(QFtp*,QIODevice*,QString,QFtp::TransferType)\0"
    "theWrappedObject,dev,file\0"
    "put(QFtp*,QIODevice*,QString)\0"
    "theWrappedObject,data,file,type\0"
    "put(QFtp*,QByteArray,QString,QFtp::TransferType)\0"
    "theWrappedObject,data,file\0"
    "put(QFtp*,QByteArray,QString)\0"
    "theWrappedObject,command\0"
    "rawCommand(QFtp*,QString)\0"
    "theWrappedObject,data,maxlen\0"
    "read(QFtp*,char*,qint64)\0QByteArray\0"
    "readAll(QFtp*)\0remove(QFtp*,QString)\0"
    "theWrappedObject,oldname,newname\0"
    "rename(QFtp*,QString,QString)\0"
    "rmdir(QFtp*,QString)\0"
    "setProxy(QFtp*,QString,unsigned short)\0"
    "theWrappedObject,mode\0"
    "setTransferMode(QFtp*,QFtp::TransferMode)\0"
    "QFtp::State\0state(QFtp*)\0Command\0Error\0"
    "State\0TransferMode\0TransferType\0None\0"
    "SetTransferMode\0SetProxy\0ConnectToHost\0"
    "Login\0Close\0List\0Cd\0Get\0Put\0Remove\0"
    "Mkdir\0Rmdir\0Rename\0RawCommand\0NoError\0"
    "UnknownError\0HostNotFound\0ConnectionRefused\0"
    "NotConnected\0Unconnected\0HostLookup\0"
    "Connecting\0Connected\0LoggedIn\0Closing\0"
    "Active\0Passive\0Binary\0Ascii\0"
};

void PythonQtWrapper_QFtp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFtp *_t = static_cast<PythonQtWrapper_QFtp *>(_o);
        switch (_id) {
        case 0: { QFtp* _r = _t->new_QFtp((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFtp**>(_a[0]) = _r; }  break;
        case 1: { QFtp* _r = _t->new_QFtp();
            if (_a[0]) *reinterpret_cast< QFtp**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFtp((*reinterpret_cast< QFtp*(*)>(_a[1]))); break;
        case 3: { qint64 _r = _t->bytesAvailable((*reinterpret_cast< QFtp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->cd((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->clearPendingCommands((*reinterpret_cast< QFtp*(*)>(_a[1]))); break;
        case 6: { int _r = _t->close((*reinterpret_cast< QFtp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->connectToHost((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->connectToHost((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QFtp::Command _r = _t->currentCommand((*reinterpret_cast< QFtp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFtp::Command*>(_a[0]) = _r; }  break;
        case 10: { QIODevice* _r = _t->currentDevice((*reinterpret_cast< QFtp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->currentId((*reinterpret_cast< QFtp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { QFtp::Error _r = _t->error((*reinterpret_cast< QFtp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFtp::Error*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->errorString((*reinterpret_cast< QFtp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->get((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3])),(*reinterpret_cast< QFtp::TransferType(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->get((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->get((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->hasPendingCommands((*reinterpret_cast< QFtp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->list((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->list((*reinterpret_cast< QFtp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->login((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->login((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->login((*reinterpret_cast< QFtp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->mkdir((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->put((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QFtp::TransferType(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->put((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->put((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QFtp::TransferType(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { int _r = _t->put((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 28: { int _r = _t->rawCommand((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 29: { qint64 _r = _t->read((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 30: { QByteArray _r = _t->readAll((*reinterpret_cast< QFtp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 31: { int _r = _t->remove((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 32: { int _r = _t->rename((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 33: { int _r = _t->rmdir((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 34: { int _r = _t->setProxy((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 35: { int _r = _t->setTransferMode((*reinterpret_cast< QFtp*(*)>(_a[1])),(*reinterpret_cast< QFtp::TransferMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 36: { QFtp::State _r = _t->state((*reinterpret_cast< QFtp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFtp::State*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFtp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFtp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFtp,
      qt_meta_data_PythonQtWrapper_QFtp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFtp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFtp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFtp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFtp))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFtp*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFtp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QHostAddress[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       1,  159, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   29,   30,   29, 0x0a,
      71,   63,   30,   29, 0x0a,
     123,  118,   30,   29, 0x0a,
     162,  154,   30,   29, 0x0a,
     193,   63,   30,   29, 0x0a,
     227,  219,   30,   29, 0x0a,
     254,  250,   29,   29, 0x0a,
     306,  289,   29,   29, 0x0a,
     364,  332,  327,   29, 0x0a,
     431,  407,  327,   29, 0x0a,
     481,  289,  327,   29, 0x0a,
     528,  503,  327,   29, 0x0a,
     579,  503,  327,   29, 0x0a,
     638,  614,   29,   29, 0x0a,
     674,  503,  327,   29, 0x0a,
     725,  503,  327,   29, 0x0a,
     760,  614,   29,   29, 0x0a,
     828,  821,  797,   29, 0x0a,
     907,  289,  869,   29, 0x0a,
     939,  289,  931,   29, 0x0a,
     987,  962,   29,   29, 0x0a,
    1026,  503,  327,   29, 0x0a,
    1085, 1060,   29,   29, 0x0a,
    1136, 1116,   29,   29, 0x0a,
    1175,  289, 1170,   29, 0x0a,
    1217,  289, 1204,   29, 0x0a,
    1246,  289,  931,   29, 0x0a,
    1270,   29,  931,   29, 0x0a,
    1297,  250,  327,   29, 0x0a,

 // enums: name, flags, count, data
    1324, 0x0,    6,  163,

 // enum data: key, value
    1339, uint(PythonQtWrapper_QHostAddress::Null),
    1344, uint(PythonQtWrapper_QHostAddress::Broadcast),
    1354, uint(PythonQtWrapper_QHostAddress::LocalHost),
    1364, uint(PythonQtWrapper_QHostAddress::LocalHostIPv6),
    1378, uint(PythonQtWrapper_QHostAddress::Any),
    1382, uint(PythonQtWrapper_QHostAddress::AnyIPv6),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QHostAddress[] = {
    "PythonQtWrapper_QHostAddress\0\0"
    "QHostAddress*\0new_QHostAddress()\0"
    "address\0new_QHostAddress(QHostAddress::SpecialAddress)\0"
    "copy\0new_QHostAddress(QHostAddress)\0"
    "ip6Addr\0new_QHostAddress(QIPv6Address)\0"
    "new_QHostAddress(QString)\0ip4Addr\0"
    "new_QHostAddress(uint)\0obj\0"
    "delete_QHostAddress(QHostAddress*)\0"
    "theWrappedObject\0clear(QHostAddress*)\0"
    "bool\0theWrappedObject,subnet,netmask\0"
    "isInSubnet(QHostAddress*,QHostAddress,int)\0"
    "theWrappedObject,subnet\0"
    "isInSubnet(QHostAddress*,QPair<QHostAddress,int>)\0"
    "isNull(QHostAddress*)\0theWrappedObject,address\0"
    "__ne__(QHostAddress*,QHostAddress::SpecialAddress)\0"
    "__ne__(QHostAddress*,QHostAddress)\0"
    "theWrappedObject,arg__1\0"
    "writeTo(QHostAddress*,QDataStream&)\0"
    "__eq__(QHostAddress*,QHostAddress::SpecialAddress)\0"
    "__eq__(QHostAddress*,QHostAddress)\0"
    "readFrom(QHostAddress*,QDataStream&)\0"
    "QPair<QHostAddress,int>\0subnet\0"
    "static_QHostAddress_parseSubnet(QString)\0"
    "QAbstractSocket::NetworkLayerProtocol\0"
    "protocol(QHostAddress*)\0QString\0"
    "scopeId(QHostAddress*)\0theWrappedObject,ip6Addr\0"
    "setAddress(QHostAddress*,QIPv6Address)\0"
    "setAddress(QHostAddress*,QString)\0"
    "theWrappedObject,ip4Addr\0"
    "setAddress(QHostAddress*,uint)\0"
    "theWrappedObject,id\0"
    "setScopeId(QHostAddress*,QString)\0"
    "uint\0toIPv4Address(QHostAddress*)\0"
    "QIPv6Address\0toIPv6Address(QHostAddress*)\0"
    "toString(QHostAddress*)\0"
    "py_toString(QHostAddress*)\0"
    "__nonzero__(QHostAddress*)\0SpecialAddress\0"
    "Null\0Broadcast\0LocalHost\0LocalHostIPv6\0"
    "Any\0AnyIPv6\0"
};

void PythonQtWrapper_QHostAddress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QHostAddress *_t = static_cast<PythonQtWrapper_QHostAddress *>(_o);
        switch (_id) {
        case 0: { QHostAddress* _r = _t->new_QHostAddress();
            if (_a[0]) *reinterpret_cast< QHostAddress**>(_a[0]) = _r; }  break;
        case 1: { QHostAddress* _r = _t->new_QHostAddress((*reinterpret_cast< QHostAddress::SpecialAddress(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress**>(_a[0]) = _r; }  break;
        case 2: { QHostAddress* _r = _t->new_QHostAddress((*reinterpret_cast< const QHostAddress(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress**>(_a[0]) = _r; }  break;
        case 3: { QHostAddress* _r = _t->new_QHostAddress((*reinterpret_cast< const QIPv6Address(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress**>(_a[0]) = _r; }  break;
        case 4: { QHostAddress* _r = _t->new_QHostAddress((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress**>(_a[0]) = _r; }  break;
        case 5: { QHostAddress* _r = _t->new_QHostAddress((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QHostAddress((*reinterpret_cast< QHostAddress*(*)>(_a[1]))); break;
        case 7: _t->clear((*reinterpret_cast< QHostAddress*(*)>(_a[1]))); break;
        case 8: { bool _r = _t->isInSubnet((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isInSubnet((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< const QPair<QHostAddress,int>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isNull((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__ne__((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< QHostAddress::SpecialAddress(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->__ne__((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->writeTo((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 14: { bool _r = _t->__eq__((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< QHostAddress::SpecialAddress(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->__eq__((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->readFrom((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 17: { QPair<QHostAddress,int> _r = _t->static_QHostAddress_parseSubnet((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPair<QHostAddress,int>*>(_a[0]) = _r; }  break;
        case 18: { QAbstractSocket::NetworkLayerProtocol _r = _t->protocol((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractSocket::NetworkLayerProtocol*>(_a[0]) = _r; }  break;
        case 19: { QString _r = _t->scopeId((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 20: _t->setAddress((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< const QIPv6Address(*)>(_a[2]))); break;
        case 21: { bool _r = _t->setAddress((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: _t->setAddress((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 23: _t->setScopeId((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 24: { uint _r = _t->toIPv4Address((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 25: { QIPv6Address _r = _t->toIPv6Address((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIPv6Address*>(_a[0]) = _r; }  break;
        case 26: { QString _r = _t->toString((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 27: { QString _r = _t->py_toString((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->__nonzero__((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QHostAddress::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QHostAddress::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QHostAddress,
      qt_meta_data_PythonQtWrapper_QHostAddress, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QHostAddress::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QHostAddress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QHostAddress::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QHostAddress))
        return static_cast<void*>(const_cast< PythonQtWrapper_QHostAddress*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QHostAddress::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QHostInfo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       1,  109, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      40,   38,   27,   26, 0x0a,
      74,   65,   27,   26, 0x0a,
      93,   26,   27,   26, 0x2a,
     113,  109,   26,   26, 0x0a,
     142,   65,   26,   26, 0x0a,
     217,  200,  180,   26, 0x0a,
     264,  200,  239,   26, 0x0a,
     290,  200,  282,   26, 0x0a,
     329,  324,  314,   26, 0x0a,
     364,  200,  282,   26, 0x0a,
     385,   26,  282,   26, 0x0a,
     420,   26,  282,   26, 0x0a,
     478,  457,  453,   26, 0x0a,
     536,  200,  453,   26, 0x0a,
     584,  557,   26,   26, 0x0a,
     652,  629,   26,   26, 0x0a,
     727,  698,   26,   26, 0x0a,
     784,  762,   26,   26, 0x0a,
     836,  816,   26,   26, 0x0a,

 // enums: name, flags, count, data
     864, 0x0,    3,  113,

 // enum data: key, value
     878, uint(PythonQtWrapper_QHostInfo::NoError),
     886, uint(PythonQtWrapper_QHostInfo::HostNotFound),
     899, uint(PythonQtWrapper_QHostInfo::UnknownError),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QHostInfo[] = {
    "PythonQtWrapper_QHostInfo\0\0QHostInfo*\0"
    "d\0new_QHostInfo(QHostInfo)\0lookupId\0"
    "new_QHostInfo(int)\0new_QHostInfo()\0"
    "obj\0delete_QHostInfo(QHostInfo*)\0"
    "static_QHostInfo_abortHostLookup(int)\0"
    "QList<QHostAddress>\0theWrappedObject\0"
    "addresses(QHostInfo*)\0QHostInfo::HostInfoError\0"
    "error(QHostInfo*)\0QString\0"
    "errorString(QHostInfo*)\0QHostInfo\0"
    "name\0static_QHostInfo_fromName(QString)\0"
    "hostName(QHostInfo*)\0"
    "static_QHostInfo_localDomainName()\0"
    "static_QHostInfo_localHostName()\0int\0"
    "name,receiver,member\0"
    "static_QHostInfo_lookupHost(QString,QObject*,const char*)\0"
    "lookupId(QHostInfo*)\0theWrappedObject,addresses\0"
    "setAddresses(QHostInfo*,QList<QHostAddress>)\0"
    "theWrappedObject,error\0"
    "setError(QHostInfo*,QHostInfo::HostInfoError)\0"
    "theWrappedObject,errorString\0"
    "setErrorString(QHostInfo*,QString)\0"
    "theWrappedObject,name\0"
    "setHostName(QHostInfo*,QString)\0"
    "theWrappedObject,id\0setLookupId(QHostInfo*,int)\0"
    "HostInfoError\0NoError\0HostNotFound\0"
    "UnknownError\0"
};

void PythonQtWrapper_QHostInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QHostInfo *_t = static_cast<PythonQtWrapper_QHostInfo *>(_o);
        switch (_id) {
        case 0: { QHostInfo* _r = _t->new_QHostInfo((*reinterpret_cast< const QHostInfo(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostInfo**>(_a[0]) = _r; }  break;
        case 1: { QHostInfo* _r = _t->new_QHostInfo((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostInfo**>(_a[0]) = _r; }  break;
        case 2: { QHostInfo* _r = _t->new_QHostInfo();
            if (_a[0]) *reinterpret_cast< QHostInfo**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QHostInfo((*reinterpret_cast< QHostInfo*(*)>(_a[1]))); break;
        case 4: _t->static_QHostInfo_abortHostLookup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: { QList<QHostAddress> _r = _t->addresses((*reinterpret_cast< QHostInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QHostAddress>*>(_a[0]) = _r; }  break;
        case 6: { QHostInfo::HostInfoError _r = _t->error((*reinterpret_cast< QHostInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostInfo::HostInfoError*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->errorString((*reinterpret_cast< QHostInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QHostInfo _r = _t->static_QHostInfo_fromName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostInfo*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->hostName((*reinterpret_cast< QHostInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->static_QHostInfo_localDomainName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->static_QHostInfo_localHostName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->static_QHostInfo_lookupHost((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->lookupId((*reinterpret_cast< QHostInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: _t->setAddresses((*reinterpret_cast< QHostInfo*(*)>(_a[1])),(*reinterpret_cast< const QList<QHostAddress>(*)>(_a[2]))); break;
        case 15: _t->setError((*reinterpret_cast< QHostInfo*(*)>(_a[1])),(*reinterpret_cast< QHostInfo::HostInfoError(*)>(_a[2]))); break;
        case 16: _t->setErrorString((*reinterpret_cast< QHostInfo*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->setHostName((*reinterpret_cast< QHostInfo*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->setLookupId((*reinterpret_cast< QHostInfo*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QHostInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QHostInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QHostInfo,
      qt_meta_data_PythonQtWrapper_QHostInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QHostInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QHostInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QHostInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QHostInfo))
        return static_cast<void*>(const_cast< PythonQtWrapper_QHostInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QHostInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QHttp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       3,  244, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   30,   23,   22, 0x0a,
      57,   22,   23,   22, 0x2a,
      95,   69,   23,   22, 0x0a,
     179,  160,   23,   22, 0x2a,
     249,  235,   23,   22, 0x2a,
     311,  290,   23,   22, 0x0a,
     368,  354,   23,   22, 0x2a,
     411,  402,   23,   22, 0x2a,
     434,  430,   22,   22, 0x0a,
     479,  462,  455,   22, 0x0a,
     502,  462,   22,   22, 0x0a,
     535,  462,  531,   22, 0x0a,
     560,  462,  549,   22, 0x0a,
     593,  462,  531,   22, 0x0a,
     630,  462,  611,   22, 0x0a,
     653,  462,  549,   22, 0x0a,
     694,  462,  681,   22, 0x0a,
     716,  462,  708,   22, 0x0a,
     761,  736,  531,   22, 0x0a,
     814,  792,  531,   22, 0x2a,
     839,  462,  834,   22, 0x0a,
     866,  792,  531,   22, 0x0a,
     907,  462,  887,   22, 0x0a,
     958,  928,  531,   22, 0x0a,
    1028, 1001,  531,   22, 0x2a,
    1060,  928,  531,   22, 0x0a,
    1103, 1001,  531,   22, 0x2a,
    1164, 1135,  455,   22, 0x0a,
    1201,  462, 1190,   22, 0x0a,
    1251, 1217,  531,   22, 0x0a,
    1339, 1308,  531,   22, 0x2a,
    1409, 1385,  531,   22, 0x2a,
    1476, 1444,  531,   22, 0x0a,
    1562, 1533,  531,   22, 0x2a,
    1644, 1608,  531,   22, 0x0a,
    1736, 1705,  531,   22, 0x2a,
    1813, 1782,  531,   22, 0x0a,
    1878, 1852,  531,   22, 0x2a,
    1925, 1902,  531,   22, 0x0a,
    2001, 1956,  531,   22, 0x0a,
    2082, 2046,  531,   22, 0x2a,
    2146, 2119,  531,   22, 0x2a,
    2199, 2175,  531,   22, 0x0a,
    2264, 2229,  531,   22, 0x0a,
    2322, 2296,  531,   22, 0x2a,
    2359,  462, 2346,   22, 0x0a,

 // enums: name, flags, count, data
    2373, 0x0,    2,  256,
    2388, 0x0,   10,  260,
    2394, 0x0,    7,  280,

 // enum data: key, value
    2400, uint(PythonQtWrapper_QHttp::ConnectionModeHttp),
    2419, uint(PythonQtWrapper_QHttp::ConnectionModeHttps),
    2439, uint(PythonQtWrapper_QHttp::NoError),
    2447, uint(PythonQtWrapper_QHttp::UnknownError),
    2460, uint(PythonQtWrapper_QHttp::HostNotFound),
    2473, uint(PythonQtWrapper_QHttp::ConnectionRefused),
    2491, uint(PythonQtWrapper_QHttp::UnexpectedClose),
    2507, uint(PythonQtWrapper_QHttp::InvalidResponseHeader),
    2529, uint(PythonQtWrapper_QHttp::WrongContentLength),
    2548, uint(PythonQtWrapper_QHttp::Aborted),
    2556, uint(PythonQtWrapper_QHttp::AuthenticationRequiredError),
    2584, uint(PythonQtWrapper_QHttp::ProxyAuthenticationRequiredError),
    2617, uint(PythonQtWrapper_QHttp::Unconnected),
    2629, uint(PythonQtWrapper_QHttp::HostLookup),
    2640, uint(PythonQtWrapper_QHttp::Connecting),
    2651, uint(PythonQtWrapper_QHttp::Sending),
    2659, uint(PythonQtWrapper_QHttp::Reading),
    2667, uint(PythonQtWrapper_QHttp::Connected),
    2677, uint(PythonQtWrapper_QHttp::Closing),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QHttp[] = {
    "PythonQtWrapper_QHttp\0\0QHttp*\0parent\0"
    "new_QHttp(QObject*)\0new_QHttp()\0"
    "hostname,mode,port,parent\0"
    "new_QHttp(QString,QHttp::ConnectionMode,unsigned short,QObject*)\0"
    "hostname,mode,port\0"
    "new_QHttp(QString,QHttp::ConnectionMode,unsigned short)\0"
    "hostname,mode\0new_QHttp(QString,QHttp::ConnectionMode)\0"
    "hostname,port,parent\0"
    "new_QHttp(QString,unsigned short,QObject*)\0"
    "hostname,port\0new_QHttp(QString,unsigned short)\0"
    "hostname\0new_QHttp(QString)\0obj\0"
    "delete_QHttp(QHttp*)\0qint64\0"
    "theWrappedObject\0bytesAvailable(QHttp*)\0"
    "clearPendingRequests(QHttp*)\0int\0"
    "close(QHttp*)\0QIODevice*\0"
    "currentDestinationDevice(QHttp*)\0"
    "currentId(QHttp*)\0QHttpRequestHeader\0"
    "currentRequest(QHttp*)\0"
    "currentSourceDevice(QHttp*)\0QHttp::Error\0"
    "error(QHttp*)\0QString\0errorString(QHttp*)\0"
    "theWrappedObject,path,to\0"
    "get(QHttp*,QString,QIODevice*)\0"
    "theWrappedObject,path\0get(QHttp*,QString)\0"
    "bool\0hasPendingRequests(QHttp*)\0"
    "head(QHttp*,QString)\0QHttpResponseHeader\0"
    "lastResponse(QHttp*)\0theWrappedObject,path,data,to\0"
    "post(QHttp*,QString,QIODevice*,QIODevice*)\0"
    "theWrappedObject,path,data\0"
    "post(QHttp*,QString,QIODevice*)\0"
    "post(QHttp*,QString,QByteArray,QIODevice*)\0"
    "post(QHttp*,QString,QByteArray)\0"
    "theWrappedObject,data,maxlen\0"
    "read(QHttp*,char*,qint64)\0QByteArray\0"
    "readAll(QHttp*)\0theWrappedObject,header,device,to\0"
    "request(QHttp*,QHttpRequestHeader,QIODevice*,QIODevice*)\0"
    "theWrappedObject,header,device\0"
    "request(QHttp*,QHttpRequestHeader,QIODevice*)\0"
    "theWrappedObject,header\0"
    "request(QHttp*,QHttpRequestHeader)\0"
    "theWrappedObject,header,data,to\0"
    "request(QHttp*,QHttpRequestHeader,QByteArray,QIODevice*)\0"
    "theWrappedObject,header,data\0"
    "request(QHttp*,QHttpRequestHeader,QByteArray)\0"
    "theWrappedObject,hostname,mode,port\0"
    "setHost(QHttp*,QString,QHttp::ConnectionMode,unsigned short)\0"
    "theWrappedObject,hostname,mode\0"
    "setHost(QHttp*,QString,QHttp::ConnectionMode)\0"
    "theWrappedObject,hostname,port\0"
    "setHost(QHttp*,QString,unsigned short)\0"
    "theWrappedObject,hostname\0"
    "setHost(QHttp*,QString)\0theWrappedObject,proxy\0"
    "setProxy(QHttp*,QNetworkProxy)\0"
    "theWrappedObject,host,port,username,password\0"
    "setProxy(QHttp*,QString,int,QString,QString)\0"
    "theWrappedObject,host,port,username\0"
    "setProxy(QHttp*,QString,int,QString)\0"
    "theWrappedObject,host,port\0"
    "setProxy(QHttp*,QString,int)\0"
    "theWrappedObject,socket\0"
    "setSocket(QHttp*,QTcpSocket*)\0"
    "theWrappedObject,username,password\0"
    "setUser(QHttp*,QString,QString)\0"
    "theWrappedObject,username\0"
    "setUser(QHttp*,QString)\0QHttp::State\0"
    "state(QHttp*)\0ConnectionMode\0Error\0"
    "State\0ConnectionModeHttp\0ConnectionModeHttps\0"
    "NoError\0UnknownError\0HostNotFound\0"
    "ConnectionRefused\0UnexpectedClose\0"
    "InvalidResponseHeader\0WrongContentLength\0"
    "Aborted\0AuthenticationRequiredError\0"
    "ProxyAuthenticationRequiredError\0"
    "Unconnected\0HostLookup\0Connecting\0"
    "Sending\0Reading\0Connected\0Closing\0"
};

void PythonQtWrapper_QHttp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QHttp *_t = static_cast<PythonQtWrapper_QHttp *>(_o);
        switch (_id) {
        case 0: { QHttp* _r = _t->new_QHttp((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttp**>(_a[0]) = _r; }  break;
        case 1: { QHttp* _r = _t->new_QHttp();
            if (_a[0]) *reinterpret_cast< QHttp**>(_a[0]) = _r; }  break;
        case 2: { QHttp* _r = _t->new_QHttp((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QHttp::ConnectionMode(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< QObject*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QHttp**>(_a[0]) = _r; }  break;
        case 3: { QHttp* _r = _t->new_QHttp((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QHttp::ConnectionMode(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QHttp**>(_a[0]) = _r; }  break;
        case 4: { QHttp* _r = _t->new_QHttp((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QHttp::ConnectionMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QHttp**>(_a[0]) = _r; }  break;
        case 5: { QHttp* _r = _t->new_QHttp((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QHttp**>(_a[0]) = _r; }  break;
        case 6: { QHttp* _r = _t->new_QHttp((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QHttp**>(_a[0]) = _r; }  break;
        case 7: { QHttp* _r = _t->new_QHttp((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttp**>(_a[0]) = _r; }  break;
        case 8: _t->delete_QHttp((*reinterpret_cast< QHttp*(*)>(_a[1]))); break;
        case 9: { qint64 _r = _t->bytesAvailable((*reinterpret_cast< QHttp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 10: _t->clearPendingRequests((*reinterpret_cast< QHttp*(*)>(_a[1]))); break;
        case 11: { int _r = _t->close((*reinterpret_cast< QHttp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { QIODevice* _r = _t->currentDestinationDevice((*reinterpret_cast< QHttp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->currentId((*reinterpret_cast< QHttp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { QHttpRequestHeader _r = _t->currentRequest((*reinterpret_cast< QHttp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttpRequestHeader*>(_a[0]) = _r; }  break;
        case 15: { QIODevice* _r = _t->currentSourceDevice((*reinterpret_cast< QHttp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 16: { QHttp::Error _r = _t->error((*reinterpret_cast< QHttp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttp::Error*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->errorString((*reinterpret_cast< QHttp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->get((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->get((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->hasPendingRequests((*reinterpret_cast< QHttp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->head((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { QHttpResponseHeader _r = _t->lastResponse((*reinterpret_cast< QHttp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttpResponseHeader*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->post((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3])),(*reinterpret_cast< QIODevice*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->post((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->post((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])),(*reinterpret_cast< QIODevice*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->post((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { qint64 _r = _t->read((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 28: { QByteArray _r = _t->readAll((*reinterpret_cast< QHttp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 29: { int _r = _t->request((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QHttpRequestHeader(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3])),(*reinterpret_cast< QIODevice*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->request((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QHttpRequestHeader(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: { int _r = _t->request((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QHttpRequestHeader(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 32: { int _r = _t->request((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QHttpRequestHeader(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])),(*reinterpret_cast< QIODevice*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 33: { int _r = _t->request((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QHttpRequestHeader(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 34: { int _r = _t->setHost((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QHttp::ConnectionMode(*)>(_a[3])),(*reinterpret_cast< unsigned short(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 35: { int _r = _t->setHost((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QHttp::ConnectionMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 36: { int _r = _t->setHost((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 37: { int _r = _t->setHost((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 38: { int _r = _t->setProxy((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QNetworkProxy(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 39: { int _r = _t->setProxy((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 40: { int _r = _t->setProxy((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 41: { int _r = _t->setProxy((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 42: { int _r = _t->setSocket((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< QTcpSocket*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 43: { int _r = _t->setUser((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 44: { int _r = _t->setUser((*reinterpret_cast< QHttp*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 45: { QHttp::State _r = _t->state((*reinterpret_cast< QHttp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttp::State*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QHttp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QHttp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QHttp,
      qt_meta_data_PythonQtWrapper_QHttp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QHttp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QHttp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QHttp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QHttp))
        return static_cast<void*>(const_cast< PythonQtWrapper_QHttp*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QHttp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QHttpHeader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   28,   29,   28, 0x0a,
      64,   60,   29,   28, 0x0a,
      93,   89,   28,   28, 0x0a,
     153,  126,   28,   28, 0x0a,
     225,  204,  192,   28, 0x0a,
     279,  262,  257,   28, 0x0a,
     315,  262,  307,   28, 0x0a,
     346,  262,  341,   28, 0x0a,
     377,  262,  341,   28, 0x0a,
     406,  204,  341,   28, 0x0a,
     435,  262,  341,   28, 0x0a,
     457,  262,  192,   28, 0x0a,
     480,  262,  476,   28, 0x0a,
     507,  262,  476,   28, 0x0a,
     555,  534,  341,   28, 0x0a,
     612,  583,  341,   28, 0x0a,
     648,  204,   28,   28, 0x0a,
     686,  204,   28,   28, 0x0a,
     741,  720,   28,   28, 0x0a,
     798,  776,   28,   28, 0x0a,
     859,  835,   28,   28, 0x0a,
     887,  126,   28,   28, 0x0a,
     950,  926,   28,   28, 0x0a,
    1005,  262,  307,   28, 0x0a,
    1028,  204,  307,   28, 0x0a,
    1087,  262, 1056,   28, 0x0a,
    1108,   28,  307,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QHttpHeader[] = {
    "PythonQtWrapper_QHttpHeader\0\0QHttpHeader*\0"
    "new_QHttpHeader()\0str\0new_QHttpHeader(QString)\0"
    "obj\0delete_QHttpHeader(QHttpHeader*)\0"
    "theWrappedObject,key,value\0"
    "addValue(QHttpHeader*,QString,QString)\0"
    "QStringList\0theWrappedObject,key\0"
    "allValues(QHttpHeader*,QString)\0uint\0"
    "theWrappedObject\0contentLength(QHttpHeader*)\0"
    "QString\0contentType(QHttpHeader*)\0"
    "bool\0hasContentLength(QHttpHeader*)\0"
    "hasContentType(QHttpHeader*)\0"
    "hasKey(QHttpHeader*,QString)\0"
    "isValid(QHttpHeader*)\0keys(QHttpHeader*)\0"
    "int\0majorVersion(QHttpHeader*)\0"
    "minorVersion(QHttpHeader*)\0"
    "theWrappedObject,str\0parse(QHttpHeader*,QString)\0"
    "theWrappedObject,line,number\0"
    "parseLine(QHttpHeader*,QString,int)\0"
    "removeAllValues(QHttpHeader*,QString)\0"
    "removeValue(QHttpHeader*,QString)\0"
    "theWrappedObject,len\0"
    "setContentLength(QHttpHeader*,int)\0"
    "theWrappedObject,type\0"
    "setContentType(QHttpHeader*,QString)\0"
    "theWrappedObject,arg__1\0"
    "setValid(QHttpHeader*,bool)\0"
    "setValue(QHttpHeader*,QString,QString)\0"
    "theWrappedObject,values\0"
    "setValues(QHttpHeader*,QList<QPair<QString,QString> >)\0"
    "toString(QHttpHeader*)\0"
    "value(QHttpHeader*,QString)\0"
    "QList<QPair<QString,QString> >\0"
    "values(QHttpHeader*)\0py_toString(QHttpHeader*)\0"
};

void PythonQtWrapper_QHttpHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QHttpHeader *_t = static_cast<PythonQtWrapper_QHttpHeader *>(_o);
        switch (_id) {
        case 0: { QHttpHeader* _r = _t->new_QHttpHeader();
            if (_a[0]) *reinterpret_cast< QHttpHeader**>(_a[0]) = _r; }  break;
        case 1: { QHttpHeader* _r = _t->new_QHttpHeader((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttpHeader**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QHttpHeader((*reinterpret_cast< QHttpHeader*(*)>(_a[1]))); break;
        case 3: _t->addValue((*reinterpret_cast< QHttpHeader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: { QStringList _r = _t->allValues((*reinterpret_cast< QHttpHeader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 5: { uint _r = _t->contentLength((*reinterpret_cast< QHttpHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->contentType((*reinterpret_cast< QHttpHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->hasContentLength((*reinterpret_cast< QHttpHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->hasContentType((*reinterpret_cast< QHttpHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->hasKey((*reinterpret_cast< QHttpHeader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isValid((*reinterpret_cast< QHttpHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QStringList _r = _t->keys((*reinterpret_cast< QHttpHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->majorVersion((*reinterpret_cast< QHttpHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->minorVersion((*reinterpret_cast< QHttpHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->parse((*reinterpret_cast< QHttpHeader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->parseLine((*reinterpret_cast< QHttpHeader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->removeAllValues((*reinterpret_cast< QHttpHeader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->removeValue((*reinterpret_cast< QHttpHeader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->setContentLength((*reinterpret_cast< QHttpHeader*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->setContentType((*reinterpret_cast< QHttpHeader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->setValid((*reinterpret_cast< QHttpHeader*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->setValue((*reinterpret_cast< QHttpHeader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 22: _t->setValues((*reinterpret_cast< QHttpHeader*(*)>(_a[1])),(*reinterpret_cast< const QList<QPair<QString,QString> >(*)>(_a[2]))); break;
        case 23: { QString _r = _t->toString((*reinterpret_cast< QHttpHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: { QString _r = _t->value((*reinterpret_cast< QHttpHeader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 25: { QList<QPair<QString,QString> > _r = _t->values((*reinterpret_cast< QHttpHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QPair<QString,QString> >*>(_a[0]) = _r; }  break;
        case 26: { QString _r = _t->py_toString((*reinterpret_cast< QHttpHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QHttpHeader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QHttpHeader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QHttpHeader,
      qt_meta_data_PythonQtWrapper_QHttpHeader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QHttpHeader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QHttpHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QHttpHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QHttpHeader))
        return static_cast<void*>(const_cast< PythonQtWrapper_QHttpHeader*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QHttpHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QHttpMultiPart[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       1,   59, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      67,   48,   32,   31, 0x0a,
     136,  124,   32,   31, 0x2a,
     191,  184,   32,   31, 0x0a,
     220,   31,   32,   31, 0x2a,
     245,  241,   31,   31, 0x0a,
     310,  284,   31,   31, 0x0a,
     372,  355,  344,   31, 0x0a,
     424,  398,   31,   31, 0x0a,
     493,  464,   31,   31, 0x0a,

 // enums: name, flags, count, data
     553, 0x0,    4,   63,

 // enum data: key, value
     565, uint(PythonQtWrapper_QHttpMultiPart::MixedType),
     575, uint(PythonQtWrapper_QHttpMultiPart::RelatedType),
     587, uint(PythonQtWrapper_QHttpMultiPart::FormDataType),
     600, uint(PythonQtWrapper_QHttpMultiPart::AlternativeType),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QHttpMultiPart[] = {
    "PythonQtWrapper_QHttpMultiPart\0\0"
    "QHttpMultiPart*\0contentType,parent\0"
    "new_QHttpMultiPart(QHttpMultiPart::ContentType,QObject*)\0"
    "contentType\0new_QHttpMultiPart(QHttpMultiPart::ContentType)\0"
    "parent\0new_QHttpMultiPart(QObject*)\0"
    "new_QHttpMultiPart()\0obj\0"
    "delete_QHttpMultiPart(QHttpMultiPart*)\0"
    "theWrappedObject,httpPart\0"
    "append(QHttpMultiPart*,QHttpPart)\0"
    "QByteArray\0theWrappedObject\0"
    "boundary(QHttpMultiPart*)\0"
    "theWrappedObject,boundary\0"
    "setBoundary(QHttpMultiPart*,QByteArray)\0"
    "theWrappedObject,contentType\0"
    "setContentType(QHttpMultiPart*,QHttpMultiPart::ContentType)\0"
    "ContentType\0MixedType\0RelatedType\0"
    "FormDataType\0AlternativeType\0"
};

void PythonQtWrapper_QHttpMultiPart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QHttpMultiPart *_t = static_cast<PythonQtWrapper_QHttpMultiPart *>(_o);
        switch (_id) {
        case 0: { QHttpMultiPart* _r = _t->new_QHttpMultiPart((*reinterpret_cast< QHttpMultiPart::ContentType(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QHttpMultiPart**>(_a[0]) = _r; }  break;
        case 1: { QHttpMultiPart* _r = _t->new_QHttpMultiPart((*reinterpret_cast< QHttpMultiPart::ContentType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttpMultiPart**>(_a[0]) = _r; }  break;
        case 2: { QHttpMultiPart* _r = _t->new_QHttpMultiPart((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttpMultiPart**>(_a[0]) = _r; }  break;
        case 3: { QHttpMultiPart* _r = _t->new_QHttpMultiPart();
            if (_a[0]) *reinterpret_cast< QHttpMultiPart**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QHttpMultiPart((*reinterpret_cast< QHttpMultiPart*(*)>(_a[1]))); break;
        case 5: _t->append((*reinterpret_cast< QHttpMultiPart*(*)>(_a[1])),(*reinterpret_cast< const QHttpPart(*)>(_a[2]))); break;
        case 6: { QByteArray _r = _t->boundary((*reinterpret_cast< QHttpMultiPart*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 7: _t->setBoundary((*reinterpret_cast< QHttpMultiPart*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 8: _t->setContentType((*reinterpret_cast< QHttpMultiPart*(*)>(_a[1])),(*reinterpret_cast< QHttpMultiPart::ContentType(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QHttpMultiPart::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QHttpMultiPart::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QHttpMultiPart,
      qt_meta_data_PythonQtWrapper_QHttpMultiPart, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QHttpMultiPart::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QHttpMultiPart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QHttpMultiPart::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QHttpMultiPart))
        return static_cast<void*>(const_cast< PythonQtWrapper_QHttpMultiPart*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QHttpMultiPart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QHttpPart[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   26,   27,   26, 0x0a,
      60,   54,   27,   26, 0x0a,
      89,   85,   26,   26, 0x0a,
     146,  123,  118,   26, 0x0a,
     175,  123,   27,   26, 0x0a,
     213,  123,  118,   26, 0x0a,
     264,  242,   26,   26, 0x0a,
     319,  295,   26,   26, 0x0a,
     386,  356,   26,   26, 0x0a,
     487,  447,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QHttpPart[] = {
    "PythonQtWrapper_QHttpPart\0\0QHttpPart*\0"
    "new_QHttpPart()\0other\0new_QHttpPart(QHttpPart)\0"
    "obj\0delete_QHttpPart(QHttpPart*)\0bool\0"
    "theWrappedObject,other\0"
    "__ne__(QHttpPart*,QHttpPart)\0"
    "operator_assign(QHttpPart*,QHttpPart)\0"
    "__eq__(QHttpPart*,QHttpPart)\0"
    "theWrappedObject,body\0"
    "setBody(QHttpPart*,QByteArray)\0"
    "theWrappedObject,device\0"
    "setBodyDevice(QHttpPart*,QIODevice*)\0"
    "theWrappedObject,header,value\0"
    "setHeader(QHttpPart*,QNetworkRequest::KnownHeaders,QVariant)\0"
    "theWrappedObject,headerName,headerValue\0"
    "setRawHeader(QHttpPart*,QByteArray,QByteArray)\0"
};

void PythonQtWrapper_QHttpPart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QHttpPart *_t = static_cast<PythonQtWrapper_QHttpPart *>(_o);
        switch (_id) {
        case 0: { QHttpPart* _r = _t->new_QHttpPart();
            if (_a[0]) *reinterpret_cast< QHttpPart**>(_a[0]) = _r; }  break;
        case 1: { QHttpPart* _r = _t->new_QHttpPart((*reinterpret_cast< const QHttpPart(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttpPart**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QHttpPart((*reinterpret_cast< QHttpPart*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->__ne__((*reinterpret_cast< QHttpPart*(*)>(_a[1])),(*reinterpret_cast< const QHttpPart(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { QHttpPart* _r = _t->operator_assign((*reinterpret_cast< QHttpPart*(*)>(_a[1])),(*reinterpret_cast< const QHttpPart(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QHttpPart**>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->__eq__((*reinterpret_cast< QHttpPart*(*)>(_a[1])),(*reinterpret_cast< const QHttpPart(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->setBody((*reinterpret_cast< QHttpPart*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 7: _t->setBodyDevice((*reinterpret_cast< QHttpPart*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 8: _t->setHeader((*reinterpret_cast< QHttpPart*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::KnownHeaders(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 9: _t->setRawHeader((*reinterpret_cast< QHttpPart*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QHttpPart::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QHttpPart::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QHttpPart,
      qt_meta_data_PythonQtWrapper_QHttpPart, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QHttpPart::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QHttpPart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QHttpPart::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QHttpPart))
        return static_cast<void*>(const_cast< PythonQtWrapper_QHttpPart*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QHttpPart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QHttpRequestHeader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      56,   35,   36,   35, 0x0a,
      88,   81,   36,   35, 0x0a,
     161,  131,   36,   35, 0x0a,
     230,  209,   36,   35, 0x2a,
     286,  274,   36,   35, 0x2a,
     330,  326,   36,   35, 0x0a,
     366,  362,   35,   35, 0x0a,
     434,  417,  413,   35, 0x0a,
     476,  417,  468,   35, 0x0a,
     504,  417,  413,   35, 0x0a,
     572,  543,  538,   35, 0x0a,
     615,  417,  468,   35, 0x0a,
     688,  641,   35,   35, 0x0a,
     782,  744,   35,   35, 0x2a,
     863,  834,   35,   35, 0x2a,
     911,  417,  468,   35, 0x0a,
     941,   35,  468,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QHttpRequestHeader[] = {
    "PythonQtWrapper_QHttpRequestHeader\0\0"
    "QHttpRequestHeader*\0new_QHttpRequestHeader()\0"
    "header\0new_QHttpRequestHeader(QHttpRequestHeader)\0"
    "method,path,majorVer,minorVer\0"
    "new_QHttpRequestHeader(QString,QString,int,int)\0"
    "method,path,majorVer\0"
    "new_QHttpRequestHeader(QString,QString,int)\0"
    "method,path\0new_QHttpRequestHeader(QString,QString)\0"
    "str\0new_QHttpRequestHeader(QString)\0"
    "obj\0delete_QHttpRequestHeader(QHttpRequestHeader*)\0"
    "int\0theWrappedObject\0"
    "majorVersion(QHttpRequestHeader*)\0"
    "QString\0method(QHttpRequestHeader*)\0"
    "minorVersion(QHttpRequestHeader*)\0"
    "bool\0theWrappedObject,line,number\0"
    "parseLine(QHttpRequestHeader*,QString,int)\0"
    "path(QHttpRequestHeader*)\0"
    "theWrappedObject,method,path,majorVer,minorVer\0"
    "setRequest(QHttpRequestHeader*,QString,QString,int,int)\0"
    "theWrappedObject,method,path,majorVer\0"
    "setRequest(QHttpRequestHeader*,QString,QString,int)\0"
    "theWrappedObject,method,path\0"
    "setRequest(QHttpRequestHeader*,QString,QString)\0"
    "toString(QHttpRequestHeader*)\0"
    "py_toString(QHttpRequestHeader*)\0"
};

void PythonQtWrapper_QHttpRequestHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QHttpRequestHeader *_t = static_cast<PythonQtWrapper_QHttpRequestHeader *>(_o);
        switch (_id) {
        case 0: { QHttpRequestHeader* _r = _t->new_QHttpRequestHeader();
            if (_a[0]) *reinterpret_cast< QHttpRequestHeader**>(_a[0]) = _r; }  break;
        case 1: { QHttpRequestHeader* _r = _t->new_QHttpRequestHeader((*reinterpret_cast< const QHttpRequestHeader(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttpRequestHeader**>(_a[0]) = _r; }  break;
        case 2: { QHttpRequestHeader* _r = _t->new_QHttpRequestHeader((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QHttpRequestHeader**>(_a[0]) = _r; }  break;
        case 3: { QHttpRequestHeader* _r = _t->new_QHttpRequestHeader((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QHttpRequestHeader**>(_a[0]) = _r; }  break;
        case 4: { QHttpRequestHeader* _r = _t->new_QHttpRequestHeader((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QHttpRequestHeader**>(_a[0]) = _r; }  break;
        case 5: { QHttpRequestHeader* _r = _t->new_QHttpRequestHeader((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttpRequestHeader**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QHttpRequestHeader((*reinterpret_cast< QHttpRequestHeader*(*)>(_a[1]))); break;
        case 7: { int _r = _t->majorVersion((*reinterpret_cast< QHttpRequestHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->method((*reinterpret_cast< QHttpRequestHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->minorVersion((*reinterpret_cast< QHttpRequestHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->parseLine((*reinterpret_cast< QHttpRequestHeader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->path((*reinterpret_cast< QHttpRequestHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: _t->setRequest((*reinterpret_cast< QHttpRequestHeader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 13: _t->setRequest((*reinterpret_cast< QHttpRequestHeader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 14: _t->setRequest((*reinterpret_cast< QHttpRequestHeader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 15: { QString _r = _t->toString((*reinterpret_cast< QHttpRequestHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->py_toString((*reinterpret_cast< QHttpRequestHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QHttpRequestHeader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QHttpRequestHeader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QHttpRequestHeader,
      qt_meta_data_PythonQtWrapper_QHttpRequestHeader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QHttpRequestHeader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QHttpRequestHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QHttpRequestHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QHttpRequestHeader))
        return static_cast<void*>(const_cast< PythonQtWrapper_QHttpRequestHeader*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QHttpRequestHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QHttpResponseHeader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      58,   36,   37,   36, 0x0a,
      91,   84,   37,   36, 0x0a,
     140,  136,   37,   36, 0x0a,
     201,  173,   37,   36, 0x0a,
     265,  246,   37,   36, 0x2a,
     316,  306,   37,   36, 0x2a,
     358,  353,   37,   36, 0x2a,
     391,  387,   36,   36, 0x0a,
     461,  444,  440,   36, 0x0a,
     496,  444,  440,   36, 0x0a,
     565,  536,  531,   36, 0x0a,
     617,  444,  609,   36, 0x0a,
     697,  652,   36,   36, 0x0a,
     789,  753,   36,   36, 0x2a,
     868,  841,   36,   36, 0x2a,
     938,  916,   36,   36, 0x2a,
     978,  444,  440,   36, 0x0a,
    1011,  444,  609,   36, 0x0a,
    1042,   36,  609,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QHttpResponseHeader[] = {
    "PythonQtWrapper_QHttpResponseHeader\0"
    "\0QHttpResponseHeader*\0new_QHttpResponseHeader()\0"
    "header\0new_QHttpResponseHeader(QHttpResponseHeader)\0"
    "str\0new_QHttpResponseHeader(QString)\0"
    "code,text,majorVer,minorVer\0"
    "new_QHttpResponseHeader(int,QString,int,int)\0"
    "code,text,majorVer\0"
    "new_QHttpResponseHeader(int,QString,int)\0"
    "code,text\0new_QHttpResponseHeader(int,QString)\0"
    "code\0new_QHttpResponseHeader(int)\0obj\0"
    "delete_QHttpResponseHeader(QHttpResponseHeader*)\0"
    "int\0theWrappedObject\0"
    "majorVersion(QHttpResponseHeader*)\0"
    "minorVersion(QHttpResponseHeader*)\0"
    "bool\0theWrappedObject,line,number\0"
    "parseLine(QHttpResponseHeader*,QString,int)\0"
    "QString\0reasonPhrase(QHttpResponseHeader*)\0"
    "theWrappedObject,code,text,majorVer,minorVer\0"
    "setStatusLine(QHttpResponseHeader*,int,QString,int,int)\0"
    "theWrappedObject,code,text,majorVer\0"
    "setStatusLine(QHttpResponseHeader*,int,QString,int)\0"
    "theWrappedObject,code,text\0"
    "setStatusLine(QHttpResponseHeader*,int,QString)\0"
    "theWrappedObject,code\0"
    "setStatusLine(QHttpResponseHeader*,int)\0"
    "statusCode(QHttpResponseHeader*)\0"
    "toString(QHttpResponseHeader*)\0"
    "py_toString(QHttpResponseHeader*)\0"
};

void PythonQtWrapper_QHttpResponseHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QHttpResponseHeader *_t = static_cast<PythonQtWrapper_QHttpResponseHeader *>(_o);
        switch (_id) {
        case 0: { QHttpResponseHeader* _r = _t->new_QHttpResponseHeader();
            if (_a[0]) *reinterpret_cast< QHttpResponseHeader**>(_a[0]) = _r; }  break;
        case 1: { QHttpResponseHeader* _r = _t->new_QHttpResponseHeader((*reinterpret_cast< const QHttpResponseHeader(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttpResponseHeader**>(_a[0]) = _r; }  break;
        case 2: { QHttpResponseHeader* _r = _t->new_QHttpResponseHeader((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttpResponseHeader**>(_a[0]) = _r; }  break;
        case 3: { QHttpResponseHeader* _r = _t->new_QHttpResponseHeader((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QHttpResponseHeader**>(_a[0]) = _r; }  break;
        case 4: { QHttpResponseHeader* _r = _t->new_QHttpResponseHeader((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QHttpResponseHeader**>(_a[0]) = _r; }  break;
        case 5: { QHttpResponseHeader* _r = _t->new_QHttpResponseHeader((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QHttpResponseHeader**>(_a[0]) = _r; }  break;
        case 6: { QHttpResponseHeader* _r = _t->new_QHttpResponseHeader((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttpResponseHeader**>(_a[0]) = _r; }  break;
        case 7: _t->delete_QHttpResponseHeader((*reinterpret_cast< QHttpResponseHeader*(*)>(_a[1]))); break;
        case 8: { int _r = _t->majorVersion((*reinterpret_cast< QHttpResponseHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->minorVersion((*reinterpret_cast< QHttpResponseHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->parseLine((*reinterpret_cast< QHttpResponseHeader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->reasonPhrase((*reinterpret_cast< QHttpResponseHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: _t->setStatusLine((*reinterpret_cast< QHttpResponseHeader*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 13: _t->setStatusLine((*reinterpret_cast< QHttpResponseHeader*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 14: _t->setStatusLine((*reinterpret_cast< QHttpResponseHeader*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 15: _t->setStatusLine((*reinterpret_cast< QHttpResponseHeader*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: { int _r = _t->statusCode((*reinterpret_cast< QHttpResponseHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->toString((*reinterpret_cast< QHttpResponseHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->py_toString((*reinterpret_cast< QHttpResponseHeader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QHttpResponseHeader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QHttpResponseHeader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QHttpResponseHeader,
      qt_meta_data_PythonQtWrapper_QHttpResponseHeader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QHttpResponseHeader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QHttpResponseHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QHttpResponseHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QHttpResponseHeader))
        return static_cast<void*>(const_cast< PythonQtWrapper_QHttpResponseHeader*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QHttpResponseHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QIPv6Address[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   29,   30,   29, 0x0a,
      69,   63,   30,   29, 0x0a,
     104,  100,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QIPv6Address[] = {
    "PythonQtWrapper_QIPv6Address\0\0"
    "QIPv6Address*\0new_QIPv6Address()\0other\0"
    "new_QIPv6Address(QIPv6Address)\0obj\0"
    "delete_QIPv6Address(QIPv6Address*)\0"
};

void PythonQtWrapper_QIPv6Address::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QIPv6Address *_t = static_cast<PythonQtWrapper_QIPv6Address *>(_o);
        switch (_id) {
        case 0: { QIPv6Address* _r = _t->new_QIPv6Address();
            if (_a[0]) *reinterpret_cast< QIPv6Address**>(_a[0]) = _r; }  break;
        case 1: { QIPv6Address* _r = _t->new_QIPv6Address((*reinterpret_cast< const QIPv6Address(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIPv6Address**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QIPv6Address((*reinterpret_cast< QIPv6Address*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QIPv6Address::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QIPv6Address::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QIPv6Address,
      qt_meta_data_PythonQtWrapper_QIPv6Address, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QIPv6Address::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QIPv6Address::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QIPv6Address::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QIPv6Address))
        return static_cast<void*>(const_cast< PythonQtWrapper_QIPv6Address*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QIPv6Address::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QLocalServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      51,   44,   30,   29, 0x0a,
      78,   29,   30,   29, 0x2a,
     101,   97,   29,   29, 0x0a,
     153,  136,   29,   29, 0x0a,
     182,  136,  174,   29, 0x0a,
     209,  136,  174,   29, 0x0a,
     244,  136,  239,   29, 0x0a,
     315,  281,   29,   29, 0x0a,
     358,  136,  239,   29, 0x0a,
     407,  385,  239,   29, 0x0a,
     441,  136,  437,   29, 0x0a,
     492,  136,  478,   29, 0x0a,
     534,  529,  239,   29, 0x0a,
     605,  136,  576,   29, 0x0a,
     632,  136,  174,   29, 0x0a,
     690,  658,   29,   29, 0x0a,
     765,  734,  239,   29, 0x0a,
     833,  811,  239,   29, 0x2a,
     873,  136,  239,   29, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QLocalServer[] = {
    "PythonQtWrapper_QLocalServer\0\0"
    "QLocalServer*\0parent\0new_QLocalServer(QObject*)\0"
    "new_QLocalServer()\0obj\0"
    "delete_QLocalServer(QLocalServer*)\0"
    "theWrappedObject\0close(QLocalServer*)\0"
    "QString\0errorString(QLocalServer*)\0"
    "fullServerName(QLocalServer*)\0bool\0"
    "hasPendingConnections(QLocalServer*)\0"
    "theWrappedObject,socketDescriptor\0"
    "incomingConnection(QLocalServer*,quintptr)\0"
    "isListening(QLocalServer*)\0"
    "theWrappedObject,name\0"
    "listen(QLocalServer*,QString)\0int\0"
    "maxPendingConnections(QLocalServer*)\0"
    "QLocalSocket*\0nextPendingConnection(QLocalServer*)\0"
    "name\0static_QLocalServer_removeServer(QString)\0"
    "QAbstractSocket::SocketError\0"
    "serverError(QLocalServer*)\0"
    "serverName(QLocalServer*)\0"
    "theWrappedObject,numConnections\0"
    "setMaxPendingConnections(QLocalServer*,int)\0"
    "theWrappedObject,msec,timedOut\0"
    "waitForNewConnection(QLocalServer*,int,bool*)\0"
    "theWrappedObject,msec\0"
    "waitForNewConnection(QLocalServer*,int)\0"
    "waitForNewConnection(QLocalServer*)\0"
};

void PythonQtWrapper_QLocalServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QLocalServer *_t = static_cast<PythonQtWrapper_QLocalServer *>(_o);
        switch (_id) {
        case 0: { QLocalServer* _r = _t->new_QLocalServer((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocalServer**>(_a[0]) = _r; }  break;
        case 1: { QLocalServer* _r = _t->new_QLocalServer();
            if (_a[0]) *reinterpret_cast< QLocalServer**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QLocalServer((*reinterpret_cast< QLocalServer*(*)>(_a[1]))); break;
        case 3: _t->close((*reinterpret_cast< QLocalServer*(*)>(_a[1]))); break;
        case 4: { QString _r = _t->errorString((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->fullServerName((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->hasPendingConnections((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->incomingConnection((*reinterpret_cast< QLocalServer*(*)>(_a[1])),(*reinterpret_cast< quintptr(*)>(_a[2]))); break;
        case 8: { bool _r = _t->isListening((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->listen((*reinterpret_cast< QLocalServer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->maxPendingConnections((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QLocalSocket* _r = _t->nextPendingConnection((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocalSocket**>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->static_QLocalServer_removeServer((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QAbstractSocket::SocketError _r = _t->serverError((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractSocket::SocketError*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->serverName((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: _t->setMaxPendingConnections((*reinterpret_cast< QLocalServer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: { bool _r = _t->waitForNewConnection((*reinterpret_cast< QLocalServer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->waitForNewConnection((*reinterpret_cast< QLocalServer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->waitForNewConnection((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QLocalServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QLocalServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QLocalServer,
      qt_meta_data_PythonQtWrapper_QLocalServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QLocalServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QLocalServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QLocalServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QLocalServer))
        return static_cast<void*>(const_cast< PythonQtWrapper_QLocalServer*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QLocalServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QLocalSocket[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       2,  184, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      51,   44,   30,   29, 0x0a,
      78,   29,   30,   29, 0x2a,
     101,   97,   29,   29, 0x0a,
     153,  136,   29,   29, 0x0a,
     181,  136,  174,   29, 0x0a,
     211,  136,  174,   29, 0x0a,
     244,  136,  239,   29, 0x0a,
     271,  136,   29,   29, 0x0a,
     323,  292,   29,   29, 0x0a,
     404,  382,   29,   29, 0x2a,
     443,  136,   29,   29, 0x0a,
     510,  136,  479,   29, 0x0a,
     531,  136,  239,   29, 0x0a,
     560,  136,  552,   29, 0x0a,
     590,  136,  239,   29, 0x0a,
     618,  136,  239,   29, 0x0a,
     641,  136,  174,   29, 0x0a,
     702,  671,  174,   29, 0x0a,
     739,  136,  552,   29, 0x0a,
     787,  765,   29,   29, 0x0a,
     882,  827,  239,   29, 0x0a,
    1023,  977,  239,   29, 0x2a,
    1132, 1098,  239,   29, 0x2a,
    1185,  136, 1176,   29, 0x0a,
    1248,  136, 1217,   29, 0x0a,
    1292, 1269,  239,   29, 0x0a,
    1331,  136,  239,   29, 0x2a,
    1366, 1269,  239,   29, 0x0a,
    1402,  136,  239,   29, 0x2a,
    1434, 1269,  239,   29, 0x0a,
    1473,  136,  239,   29, 0x2a,
    1508, 1269,  239,   29, 0x0a,
    1544,  136,  239,   29, 0x2a,
    1576,  671,  174,   29, 0x0a,

 // enums: name, flags, count, data
    1620, 0x0,   10,  192,
    1637, 0x0,    4,  212,

 // enum data: key, value
    1654, uint(PythonQtWrapper_QLocalSocket::ConnectionRefusedError),
    1677, uint(PythonQtWrapper_QLocalSocket::PeerClosedError),
    1693, uint(PythonQtWrapper_QLocalSocket::ServerNotFoundError),
    1713, uint(PythonQtWrapper_QLocalSocket::SocketAccessError),
    1731, uint(PythonQtWrapper_QLocalSocket::SocketResourceError),
    1751, uint(PythonQtWrapper_QLocalSocket::SocketTimeoutError),
    1770, uint(PythonQtWrapper_QLocalSocket::DatagramTooLargeError),
    1792, uint(PythonQtWrapper_QLocalSocket::ConnectionError),
    1808, uint(PythonQtWrapper_QLocalSocket::UnsupportedSocketOperationError),
    1840, uint(PythonQtWrapper_QLocalSocket::UnknownSocketError),
    1859, uint(PythonQtWrapper_QLocalSocket::UnconnectedState),
    1876, uint(PythonQtWrapper_QLocalSocket::ConnectingState),
    1892, uint(PythonQtWrapper_QLocalSocket::ConnectedState),
    1907, uint(PythonQtWrapper_QLocalSocket::ClosingState),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QLocalSocket[] = {
    "PythonQtWrapper_QLocalSocket\0\0"
    "QLocalSocket*\0parent\0new_QLocalSocket(QObject*)\0"
    "new_QLocalSocket()\0obj\0"
    "delete_QLocalSocket(QLocalSocket*)\0"
    "theWrappedObject\0abort(QLocalSocket*)\0"
    "qint64\0bytesAvailable(QLocalSocket*)\0"
    "bytesToWrite(QLocalSocket*)\0bool\0"
    "canReadLine(QLocalSocket*)\0"
    "close(QLocalSocket*)\0"
    "theWrappedObject,name,openMode\0"
    "connectToServer(QLocalSocket*,QString,QIODevice::OpenMode)\0"
    "theWrappedObject,name\0"
    "connectToServer(QLocalSocket*,QString)\0"
    "disconnectFromServer(QLocalSocket*)\0"
    "QLocalSocket::LocalSocketError\0"
    "error(QLocalSocket*)\0flush(QLocalSocket*)\0"
    "QString\0fullServerName(QLocalSocket*)\0"
    "isSequential(QLocalSocket*)\0"
    "isValid(QLocalSocket*)\0"
    "readBufferSize(QLocalSocket*)\0"
    "theWrappedObject,arg__1,arg__2\0"
    "readData(QLocalSocket*,char*,qint64)\0"
    "serverName(QLocalSocket*)\0"
    "theWrappedObject,size\0"
    "setReadBufferSize(QLocalSocket*,qint64)\0"
    "theWrappedObject,socketDescriptor,socketState,openMode\0"
    "setSocketDescriptor(QLocalSocket*,quintptr,QLocalSocket::LocalSocketSt"
    "ate,QIODevice::OpenMode)\0"
    "theWrappedObject,socketDescriptor,socketState\0"
    "setSocketDescriptor(QLocalSocket*,quintptr,QLocalSocket::LocalSocketSt"
    "ate)\0"
    "theWrappedObject,socketDescriptor\0"
    "setSocketDescriptor(QLocalSocket*,quintptr)\0"
    "quintptr\0socketDescriptor(QLocalSocket*)\0"
    "QLocalSocket::LocalSocketState\0"
    "state(QLocalSocket*)\0theWrappedObject,msecs\0"
    "waitForBytesWritten(QLocalSocket*,int)\0"
    "waitForBytesWritten(QLocalSocket*)\0"
    "waitForConnected(QLocalSocket*,int)\0"
    "waitForConnected(QLocalSocket*)\0"
    "waitForDisconnected(QLocalSocket*,int)\0"
    "waitForDisconnected(QLocalSocket*)\0"
    "waitForReadyRead(QLocalSocket*,int)\0"
    "waitForReadyRead(QLocalSocket*)\0"
    "writeData(QLocalSocket*,const char*,qint64)\0"
    "LocalSocketError\0LocalSocketState\0"
    "ConnectionRefusedError\0PeerClosedError\0"
    "ServerNotFoundError\0SocketAccessError\0"
    "SocketResourceError\0SocketTimeoutError\0"
    "DatagramTooLargeError\0ConnectionError\0"
    "UnsupportedSocketOperationError\0"
    "UnknownSocketError\0UnconnectedState\0"
    "ConnectingState\0ConnectedState\0"
    "ClosingState\0"
};

void PythonQtWrapper_QLocalSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QLocalSocket *_t = static_cast<PythonQtWrapper_QLocalSocket *>(_o);
        switch (_id) {
        case 0: { QLocalSocket* _r = _t->new_QLocalSocket((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocalSocket**>(_a[0]) = _r; }  break;
        case 1: { QLocalSocket* _r = _t->new_QLocalSocket();
            if (_a[0]) *reinterpret_cast< QLocalSocket**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QLocalSocket((*reinterpret_cast< QLocalSocket*(*)>(_a[1]))); break;
        case 3: _t->abort((*reinterpret_cast< QLocalSocket*(*)>(_a[1]))); break;
        case 4: { qint64 _r = _t->bytesAvailable((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 5: { qint64 _r = _t->bytesToWrite((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->canReadLine((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->close((*reinterpret_cast< QLocalSocket*(*)>(_a[1]))); break;
        case 8: _t->connectToServer((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[3]))); break;
        case 9: _t->connectToServer((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->disconnectFromServer((*reinterpret_cast< QLocalSocket*(*)>(_a[1]))); break;
        case 11: { QLocalSocket::LocalSocketError _r = _t->error((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocalSocket::LocalSocketError*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->flush((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->fullServerName((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isSequential((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isValid((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { qint64 _r = _t->readBufferSize((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 17: { qint64 _r = _t->readData((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->serverName((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: _t->setReadBufferSize((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 20: { bool _r = _t->setSocketDescriptor((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< quintptr(*)>(_a[2])),(*reinterpret_cast< QLocalSocket::LocalSocketState(*)>(_a[3])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->setSocketDescriptor((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< quintptr(*)>(_a[2])),(*reinterpret_cast< QLocalSocket::LocalSocketState(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->setSocketDescriptor((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< quintptr(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { quintptr _r = _t->socketDescriptor((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quintptr*>(_a[0]) = _r; }  break;
        case 24: { QLocalSocket::LocalSocketState _r = _t->state((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocalSocket::LocalSocketState*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->waitForBytesWritten((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->waitForBytesWritten((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->waitForConnected((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->waitForConnected((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->waitForDisconnected((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->waitForDisconnected((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->waitForReadyRead((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->waitForReadyRead((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { qint64 _r = _t->writeData((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QLocalSocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QLocalSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QLocalSocket,
      qt_meta_data_PythonQtWrapper_QLocalSocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QLocalSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QLocalSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QLocalSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QLocalSocket))
        return static_cast<void*>(const_cast< PythonQtWrapper_QLocalSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QLocalSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QNetworkAccessManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       2,  159, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      69,   62,   39,   38, 0x0a,
     105,   38,   39,   38, 0x2a,
     137,  133,   38,   38, 0x0a,
     229,  212,  190,   38, 0x0a,
     296,  212,  273,   38, 0x0a,
     326,  212,  190,   38, 0x0a,
     383,  212,  364,   38, 0x0a,
     473,  432,  417,   38, 0x0a,
     599,  571,  417,   38, 0x2a,
     711,  686,  417,   38, 0x0a,
     766,  686,  417,   38, 0x0a,
     810,  686,  417,   38, 0x0a,
     899,  212,  855,   38, 0x0a,
     976,  941,  417,   38, 0x0a,
    1067, 1037,  417,   38, 0x0a,
    1123, 1037,  417,   38, 0x0a,
    1193,  212, 1179,   38, 0x0a,
    1245,  212, 1223,   38, 0x0a,
    1282,  941,  417,   38, 0x0a,
    1342, 1037,  417,   38, 0x0a,
    1397, 1037,  417,   38, 0x0a,
    1487, 1452,  417,   38, 0x0a,
    1597, 1567,  417,   38, 0x2a,
    1689, 1666,   38,   38, 0x0a,
    1769, 1745,   38,   38, 0x0a,
    1859, 1832,   38,   38, 0x0a,
    1943, 1915,   38,   38, 0x0a,
    2055, 2032,   38,   38, 0x0a,
    2127, 2102,   38,   38, 0x0a,

 // enums: name, flags, count, data
    2189, 0x0,    3,  167,
    2210, 0x0,    7,  173,

 // enum data: key, value
    2220, uint(PythonQtWrapper_QNetworkAccessManager::UnknownAccessibility),
    2241, uint(PythonQtWrapper_QNetworkAccessManager::NotAccessible),
    2255, uint(PythonQtWrapper_QNetworkAccessManager::Accessible),
    2266, uint(PythonQtWrapper_QNetworkAccessManager::HeadOperation),
    2280, uint(PythonQtWrapper_QNetworkAccessManager::GetOperation),
    2293, uint(PythonQtWrapper_QNetworkAccessManager::PutOperation),
    2306, uint(PythonQtWrapper_QNetworkAccessManager::PostOperation),
    2320, uint(PythonQtWrapper_QNetworkAccessManager::DeleteOperation),
    2336, uint(PythonQtWrapper_QNetworkAccessManager::CustomOperation),
    2352, uint(PythonQtWrapper_QNetworkAccessManager::UnknownOperation),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QNetworkAccessManager[] = {
    "PythonQtWrapper_QNetworkAccessManager\0"
    "\0QNetworkAccessManager*\0parent\0"
    "new_QNetworkAccessManager(QObject*)\0"
    "new_QNetworkAccessManager()\0obj\0"
    "delete_QNetworkAccessManager(QNetworkAccessManager*)\0"
    "QNetworkConfiguration\0theWrappedObject\0"
    "activeConfiguration(QNetworkAccessManager*)\0"
    "QAbstractNetworkCache*\0"
    "cache(QNetworkAccessManager*)\0"
    "configuration(QNetworkAccessManager*)\0"
    "QNetworkCookieJar*\0cookieJar(QNetworkAccessManager*)\0"
    "QNetworkReply*\0theWrappedObject,op,request,outgoingData\0"
    "createRequest(QNetworkAccessManager*,QNetworkAccessManager::Operation,"
    "QNetworkRequest,QIODevice*)\0"
    "theWrappedObject,op,request\0"
    "createRequest(QNetworkAccessManager*,QNetworkAccessManager::Operation,"
    "QNetworkRequest)\0"
    "theWrappedObject,request\0"
    "deleteResource(QNetworkAccessManager*,QNetworkRequest)\0"
    "get(QNetworkAccessManager*,QNetworkRequest)\0"
    "head(QNetworkAccessManager*,QNetworkRequest)\0"
    "QNetworkAccessManager::NetworkAccessibility\0"
    "networkAccessible(QNetworkAccessManager*)\0"
    "theWrappedObject,request,multiPart\0"
    "post(QNetworkAccessManager*,QNetworkRequest,QHttpMultiPart*)\0"
    "theWrappedObject,request,data\0"
    "post(QNetworkAccessManager*,QNetworkRequest,QIODevice*)\0"
    "post(QNetworkAccessManager*,QNetworkRequest,QByteArray)\0"
    "QNetworkProxy\0proxy(QNetworkAccessManager*)\0"
    "QNetworkProxyFactory*\0"
    "proxyFactory(QNetworkAccessManager*)\0"
    "put(QNetworkAccessManager*,QNetworkRequest,QHttpMultiPart*)\0"
    "put(QNetworkAccessManager*,QNetworkRequest,QIODevice*)\0"
    "put(QNetworkAccessManager*,QNetworkRequest,QByteArray)\0"
    "theWrappedObject,request,verb,data\0"
    "sendCustomRequest(QNetworkAccessManager*,QNetworkRequest,QByteArray,QI"
    "ODevice*)\0"
    "theWrappedObject,request,verb\0"
    "sendCustomRequest(QNetworkAccessManager*,QNetworkRequest,QByteArray)\0"
    "theWrappedObject,cache\0"
    "setCache(QNetworkAccessManager*,QAbstractNetworkCache*)\0"
    "theWrappedObject,config\0"
    "setConfiguration(QNetworkAccessManager*,QNetworkConfiguration)\0"
    "theWrappedObject,cookieJar\0"
    "setCookieJar(QNetworkAccessManager*,QNetworkCookieJar*)\0"
    "theWrappedObject,accessible\0"
    "setNetworkAccessible(QNetworkAccessManager*,QNetworkAccessManager::Net"
    "workAccessibility)\0"
    "theWrappedObject,proxy\0"
    "setProxy(QNetworkAccessManager*,QNetworkProxy)\0"
    "theWrappedObject,factory\0"
    "setProxyFactory(QNetworkAccessManager*,QNetworkProxyFactory*)\0"
    "NetworkAccessibility\0Operation\0"
    "UnknownAccessibility\0NotAccessible\0"
    "Accessible\0HeadOperation\0GetOperation\0"
    "PutOperation\0PostOperation\0DeleteOperation\0"
    "CustomOperation\0UnknownOperation\0"
};

void PythonQtWrapper_QNetworkAccessManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QNetworkAccessManager *_t = static_cast<PythonQtWrapper_QNetworkAccessManager *>(_o);
        switch (_id) {
        case 0: { QNetworkAccessManager* _r = _t->new_QNetworkAccessManager((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkAccessManager**>(_a[0]) = _r; }  break;
        case 1: { QNetworkAccessManager* _r = _t->new_QNetworkAccessManager();
            if (_a[0]) *reinterpret_cast< QNetworkAccessManager**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkAccessManager((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1]))); break;
        case 3: { QNetworkConfiguration _r = _t->activeConfiguration((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration*>(_a[0]) = _r; }  break;
        case 4: { QAbstractNetworkCache* _r = _t->cache((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractNetworkCache**>(_a[0]) = _r; }  break;
        case 5: { QNetworkConfiguration _r = _t->configuration((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration*>(_a[0]) = _r; }  break;
        case 6: { QNetworkCookieJar* _r = _t->cookieJar((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkCookieJar**>(_a[0]) = _r; }  break;
        case 7: { QNetworkReply* _r = _t->createRequest((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< QNetworkAccessManager::Operation(*)>(_a[2])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[3])),(*reinterpret_cast< QIODevice*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 8: { QNetworkReply* _r = _t->createRequest((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< QNetworkAccessManager::Operation(*)>(_a[2])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 9: { QNetworkReply* _r = _t->deleteResource((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 10: { QNetworkReply* _r = _t->get((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 11: { QNetworkReply* _r = _t->head((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 12: { QNetworkAccessManager::NetworkAccessibility _r = _t->networkAccessible((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkAccessManager::NetworkAccessibility*>(_a[0]) = _r; }  break;
        case 13: { QNetworkReply* _r = _t->post((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< QHttpMultiPart*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 14: { QNetworkReply* _r = _t->post((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 15: { QNetworkReply* _r = _t->post((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 16: { QNetworkProxy _r = _t->proxy((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy*>(_a[0]) = _r; }  break;
        case 17: { QNetworkProxyFactory* _r = _t->proxyFactory((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyFactory**>(_a[0]) = _r; }  break;
        case 18: { QNetworkReply* _r = _t->put((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< QHttpMultiPart*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 19: { QNetworkReply* _r = _t->put((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 20: { QNetworkReply* _r = _t->put((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 21: { QNetworkReply* _r = _t->sendCustomRequest((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])),(*reinterpret_cast< QIODevice*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 22: { QNetworkReply* _r = _t->sendCustomRequest((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 23: _t->setCache((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[2]))); break;
        case 24: _t->setConfiguration((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkConfiguration(*)>(_a[2]))); break;
        case 25: _t->setCookieJar((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< QNetworkCookieJar*(*)>(_a[2]))); break;
        case 26: _t->setNetworkAccessible((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< QNetworkAccessManager::NetworkAccessibility(*)>(_a[2]))); break;
        case 27: _t->setProxy((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkProxy(*)>(_a[2]))); break;
        case 28: _t->setProxyFactory((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< QNetworkProxyFactory*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QNetworkAccessManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QNetworkAccessManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkAccessManager,
      qt_meta_data_PythonQtWrapper_QNetworkAccessManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QNetworkAccessManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QNetworkAccessManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkAccessManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkAccessManager))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkAccessManager*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkAccessManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QNetworkAddressEntry[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      60,   37,   38,   37, 0x0a,
      93,   87,   38,   37, 0x0a,
     144,  140,   37,   37, 0x0a,
     225,  208,  195,   37, 0x0a,
     258,  208,  195,   37, 0x0a,
     284,  208,  195,   37, 0x0a,
     343,  320,  315,   37, 0x0a,
     394,  320,  315,   37, 0x0a,
     449,  208,  445,   37, 0x0a,
     515,  485,   37,   37, 0x0a,
     587,  564,   37,   37, 0x0a,
     657,  629,   37,   37, 0x0a,
     728,  704,   37,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QNetworkAddressEntry[] = {
    "PythonQtWrapper_QNetworkAddressEntry\0"
    "\0QNetworkAddressEntry*\0"
    "new_QNetworkAddressEntry()\0other\0"
    "new_QNetworkAddressEntry(QNetworkAddressEntry)\0"
    "obj\0delete_QNetworkAddressEntry(QNetworkAddressEntry*)\0"
    "QHostAddress\0theWrappedObject\0"
    "broadcast(QNetworkAddressEntry*)\0"
    "ip(QNetworkAddressEntry*)\0"
    "netmask(QNetworkAddressEntry*)\0bool\0"
    "theWrappedObject,other\0"
    "__ne__(QNetworkAddressEntry*,QNetworkAddressEntry)\0"
    "__eq__(QNetworkAddressEntry*,QNetworkAddressEntry)\0"
    "int\0prefixLength(QNetworkAddressEntry*)\0"
    "theWrappedObject,newBroadcast\0"
    "setBroadcast(QNetworkAddressEntry*,QHostAddress)\0"
    "theWrappedObject,newIp\0"
    "setIp(QNetworkAddressEntry*,QHostAddress)\0"
    "theWrappedObject,newNetmask\0"
    "setNetmask(QNetworkAddressEntry*,QHostAddress)\0"
    "theWrappedObject,length\0"
    "setPrefixLength(QNetworkAddressEntry*,int)\0"
};

void PythonQtWrapper_QNetworkAddressEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QNetworkAddressEntry *_t = static_cast<PythonQtWrapper_QNetworkAddressEntry *>(_o);
        switch (_id) {
        case 0: { QNetworkAddressEntry* _r = _t->new_QNetworkAddressEntry();
            if (_a[0]) *reinterpret_cast< QNetworkAddressEntry**>(_a[0]) = _r; }  break;
        case 1: { QNetworkAddressEntry* _r = _t->new_QNetworkAddressEntry((*reinterpret_cast< const QNetworkAddressEntry(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkAddressEntry**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkAddressEntry((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1]))); break;
        case 3: { QHostAddress _r = _t->broadcast((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress*>(_a[0]) = _r; }  break;
        case 4: { QHostAddress _r = _t->ip((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress*>(_a[0]) = _r; }  break;
        case 5: { QHostAddress _r = _t->netmask((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->__ne__((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])),(*reinterpret_cast< const QNetworkAddressEntry(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->__eq__((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])),(*reinterpret_cast< const QNetworkAddressEntry(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->prefixLength((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: _t->setBroadcast((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2]))); break;
        case 10: _t->setIp((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2]))); break;
        case 11: _t->setNetmask((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2]))); break;
        case 12: _t->setPrefixLength((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QNetworkAddressEntry::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QNetworkAddressEntry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkAddressEntry,
      qt_meta_data_PythonQtWrapper_QNetworkAddressEntry, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QNetworkAddressEntry::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QNetworkAddressEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkAddressEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkAddressEntry))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkAddressEntry*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkAddressEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QNetworkCacheMetaData[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      62,   38,   39,   38, 0x0a,
      96,   90,   39,   38, 0x0a,
     149,  145,   38,   38, 0x0a,
     262,  245,  202,   38, 0x0a,
     307,  245,  297,   38, 0x0a,
     351,  245,  346,   38, 0x0a,
     383,  245,  297,   38, 0x0a,
     443,  420,  346,   38, 0x0a,
     520,  496,   38,   38, 0x0a,
     565,  420,  346,   38, 0x0a,
     618,  496,   38,   38, 0x0a,
     701,  245,  664,   38, 0x0a,
     736,  245,  346,   38, 0x0a,
     799,  771,   38,   38, 0x0a,
     906,  880,   38,   38, 0x0a,
     958,  880,   38,   38, 0x0a,
    1033, 1008,   38,   38, 0x0a,
    1131, 1108,   38,   38, 0x0a,
    1195, 1174,   38,   38, 0x0a,
    1236,  245, 1231,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QNetworkCacheMetaData[] = {
    "PythonQtWrapper_QNetworkCacheMetaData\0"
    "\0QNetworkCacheMetaData*\0"
    "new_QNetworkCacheMetaData()\0other\0"
    "new_QNetworkCacheMetaData(QNetworkCacheMetaData)\0"
    "obj\0delete_QNetworkCacheMetaData(QNetworkCacheMetaData*)\0"
    "QHash<QNetworkRequest::Attribute,QVariant>\0"
    "theWrappedObject\0attributes(QNetworkCacheMetaData*)\0"
    "QDateTime\0expirationDate(QNetworkCacheMetaData*)\0"
    "bool\0isValid(QNetworkCacheMetaData*)\0"
    "lastModified(QNetworkCacheMetaData*)\0"
    "theWrappedObject,other\0"
    "__ne__(QNetworkCacheMetaData*,QNetworkCacheMetaData)\0"
    "theWrappedObject,arg__1\0"
    "writeTo(QNetworkCacheMetaData*,QDataStream&)\0"
    "__eq__(QNetworkCacheMetaData*,QNetworkCacheMetaData)\0"
    "readFrom(QNetworkCacheMetaData*,QDataStream&)\0"
    "QList<QPair<QByteArray,QByteArray> >\0"
    "rawHeaders(QNetworkCacheMetaData*)\0"
    "saveToDisk(QNetworkCacheMetaData*)\0"
    "theWrappedObject,attributes\0"
    "setAttributes(QNetworkCacheMetaData*,QHash<QNetworkRequest::Attribute,"
    "QVariant>)\0"
    "theWrappedObject,dateTime\0"
    "setExpirationDate(QNetworkCacheMetaData*,QDateTime)\0"
    "setLastModified(QNetworkCacheMetaData*,QDateTime)\0"
    "theWrappedObject,headers\0"
    "setRawHeaders(QNetworkCacheMetaData*,QList<QPair<QByteArray,QByteArray"
    "> >)\0"
    "theWrappedObject,allow\0"
    "setSaveToDisk(QNetworkCacheMetaData*,bool)\0"
    "theWrappedObject,url\0"
    "setUrl(QNetworkCacheMetaData*,QUrl)\0"
    "QUrl\0url(QNetworkCacheMetaData*)\0"
};

void PythonQtWrapper_QNetworkCacheMetaData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QNetworkCacheMetaData *_t = static_cast<PythonQtWrapper_QNetworkCacheMetaData *>(_o);
        switch (_id) {
        case 0: { QNetworkCacheMetaData* _r = _t->new_QNetworkCacheMetaData();
            if (_a[0]) *reinterpret_cast< QNetworkCacheMetaData**>(_a[0]) = _r; }  break;
        case 1: { QNetworkCacheMetaData* _r = _t->new_QNetworkCacheMetaData((*reinterpret_cast< const QNetworkCacheMetaData(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkCacheMetaData**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkCacheMetaData((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1]))); break;
        case 3: { QHash<QNetworkRequest::Attribute,QVariant> _r = _t->attributes((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHash<QNetworkRequest::Attribute,QVariant>*>(_a[0]) = _r; }  break;
        case 4: { QDateTime _r = _t->expirationDate((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isValid((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QDateTime _r = _t->lastModified((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->__ne__((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCacheMetaData(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->writeTo((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 9: { bool _r = _t->__eq__((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCacheMetaData(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->readFrom((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 11: { QList<QPair<QByteArray,QByteArray> > _r = _t->rawHeaders((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QPair<QByteArray,QByteArray> >*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->saveToDisk((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->setAttributes((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< const QHash<QNetworkRequest::Attribute,QVariant>(*)>(_a[2]))); break;
        case 14: _t->setExpirationDate((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 15: _t->setLastModified((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 16: _t->setRawHeaders((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< const QList<QPair<QByteArray,QByteArray> >(*)>(_a[2]))); break;
        case 17: _t->setSaveToDisk((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->setUrl((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 19: { QUrl _r = _t->url((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QNetworkCacheMetaData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QNetworkCacheMetaData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkCacheMetaData,
      qt_meta_data_PythonQtWrapper_QNetworkCacheMetaData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QNetworkCacheMetaData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QNetworkCacheMetaData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkCacheMetaData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkCacheMetaData))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkCacheMetaData*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkCacheMetaData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QNetworkConfiguration[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       5,   99, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      62,   38,   39,   38, 0x0a,
      96,   90,   39,   38, 0x0a,
     149,  145,   38,   38, 0x0a,
     227,  210,  202,   38, 0x0a,
     296,  210,  262,   38, 0x0a,
     331,  210,  202,   38, 0x0a,
     399,  210,  370,   38, 0x0a,
     432,  210,  202,   38, 0x0a,
     472,  210,  467,   38, 0x0a,
     515,  210,  467,   38, 0x0a,
     547,  210,  202,   38, 0x0a,
     599,  576,  467,   38, 0x0a,
     652,  576,   39,   38, 0x0a,
     714,  576,  467,   38, 0x0a,
     798,  210,  767,   38, 0x0a,
     864,  210,  830,   38, 0x0a,
     922,  210,  894,   38, 0x0a,

 // enums: name, flags, count, data
     951, 0x0,    9,  119,
     962, 0x0,    4,  137,
     970, 0x0,    4,  145,
     980, 0x1,    4,  153,
     991, 0x0,    4,  161,

 // enum data: key, value
     996, uint(PythonQtWrapper_QNetworkConfiguration::BearerUnknown),
    1010, uint(PythonQtWrapper_QNetworkConfiguration::BearerEthernet),
    1025, uint(PythonQtWrapper_QNetworkConfiguration::BearerWLAN),
    1036, uint(PythonQtWrapper_QNetworkConfiguration::Bearer2G),
    1045, uint(PythonQtWrapper_QNetworkConfiguration::BearerCDMA2000),
    1060, uint(PythonQtWrapper_QNetworkConfiguration::BearerWCDMA),
    1072, uint(PythonQtWrapper_QNetworkConfiguration::BearerHSPA),
    1083, uint(PythonQtWrapper_QNetworkConfiguration::BearerBluetooth),
    1099, uint(PythonQtWrapper_QNetworkConfiguration::BearerWiMAX),
    1111, uint(PythonQtWrapper_QNetworkConfiguration::UnknownPurpose),
    1126, uint(PythonQtWrapper_QNetworkConfiguration::PublicPurpose),
    1140, uint(PythonQtWrapper_QNetworkConfiguration::PrivatePurpose),
    1155, uint(PythonQtWrapper_QNetworkConfiguration::ServiceSpecificPurpose),
    1178, uint(PythonQtWrapper_QNetworkConfiguration::Undefined),
    1188, uint(PythonQtWrapper_QNetworkConfiguration::Defined),
    1196, uint(PythonQtWrapper_QNetworkConfiguration::Discovered),
    1207, uint(PythonQtWrapper_QNetworkConfiguration::Active),
    1178, uint(PythonQtWrapper_QNetworkConfiguration::Undefined),
    1188, uint(PythonQtWrapper_QNetworkConfiguration::Defined),
    1196, uint(PythonQtWrapper_QNetworkConfiguration::Discovered),
    1207, uint(PythonQtWrapper_QNetworkConfiguration::Active),
    1214, uint(PythonQtWrapper_QNetworkConfiguration::InternetAccessPoint),
    1234, uint(PythonQtWrapper_QNetworkConfiguration::ServiceNetwork),
    1249, uint(PythonQtWrapper_QNetworkConfiguration::UserChoice),
    1260, uint(PythonQtWrapper_QNetworkConfiguration::Invalid),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QNetworkConfiguration[] = {
    "PythonQtWrapper_QNetworkConfiguration\0"
    "\0QNetworkConfiguration*\0"
    "new_QNetworkConfiguration()\0other\0"
    "new_QNetworkConfiguration(QNetworkConfiguration)\0"
    "obj\0delete_QNetworkConfiguration(QNetworkConfiguration*)\0"
    "QString\0theWrappedObject\0"
    "bearerName(QNetworkConfiguration*)\0"
    "QNetworkConfiguration::BearerType\0"
    "bearerType(QNetworkConfiguration*)\0"
    "bearerTypeName(QNetworkConfiguration*)\0"
    "QList<QNetworkConfiguration>\0"
    "children(QNetworkConfiguration*)\0"
    "identifier(QNetworkConfiguration*)\0"
    "bool\0isRoamingAvailable(QNetworkConfiguration*)\0"
    "isValid(QNetworkConfiguration*)\0"
    "name(QNetworkConfiguration*)\0"
    "theWrappedObject,other\0"
    "__ne__(QNetworkConfiguration*,QNetworkConfiguration)\0"
    "operator_assign(QNetworkConfiguration*,QNetworkConfiguration)\0"
    "__eq__(QNetworkConfiguration*,QNetworkConfiguration)\0"
    "QNetworkConfiguration::Purpose\0"
    "purpose(QNetworkConfiguration*)\0"
    "QNetworkConfiguration::StateFlags\0"
    "state(QNetworkConfiguration*)\0"
    "QNetworkConfiguration::Type\0"
    "type(QNetworkConfiguration*)\0BearerType\0"
    "Purpose\0StateFlag\0StateFlags\0Type\0"
    "BearerUnknown\0BearerEthernet\0BearerWLAN\0"
    "Bearer2G\0BearerCDMA2000\0BearerWCDMA\0"
    "BearerHSPA\0BearerBluetooth\0BearerWiMAX\0"
    "UnknownPurpose\0PublicPurpose\0"
    "PrivatePurpose\0ServiceSpecificPurpose\0"
    "Undefined\0Defined\0Discovered\0Active\0"
    "InternetAccessPoint\0ServiceNetwork\0"
    "UserChoice\0Invalid\0"
};

void PythonQtWrapper_QNetworkConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QNetworkConfiguration *_t = static_cast<PythonQtWrapper_QNetworkConfiguration *>(_o);
        switch (_id) {
        case 0: { QNetworkConfiguration* _r = _t->new_QNetworkConfiguration();
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration**>(_a[0]) = _r; }  break;
        case 1: { QNetworkConfiguration* _r = _t->new_QNetworkConfiguration((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkConfiguration((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->bearerName((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QNetworkConfiguration::BearerType _r = _t->bearerType((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration::BearerType*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->bearerTypeName((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QList<QNetworkConfiguration> _r = _t->children((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkConfiguration>*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->identifier((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isRoamingAvailable((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isValid((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->name((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__ne__((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QNetworkConfiguration(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QNetworkConfiguration* _r = _t->operator_assign((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QNetworkConfiguration(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration**>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->__eq__((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QNetworkConfiguration(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QNetworkConfiguration::Purpose _r = _t->purpose((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration::Purpose*>(_a[0]) = _r; }  break;
        case 15: { QNetworkConfiguration::StateFlags _r = _t->state((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration::StateFlags*>(_a[0]) = _r; }  break;
        case 16: { QNetworkConfiguration::Type _r = _t->type((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration::Type*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QNetworkConfiguration::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QNetworkConfiguration::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkConfiguration,
      qt_meta_data_PythonQtWrapper_QNetworkConfiguration, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QNetworkConfiguration::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QNetworkConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkConfiguration))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkConfiguration*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QNetworkConfigurationManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       2,   59, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      83,   76,   46,   45, 0x0a,
     126,   45,   46,   45, 0x2a,
     165,  161,   45,   45, 0x0a,
     284,  261,  232,   45, 0x0a,
     384,  367,  232,   45, 0x2a,
     476,  367,  433,   45, 0x0a,
     570,  542,  520,   45, 0x0a,
     637,  367,  520,   45, 0x0a,
     694,  367,  689,   45, 0x0a,

 // enums: name, flags, count, data
     734, 0x0,    7,   67,
     745, 0x1,    7,   81,

 // enum data: key, value
     758, uint(PythonQtWrapper_QNetworkConfigurationManager::CanStartAndStopInterfaces),
     784, uint(PythonQtWrapper_QNetworkConfigurationManager::DirectConnectionRouting),
     808, uint(PythonQtWrapper_QNetworkConfigurationManager::SystemSessionSupport),
     829, uint(PythonQtWrapper_QNetworkConfigurationManager::ApplicationLevelRoaming),
     853, uint(PythonQtWrapper_QNetworkConfigurationManager::ForcedRoaming),
     867, uint(PythonQtWrapper_QNetworkConfigurationManager::DataStatistics),
     882, uint(PythonQtWrapper_QNetworkConfigurationManager::NetworkSessionRequired),
     758, uint(PythonQtWrapper_QNetworkConfigurationManager::CanStartAndStopInterfaces),
     784, uint(PythonQtWrapper_QNetworkConfigurationManager::DirectConnectionRouting),
     808, uint(PythonQtWrapper_QNetworkConfigurationManager::SystemSessionSupport),
     829, uint(PythonQtWrapper_QNetworkConfigurationManager::ApplicationLevelRoaming),
     853, uint(PythonQtWrapper_QNetworkConfigurationManager::ForcedRoaming),
     867, uint(PythonQtWrapper_QNetworkConfigurationManager::DataStatistics),
     882, uint(PythonQtWrapper_QNetworkConfigurationManager::NetworkSessionRequired),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QNetworkConfigurationManager[] = {
    "PythonQtWrapper_QNetworkConfigurationManager\0"
    "\0QNetworkConfigurationManager*\0parent\0"
    "new_QNetworkConfigurationManager(QObject*)\0"
    "new_QNetworkConfigurationManager()\0"
    "obj\0"
    "delete_QNetworkConfigurationManager(QNetworkConfigurationManager*)\0"
    "QList<QNetworkConfiguration>\0"
    "theWrappedObject,flags\0"
    "allConfigurations(QNetworkConfigurationManager*,QNetworkConfiguration:"
    ":StateFlags)\0"
    "theWrappedObject\0"
    "allConfigurations(QNetworkConfigurationManager*)\0"
    "QNetworkConfigurationManager::Capabilities\0"
    "capabilities(QNetworkConfigurationManager*)\0"
    "QNetworkConfiguration\0theWrappedObject,identifier\0"
    "configurationFromIdentifier(QNetworkConfigurationManager*,QString)\0"
    "defaultConfiguration(QNetworkConfigurationManager*)\0"
    "bool\0isOnline(QNetworkConfigurationManager*)\0"
    "Capability\0Capabilities\0"
    "CanStartAndStopInterfaces\0"
    "DirectConnectionRouting\0SystemSessionSupport\0"
    "ApplicationLevelRoaming\0ForcedRoaming\0"
    "DataStatistics\0NetworkSessionRequired\0"
};

void PythonQtWrapper_QNetworkConfigurationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QNetworkConfigurationManager *_t = static_cast<PythonQtWrapper_QNetworkConfigurationManager *>(_o);
        switch (_id) {
        case 0: { QNetworkConfigurationManager* _r = _t->new_QNetworkConfigurationManager((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfigurationManager**>(_a[0]) = _r; }  break;
        case 1: { QNetworkConfigurationManager* _r = _t->new_QNetworkConfigurationManager();
            if (_a[0]) *reinterpret_cast< QNetworkConfigurationManager**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkConfigurationManager((*reinterpret_cast< QNetworkConfigurationManager*(*)>(_a[1]))); break;
        case 3: { QList<QNetworkConfiguration> _r = _t->allConfigurations((*reinterpret_cast< QNetworkConfigurationManager*(*)>(_a[1])),(*reinterpret_cast< QNetworkConfiguration::StateFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkConfiguration>*>(_a[0]) = _r; }  break;
        case 4: { QList<QNetworkConfiguration> _r = _t->allConfigurations((*reinterpret_cast< QNetworkConfigurationManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkConfiguration>*>(_a[0]) = _r; }  break;
        case 5: { QNetworkConfigurationManager::Capabilities _r = _t->capabilities((*reinterpret_cast< QNetworkConfigurationManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfigurationManager::Capabilities*>(_a[0]) = _r; }  break;
        case 6: { QNetworkConfiguration _r = _t->configurationFromIdentifier((*reinterpret_cast< QNetworkConfigurationManager*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration*>(_a[0]) = _r; }  break;
        case 7: { QNetworkConfiguration _r = _t->defaultConfiguration((*reinterpret_cast< QNetworkConfigurationManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isOnline((*reinterpret_cast< QNetworkConfigurationManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QNetworkConfigurationManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QNetworkConfigurationManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkConfigurationManager,
      qt_meta_data_PythonQtWrapper_QNetworkConfigurationManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QNetworkConfigurationManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QNetworkConfigurationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkConfigurationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkConfigurationManager))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkConfigurationManager*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkConfigurationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QNetworkCookie[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       1,  144, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      59,   48,   32,   31, 0x0a,
     106,  101,   32,   31, 0x2a,
     137,   31,   32,   31, 0x2a,
     164,  158,   32,   31, 0x0a,
     203,  199,   31,   31, 0x0a,
     267,  250,  242,   31, 0x0a,
     301,  250,  291,   31, 0x0a,
     338,  250,  333,   31, 0x0a,
     366,  250,  333,   31, 0x0a,
     392,  250,  333,   31, 0x0a,
     436,  250,  425,   31, 0x0a,
     481,  458,  333,   31, 0x0a,
     520,  458,  333,   31, 0x0a,
     594,  581,  559,   31, 0x0a,
     641,  250,  242,   31, 0x0a,
     687,  663,   31,   31, 0x0a,
     744,  722,   31,   31, 0x0a,
     813,  789,   31,   31, 0x0a,
     875,  847,   31,   31, 0x0a,
     933,  911,   31,   31, 0x0a,
     966,  789,   31,   31, 0x0a,
    1021,  998,   31,   31, 0x0a,
    1080, 1058,  425,   31, 0x0a,
    1131,  250,  425,   31, 0x2a,
    1158,  250,  425,   31, 0x0a,
    1181,   31,  242,   31, 0x0a,

 // enums: name, flags, count, data
    1210, 0x0,    2,  148,

 // enum data: key, value
    1218, uint(PythonQtWrapper_QNetworkCookie::NameAndValueOnly),
    1235, uint(PythonQtWrapper_QNetworkCookie::Full),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QNetworkCookie[] = {
    "PythonQtWrapper_QNetworkCookie\0\0"
    "QNetworkCookie*\0name,value\0"
    "new_QNetworkCookie(QByteArray,QByteArray)\0"
    "name\0new_QNetworkCookie(QByteArray)\0"
    "new_QNetworkCookie()\0other\0"
    "new_QNetworkCookie(QNetworkCookie)\0"
    "obj\0delete_QNetworkCookie(QNetworkCookie*)\0"
    "QString\0theWrappedObject\0"
    "domain(QNetworkCookie*)\0QDateTime\0"
    "expirationDate(QNetworkCookie*)\0bool\0"
    "isHttpOnly(QNetworkCookie*)\0"
    "isSecure(QNetworkCookie*)\0"
    "isSessionCookie(QNetworkCookie*)\0"
    "QByteArray\0name(QNetworkCookie*)\0"
    "theWrappedObject,other\0"
    "__ne__(QNetworkCookie*,QNetworkCookie)\0"
    "__eq__(QNetworkCookie*,QNetworkCookie)\0"
    "QList<QNetworkCookie>\0cookieString\0"
    "static_QNetworkCookie_parseCookies(QByteArray)\0"
    "path(QNetworkCookie*)\0theWrappedObject,domain\0"
    "setDomain(QNetworkCookie*,QString)\0"
    "theWrappedObject,date\0"
    "setExpirationDate(QNetworkCookie*,QDateTime)\0"
    "theWrappedObject,enable\0"
    "setHttpOnly(QNetworkCookie*,bool)\0"
    "theWrappedObject,cookieName\0"
    "setName(QNetworkCookie*,QByteArray)\0"
    "theWrappedObject,path\0"
    "setPath(QNetworkCookie*,QString)\0"
    "setSecure(QNetworkCookie*,bool)\0"
    "theWrappedObject,value\0"
    "setValue(QNetworkCookie*,QByteArray)\0"
    "theWrappedObject,form\0"
    "toRawForm(QNetworkCookie*,QNetworkCookie::RawForm)\0"
    "toRawForm(QNetworkCookie*)\0"
    "value(QNetworkCookie*)\0"
    "py_toString(QNetworkCookie*)\0RawForm\0"
    "NameAndValueOnly\0Full\0"
};

void PythonQtWrapper_QNetworkCookie::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QNetworkCookie *_t = static_cast<PythonQtWrapper_QNetworkCookie *>(_o);
        switch (_id) {
        case 0: { QNetworkCookie* _r = _t->new_QNetworkCookie((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkCookie**>(_a[0]) = _r; }  break;
        case 1: { QNetworkCookie* _r = _t->new_QNetworkCookie((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkCookie**>(_a[0]) = _r; }  break;
        case 2: { QNetworkCookie* _r = _t->new_QNetworkCookie();
            if (_a[0]) *reinterpret_cast< QNetworkCookie**>(_a[0]) = _r; }  break;
        case 3: { QNetworkCookie* _r = _t->new_QNetworkCookie((*reinterpret_cast< const QNetworkCookie(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkCookie**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QNetworkCookie((*reinterpret_cast< QNetworkCookie*(*)>(_a[1]))); break;
        case 5: { QString _r = _t->domain((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QDateTime _r = _t->expirationDate((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isHttpOnly((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isSecure((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isSessionCookie((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QByteArray _r = _t->name((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__ne__((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCookie(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->__eq__((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCookie(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QList<QNetworkCookie> _r = _t->static_QNetworkCookie_parseCookies((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkCookie>*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->path((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: _t->setDomain((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->setExpirationDate((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 17: _t->setHttpOnly((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->setName((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 19: _t->setPath((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->setSecure((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->setValue((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 22: { QByteArray _r = _t->toRawForm((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< QNetworkCookie::RawForm(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 23: { QByteArray _r = _t->toRawForm((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 24: { QByteArray _r = _t->value((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 25: { QString _r = _t->py_toString((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QNetworkCookie::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QNetworkCookie::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkCookie,
      qt_meta_data_PythonQtWrapper_QNetworkCookie, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QNetworkCookie::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QNetworkCookie::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkCookie::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkCookie))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkCookie*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkCookie::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QNetworkCookieJar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      61,   54,   35,   34, 0x0a,
      93,   34,   35,   34, 0x2a,
     121,  117,   34,   34, 0x0a,
     205,  188,  166,   34, 0x0a,
     257,  236,  166,   34, 0x0a,
     324,  296,   34,   34, 0x0a,
     417,  385,  380,   34, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QNetworkCookieJar[] = {
    "PythonQtWrapper_QNetworkCookieJar\0\0"
    "QNetworkCookieJar*\0parent\0"
    "new_QNetworkCookieJar(QObject*)\0"
    "new_QNetworkCookieJar()\0obj\0"
    "delete_QNetworkCookieJar(QNetworkCookieJar*)\0"
    "QList<QNetworkCookie>\0theWrappedObject\0"
    "allCookies(QNetworkCookieJar*)\0"
    "theWrappedObject,url\0"
    "cookiesForUrl(QNetworkCookieJar*,QUrl)\0"
    "theWrappedObject,cookieList\0"
    "setAllCookies(QNetworkCookieJar*,QList<QNetworkCookie>)\0"
    "bool\0theWrappedObject,cookieList,url\0"
    "setCookiesFromUrl(QNetworkCookieJar*,QList<QNetworkCookie>,QUrl)\0"
};

void PythonQtWrapper_QNetworkCookieJar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QNetworkCookieJar *_t = static_cast<PythonQtWrapper_QNetworkCookieJar *>(_o);
        switch (_id) {
        case 0: { QNetworkCookieJar* _r = _t->new_QNetworkCookieJar((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkCookieJar**>(_a[0]) = _r; }  break;
        case 1: { QNetworkCookieJar* _r = _t->new_QNetworkCookieJar();
            if (_a[0]) *reinterpret_cast< QNetworkCookieJar**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkCookieJar((*reinterpret_cast< QNetworkCookieJar*(*)>(_a[1]))); break;
        case 3: { QList<QNetworkCookie> _r = _t->allCookies((*reinterpret_cast< QNetworkCookieJar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkCookie>*>(_a[0]) = _r; }  break;
        case 4: { QList<QNetworkCookie> _r = _t->cookiesForUrl((*reinterpret_cast< QNetworkCookieJar*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkCookie>*>(_a[0]) = _r; }  break;
        case 5: _t->setAllCookies((*reinterpret_cast< QNetworkCookieJar*(*)>(_a[1])),(*reinterpret_cast< const QList<QNetworkCookie>(*)>(_a[2]))); break;
        case 6: { bool _r = _t->setCookiesFromUrl((*reinterpret_cast< QNetworkCookieJar*(*)>(_a[1])),(*reinterpret_cast< const QList<QNetworkCookie>(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QNetworkCookieJar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QNetworkCookieJar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkCookieJar,
      qt_meta_data_PythonQtWrapper_QNetworkCookieJar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QNetworkCookieJar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QNetworkCookieJar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkCookieJar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkCookieJar))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkCookieJar*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkCookieJar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QNetworkDiskCache[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      61,   54,   35,   34, 0x0a,
      93,   34,   35,   34, 0x2a,
     121,  117,   34,   34, 0x0a,
     191,  174,  166,   34, 0x0a,
     233,  174,  226,   34, 0x0a,
     263,  174,   34,   34, 0x0a,
     321,  300,  289,   34, 0x0a,
     351,  174,  226,   34, 0x0a,
     426,  400,  378,   34, 0x0a,
     491,  467,   34,   34, 0x0a,
     529,  174,  226,   34, 0x0a,
     566,  300,  378,   34, 0x0a,
     626,  600,  289,   34, 0x0a,
     681,  300,  676,   34, 0x0a,
     739,  713,   34,   34, 0x0a,
     807,  785,   34,   34, 0x0a,
     854,  600,   34,   34, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QNetworkDiskCache[] = {
    "PythonQtWrapper_QNetworkDiskCache\0\0"
    "QNetworkDiskCache*\0parent\0"
    "new_QNetworkDiskCache(QObject*)\0"
    "new_QNetworkDiskCache()\0obj\0"
    "delete_QNetworkDiskCache(QNetworkDiskCache*)\0"
    "QString\0theWrappedObject\0"
    "cacheDirectory(QNetworkDiskCache*)\0"
    "qint64\0cacheSize(QNetworkDiskCache*)\0"
    "clear(QNetworkDiskCache*)\0QIODevice*\0"
    "theWrappedObject,url\0data(QNetworkDiskCache*,QUrl)\0"
    "expire(QNetworkDiskCache*)\0"
    "QNetworkCacheMetaData\0theWrappedObject,fileName\0"
    "fileMetaData(QNetworkDiskCache*,QString)\0"
    "theWrappedObject,device\0"
    "insert(QNetworkDiskCache*,QIODevice*)\0"
    "maximumCacheSize(QNetworkDiskCache*)\0"
    "metaData(QNetworkDiskCache*,QUrl)\0"
    "theWrappedObject,metaData\0"
    "prepare(QNetworkDiskCache*,QNetworkCacheMetaData)\0"
    "bool\0remove(QNetworkDiskCache*,QUrl)\0"
    "theWrappedObject,cacheDir\0"
    "setCacheDirectory(QNetworkDiskCache*,QString)\0"
    "theWrappedObject,size\0"
    "setMaximumCacheSize(QNetworkDiskCache*,qint64)\0"
    "updateMetaData(QNetworkDiskCache*,QNetworkCacheMetaData)\0"
};

void PythonQtWrapper_QNetworkDiskCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QNetworkDiskCache *_t = static_cast<PythonQtWrapper_QNetworkDiskCache *>(_o);
        switch (_id) {
        case 0: { QNetworkDiskCache* _r = _t->new_QNetworkDiskCache((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkDiskCache**>(_a[0]) = _r; }  break;
        case 1: { QNetworkDiskCache* _r = _t->new_QNetworkDiskCache();
            if (_a[0]) *reinterpret_cast< QNetworkDiskCache**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkDiskCache((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->cacheDirectory((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { qint64 _r = _t->cacheSize((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 5: _t->clear((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1]))); break;
        case 6: { QIODevice* _r = _t->data((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 7: { qint64 _r = _t->expire((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 8: { QNetworkCacheMetaData _r = _t->fileMetaData((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkCacheMetaData*>(_a[0]) = _r; }  break;
        case 9: _t->insert((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 10: { qint64 _r = _t->maximumCacheSize((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 11: { QNetworkCacheMetaData _r = _t->metaData((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkCacheMetaData*>(_a[0]) = _r; }  break;
        case 12: { QIODevice* _r = _t->prepare((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCacheMetaData(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->remove((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->setCacheDirectory((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: _t->setMaximumCacheSize((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 16: _t->updateMetaData((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCacheMetaData(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QNetworkDiskCache::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QNetworkDiskCache::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkDiskCache,
      qt_meta_data_PythonQtWrapper_QNetworkDiskCache, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QNetworkDiskCache::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QNetworkDiskCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkDiskCache::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkDiskCache))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkDiskCache*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkDiskCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QNetworkInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       2,   89, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      54,   34,   35,   34, 0x0a,
      84,   78,   35,   34, 0x0a,
     129,  125,   34,   34, 0x0a,
     219,  202,  174,   34, 0x0a,
     274,   34,  254,   34, 0x0a,
     339,   34,  314,   34, 0x0a,
     414,  202,  380,   34, 0x0a,
     448,  202,  440,   34, 0x0a,
     484,  202,  440,   34, 0x0a,
     526,  202,  522,   34, 0x0a,
     576,  570,  552,   34, 0x0a,
     630,  625,  552,   34, 0x0a,
     687,  202,  682,   34, 0x0a,
     715,  202,  440,   34, 0x0a,
     740,   34,  440,   34, 0x0a,

 // enums: name, flags, count, data
     772, 0x0,    6,   97,
     786, 0x1,    6,  109,

 // enum data: key, value
     801, uint(PythonQtWrapper_QNetworkInterface::IsUp),
     806, uint(PythonQtWrapper_QNetworkInterface::IsRunning),
     816, uint(PythonQtWrapper_QNetworkInterface::CanBroadcast),
     829, uint(PythonQtWrapper_QNetworkInterface::IsLoopBack),
     840, uint(PythonQtWrapper_QNetworkInterface::IsPointToPoint),
     855, uint(PythonQtWrapper_QNetworkInterface::CanMulticast),
     801, uint(PythonQtWrapper_QNetworkInterface::IsUp),
     806, uint(PythonQtWrapper_QNetworkInterface::IsRunning),
     816, uint(PythonQtWrapper_QNetworkInterface::CanBroadcast),
     829, uint(PythonQtWrapper_QNetworkInterface::IsLoopBack),
     840, uint(PythonQtWrapper_QNetworkInterface::IsPointToPoint),
     855, uint(PythonQtWrapper_QNetworkInterface::CanMulticast),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QNetworkInterface[] = {
    "PythonQtWrapper_QNetworkInterface\0\0"
    "QNetworkInterface*\0new_QNetworkInterface()\0"
    "other\0new_QNetworkInterface(QNetworkInterface)\0"
    "obj\0delete_QNetworkInterface(QNetworkInterface*)\0"
    "QList<QNetworkAddressEntry>\0"
    "theWrappedObject\0addressEntries(QNetworkInterface*)\0"
    "QList<QHostAddress>\0"
    "static_QNetworkInterface_allAddresses()\0"
    "QList<QNetworkInterface>\0"
    "static_QNetworkInterface_allInterfaces()\0"
    "QNetworkInterface::InterfaceFlags\0"
    "flags(QNetworkInterface*)\0QString\0"
    "hardwareAddress(QNetworkInterface*)\0"
    "humanReadableName(QNetworkInterface*)\0"
    "int\0index(QNetworkInterface*)\0"
    "QNetworkInterface\0index\0"
    "static_QNetworkInterface_interfaceFromIndex(int)\0"
    "name\0static_QNetworkInterface_interfaceFromName(QString)\0"
    "bool\0isValid(QNetworkInterface*)\0"
    "name(QNetworkInterface*)\0"
    "py_toString(QNetworkInterface*)\0"
    "InterfaceFlag\0InterfaceFlags\0IsUp\0"
    "IsRunning\0CanBroadcast\0IsLoopBack\0"
    "IsPointToPoint\0CanMulticast\0"
};

void PythonQtWrapper_QNetworkInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QNetworkInterface *_t = static_cast<PythonQtWrapper_QNetworkInterface *>(_o);
        switch (_id) {
        case 0: { QNetworkInterface* _r = _t->new_QNetworkInterface();
            if (_a[0]) *reinterpret_cast< QNetworkInterface**>(_a[0]) = _r; }  break;
        case 1: { QNetworkInterface* _r = _t->new_QNetworkInterface((*reinterpret_cast< const QNetworkInterface(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkInterface**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkInterface((*reinterpret_cast< QNetworkInterface*(*)>(_a[1]))); break;
        case 3: { QList<QNetworkAddressEntry> _r = _t->addressEntries((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkAddressEntry>*>(_a[0]) = _r; }  break;
        case 4: { QList<QHostAddress> _r = _t->static_QNetworkInterface_allAddresses();
            if (_a[0]) *reinterpret_cast< QList<QHostAddress>*>(_a[0]) = _r; }  break;
        case 5: { QList<QNetworkInterface> _r = _t->static_QNetworkInterface_allInterfaces();
            if (_a[0]) *reinterpret_cast< QList<QNetworkInterface>*>(_a[0]) = _r; }  break;
        case 6: { QNetworkInterface::InterfaceFlags _r = _t->flags((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkInterface::InterfaceFlags*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->hardwareAddress((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->humanReadableName((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->index((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QNetworkInterface _r = _t->static_QNetworkInterface_interfaceFromIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkInterface*>(_a[0]) = _r; }  break;
        case 11: { QNetworkInterface _r = _t->static_QNetworkInterface_interfaceFromName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkInterface*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isValid((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->name((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->py_toString((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QNetworkInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QNetworkInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkInterface,
      qt_meta_data_PythonQtWrapper_QNetworkInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QNetworkInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QNetworkInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkInterface))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QNetworkProxy[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       3,  144, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      46,   30,   31,   30, 0x0a,
      99,   66,   31,   30, 0x0a,
     206,  182,   31,   30, 0x2a,
     300,  281,   31,   30, 0x2a,
     381,  367,   31,   30, 0x2a,
     438,  433,   31,   30, 0x2a,
     488,  482,   31,   30, 0x0a,
     525,  521,   30,   30, 0x0a,
     576,   30,  562,   30, 0x0a,
     661,  644,  616,   30, 0x0a,
     698,  644,  690,   30, 0x0a,
     728,  644,  723,   30, 0x0a,
     759,  644,  723,   30, 0x0a,
     817,  794,  723,   30, 0x0a,
     854,  794,  723,   30, 0x0a,
     891,  644,  690,   30, 0x0a,
     931,  644,  916,   30, 0x0a,
     958,  952,   30,   30, 0x0a,
    1037, 1014,   30,   30, 0x0a,
    1123, 1097,   30,   30, 0x0a,
    1185, 1159,   30,   30, 0x0a,
    1243, 1221,   30,   30, 0x0a,
    1304, 1282,   30,   30, 0x0a,
    1379, 1353,   30,   30, 0x0a,
    1436,  644, 1411,   30, 0x0a,
    1457,  644,  690,   30, 0x0a,

 // enums: name, flags, count, data
    1478, 0x0,    5,  156,
    1489, 0x1,    5,  166,
    1502, 0x0,    6,  176,

 // enum data: key, value
    1512, uint(PythonQtWrapper_QNetworkProxy::TunnelingCapability),
    1532, uint(PythonQtWrapper_QNetworkProxy::ListeningCapability),
    1552, uint(PythonQtWrapper_QNetworkProxy::UdpTunnelingCapability),
    1575, uint(PythonQtWrapper_QNetworkProxy::CachingCapability),
    1593, uint(PythonQtWrapper_QNetworkProxy::HostNameLookupCapability),
    1512, uint(PythonQtWrapper_QNetworkProxy::TunnelingCapability),
    1532, uint(PythonQtWrapper_QNetworkProxy::ListeningCapability),
    1552, uint(PythonQtWrapper_QNetworkProxy::UdpTunnelingCapability),
    1575, uint(PythonQtWrapper_QNetworkProxy::CachingCapability),
    1593, uint(PythonQtWrapper_QNetworkProxy::HostNameLookupCapability),
    1618, uint(PythonQtWrapper_QNetworkProxy::DefaultProxy),
    1631, uint(PythonQtWrapper_QNetworkProxy::Socks5Proxy),
    1643, uint(PythonQtWrapper_QNetworkProxy::NoProxy),
    1651, uint(PythonQtWrapper_QNetworkProxy::HttpProxy),
    1661, uint(PythonQtWrapper_QNetworkProxy::HttpCachingProxy),
    1678, uint(PythonQtWrapper_QNetworkProxy::FtpCachingProxy),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QNetworkProxy[] = {
    "PythonQtWrapper_QNetworkProxy\0\0"
    "QNetworkProxy*\0new_QNetworkProxy()\0"
    "type,hostName,port,user,password\0"
    "new_QNetworkProxy(QNetworkProxy::ProxyType,QString,unsigned short,QStr"
    "ing,QString)\0"
    "type,hostName,port,user\0"
    "new_QNetworkProxy(QNetworkProxy::ProxyType,QString,unsigned short,QStr"
    "ing)\0"
    "type,hostName,port\0"
    "new_QNetworkProxy(QNetworkProxy::ProxyType,QString,unsigned short)\0"
    "type,hostName\0"
    "new_QNetworkProxy(QNetworkProxy::ProxyType,QString)\0"
    "type\0new_QNetworkProxy(QNetworkProxy::ProxyType)\0"
    "other\0new_QNetworkProxy(QNetworkProxy)\0"
    "obj\0delete_QNetworkProxy(QNetworkProxy*)\0"
    "QNetworkProxy\0static_QNetworkProxy_applicationProxy()\0"
    "QNetworkProxy::Capabilities\0"
    "theWrappedObject\0capabilities(QNetworkProxy*)\0"
    "QString\0hostName(QNetworkProxy*)\0bool\0"
    "isCachingProxy(QNetworkProxy*)\0"
    "isTransparentProxy(QNetworkProxy*)\0"
    "theWrappedObject,other\0"
    "__ne__(QNetworkProxy*,QNetworkProxy)\0"
    "__eq__(QNetworkProxy*,QNetworkProxy)\0"
    "password(QNetworkProxy*)\0unsigned short\0"
    "port(QNetworkProxy*)\0proxy\0"
    "static_QNetworkProxy_setApplicationProxy(QNetworkProxy)\0"
    "theWrappedObject,capab\0"
    "setCapabilities(QNetworkProxy*,QNetworkProxy::Capabilities)\0"
    "theWrappedObject,hostName\0"
    "setHostName(QNetworkProxy*,QString)\0"
    "theWrappedObject,password\0"
    "setPassword(QNetworkProxy*,QString)\0"
    "theWrappedObject,port\0"
    "setPort(QNetworkProxy*,unsigned short)\0"
    "theWrappedObject,type\0"
    "setType(QNetworkProxy*,QNetworkProxy::ProxyType)\0"
    "theWrappedObject,userName\0"
    "setUser(QNetworkProxy*,QString)\0"
    "QNetworkProxy::ProxyType\0type(QNetworkProxy*)\0"
    "user(QNetworkProxy*)\0Capability\0"
    "Capabilities\0ProxyType\0TunnelingCapability\0"
    "ListeningCapability\0UdpTunnelingCapability\0"
    "CachingCapability\0HostNameLookupCapability\0"
    "DefaultProxy\0Socks5Proxy\0NoProxy\0"
    "HttpProxy\0HttpCachingProxy\0FtpCachingProxy\0"
};

void PythonQtWrapper_QNetworkProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QNetworkProxy *_t = static_cast<PythonQtWrapper_QNetworkProxy *>(_o);
        switch (_id) {
        case 0: { QNetworkProxy* _r = _t->new_QNetworkProxy();
            if (_a[0]) *reinterpret_cast< QNetworkProxy**>(_a[0]) = _r; }  break;
        case 1: { QNetworkProxy* _r = _t->new_QNetworkProxy((*reinterpret_cast< QNetworkProxy::ProxyType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy**>(_a[0]) = _r; }  break;
        case 2: { QNetworkProxy* _r = _t->new_QNetworkProxy((*reinterpret_cast< QNetworkProxy::ProxyType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy**>(_a[0]) = _r; }  break;
        case 3: { QNetworkProxy* _r = _t->new_QNetworkProxy((*reinterpret_cast< QNetworkProxy::ProxyType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy**>(_a[0]) = _r; }  break;
        case 4: { QNetworkProxy* _r = _t->new_QNetworkProxy((*reinterpret_cast< QNetworkProxy::ProxyType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy**>(_a[0]) = _r; }  break;
        case 5: { QNetworkProxy* _r = _t->new_QNetworkProxy((*reinterpret_cast< QNetworkProxy::ProxyType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy**>(_a[0]) = _r; }  break;
        case 6: { QNetworkProxy* _r = _t->new_QNetworkProxy((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy**>(_a[0]) = _r; }  break;
        case 7: _t->delete_QNetworkProxy((*reinterpret_cast< QNetworkProxy*(*)>(_a[1]))); break;
        case 8: { QNetworkProxy _r = _t->static_QNetworkProxy_applicationProxy();
            if (_a[0]) *reinterpret_cast< QNetworkProxy*>(_a[0]) = _r; }  break;
        case 9: { QNetworkProxy::Capabilities _r = _t->capabilities((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy::Capabilities*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->hostName((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isCachingProxy((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isTransparentProxy((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->__ne__((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< const QNetworkProxy(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->__eq__((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< const QNetworkProxy(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->password((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { unsigned short _r = _t->port((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< unsigned short*>(_a[0]) = _r; }  break;
        case 17: _t->static_QNetworkProxy_setApplicationProxy((*reinterpret_cast< const QNetworkProxy(*)>(_a[1]))); break;
        case 18: _t->setCapabilities((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< QNetworkProxy::Capabilities(*)>(_a[2]))); break;
        case 19: _t->setHostName((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->setPassword((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 21: _t->setPort((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2]))); break;
        case 22: _t->setType((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< QNetworkProxy::ProxyType(*)>(_a[2]))); break;
        case 23: _t->setUser((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 24: { QNetworkProxy::ProxyType _r = _t->type((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy::ProxyType*>(_a[0]) = _r; }  break;
        case 25: { QString _r = _t->user((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QNetworkProxy::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QNetworkProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkProxy,
      qt_meta_data_PythonQtWrapper_QNetworkProxy, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QNetworkProxy::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QNetworkProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkProxy))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkProxy*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QNetworkProxyFactory[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      60,   37,   38,   37, 0x0a,
      91,   87,   37,   37, 0x0a,
     169,  163,  142,   37, 0x0a,
     254,  231,  142,   37, 0x0a,
     324,  307,  142,   37, 0x2a,
     366,  358,   37,   37, 0x0a,
     451,  444,   37,   37, 0x0a,
     511,  163,  142,   37, 0x0a,
     579,   37,  142,   37, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QNetworkProxyFactory[] = {
    "PythonQtWrapper_QNetworkProxyFactory\0"
    "\0QNetworkProxyFactory*\0"
    "new_QNetworkProxyFactory()\0obj\0"
    "delete_QNetworkProxyFactory(QNetworkProxyFactory*)\0"
    "QList<QNetworkProxy>\0query\0"
    "static_QNetworkProxyFactory_proxyForQuery(QNetworkProxyQuery)\0"
    "theWrappedObject,query\0"
    "queryProxy(QNetworkProxyFactory*,QNetworkProxyQuery)\0"
    "theWrappedObject\0queryProxy(QNetworkProxyFactory*)\0"
    "factory\0"
    "static_QNetworkProxyFactory_setApplicationProxyFactory(QNetworkProxyFa"
    "ctory*)\0"
    "enable\0"
    "static_QNetworkProxyFactory_setUseSystemConfiguration(bool)\0"
    "static_QNetworkProxyFactory_systemProxyForQuery(QNetworkProxyQuery)\0"
    "static_QNetworkProxyFactory_systemProxyForQuery()\0"
};

void PythonQtWrapper_QNetworkProxyFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QNetworkProxyFactory *_t = static_cast<PythonQtWrapper_QNetworkProxyFactory *>(_o);
        switch (_id) {
        case 0: { QNetworkProxyFactory* _r = _t->new_QNetworkProxyFactory();
            if (_a[0]) *reinterpret_cast< QNetworkProxyFactory**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QNetworkProxyFactory((*reinterpret_cast< QNetworkProxyFactory*(*)>(_a[1]))); break;
        case 2: { QList<QNetworkProxy> _r = _t->static_QNetworkProxyFactory_proxyForQuery((*reinterpret_cast< const QNetworkProxyQuery(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkProxy>*>(_a[0]) = _r; }  break;
        case 3: { QList<QNetworkProxy> _r = _t->queryProxy((*reinterpret_cast< QNetworkProxyFactory*(*)>(_a[1])),(*reinterpret_cast< const QNetworkProxyQuery(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkProxy>*>(_a[0]) = _r; }  break;
        case 4: { QList<QNetworkProxy> _r = _t->queryProxy((*reinterpret_cast< QNetworkProxyFactory*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkProxy>*>(_a[0]) = _r; }  break;
        case 5: _t->static_QNetworkProxyFactory_setApplicationProxyFactory((*reinterpret_cast< QNetworkProxyFactory*(*)>(_a[1]))); break;
        case 6: _t->static_QNetworkProxyFactory_setUseSystemConfiguration((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { QList<QNetworkProxy> _r = _t->static_QNetworkProxyFactory_systemProxyForQuery((*reinterpret_cast< const QNetworkProxyQuery(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkProxy>*>(_a[0]) = _r; }  break;
        case 8: { QList<QNetworkProxy> _r = _t->static_QNetworkProxyFactory_systemProxyForQuery();
            if (_a[0]) *reinterpret_cast< QList<QNetworkProxy>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QNetworkProxyFactory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QNetworkProxyFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkProxyFactory,
      qt_meta_data_PythonQtWrapper_QNetworkProxyFactory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QNetworkProxyFactory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QNetworkProxyFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkProxyFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkProxyFactory))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkProxyFactory*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkProxyFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QNetworkProxyQuery[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       1,  189, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      56,   35,   36,   35, 0x0a,
     138,   81,   36,   35, 0x0a,
     281,  234,   36,   35, 0x2a,
     382,  347,   36,   35, 0x2a,
     482,  440,   36,   35, 0x0a,
     595,  563,   36,   35, 0x2a,
     698,  646,   36,   35, 0x0a,
     839,  797,   36,   35, 0x2a,
     938,  908,   36,   35, 0x2a,
    1005,  999,   36,   35, 0x0a,
    1084, 1048,   36,   35, 0x0a,
    1184, 1158,   36,   35, 0x2a,
    1242, 1228,   36,   35, 0x2a,
    1299, 1278,   36,   35, 0x0a,
    1369, 1358,   36,   35, 0x2a,
    1429, 1398,   36,   35, 0x0a,
    1527, 1506,   36,   35, 0x2a,
    1583, 1574,   36,   35, 0x2a,
    1626, 1622,   35,   35, 0x0a,
    1694, 1677, 1673,   35, 0x0a,
    1747, 1677, 1725,   35, 0x0a,
    1817, 1794, 1789,   35, 0x0a,
    1864, 1794, 1789,   35, 0x0a,
    1919, 1677, 1911,   35, 0x0a,
    1953, 1677, 1673,   35, 0x0a,
    1983, 1677, 1911,   35, 0x0a,
    2046, 1677, 2016,   35, 0x0a,
    2099, 2077,   35,   35, 0x0a,
    2175, 2137,   35,   35, 0x0a,
    2268, 2242,   35,   35, 0x0a,
    2313, 2077,   35,   35, 0x0a,
    2379, 2350,   35,   35, 0x0a,
    2445, 2423,   35,   35, 0x0a,
    2530, 2509,   35,   35, 0x0a,
    2568, 1677, 2563,   35, 0x0a,

 // enums: name, flags, count, data
    2593, 0x0,    4,  193,

 // enum data: key, value
    2603, uint(PythonQtWrapper_QNetworkProxyQuery::TcpSocket),
    2613, uint(PythonQtWrapper_QNetworkProxyQuery::UdpSocket),
    2623, uint(PythonQtWrapper_QNetworkProxyQuery::TcpServer),
    2633, uint(PythonQtWrapper_QNetworkProxyQuery::UrlRequest),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QNetworkProxyQuery[] = {
    "PythonQtWrapper_QNetworkProxyQuery\0\0"
    "QNetworkProxyQuery*\0new_QNetworkProxyQuery()\0"
    "networkConfiguration,hostname,port,protocolTag,queryType\0"
    "new_QNetworkProxyQuery(QNetworkConfiguration,QString,int,QString,QNetw"
    "orkProxyQuery::QueryType)\0"
    "networkConfiguration,hostname,port,protocolTag\0"
    "new_QNetworkProxyQuery(QNetworkConfiguration,QString,int,QString)\0"
    "networkConfiguration,hostname,port\0"
    "new_QNetworkProxyQuery(QNetworkConfiguration,QString,int)\0"
    "networkConfiguration,requestUrl,queryType\0"
    "new_QNetworkProxyQuery(QNetworkConfiguration,QUrl,QNetworkProxyQuery::"
    "QueryType)\0"
    "networkConfiguration,requestUrl\0"
    "new_QNetworkProxyQuery(QNetworkConfiguration,QUrl)\0"
    "networkConfiguration,bindPort,protocolTag,queryType\0"
    "new_QNetworkProxyQuery(QNetworkConfiguration,unsigned short,QString,QN"
    "etworkProxyQuery::QueryType)\0"
    "networkConfiguration,bindPort,protocolTag\0"
    "new_QNetworkProxyQuery(QNetworkConfiguration,unsigned short,QString)\0"
    "networkConfiguration,bindPort\0"
    "new_QNetworkProxyQuery(QNetworkConfiguration,unsigned short)\0"
    "other\0new_QNetworkProxyQuery(QNetworkProxyQuery)\0"
    "hostname,port,protocolTag,queryType\0"
    "new_QNetworkProxyQuery(QString,int,QString,QNetworkProxyQuery::QueryTy"
    "pe)\0"
    "hostname,port,protocolTag\0"
    "new_QNetworkProxyQuery(QString,int,QString)\0"
    "hostname,port\0new_QNetworkProxyQuery(QString,int)\0"
    "requestUrl,queryType\0"
    "new_QNetworkProxyQuery(QUrl,QNetworkProxyQuery::QueryType)\0"
    "requestUrl\0new_QNetworkProxyQuery(QUrl)\0"
    "bindPort,protocolTag,queryType\0"
    "new_QNetworkProxyQuery(unsigned short,QString,QNetworkProxyQuery::Quer"
    "yType)\0"
    "bindPort,protocolTag\0"
    "new_QNetworkProxyQuery(unsigned short,QString)\0"
    "bindPort\0new_QNetworkProxyQuery(unsigned short)\0"
    "obj\0delete_QNetworkProxyQuery(QNetworkProxyQuery*)\0"
    "int\0theWrappedObject\0"
    "localPort(QNetworkProxyQuery*)\0"
    "QNetworkConfiguration\0"
    "networkConfiguration(QNetworkProxyQuery*)\0"
    "bool\0theWrappedObject,other\0"
    "__ne__(QNetworkProxyQuery*,QNetworkProxyQuery)\0"
    "__eq__(QNetworkProxyQuery*,QNetworkProxyQuery)\0"
    "QString\0peerHostName(QNetworkProxyQuery*)\0"
    "peerPort(QNetworkProxyQuery*)\0"
    "protocolTag(QNetworkProxyQuery*)\0"
    "QNetworkProxyQuery::QueryType\0"
    "queryType(QNetworkProxyQuery*)\0"
    "theWrappedObject,port\0"
    "setLocalPort(QNetworkProxyQuery*,int)\0"
    "theWrappedObject,networkConfiguration\0"
    "setNetworkConfiguration(QNetworkProxyQuery*,QNetworkConfiguration)\0"
    "theWrappedObject,hostname\0"
    "setPeerHostName(QNetworkProxyQuery*,QString)\0"
    "setPeerPort(QNetworkProxyQuery*,int)\0"
    "theWrappedObject,protocolTag\0"
    "setProtocolTag(QNetworkProxyQuery*,QString)\0"
    "theWrappedObject,type\0"
    "setQueryType(QNetworkProxyQuery*,QNetworkProxyQuery::QueryType)\0"
    "theWrappedObject,url\0"
    "setUrl(QNetworkProxyQuery*,QUrl)\0QUrl\0"
    "url(QNetworkProxyQuery*)\0QueryType\0"
    "TcpSocket\0UdpSocket\0TcpServer\0UrlRequest\0"
};

void PythonQtWrapper_QNetworkProxyQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QNetworkProxyQuery *_t = static_cast<PythonQtWrapper_QNetworkProxyQuery *>(_o);
        switch (_id) {
        case 0: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery();
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 1: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< QNetworkProxyQuery::QueryType(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 2: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 3: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 4: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< QNetworkProxyQuery::QueryType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 5: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 6: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QNetworkProxyQuery::QueryType(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 7: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 8: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 9: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkProxyQuery(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 10: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QNetworkProxyQuery::QueryType(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 11: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 12: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 13: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QNetworkProxyQuery::QueryType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 14: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 15: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< unsigned short(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QNetworkProxyQuery::QueryType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 16: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< unsigned short(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 17: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< unsigned short(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 18: _t->delete_QNetworkProxyQuery((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1]))); break;
        case 19: { int _r = _t->localPort((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { QNetworkConfiguration _r = _t->networkConfiguration((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->__ne__((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< const QNetworkProxyQuery(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->__eq__((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< const QNetworkProxyQuery(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { QString _r = _t->peerHostName((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->peerPort((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { QString _r = _t->protocolTag((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 26: { QNetworkProxyQuery::QueryType _r = _t->queryType((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery::QueryType*>(_a[0]) = _r; }  break;
        case 27: _t->setLocalPort((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->setNetworkConfiguration((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< const QNetworkConfiguration(*)>(_a[2]))); break;
        case 29: _t->setPeerHostName((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: _t->setPeerPort((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->setProtocolTag((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 32: _t->setQueryType((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< QNetworkProxyQuery::QueryType(*)>(_a[2]))); break;
        case 33: _t->setUrl((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 34: { QUrl _r = _t->url((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QNetworkProxyQuery::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QNetworkProxyQuery::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkProxyQuery,
      qt_meta_data_PythonQtWrapper_QNetworkProxyQuery, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QNetworkProxyQuery::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QNetworkProxyQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkProxyQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkProxyQuery))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkProxyQuery*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkProxyQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QNetworkReply[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   46,   31,   30, 0x0a,
      81,   30,   31,   30, 0x2a,
     105,  101,   30,   30, 0x0a,
     159,  142,   30,   30, 0x0a,
     212,  190,  181,   30, 0x0a,
     265,  142,   30,   30, 0x0a,
     315,  142,  287,   30, 0x0a,
     370,  342,  337,   30, 0x0a,
     434,  410,  181,   30, 0x0a,
     487,  142,   30,   30, 0x0a,
     519,  142,  337,   30, 0x0a,
     546,  142,  337,   30, 0x0a,
     572,  142,  337,   30, 0x0a,
     624,  142,  601,   30, 0x0a,
     681,  142,  648,   30, 0x0a,
     718,  342,  707,   30, 0x0a,
     773,  142,  755,   30, 0x0a,
     847,  142,  803,   30, 0x0a,
     885,  142,  878,   30, 0x0a,
     932,  142,  916,   30, 0x0a,
     984,  956,   30,   30, 0x0a,
    1088, 1049,   30,   30, 0x0a,
    1173, 1149,   30,   30, 0x0a,
    1236, 1206,   30,   30, 0x0a,
    1328, 1301,   30,   30, 0x0a,
    1424, 1390,   30,   30, 0x0a,
    1497, 1475,   30,   30, 0x0a,
    1563, 1538,   30,   30, 0x0a,
    1627, 1606,   30,   30, 0x0a,
    1660,  142, 1655,   30, 0x0a,
    1706, 1680,  878,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QNetworkReply[] = {
    "PythonQtWrapper_QNetworkReply\0\0"
    "QNetworkReply*\0parent\0new_QNetworkReply(QObject*)\0"
    "new_QNetworkReply()\0obj\0"
    "delete_QNetworkReply(QNetworkReply*)\0"
    "theWrappedObject\0abort(QNetworkReply*)\0"
    "QVariant\0theWrappedObject,code\0"
    "attribute(QNetworkReply*,QNetworkRequest::Attribute)\0"
    "close(QNetworkReply*)\0QNetworkReply::NetworkError\0"
    "error(QNetworkReply*)\0bool\0"
    "theWrappedObject,headerName\0"
    "hasRawHeader(QNetworkReply*,QByteArray)\0"
    "theWrappedObject,header\0"
    "header(QNetworkReply*,QNetworkRequest::KnownHeaders)\0"
    "ignoreSslErrors(QNetworkReply*)\0"
    "isFinished(QNetworkReply*)\0"
    "isRunning(QNetworkReply*)\0"
    "isSequential(QNetworkReply*)\0"
    "QNetworkAccessManager*\0manager(QNetworkReply*)\0"
    "QNetworkAccessManager::Operation\0"
    "operation(QNetworkReply*)\0QByteArray\0"
    "rawHeader(QNetworkReply*,QByteArray)\0"
    "QList<QByteArray>\0rawHeaderList(QNetworkReply*)\0"
    "const QList<QPair<QByteArray,QByteArray> >*\0"
    "rawHeaderPairs(QNetworkReply*)\0qint64\0"
    "readBufferSize(QNetworkReply*)\0"
    "QNetworkRequest\0request(QNetworkReply*)\0"
    "theWrappedObject,code,value\0"
    "setAttribute(QNetworkReply*,QNetworkRequest::Attribute,QVariant)\0"
    "theWrappedObject,errorCode,errorString\0"
    "setError(QNetworkReply*,QNetworkReply::NetworkError,QString)\0"
    "theWrappedObject,arg__1\0"
    "setFinished(QNetworkReply*,bool)\0"
    "theWrappedObject,header,value\0"
    "setHeader(QNetworkReply*,QNetworkRequest::KnownHeaders,QVariant)\0"
    "theWrappedObject,operation\0"
    "setOperation(QNetworkReply*,QNetworkAccessManager::Operation)\0"
    "theWrappedObject,headerName,value\0"
    "setRawHeader(QNetworkReply*,QByteArray,QByteArray)\0"
    "theWrappedObject,size\0"
    "setReadBufferSize(QNetworkReply*,qint64)\0"
    "theWrappedObject,request\0"
    "setRequest(QNetworkReply*,QNetworkRequest)\0"
    "theWrappedObject,url\0setUrl(QNetworkReply*,QUrl)\0"
    "QUrl\0url(QNetworkReply*)\0"
    "theWrappedObject,data,len\0"
    "writeData(QNetworkReply*,const char*,qint64)\0"
};

void PythonQtWrapper_QNetworkReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QNetworkReply *_t = static_cast<PythonQtWrapper_QNetworkReply *>(_o);
        switch (_id) {
        case 0: { QNetworkReply* _r = _t->new_QNetworkReply((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 1: { QNetworkReply* _r = _t->new_QNetworkReply();
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkReply((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->abort((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: { QVariant _r = _t->attribute((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::Attribute(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 5: _t->close((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: { QNetworkReply::NetworkError _r = _t->error((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkReply::NetworkError*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->hasRawHeader((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QVariant _r = _t->header((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::KnownHeaders(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 9: _t->ignoreSslErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: { bool _r = _t->isFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isRunning((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isSequential((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QNetworkAccessManager* _r = _t->manager((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkAccessManager**>(_a[0]) = _r; }  break;
        case 14: { QNetworkAccessManager::Operation _r = _t->operation((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkAccessManager::Operation*>(_a[0]) = _r; }  break;
        case 15: { QByteArray _r = _t->rawHeader((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 16: { QList<QByteArray> _r = _t->rawHeaderList((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 17: { const QList<QPair<QByteArray,QByteArray> >* _r = _t->rawHeaderPairs((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QList<QPair<QByteArray,QByteArray> >**>(_a[0]) = _r; }  break;
        case 18: { qint64 _r = _t->readBufferSize((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 19: { QNetworkRequest _r = _t->request((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkRequest*>(_a[0]) = _r; }  break;
        case 20: _t->setAttribute((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::Attribute(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 21: _t->setError((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 22: _t->setFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: _t->setHeader((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::KnownHeaders(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 24: _t->setOperation((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QNetworkAccessManager::Operation(*)>(_a[2]))); break;
        case 25: _t->setRawHeader((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 26: _t->setReadBufferSize((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 27: _t->setRequest((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2]))); break;
        case 28: _t->setUrl((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 29: { QUrl _r = _t->url((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 30: { qint64 _r = _t->writeData((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QNetworkReply::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QNetworkReply::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkReply,
      qt_meta_data_PythonQtWrapper_QNetworkReply, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QNetworkReply::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QNetworkReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkReply::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkReply))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkReply*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QNetworkRequest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       5,  119, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      56,   50,   33,   32, 0x0a,
      97,   93,   33,   32, 0x0a,
     123,   32,   33,   32, 0x2a,
     149,  145,   32,   32, 0x0a,
     234,  199,  190,   32, 0x0a,
     320,  298,  190,   32, 0x2a,
     408,  380,  375,   32, 0x0a,
     474,  450,  190,   32, 0x0a,
     552,  529,  375,   32, 0x0a,
     593,  529,  375,   32, 0x0a,
     660,  643,  634,   32, 0x0a,
     722,  643,  696,   32, 0x0a,
     760,  380,  749,   32, 0x0a,
     817,  643,  799,   32, 0x0a,
     877,  849,   32,   32, 0x0a,
     974,  944,   32,   32, 0x0a,
    1065, 1041,   32,   32, 0x0a,
    1139, 1113,   32,   32, 0x0a,
    1229, 1195,   32,   32, 0x0a,
    1303, 1282,   32,   32, 0x0a,
    1338,  643, 1333,   32, 0x0a,

 // enums: name, flags, count, data
    1360, 0x0,   19,  139,
    1370, 0x0,    4,  177,
    1387, 0x0,    7,  185,
    1400, 0x0,    2,  199,
    1412, 0x0,    3,  203,

 // enum data: key, value
    1421, uint(PythonQtWrapper_QNetworkRequest::HttpStatusCodeAttribute),
    1445, uint(PythonQtWrapper_QNetworkRequest::HttpReasonPhraseAttribute),
    1471, uint(PythonQtWrapper_QNetworkRequest::RedirectionTargetAttribute),
    1498, uint(PythonQtWrapper_QNetworkRequest::ConnectionEncryptedAttribute),
    1527, uint(PythonQtWrapper_QNetworkRequest::CacheLoadControlAttribute),
    1553, uint(PythonQtWrapper_QNetworkRequest::CacheSaveControlAttribute),
    1579, uint(PythonQtWrapper_QNetworkRequest::SourceIsFromCacheAttribute),
    1606, uint(PythonQtWrapper_QNetworkRequest::DoNotBufferUploadDataAttribute),
    1637, uint(PythonQtWrapper_QNetworkRequest::HttpPipeliningAllowedAttribute),
    1668, uint(PythonQtWrapper_QNetworkRequest::HttpPipeliningWasUsedAttribute),
    1699, uint(PythonQtWrapper_QNetworkRequest::CustomVerbAttribute),
    1719, uint(PythonQtWrapper_QNetworkRequest::CookieLoadControlAttribute),
    1746, uint(PythonQtWrapper_QNetworkRequest::AuthenticationReuseAttribute),
    1775, uint(PythonQtWrapper_QNetworkRequest::CookieSaveControlAttribute),
    1802, uint(PythonQtWrapper_QNetworkRequest::MaximumDownloadBufferSizeAttribute),
    1837, uint(PythonQtWrapper_QNetworkRequest::DownloadBufferAttribute),
    1861, uint(PythonQtWrapper_QNetworkRequest::SynchronousRequestAttribute),
    1889, uint(PythonQtWrapper_QNetworkRequest::User),
    1894, uint(PythonQtWrapper_QNetworkRequest::UserMax),
    1902, uint(PythonQtWrapper_QNetworkRequest::AlwaysNetwork),
    1916, uint(PythonQtWrapper_QNetworkRequest::PreferNetwork),
    1930, uint(PythonQtWrapper_QNetworkRequest::PreferCache),
    1942, uint(PythonQtWrapper_QNetworkRequest::AlwaysCache),
    1954, uint(PythonQtWrapper_QNetworkRequest::ContentTypeHeader),
    1972, uint(PythonQtWrapper_QNetworkRequest::ContentLengthHeader),
    1992, uint(PythonQtWrapper_QNetworkRequest::LocationHeader),
    2007, uint(PythonQtWrapper_QNetworkRequest::LastModifiedHeader),
    2026, uint(PythonQtWrapper_QNetworkRequest::CookieHeader),
    2039, uint(PythonQtWrapper_QNetworkRequest::SetCookieHeader),
    2055, uint(PythonQtWrapper_QNetworkRequest::ContentDispositionHeader),
    2080, uint(PythonQtWrapper_QNetworkRequest::Automatic),
    2090, uint(PythonQtWrapper_QNetworkRequest::Manual),
    2097, uint(PythonQtWrapper_QNetworkRequest::HighPriority),
    2110, uint(PythonQtWrapper_QNetworkRequest::NormalPriority),
    2125, uint(PythonQtWrapper_QNetworkRequest::LowPriority),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QNetworkRequest[] = {
    "PythonQtWrapper_QNetworkRequest\0\0"
    "QNetworkRequest*\0other\0"
    "new_QNetworkRequest(QNetworkRequest)\0"
    "url\0new_QNetworkRequest(QUrl)\0"
    "new_QNetworkRequest()\0obj\0"
    "delete_QNetworkRequest(QNetworkRequest*)\0"
    "QVariant\0theWrappedObject,code,defaultValue\0"
    "attribute(QNetworkRequest*,QNetworkRequest::Attribute,QVariant)\0"
    "theWrappedObject,code\0"
    "attribute(QNetworkRequest*,QNetworkRequest::Attribute)\0"
    "bool\0theWrappedObject,headerName\0"
    "hasRawHeader(QNetworkRequest*,QByteArray)\0"
    "theWrappedObject,header\0"
    "header(QNetworkRequest*,QNetworkRequest::KnownHeaders)\0"
    "theWrappedObject,other\0"
    "__ne__(QNetworkRequest*,QNetworkRequest)\0"
    "__eq__(QNetworkRequest*,QNetworkRequest)\0"
    "QObject*\0theWrappedObject\0"
    "originatingObject(QNetworkRequest*)\0"
    "QNetworkRequest::Priority\0"
    "priority(QNetworkRequest*)\0QByteArray\0"
    "rawHeader(QNetworkRequest*,QByteArray)\0"
    "QList<QByteArray>\0rawHeaderList(QNetworkRequest*)\0"
    "theWrappedObject,code,value\0"
    "setAttribute(QNetworkRequest*,QNetworkRequest::Attribute,QVariant)\0"
    "theWrappedObject,header,value\0"
    "setHeader(QNetworkRequest*,QNetworkRequest::KnownHeaders,QVariant)\0"
    "theWrappedObject,object\0"
    "setOriginatingObject(QNetworkRequest*,QObject*)\0"
    "theWrappedObject,priority\0"
    "setPriority(QNetworkRequest*,QNetworkRequest::Priority)\0"
    "theWrappedObject,headerName,value\0"
    "setRawHeader(QNetworkRequest*,QByteArray,QByteArray)\0"
    "theWrappedObject,url\0setUrl(QNetworkRequest*,QUrl)\0"
    "QUrl\0url(QNetworkRequest*)\0Attribute\0"
    "CacheLoadControl\0KnownHeaders\0LoadControl\0"
    "Priority\0HttpStatusCodeAttribute\0"
    "HttpReasonPhraseAttribute\0"
    "RedirectionTargetAttribute\0"
    "ConnectionEncryptedAttribute\0"
    "CacheLoadControlAttribute\0"
    "CacheSaveControlAttribute\0"
    "SourceIsFromCacheAttribute\0"
    "DoNotBufferUploadDataAttribute\0"
    "HttpPipeliningAllowedAttribute\0"
    "HttpPipeliningWasUsedAttribute\0"
    "CustomVerbAttribute\0CookieLoadControlAttribute\0"
    "AuthenticationReuseAttribute\0"
    "CookieSaveControlAttribute\0"
    "MaximumDownloadBufferSizeAttribute\0"
    "DownloadBufferAttribute\0"
    "SynchronousRequestAttribute\0User\0"
    "UserMax\0AlwaysNetwork\0PreferNetwork\0"
    "PreferCache\0AlwaysCache\0ContentTypeHeader\0"
    "ContentLengthHeader\0LocationHeader\0"
    "LastModifiedHeader\0CookieHeader\0"
    "SetCookieHeader\0ContentDispositionHeader\0"
    "Automatic\0Manual\0HighPriority\0"
    "NormalPriority\0LowPriority\0"
};

void PythonQtWrapper_QNetworkRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QNetworkRequest *_t = static_cast<PythonQtWrapper_QNetworkRequest *>(_o);
        switch (_id) {
        case 0: { QNetworkRequest* _r = _t->new_QNetworkRequest((*reinterpret_cast< const QNetworkRequest(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkRequest**>(_a[0]) = _r; }  break;
        case 1: { QNetworkRequest* _r = _t->new_QNetworkRequest((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkRequest**>(_a[0]) = _r; }  break;
        case 2: { QNetworkRequest* _r = _t->new_QNetworkRequest();
            if (_a[0]) *reinterpret_cast< QNetworkRequest**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QNetworkRequest((*reinterpret_cast< QNetworkRequest*(*)>(_a[1]))); break;
        case 4: { QVariant _r = _t->attribute((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::Attribute(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 5: { QVariant _r = _t->attribute((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::Attribute(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->hasRawHeader((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QVariant _r = _t->header((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::KnownHeaders(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__ne__((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->__eq__((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QObject* _r = _t->originatingObject((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 11: { QNetworkRequest::Priority _r = _t->priority((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkRequest::Priority*>(_a[0]) = _r; }  break;
        case 12: { QByteArray _r = _t->rawHeader((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 13: { QList<QByteArray> _r = _t->rawHeaderList((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 14: _t->setAttribute((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::Attribute(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 15: _t->setHeader((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::KnownHeaders(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 16: _t->setOriginatingObject((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 17: _t->setPriority((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::Priority(*)>(_a[2]))); break;
        case 18: _t->setRawHeader((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 19: _t->setUrl((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 20: { QUrl _r = _t->url((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QNetworkRequest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QNetworkRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkRequest,
      qt_meta_data_PythonQtWrapper_QNetworkRequest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QNetworkRequest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QNetworkRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkRequest))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkRequest*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QNetworkSession[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       2,  104, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      68,   50,   33,   32, 0x0a,
     131,  120,   33,   32, 0x2a,
     178,  174,   32,   32, 0x0a,
     244,  227,  219,   32, 0x0a,
     273,  227,  219,   32, 0x0a,
     305,  227,  219,   32, 0x0a,
     358,  227,  336,   32, 0x0a,
     414,  390,   32,   32, 0x0a,
     458,  390,   32,   32, 0x0a,
     535,  227,  505,   32, 0x0a,
     567,  227,  559,   32, 0x0a,
     615,  227,  597,   32, 0x0a,
     648,  227,  643,   32, 0x0a,
     703,  682,  673,   32, 0x0a,
     772,  745,   32,   32, 0x0a,
     849,  227,  826,   32, 0x0a,
     896,  873,  643,   32, 0x0a,
     932,  227,  643,   32, 0x2a,

 // enums: name, flags, count, data
     964, 0x0,    5,  112,
     977, 0x0,    7,  122,

 // enum data: key, value
     983, uint(PythonQtWrapper_QNetworkSession::UnknownSessionError),
    1003, uint(PythonQtWrapper_QNetworkSession::SessionAbortedError),
    1023, uint(PythonQtWrapper_QNetworkSession::RoamingError),
    1036, uint(PythonQtWrapper_QNetworkSession::OperationNotSupportedError),
    1063, uint(PythonQtWrapper_QNetworkSession::InvalidConfigurationError),
    1089, uint(PythonQtWrapper_QNetworkSession::Invalid),
    1097, uint(PythonQtWrapper_QNetworkSession::NotAvailable),
    1110, uint(PythonQtWrapper_QNetworkSession::Connecting),
    1121, uint(PythonQtWrapper_QNetworkSession::Connected),
    1131, uint(PythonQtWrapper_QNetworkSession::Closing),
    1139, uint(PythonQtWrapper_QNetworkSession::Disconnected),
    1152, uint(PythonQtWrapper_QNetworkSession::Roaming),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QNetworkSession[] = {
    "PythonQtWrapper_QNetworkSession\0\0"
    "QNetworkSession*\0connConfig,parent\0"
    "new_QNetworkSession(QNetworkConfiguration,QObject*)\0"
    "connConfig\0new_QNetworkSession(QNetworkConfiguration)\0"
    "obj\0delete_QNetworkSession(QNetworkSession*)\0"
    "quint64\0theWrappedObject\0"
    "activeTime(QNetworkSession*)\0"
    "bytesReceived(QNetworkSession*)\0"
    "bytesWritten(QNetworkSession*)\0"
    "QNetworkConfiguration\0"
    "configuration(QNetworkSession*)\0"
    "theWrappedObject,signal\0"
    "connectNotify(QNetworkSession*,const char*)\0"
    "disconnectNotify(QNetworkSession*,const char*)\0"
    "QNetworkSession::SessionError\0"
    "error(QNetworkSession*)\0QString\0"
    "errorString(QNetworkSession*)\0"
    "QNetworkInterface\0interface(QNetworkSession*)\0"
    "bool\0isOpen(QNetworkSession*)\0QVariant\0"
    "theWrappedObject,key\0"
    "sessionProperty(QNetworkSession*,QString)\0"
    "theWrappedObject,key,value\0"
    "setSessionProperty(QNetworkSession*,QString,QVariant)\0"
    "QNetworkSession::State\0state(QNetworkSession*)\0"
    "theWrappedObject,msecs\0"
    "waitForOpened(QNetworkSession*,int)\0"
    "waitForOpened(QNetworkSession*)\0"
    "SessionError\0State\0UnknownSessionError\0"
    "SessionAbortedError\0RoamingError\0"
    "OperationNotSupportedError\0"
    "InvalidConfigurationError\0Invalid\0"
    "NotAvailable\0Connecting\0Connected\0"
    "Closing\0Disconnected\0Roaming\0"
};

void PythonQtWrapper_QNetworkSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QNetworkSession *_t = static_cast<PythonQtWrapper_QNetworkSession *>(_o);
        switch (_id) {
        case 0: { QNetworkSession* _r = _t->new_QNetworkSession((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkSession**>(_a[0]) = _r; }  break;
        case 1: { QNetworkSession* _r = _t->new_QNetworkSession((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkSession**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkSession((*reinterpret_cast< QNetworkSession*(*)>(_a[1]))); break;
        case 3: { quint64 _r = _t->activeTime((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 4: { quint64 _r = _t->bytesReceived((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 5: { quint64 _r = _t->bytesWritten((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 6: { QNetworkConfiguration _r = _t->configuration((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration*>(_a[0]) = _r; }  break;
        case 7: _t->connectNotify((*reinterpret_cast< QNetworkSession*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 8: _t->disconnectNotify((*reinterpret_cast< QNetworkSession*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 9: { QNetworkSession::SessionError _r = _t->error((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkSession::SessionError*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->errorString((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QNetworkInterface _r = _t->interface((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkInterface*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isOpen((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QVariant _r = _t->sessionProperty((*reinterpret_cast< QNetworkSession*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 14: _t->setSessionProperty((*reinterpret_cast< QNetworkSession*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 15: { QNetworkSession::State _r = _t->state((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkSession::State*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->waitForOpened((*reinterpret_cast< QNetworkSession*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->waitForOpened((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QNetworkSession::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QNetworkSession::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkSession,
      qt_meta_data_PythonQtWrapper_QNetworkSession, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QNetworkSession::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QNetworkSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkSession::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkSession))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkSession*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

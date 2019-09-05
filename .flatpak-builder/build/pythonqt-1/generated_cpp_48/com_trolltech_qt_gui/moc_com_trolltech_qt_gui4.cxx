/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_gui4.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "com_trolltech_qt_gui4.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_gui4.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QIconEngine[] = {

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
      42,   28,   29,   28, 0x0a,
      64,   60,   28,   28, 0x0a,
     136,  103,   97,   28, 0x0a,
     234,  192,   28,   28, 0x0a,
     330,  295,   28,   28, 0x0a,
     428,  387,   28,   28, 0x0a,
     497,  103,  489,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QIconEngine[] = {
    "PythonQtWrapper_QIconEngine\0\0QIconEngine*\0"
    "new_QIconEngine()\0obj\0"
    "delete_QIconEngine(QIconEngine*)\0QSize\0"
    "theWrappedObject,size,mode,state\0"
    "actualSize(QIconEngine*,QSize,QIcon::Mode,QIcon::State)\0"
    "theWrappedObject,fileName,size,mode,state\0"
    "addFile(QIconEngine*,QString,QSize,QIcon::Mode,QIcon::State)\0"
    "theWrappedObject,pixmap,mode,state\0"
    "addPixmap(QIconEngine*,QPixmap,QIcon::Mode,QIcon::State)\0"
    "theWrappedObject,painter,rect,mode,state\0"
    "paint(QIconEngine*,QPainter*,QRect,QIcon::Mode,QIcon::State)\0"
    "QPixmap\0pixmap(QIconEngine*,QSize,QIcon::Mode,QIcon::State)\0"
};

void PythonQtWrapper_QIconEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QIconEngine *_t = static_cast<PythonQtWrapper_QIconEngine *>(_o);
        switch (_id) {
        case 0: { QIconEngine* _r = _t->new_QIconEngine();
            if (_a[0]) *reinterpret_cast< QIconEngine**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QIconEngine((*reinterpret_cast< QIconEngine*(*)>(_a[1]))); break;
        case 2: { QSize _r = _t->actualSize((*reinterpret_cast< QIconEngine*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< QIcon::Mode(*)>(_a[3])),(*reinterpret_cast< QIcon::State(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 3: _t->addFile((*reinterpret_cast< QIconEngine*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QSize(*)>(_a[3])),(*reinterpret_cast< QIcon::Mode(*)>(_a[4])),(*reinterpret_cast< QIcon::State(*)>(_a[5]))); break;
        case 4: _t->addPixmap((*reinterpret_cast< QIconEngine*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])),(*reinterpret_cast< QIcon::Mode(*)>(_a[3])),(*reinterpret_cast< QIcon::State(*)>(_a[4]))); break;
        case 5: _t->paint((*reinterpret_cast< QIconEngine*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3])),(*reinterpret_cast< QIcon::Mode(*)>(_a[4])),(*reinterpret_cast< QIcon::State(*)>(_a[5]))); break;
        case 6: { QPixmap _r = _t->pixmap((*reinterpret_cast< QIconEngine*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< QIcon::Mode(*)>(_a[3])),(*reinterpret_cast< QIcon::State(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QIconEngine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QIconEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QIconEngine,
      qt_meta_data_PythonQtWrapper_QIconEngine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QIconEngine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QIconEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QIconEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QIconEngine))
        return static_cast<void*>(const_cast< PythonQtWrapper_QIconEngine*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QIconEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QIconEnginePluginV2[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      65,   58,   37,   36, 0x0a,
      99,   36,   37,   36, 0x2a,
     129,  125,   36,   36, 0x0a,
     219,  193,  178,   36, 0x0a,
     273,  256,  178,   36, 0x2a,
     314,  256,  302,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QIconEnginePluginV2[] = {
    "PythonQtWrapper_QIconEnginePluginV2\0"
    "\0QIconEnginePluginV2*\0parent\0"
    "new_QIconEnginePluginV2(QObject*)\0"
    "new_QIconEnginePluginV2()\0obj\0"
    "delete_QIconEnginePluginV2(QIconEnginePluginV2*)\0"
    "QIconEngineV2*\0theWrappedObject,filename\0"
    "create(QIconEnginePluginV2*,QString)\0"
    "theWrappedObject\0create(QIconEnginePluginV2*)\0"
    "QStringList\0keys(QIconEnginePluginV2*)\0"
};

void PythonQtWrapper_QIconEnginePluginV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QIconEnginePluginV2 *_t = static_cast<PythonQtWrapper_QIconEnginePluginV2 *>(_o);
        switch (_id) {
        case 0: { QIconEnginePluginV2* _r = _t->new_QIconEnginePluginV2((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIconEnginePluginV2**>(_a[0]) = _r; }  break;
        case 1: { QIconEnginePluginV2* _r = _t->new_QIconEnginePluginV2();
            if (_a[0]) *reinterpret_cast< QIconEnginePluginV2**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QIconEnginePluginV2((*reinterpret_cast< QIconEnginePluginV2*(*)>(_a[1]))); break;
        case 3: { QIconEngineV2* _r = _t->create((*reinterpret_cast< QIconEnginePluginV2*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIconEngineV2**>(_a[0]) = _r; }  break;
        case 4: { QIconEngineV2* _r = _t->create((*reinterpret_cast< QIconEnginePluginV2*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIconEngineV2**>(_a[0]) = _r; }  break;
        case 5: { QStringList _r = _t->keys((*reinterpret_cast< QIconEnginePluginV2*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QIconEnginePluginV2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QIconEnginePluginV2::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QIconEnginePluginV2,
      qt_meta_data_PythonQtWrapper_QIconEnginePluginV2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QIconEnginePluginV2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QIconEnginePluginV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QIconEnginePluginV2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QIconEnginePluginV2))
        return static_cast<void*>(const_cast< PythonQtWrapper_QIconEnginePluginV2*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QIconEnginePluginV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QImageIOHandler[] = {

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
      50,   32,   33,   32, 0x0a,
      76,   72,   32,   32, 0x0a,
     139,  122,  117,   32, 0x0a,
     169,  122,  165,   32, 0x0a,
     212,  122,  206,   32, 0x0a,
     258,  122,  247,   32, 0x0a,
     294,  122,  283,   32, 0x0a,
     319,  122,  165,   32, 0x0a,
     377,  348,  117,   32, 0x0a,
     411,  122,  117,   32, 0x0a,
     445,  122,  165,   32, 0x0a,
     473,  122,  165,   32, 0x0a,
     539,  515,  506,   32, 0x0a,
     616,  593,  117,   32, 0x0a,
     671,  647,   32,   32, 0x0a,
     734,  710,   32,   32, 0x0a,
     803,  773,   32,   32, 0x0a,
     869,  515,  117,   32, 0x0a,
     931,  593,  117,   32, 0x0a,

 // enums: name, flags, count, data
     962, 0x0,   15,  113,

 // enum data: key, value
     974, uint(PythonQtWrapper_QImageIOHandler::Size),
     979, uint(PythonQtWrapper_QImageIOHandler::ClipRect),
     988, uint(PythonQtWrapper_QImageIOHandler::Description),
    1000, uint(PythonQtWrapper_QImageIOHandler::ScaledClipRect),
    1015, uint(PythonQtWrapper_QImageIOHandler::ScaledSize),
    1026, uint(PythonQtWrapper_QImageIOHandler::CompressionRatio),
    1043, uint(PythonQtWrapper_QImageIOHandler::Gamma),
    1049, uint(PythonQtWrapper_QImageIOHandler::Quality),
    1057, uint(PythonQtWrapper_QImageIOHandler::Name),
    1062, uint(PythonQtWrapper_QImageIOHandler::SubType),
    1070, uint(PythonQtWrapper_QImageIOHandler::IncrementalReading),
    1089, uint(PythonQtWrapper_QImageIOHandler::Endianness),
    1100, uint(PythonQtWrapper_QImageIOHandler::Animation),
    1110, uint(PythonQtWrapper_QImageIOHandler::BackgroundColor),
    1126, uint(PythonQtWrapper_QImageIOHandler::ImageFormat),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QImageIOHandler[] = {
    "PythonQtWrapper_QImageIOHandler\0\0"
    "QImageIOHandler*\0new_QImageIOHandler()\0"
    "obj\0delete_QImageIOHandler(QImageIOHandler*)\0"
    "bool\0theWrappedObject\0canRead(QImageIOHandler*)\0"
    "int\0currentImageNumber(QImageIOHandler*)\0"
    "QRect\0currentImageRect(QImageIOHandler*)\0"
    "QIODevice*\0device(QImageIOHandler*)\0"
    "QByteArray\0format(QImageIOHandler*)\0"
    "imageCount(QImageIOHandler*)\0"
    "theWrappedObject,imageNumber\0"
    "jumpToImage(QImageIOHandler*,int)\0"
    "jumpToNextImage(QImageIOHandler*)\0"
    "loopCount(QImageIOHandler*)\0"
    "nextImageDelay(QImageIOHandler*)\0"
    "QVariant\0theWrappedObject,option\0"
    "option(QImageIOHandler*,QImageIOHandler::ImageOption)\0"
    "theWrappedObject,image\0"
    "read(QImageIOHandler*,QImage*)\0"
    "theWrappedObject,device\0"
    "setDevice(QImageIOHandler*,QIODevice*)\0"
    "theWrappedObject,format\0"
    "setFormat(QImageIOHandler*,QByteArray)\0"
    "theWrappedObject,option,value\0"
    "setOption(QImageIOHandler*,QImageIOHandler::ImageOption,QVariant)\0"
    "supportsOption(QImageIOHandler*,QImageIOHandler::ImageOption)\0"
    "write(QImageIOHandler*,QImage)\0"
    "ImageOption\0Size\0ClipRect\0Description\0"
    "ScaledClipRect\0ScaledSize\0CompressionRatio\0"
    "Gamma\0Quality\0Name\0SubType\0"
    "IncrementalReading\0Endianness\0Animation\0"
    "BackgroundColor\0ImageFormat\0"
};

void PythonQtWrapper_QImageIOHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QImageIOHandler *_t = static_cast<PythonQtWrapper_QImageIOHandler *>(_o);
        switch (_id) {
        case 0: { QImageIOHandler* _r = _t->new_QImageIOHandler();
            if (_a[0]) *reinterpret_cast< QImageIOHandler**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QImageIOHandler((*reinterpret_cast< QImageIOHandler*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->canRead((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->currentImageNumber((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { QRect _r = _t->currentImageRect((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 5: { QIODevice* _r = _t->device((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 6: { QByteArray _r = _t->format((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->imageCount((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->jumpToImage((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->jumpToNextImage((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->loopCount((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->nextImageDelay((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { QVariant _r = _t->option((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])),(*reinterpret_cast< QImageIOHandler::ImageOption(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->read((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])),(*reinterpret_cast< QImage*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->setDevice((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 15: _t->setFormat((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 16: _t->setOption((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])),(*reinterpret_cast< QImageIOHandler::ImageOption(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 17: { bool _r = _t->supportsOption((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])),(*reinterpret_cast< QImageIOHandler::ImageOption(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->write((*reinterpret_cast< QImageIOHandler*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QImageIOHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QImageIOHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QImageIOHandler,
      qt_meta_data_PythonQtWrapper_QImageIOHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QImageIOHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QImageIOHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QImageIOHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QImageIOHandler))
        return static_cast<void*>(const_cast< PythonQtWrapper_QImageIOHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QImageIOHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QImageIOPlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       2,   49, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      55,   48,   32,   31, 0x0a,
      84,   31,   32,   31, 0x2a,
     109,  105,   31,   31, 0x0a,
     208,  177,  148,   31, 0x0a,
     277,  177,  260,   31, 0x0a,
     347,  323,  260,   31, 0x2a,
     411,  394,  382,   31, 0x0a,

 // enums: name, flags, count, data
     433, 0x0,    3,   57,
     444, 0x1,    3,   63,

 // enum data: key, value
     457, uint(PythonQtWrapper_QImageIOPlugin::CanRead),
     465, uint(PythonQtWrapper_QImageIOPlugin::CanWrite),
     474, uint(PythonQtWrapper_QImageIOPlugin::CanReadIncremental),
     457, uint(PythonQtWrapper_QImageIOPlugin::CanRead),
     465, uint(PythonQtWrapper_QImageIOPlugin::CanWrite),
     474, uint(PythonQtWrapper_QImageIOPlugin::CanReadIncremental),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QImageIOPlugin[] = {
    "PythonQtWrapper_QImageIOPlugin\0\0"
    "QImageIOPlugin*\0parent\0"
    "new_QImageIOPlugin(QObject*)\0"
    "new_QImageIOPlugin()\0obj\0"
    "delete_QImageIOPlugin(QImageIOPlugin*)\0"
    "QImageIOPlugin::Capabilities\0"
    "theWrappedObject,device,format\0"
    "capabilities(QImageIOPlugin*,QIODevice*,QByteArray)\0"
    "QImageIOHandler*\0"
    "create(QImageIOPlugin*,QIODevice*,QByteArray)\0"
    "theWrappedObject,device\0"
    "create(QImageIOPlugin*,QIODevice*)\0"
    "QStringList\0theWrappedObject\0"
    "keys(QImageIOPlugin*)\0Capability\0"
    "Capabilities\0CanRead\0CanWrite\0"
    "CanReadIncremental\0"
};

void PythonQtWrapper_QImageIOPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QImageIOPlugin *_t = static_cast<PythonQtWrapper_QImageIOPlugin *>(_o);
        switch (_id) {
        case 0: { QImageIOPlugin* _r = _t->new_QImageIOPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImageIOPlugin**>(_a[0]) = _r; }  break;
        case 1: { QImageIOPlugin* _r = _t->new_QImageIOPlugin();
            if (_a[0]) *reinterpret_cast< QImageIOPlugin**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QImageIOPlugin((*reinterpret_cast< QImageIOPlugin*(*)>(_a[1]))); break;
        case 3: { QImageIOPlugin::Capabilities _r = _t->capabilities((*reinterpret_cast< QImageIOPlugin*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QImageIOPlugin::Capabilities*>(_a[0]) = _r; }  break;
        case 4: { QImageIOHandler* _r = _t->create((*reinterpret_cast< QImageIOPlugin*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QImageIOHandler**>(_a[0]) = _r; }  break;
        case 5: { QImageIOHandler* _r = _t->create((*reinterpret_cast< QImageIOPlugin*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImageIOHandler**>(_a[0]) = _r; }  break;
        case 6: { QStringList _r = _t->keys((*reinterpret_cast< QImageIOPlugin*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QImageIOPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QImageIOPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QImageIOPlugin,
      qt_meta_data_PythonQtWrapper_QImageIOPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QImageIOPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QImageIOPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QImageIOPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QImageIOPlugin))
        return static_cast<void*>(const_cast< PythonQtWrapper_QImageIOPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QImageIOPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QImageReader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       1,  244, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   29,   30,   29, 0x0a,
      77,   63,   30,   29, 0x0a,
     124,  117,   30,   29, 0x2a,
     169,  153,   30,   29, 0x0a,
     215,  206,   30,   29, 0x2a,
     245,  241,   29,   29, 0x0a,
     302,  285,  280,   29, 0x0a,
     346,  285,  339,   29, 0x0a,
     377,  285,  280,   29, 0x0a,
     406,  285,  400,   29, 0x0a,
     434,  285,  430,   29, 0x0a,
     468,  285,  400,   29, 0x0a,
     500,  285,  280,   29, 0x0a,
     550,  285,  539,   29, 0x0a,
     603,  285,  572,   29, 0x0a,
     632,  285,  624,   29, 0x0a,
     659,  285,  624,   29, 0x0a,
     694,  285,  683,   29, 0x0a,
     716,  285,  430,   29, 0x0a,
     757,  285,  742,   29, 0x0a,
     784,  117,  683,   29, 0x0a,
     828,  206,  683,   29, 0x0a,
     898,  869,  280,   29, 0x0a,
     929,  285,  280,   29, 0x0a,
     960,  285,  430,   29, 0x0a,
     985,  285,  430,   29, 0x0a,
    1015,  285,  430,   29, 0x0a,
    1045,  285, 1038,   29, 0x0a,
    1065,  285,  400,   29, 0x0a,
    1101,  285, 1095,   29, 0x0a,
    1152, 1127,   29,   29, 0x0a,
    1220, 1197,   29,   29, 0x0a,
    1283, 1261,   29,   29, 0x0a,
    1341, 1316,   29,   29, 0x0a,
    1412, 1388,   29,   29, 0x0a,
    1474, 1448,   29,   29, 0x0a,
    1533, 1509,   29,   29, 0x0a,
    1594, 1569,   29,   29, 0x0a,
    1624, 1261,   29,   29, 0x0a,
    1685, 1663,   29,   29, 0x0a,
    1720,  285, 1095,   29, 0x0a,
    1758,   29, 1740,   29, 0x0a,
    1802,  285,  280,   29, 0x0a,
    1859, 1835,  280,   29, 0x0a,
    1939, 1918,  624,   29, 0x0a,
    1979,  285, 1967,   29, 0x0a,

 // enums: name, flags, count, data
    2003, 0x0,    5,  248,

 // enum data: key, value
    2020, uint(PythonQtWrapper_QImageReader::UnknownError),
    2033, uint(PythonQtWrapper_QImageReader::FileNotFoundError),
    2051, uint(PythonQtWrapper_QImageReader::DeviceError),
    2063, uint(PythonQtWrapper_QImageReader::UnsupportedFormatError),
    2086, uint(PythonQtWrapper_QImageReader::InvalidDataError),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QImageReader[] = {
    "PythonQtWrapper_QImageReader\0\0"
    "QImageReader*\0new_QImageReader()\0"
    "device,format\0new_QImageReader(QIODevice*,QByteArray)\0"
    "device\0new_QImageReader(QIODevice*)\0"
    "fileName,format\0new_QImageReader(QString,QByteArray)\0"
    "fileName\0new_QImageReader(QString)\0"
    "obj\0delete_QImageReader(QImageReader*)\0"
    "bool\0theWrappedObject\0"
    "autoDetectImageFormat(QImageReader*)\0"
    "QColor\0backgroundColor(QImageReader*)\0"
    "canRead(QImageReader*)\0QRect\0"
    "clipRect(QImageReader*)\0int\0"
    "currentImageNumber(QImageReader*)\0"
    "currentImageRect(QImageReader*)\0"
    "decideFormatFromContent(QImageReader*)\0"
    "QIODevice*\0device(QImageReader*)\0"
    "QImageReader::ImageReaderError\0"
    "error(QImageReader*)\0QString\0"
    "errorString(QImageReader*)\0"
    "fileName(QImageReader*)\0QByteArray\0"
    "format(QImageReader*)\0imageCount(QImageReader*)\0"
    "QImage::Format\0imageFormat(QImageReader*)\0"
    "static_QImageReader_imageFormat(QIODevice*)\0"
    "static_QImageReader_imageFormat(QString)\0"
    "theWrappedObject,imageNumber\0"
    "jumpToImage(QImageReader*,int)\0"
    "jumpToNextImage(QImageReader*)\0"
    "loopCount(QImageReader*)\0"
    "nextImageDelay(QImageReader*)\0"
    "quality(QImageReader*)\0QImage\0"
    "read(QImageReader*)\0scaledClipRect(QImageReader*)\0"
    "QSize\0scaledSize(QImageReader*)\0"
    "theWrappedObject,enabled\0"
    "setAutoDetectImageFormat(QImageReader*,bool)\0"
    "theWrappedObject,color\0"
    "setBackgroundColor(QImageReader*,QColor)\0"
    "theWrappedObject,rect\0"
    "setClipRect(QImageReader*,QRect)\0"
    "theWrappedObject,ignored\0"
    "setDecideFormatFromContent(QImageReader*,bool)\0"
    "theWrappedObject,device\0"
    "setDevice(QImageReader*,QIODevice*)\0"
    "theWrappedObject,fileName\0"
    "setFileName(QImageReader*,QString)\0"
    "theWrappedObject,format\0"
    "setFormat(QImageReader*,QByteArray)\0"
    "theWrappedObject,quality\0"
    "setQuality(QImageReader*,int)\0"
    "setScaledClipRect(QImageReader*,QRect)\0"
    "theWrappedObject,size\0"
    "setScaledSize(QImageReader*,QSize)\0"
    "size(QImageReader*)\0QList<QByteArray>\0"
    "static_QImageReader_supportedImageFormats()\0"
    "supportsAnimation(QImageReader*)\0"
    "theWrappedObject,option\0"
    "supportsOption(QImageReader*,QImageIOHandler::ImageOption)\0"
    "theWrappedObject,key\0text(QImageReader*,QString)\0"
    "QStringList\0textKeys(QImageReader*)\0"
    "ImageReaderError\0UnknownError\0"
    "FileNotFoundError\0DeviceError\0"
    "UnsupportedFormatError\0InvalidDataError\0"
};

void PythonQtWrapper_QImageReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QImageReader *_t = static_cast<PythonQtWrapper_QImageReader *>(_o);
        switch (_id) {
        case 0: { QImageReader* _r = _t->new_QImageReader();
            if (_a[0]) *reinterpret_cast< QImageReader**>(_a[0]) = _r; }  break;
        case 1: { QImageReader* _r = _t->new_QImageReader((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImageReader**>(_a[0]) = _r; }  break;
        case 2: { QImageReader* _r = _t->new_QImageReader((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImageReader**>(_a[0]) = _r; }  break;
        case 3: { QImageReader* _r = _t->new_QImageReader((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImageReader**>(_a[0]) = _r; }  break;
        case 4: { QImageReader* _r = _t->new_QImageReader((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImageReader**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QImageReader((*reinterpret_cast< QImageReader*(*)>(_a[1]))); break;
        case 6: { bool _r = _t->autoDetectImageFormat((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QColor _r = _t->backgroundColor((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->canRead((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QRect _r = _t->clipRect((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->currentImageNumber((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QRect _r = _t->currentImageRect((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->decideFormatFromContent((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QIODevice* _r = _t->device((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 14: { QImageReader::ImageReaderError _r = _t->error((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImageReader::ImageReaderError*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->errorString((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->fileName((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { QByteArray _r = _t->format((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->imageCount((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { QImage::Format _r = _t->imageFormat((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage::Format*>(_a[0]) = _r; }  break;
        case 20: { QByteArray _r = _t->static_QImageReader_imageFormat((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 21: { QByteArray _r = _t->static_QImageReader_imageFormat((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->jumpToImage((*reinterpret_cast< QImageReader*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->jumpToNextImage((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->loopCount((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->nextImageDelay((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->quality((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { QImage _r = _t->read((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 28: { QRect _r = _t->scaledClipRect((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 29: { QSize _r = _t->scaledSize((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 30: _t->setAutoDetectImageFormat((*reinterpret_cast< QImageReader*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->setBackgroundColor((*reinterpret_cast< QImageReader*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 32: _t->setClipRect((*reinterpret_cast< QImageReader*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 33: _t->setDecideFormatFromContent((*reinterpret_cast< QImageReader*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 34: _t->setDevice((*reinterpret_cast< QImageReader*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 35: _t->setFileName((*reinterpret_cast< QImageReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 36: _t->setFormat((*reinterpret_cast< QImageReader*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 37: _t->setQuality((*reinterpret_cast< QImageReader*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 38: _t->setScaledClipRect((*reinterpret_cast< QImageReader*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 39: _t->setScaledSize((*reinterpret_cast< QImageReader*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 40: { QSize _r = _t->size((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 41: { QList<QByteArray> _r = _t->static_QImageReader_supportedImageFormats();
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->supportsAnimation((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->supportsOption((*reinterpret_cast< QImageReader*(*)>(_a[1])),(*reinterpret_cast< QImageIOHandler::ImageOption(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: { QString _r = _t->text((*reinterpret_cast< QImageReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 45: { QStringList _r = _t->textKeys((*reinterpret_cast< QImageReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QImageReader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QImageReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QImageReader,
      qt_meta_data_PythonQtWrapper_QImageReader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QImageReader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QImageReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QImageReader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QImageReader))
        return static_cast<void*>(const_cast< PythonQtWrapper_QImageReader*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QImageReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QImageWriter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       1,  134, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   29,   30,   29, 0x0a,
      77,   63,   30,   29, 0x0a,
     133,  117,   30,   29, 0x0a,
     179,  170,   30,   29, 0x2a,
     209,  205,   29,   29, 0x0a,
     266,  249,  244,   29, 0x0a,
     294,  249,  290,   29, 0x0a,
     332,  249,  321,   29, 0x0a,
     385,  249,  354,   29, 0x0a,
     414,  249,  406,   29, 0x0a,
     441,  249,  406,   29, 0x0a,
     476,  249,  465,   29, 0x0a,
     504,  249,  498,   29, 0x0a,
     525,  249,  290,   29, 0x0a,
     577,  548,   29,   29, 0x0a,
     635,  611,   29,   29, 0x0a,
     697,  671,   29,   29, 0x0a,
     756,  732,   29,   29, 0x0a,
     815,  792,   29,   29, 0x0a,
     870,  845,   29,   29, 0x0a,
     926,  900,   29,   29, 0x0a,
     983,   29,  965,   29, 0x0a,
    1051, 1027,  244,   29, 0x0a,
    1133, 1110,  244,   29, 0x0a,

 // enums: name, flags, count, data
    1161, 0x0,    3,  138,

 // enum data: key, value
    1178, uint(PythonQtWrapper_QImageWriter::UnknownError),
    1191, uint(PythonQtWrapper_QImageWriter::DeviceError),
    1203, uint(PythonQtWrapper_QImageWriter::UnsupportedFormatError),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QImageWriter[] = {
    "PythonQtWrapper_QImageWriter\0\0"
    "QImageWriter*\0new_QImageWriter()\0"
    "device,format\0new_QImageWriter(QIODevice*,QByteArray)\0"
    "fileName,format\0new_QImageWriter(QString,QByteArray)\0"
    "fileName\0new_QImageWriter(QString)\0"
    "obj\0delete_QImageWriter(QImageWriter*)\0"
    "bool\0theWrappedObject\0canWrite(QImageWriter*)\0"
    "int\0compression(QImageWriter*)\0"
    "QIODevice*\0device(QImageWriter*)\0"
    "QImageWriter::ImageWriterError\0"
    "error(QImageWriter*)\0QString\0"
    "errorString(QImageWriter*)\0"
    "fileName(QImageWriter*)\0QByteArray\0"
    "format(QImageWriter*)\0float\0"
    "gamma(QImageWriter*)\0quality(QImageWriter*)\0"
    "theWrappedObject,compression\0"
    "setCompression(QImageWriter*,int)\0"
    "theWrappedObject,device\0"
    "setDevice(QImageWriter*,QIODevice*)\0"
    "theWrappedObject,fileName\0"
    "setFileName(QImageWriter*,QString)\0"
    "theWrappedObject,format\0"
    "setFormat(QImageWriter*,QByteArray)\0"
    "theWrappedObject,gamma\0"
    "setGamma(QImageWriter*,float)\0"
    "theWrappedObject,quality\0"
    "setQuality(QImageWriter*,int)\0"
    "theWrappedObject,key,text\0"
    "setText(QImageWriter*,QString,QString)\0"
    "QList<QByteArray>\0"
    "static_QImageWriter_supportedImageFormats()\0"
    "theWrappedObject,option\0"
    "supportsOption(QImageWriter*,QImageIOHandler::ImageOption)\0"
    "theWrappedObject,image\0"
    "write(QImageWriter*,QImage)\0"
    "ImageWriterError\0UnknownError\0DeviceError\0"
    "UnsupportedFormatError\0"
};

void PythonQtWrapper_QImageWriter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QImageWriter *_t = static_cast<PythonQtWrapper_QImageWriter *>(_o);
        switch (_id) {
        case 0: { QImageWriter* _r = _t->new_QImageWriter();
            if (_a[0]) *reinterpret_cast< QImageWriter**>(_a[0]) = _r; }  break;
        case 1: { QImageWriter* _r = _t->new_QImageWriter((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImageWriter**>(_a[0]) = _r; }  break;
        case 2: { QImageWriter* _r = _t->new_QImageWriter((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImageWriter**>(_a[0]) = _r; }  break;
        case 3: { QImageWriter* _r = _t->new_QImageWriter((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImageWriter**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QImageWriter((*reinterpret_cast< QImageWriter*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->canWrite((*reinterpret_cast< QImageWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->compression((*reinterpret_cast< QImageWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { QIODevice* _r = _t->device((*reinterpret_cast< QImageWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 8: { QImageWriter::ImageWriterError _r = _t->error((*reinterpret_cast< QImageWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImageWriter::ImageWriterError*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->errorString((*reinterpret_cast< QImageWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->fileName((*reinterpret_cast< QImageWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QByteArray _r = _t->format((*reinterpret_cast< QImageWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 12: { float _r = _t->gamma((*reinterpret_cast< QImageWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->quality((*reinterpret_cast< QImageWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: _t->setCompression((*reinterpret_cast< QImageWriter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->setDevice((*reinterpret_cast< QImageWriter*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 16: _t->setFileName((*reinterpret_cast< QImageWriter*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->setFormat((*reinterpret_cast< QImageWriter*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 18: _t->setGamma((*reinterpret_cast< QImageWriter*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 19: _t->setQuality((*reinterpret_cast< QImageWriter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->setText((*reinterpret_cast< QImageWriter*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 21: { QList<QByteArray> _r = _t->static_QImageWriter_supportedImageFormats();
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->supportsOption((*reinterpret_cast< QImageWriter*(*)>(_a[1])),(*reinterpret_cast< QImageIOHandler::ImageOption(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->write((*reinterpret_cast< QImageWriter*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QImageWriter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QImageWriter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QImageWriter,
      qt_meta_data_PythonQtWrapper_QImageWriter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QImageWriter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QImageWriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QImageWriter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QImageWriter))
        return static_cast<void*>(const_cast< PythonQtWrapper_QImageWriter*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QImageWriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QInputContext[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   46,   31,   30, 0x0a,
      81,   30,   31,   30, 0x2a,
     105,  101,   30,   30, 0x0a,
     175,  158,  142,   30, 0x0a,
     227,  204,  199,   30, 0x0a,
     278,  158,  269,   30, 0x0a,
     312,  158,  306,   30, 0x0a,
     341,  158,  333,   30, 0x0a,
     372,  158,  199,   30, 0x0a,
     400,  158,  333,   30, 0x0a,
     450,  425,   30,   30, 0x0a,
     496,  158,   30,   30, 0x0a,
     518,  204,   30,   30, 0x0a,
     593,  574,  562,   30, 0x0a,
     654,  158,   30,   30, 0x0a,
     696,  677,   30,   30, 0x0a,

 // enums: name, flags, count, data
     737, 0x0,    2,   98,

 // enum data: key, value
     752, uint(PythonQtWrapper_QInputContext::PreeditFormat),
     766, uint(PythonQtWrapper_QInputContext::SelectionFormat),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QInputContext[] = {
    "PythonQtWrapper_QInputContext\0\0"
    "QInputContext*\0parent\0new_QInputContext(QObject*)\0"
    "new_QInputContext()\0obj\0"
    "delete_QInputContext(QInputContext*)\0"
    "QList<QAction*>\0theWrappedObject\0"
    "actions(QInputContext*)\0bool\0"
    "theWrappedObject,event\0"
    "filterEvent(QInputContext*,const QEvent*)\0"
    "QWidget*\0focusWidget(QInputContext*)\0"
    "QFont\0font(QInputContext*)\0QString\0"
    "identifierName(QInputContext*)\0"
    "isComposing(QInputContext*)\0"
    "language(QInputContext*)\0"
    "theWrappedObject,x,event\0"
    "mouseHandler(QInputContext*,int,QMouseEvent*)\0"
    "reset(QInputContext*)\0"
    "sendEvent(QInputContext*,QInputMethodEvent)\0"
    "QTextFormat\0theWrappedObject,s\0"
    "standardFormat(QInputContext*,QInputContext::StandardFormat)\0"
    "update(QInputContext*)\0theWrappedObject,w\0"
    "widgetDestroyed(QInputContext*,QWidget*)\0"
    "StandardFormat\0PreeditFormat\0"
    "SelectionFormat\0"
};

void PythonQtWrapper_QInputContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QInputContext *_t = static_cast<PythonQtWrapper_QInputContext *>(_o);
        switch (_id) {
        case 0: { QInputContext* _r = _t->new_QInputContext((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QInputContext**>(_a[0]) = _r; }  break;
        case 1: { QInputContext* _r = _t->new_QInputContext();
            if (_a[0]) *reinterpret_cast< QInputContext**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QInputContext((*reinterpret_cast< QInputContext*(*)>(_a[1]))); break;
        case 3: { QList<QAction*> _r = _t->actions((*reinterpret_cast< QInputContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QAction*>*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->filterEvent((*reinterpret_cast< QInputContext*(*)>(_a[1])),(*reinterpret_cast< const QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QWidget* _r = _t->focusWidget((*reinterpret_cast< QInputContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 6: { QFont _r = _t->font((*reinterpret_cast< QInputContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->identifierName((*reinterpret_cast< QInputContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isComposing((*reinterpret_cast< QInputContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->language((*reinterpret_cast< QInputContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: _t->mouseHandler((*reinterpret_cast< QInputContext*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 11: _t->reset((*reinterpret_cast< QInputContext*(*)>(_a[1]))); break;
        case 12: _t->sendEvent((*reinterpret_cast< QInputContext*(*)>(_a[1])),(*reinterpret_cast< const QInputMethodEvent(*)>(_a[2]))); break;
        case 13: { QTextFormat _r = _t->standardFormat((*reinterpret_cast< QInputContext*(*)>(_a[1])),(*reinterpret_cast< QInputContext::StandardFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextFormat*>(_a[0]) = _r; }  break;
        case 14: _t->update((*reinterpret_cast< QInputContext*(*)>(_a[1]))); break;
        case 15: _t->widgetDestroyed((*reinterpret_cast< QInputContext*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QInputContext::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QInputContext::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QInputContext,
      qt_meta_data_PythonQtWrapper_QInputContext, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QInputContext::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QInputContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QInputContext::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QInputContext))
        return static_cast<void*>(const_cast< PythonQtWrapper_QInputContext*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QInputContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QInputContextFactory[] = {

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
      60,   37,   38,   37, 0x0a,
      91,   87,   37,   37, 0x0a,
     168,  157,  142,   37, 0x0a,
     233,  229,  221,   37, 0x0a,
     282,  229,  221,   37, 0x0a,
     343,   37,  331,   37, 0x0a,
     378,  229,  331,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QInputContextFactory[] = {
    "PythonQtWrapper_QInputContextFactory\0"
    "\0QInputContextFactory*\0"
    "new_QInputContextFactory()\0obj\0"
    "delete_QInputContextFactory(QInputContextFactory*)\0"
    "QInputContext*\0key,parent\0"
    "static_QInputContextFactory_create(QString,QObject*)\0"
    "QString\0key\0"
    "static_QInputContextFactory_description(QString)\0"
    "static_QInputContextFactory_displayName(QString)\0"
    "QStringList\0static_QInputContextFactory_keys()\0"
    "static_QInputContextFactory_languages(QString)\0"
};

void PythonQtWrapper_QInputContextFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QInputContextFactory *_t = static_cast<PythonQtWrapper_QInputContextFactory *>(_o);
        switch (_id) {
        case 0: { QInputContextFactory* _r = _t->new_QInputContextFactory();
            if (_a[0]) *reinterpret_cast< QInputContextFactory**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QInputContextFactory((*reinterpret_cast< QInputContextFactory*(*)>(_a[1]))); break;
        case 2: { QInputContext* _r = _t->static_QInputContextFactory_create((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QInputContext**>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->static_QInputContextFactory_description((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->static_QInputContextFactory_displayName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QStringList _r = _t->static_QInputContextFactory_keys();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 6: { QStringList _r = _t->static_QInputContextFactory_languages((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QInputContextFactory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QInputContextFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QInputContextFactory,
      qt_meta_data_PythonQtWrapper_QInputContextFactory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QInputContextFactory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QInputContextFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QInputContextFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QInputContextFactory))
        return static_cast<void*>(const_cast< PythonQtWrapper_QInputContextFactory*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QInputContextFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QInputContextPlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      65,   58,   37,   36, 0x0a,
      99,   36,   37,   36, 0x2a,
     129,  125,   36,   36, 0x0a,
     214,  193,  178,   36, 0x0a,
     259,  193,  251,   36, 0x0a,
     301,  193,  251,   36, 0x0a,
     372,  355,  343,   36, 0x0a,
     399,  193,  343,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QInputContextPlugin[] = {
    "PythonQtWrapper_QInputContextPlugin\0"
    "\0QInputContextPlugin*\0parent\0"
    "new_QInputContextPlugin(QObject*)\0"
    "new_QInputContextPlugin()\0obj\0"
    "delete_QInputContextPlugin(QInputContextPlugin*)\0"
    "QInputContext*\0theWrappedObject,key\0"
    "create(QInputContextPlugin*,QString)\0"
    "QString\0description(QInputContextPlugin*,QString)\0"
    "displayName(QInputContextPlugin*,QString)\0"
    "QStringList\0theWrappedObject\0"
    "keys(QInputContextPlugin*)\0"
    "languages(QInputContextPlugin*,QString)\0"
};

void PythonQtWrapper_QInputContextPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QInputContextPlugin *_t = static_cast<PythonQtWrapper_QInputContextPlugin *>(_o);
        switch (_id) {
        case 0: { QInputContextPlugin* _r = _t->new_QInputContextPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QInputContextPlugin**>(_a[0]) = _r; }  break;
        case 1: { QInputContextPlugin* _r = _t->new_QInputContextPlugin();
            if (_a[0]) *reinterpret_cast< QInputContextPlugin**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QInputContextPlugin((*reinterpret_cast< QInputContextPlugin*(*)>(_a[1]))); break;
        case 3: { QInputContext* _r = _t->create((*reinterpret_cast< QInputContextPlugin*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QInputContext**>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->description((*reinterpret_cast< QInputContextPlugin*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->displayName((*reinterpret_cast< QInputContextPlugin*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QStringList _r = _t->keys((*reinterpret_cast< QInputContextPlugin*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 7: { QStringList _r = _t->languages((*reinterpret_cast< QInputContextPlugin*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QInputContextPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QInputContextPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QInputContextPlugin,
      qt_meta_data_PythonQtWrapper_QInputContextPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QInputContextPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QInputContextPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QInputContextPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QInputContextPlugin))
        return static_cast<void*>(const_cast< PythonQtWrapper_QInputContextPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QInputContextPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QInputDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      82,   14, // methods
       0,    0, // properties
       3,  424, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      57,   44,   30,   29, 0x0a,
     107,  100,   30,   29, 0x2a,
     134,   29,   30,   29, 0x2a,
     157,  153,   29,   29, 0x0a,
     217,  200,  192,   29, 0x0a,
     261,  200,  249,   29, 0x0a,
     314,  290,   29,   29, 0x0a,
     342,  200,  338,   29, 0x0a,
     379,  200,  372,   29, 0x0a,
     408,  200,  372,   29, 0x0a,
     437,  200,  372,   29, 0x0a,
     525,  464,  372,   29, 0x0a,
     683,  628,  372,   29, 0x2a,
     822,  770,  372,   29, 0x2a,
     946,  903,  372,   29, 0x2a,
    1057, 1023,  372,   29, 0x2a,
    1152, 1127,  372,   29, 0x2a,
    1234, 1215,  372,   29, 0x2a,
    1347, 1290,  338,   29, 0x0a,
    1489, 1438,  338,   29, 0x2a,
    1612, 1564,  338,   29, 0x2a,
    1681,  903,  338,   29, 0x2a,
    1746, 1023,  338,   29, 0x2a,
    1807, 1127,  338,   29, 0x2a,
    1864, 1215,  338,   29, 0x2a,
    1917, 1290,  338,   29, 0x0a,
    2012, 1438,  338,   29, 0x2a,
    2091, 1564,  338,   29, 0x2a,
    2164,  903,  338,   29, 0x2a,
    2233, 1023,  338,   29, 0x2a,
    2298, 1127,  338,   29, 0x2a,
    2359, 1215,  338,   29, 0x2a,
    2467, 2416,  192,   29, 0x0a,
    2609, 2564,  192,   29, 0x2a,
    2732, 2690,  192,   29, 0x2a,
    2840, 2807,  192,   29, 0x2a,
    2935, 2910,  192,   29, 0x2a,
    3069, 3001,  192,   29, 0x0a,
    3225, 3187,  192,   29, 0x0a,
    3361, 3329,  192,   29, 0x2a,
    3478, 3449,  192,   29, 0x2a,
    3584, 3560,  192,   29, 0x2a,
    3658, 1215,  192,   29, 0x2a,
    3767, 3712,  192,   29, 0x0a,
    3916,  200, 3892,   29, 0x0a,
    3941,  200,  338,   29, 0x0a,
    3967,  200,  338,   29, 0x0a,
    3993,  200,  338,   29, 0x0a,
    4016,  200,  338,   29, 0x0a,
    4045,  200, 4040,   29, 0x0a,
    4079,  200,  192,   29, 0x0a,
    4110,  200, 4104,   29, 0x0a,
    4141,  200,  192,   29, 0x0a,
    4169,  200,   29,   29, 0x0a,
    4222, 4189,   29,   29, 0x0a,
    4296,  200, 4263,   29, 0x0a,
    4341, 4319,   29,   29, 0x0a,
    4410, 4384,   29,   29, 0x0a,
    4473, 4450,   29,   29, 0x0a,
    4543, 4517,   29,   29, 0x0a,
    4601, 4580,   29,   29, 0x0a,
    4661, 4640,   29,   29, 0x0a,
    4725, 4700,   29,   29, 0x0a,
    4792, 4769,   29,   29, 0x0a,
    4851, 4829,   29,   29, 0x0a,
    4903, 4580,   29,   29, 0x0a,
    4936, 4640,   29,   29, 0x0a,
    4969, 4700,   29,   29, 0x0a,
    5026, 5004,   29,   29, 0x0a,
    5056, 4769,   29,   29, 0x0a,
    5087, 4319,   29,   29, 0x0a,
    5123, 4319,   29,   29, 0x0a,
    5189, 5162,   29,   29, 0x0a,
    5275, 5251,   29,   29, 0x2a,
    5357, 5332,   29,   29, 0x0a,
    5416, 4829,   29,   29, 0x0a,
    5467, 4319,   29,   29, 0x0a,
    5528, 5503,   29,   29, 0x0a,
    5559,  200, 4104,   29, 0x0a,
    5583, 5251, 4040,   29, 0x0a,
    5661,  200, 5641,   29, 0x0a,
    5689,  200,  192,   29, 0x0a,

 // enums: name, flags, count, data
    5714, 0x0,    2,  436,
    5732, 0x1,    2,  440,
    5751, 0x0,    3,  444,

 // enum data: key, value
    5761, uint(PythonQtWrapper_QInputDialog::NoButtons),
    5771, uint(PythonQtWrapper_QInputDialog::UseListViewForComboBoxItems),
    5761, uint(PythonQtWrapper_QInputDialog::NoButtons),
    5771, uint(PythonQtWrapper_QInputDialog::UseListViewForComboBoxItems),
    5799, uint(PythonQtWrapper_QInputDialog::TextInput),
    5809, uint(PythonQtWrapper_QInputDialog::IntInput),
    5818, uint(PythonQtWrapper_QInputDialog::DoubleInput),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QInputDialog[] = {
    "PythonQtWrapper_QInputDialog\0\0"
    "QInputDialog*\0parent,flags\0"
    "new_QInputDialog(QWidget*,Qt::WindowFlags)\0"
    "parent\0new_QInputDialog(QWidget*)\0"
    "new_QInputDialog()\0obj\0"
    "delete_QInputDialog(QInputDialog*)\0"
    "QString\0theWrappedObject\0"
    "cancelButtonText(QInputDialog*)\0"
    "QStringList\0comboBoxItems(QInputDialog*)\0"
    "theWrappedObject,result\0done(QInputDialog*,int)\0"
    "int\0doubleDecimals(QInputDialog*)\0"
    "double\0doubleMaximum(QInputDialog*)\0"
    "doubleMinimum(QInputDialog*)\0"
    "doubleValue(QInputDialog*)\0"
    "parent,title,label,value,minValue,maxValue,decimals,ok,flags\0"
    "static_QInputDialog_getDouble(QWidget*,QString,QString,double,double,d"
    "ouble,int,bool*,Qt::WindowFlags)\0"
    "parent,title,label,value,minValue,maxValue,decimals,ok\0"
    "static_QInputDialog_getDouble(QWidget*,QString,QString,double,double,d"
    "ouble,int,bool*)\0"
    "parent,title,label,value,minValue,maxValue,decimals\0"
    "static_QInputDialog_getDouble(QWidget*,QString,QString,double,double,d"
    "ouble,int)\0"
    "parent,title,label,value,minValue,maxValue\0"
    "static_QInputDialog_getDouble(QWidget*,QString,QString,double,double,d"
    "ouble)\0"
    "parent,title,label,value,minValue\0"
    "static_QInputDialog_getDouble(QWidget*,QString,QString,double,double)\0"
    "parent,title,label,value\0"
    "static_QInputDialog_getDouble(QWidget*,QString,QString,double)\0"
    "parent,title,label\0"
    "static_QInputDialog_getDouble(QWidget*,QString,QString)\0"
    "parent,title,label,value,minValue,maxValue,step,ok,flags\0"
    "static_QInputDialog_getInt(QWidget*,QString,QString,int,int,int,int,bo"
    "ol*,Qt::WindowFlags)\0"
    "parent,title,label,value,minValue,maxValue,step,ok\0"
    "static_QInputDialog_getInt(QWidget*,QString,QString,int,int,int,int,bo"
    "ol*)\0"
    "parent,title,label,value,minValue,maxValue,step\0"
    "static_QInputDialog_getInt(QWidget*,QString,QString,int,int,int,int)\0"
    "static_QInputDialog_getInt(QWidget*,QString,QString,int,int,int)\0"
    "static_QInputDialog_getInt(QWidget*,QString,QString,int,int)\0"
    "static_QInputDialog_getInt(QWidget*,QString,QString,int)\0"
    "static_QInputDialog_getInt(QWidget*,QString,QString)\0"
    "static_QInputDialog_getInteger(QWidget*,QString,QString,int,int,int,in"
    "t,bool*,Qt::WindowFlags)\0"
    "static_QInputDialog_getInteger(QWidget*,QString,QString,int,int,int,in"
    "t,bool*)\0"
    "static_QInputDialog_getInteger(QWidget*,QString,QString,int,int,int,in"
    "t)\0"
    "static_QInputDialog_getInteger(QWidget*,QString,QString,int,int,int)\0"
    "static_QInputDialog_getInteger(QWidget*,QString,QString,int,int)\0"
    "static_QInputDialog_getInteger(QWidget*,QString,QString,int)\0"
    "static_QInputDialog_getInteger(QWidget*,QString,QString)\0"
    "parent,title,label,items,current,editable,ok,flags\0"
    "static_QInputDialog_getItem(QWidget*,QString,QString,QStringList,int,b"
    "ool,bool*,Qt::WindowFlags)\0"
    "parent,title,label,items,current,editable,ok\0"
    "static_QInputDialog_getItem(QWidget*,QString,QString,QStringList,int,b"
    "ool,bool*)\0"
    "parent,title,label,items,current,editable\0"
    "static_QInputDialog_getItem(QWidget*,QString,QString,QStringList,int,b"
    "ool)\0"
    "parent,title,label,items,current\0"
    "static_QInputDialog_getItem(QWidget*,QString,QString,QStringList,int)\0"
    "parent,title,label,items\0"
    "static_QInputDialog_getItem(QWidget*,QString,QString,QStringList)\0"
    "parent,title,label,items,current,editable,ok,flags,inputMethodHints\0"
    "static_QInputDialog_getItem(QWidget*,QString,QString,QStringList,int,b"
    "ool,bool*,Qt::WindowFlags,Qt::InputMethodHints)\0"
    "parent,title,label,echo,text,ok,flags\0"
    "static_QInputDialog_getText(QWidget*,QString,QString,QLineEdit::EchoMo"
    "de,QString,bool*,Qt::WindowFlags)\0"
    "parent,title,label,echo,text,ok\0"
    "static_QInputDialog_getText(QWidget*,QString,QString,QLineEdit::EchoMo"
    "de,QString,bool*)\0"
    "parent,title,label,echo,text\0"
    "static_QInputDialog_getText(QWidget*,QString,QString,QLineEdit::EchoMo"
    "de,QString)\0"
    "parent,title,label,echo\0"
    "static_QInputDialog_getText(QWidget*,QString,QString,QLineEdit::EchoMo"
    "de)\0"
    "static_QInputDialog_getText(QWidget*,QString,QString)\0"
    "parent,title,label,echo,text,ok,flags,inputMethodHints\0"
    "static_QInputDialog_getText(QWidget*,QString,QString,QLineEdit::EchoMo"
    "de,QString,bool*,Qt::WindowFlags,Qt::InputMethodHints)\0"
    "QInputDialog::InputMode\0"
    "inputMode(QInputDialog*)\0"
    "intMaximum(QInputDialog*)\0"
    "intMinimum(QInputDialog*)\0"
    "intStep(QInputDialog*)\0intValue(QInputDialog*)\0"
    "bool\0isComboBoxEditable(QInputDialog*)\0"
    "labelText(QInputDialog*)\0QSize\0"
    "minimumSizeHint(QInputDialog*)\0"
    "okButtonText(QInputDialog*)\0"
    "open(QInputDialog*)\0"
    "theWrappedObject,receiver,member\0"
    "open(QInputDialog*,QObject*,const char*)\0"
    "QInputDialog::InputDialogOptions\0"
    "options(QInputDialog*)\0theWrappedObject,text\0"
    "setCancelButtonText(QInputDialog*,QString)\0"
    "theWrappedObject,editable\0"
    "setComboBoxEditable(QInputDialog*,bool)\0"
    "theWrappedObject,items\0"
    "setComboBoxItems(QInputDialog*,QStringList)\0"
    "theWrappedObject,decimals\0"
    "setDoubleDecimals(QInputDialog*,int)\0"
    "theWrappedObject,max\0"
    "setDoubleMaximum(QInputDialog*,double)\0"
    "theWrappedObject,min\0"
    "setDoubleMinimum(QInputDialog*,double)\0"
    "theWrappedObject,min,max\0"
    "setDoubleRange(QInputDialog*,double,double)\0"
    "theWrappedObject,value\0"
    "setDoubleValue(QInputDialog*,double)\0"
    "theWrappedObject,mode\0"
    "setInputMode(QInputDialog*,QInputDialog::InputMode)\0"
    "setIntMaximum(QInputDialog*,int)\0"
    "setIntMinimum(QInputDialog*,int)\0"
    "setIntRange(QInputDialog*,int,int)\0"
    "theWrappedObject,step\0"
    "setIntStep(QInputDialog*,int)\0"
    "setIntValue(QInputDialog*,int)\0"
    "setLabelText(QInputDialog*,QString)\0"
    "setOkButtonText(QInputDialog*,QString)\0"
    "theWrappedObject,option,on\0"
    "setOption(QInputDialog*,QInputDialog::InputDialogOption,bool)\0"
    "theWrappedObject,option\0"
    "setOption(QInputDialog*,QInputDialog::InputDialogOption)\0"
    "theWrappedObject,options\0"
    "setOptions(QInputDialog*,QInputDialog::InputDialogOptions)\0"
    "setTextEchoMode(QInputDialog*,QLineEdit::EchoMode)\0"
    "setTextValue(QInputDialog*,QString)\0"
    "theWrappedObject,visible\0"
    "setVisible(QInputDialog*,bool)\0"
    "sizeHint(QInputDialog*)\0"
    "testOption(QInputDialog*,QInputDialog::InputDialogOption)\0"
    "QLineEdit::EchoMode\0textEchoMode(QInputDialog*)\0"
    "textValue(QInputDialog*)\0InputDialogOption\0"
    "InputDialogOptions\0InputMode\0NoButtons\0"
    "UseListViewForComboBoxItems\0TextInput\0"
    "IntInput\0DoubleInput\0"
};

void PythonQtWrapper_QInputDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QInputDialog *_t = static_cast<PythonQtWrapper_QInputDialog *>(_o);
        switch (_id) {
        case 0: { QInputDialog* _r = _t->new_QInputDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QInputDialog**>(_a[0]) = _r; }  break;
        case 1: { QInputDialog* _r = _t->new_QInputDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QInputDialog**>(_a[0]) = _r; }  break;
        case 2: { QInputDialog* _r = _t->new_QInputDialog();
            if (_a[0]) *reinterpret_cast< QInputDialog**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QInputDialog((*reinterpret_cast< QInputDialog*(*)>(_a[1]))); break;
        case 4: { QString _r = _t->cancelButtonText((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QStringList _r = _t->comboBoxItems((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 6: _t->done((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: { int _r = _t->doubleDecimals((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { double _r = _t->doubleMaximum((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 9: { double _r = _t->doubleMinimum((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 10: { double _r = _t->doubleValue((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 11: { double _r = _t->static_QInputDialog_getDouble((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< bool*(*)>(_a[8])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 12: { double _r = _t->static_QInputDialog_getDouble((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< bool*(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 13: { double _r = _t->static_QInputDialog_getDouble((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 14: { double _r = _t->static_QInputDialog_getDouble((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 15: { double _r = _t->static_QInputDialog_getDouble((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 16: { double _r = _t->static_QInputDialog_getDouble((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 17: { double _r = _t->static_QInputDialog_getDouble((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->static_QInputDialog_getInt((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< bool*(*)>(_a[8])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->static_QInputDialog_getInt((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< bool*(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->static_QInputDialog_getInt((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->static_QInputDialog_getInt((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->static_QInputDialog_getInt((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->static_QInputDialog_getInt((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->static_QInputDialog_getInt((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->static_QInputDialog_getInteger((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< bool*(*)>(_a[8])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->static_QInputDialog_getInteger((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< bool*(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { int _r = _t->static_QInputDialog_getInteger((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 28: { int _r = _t->static_QInputDialog_getInteger((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 29: { int _r = _t->static_QInputDialog_getInteger((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->static_QInputDialog_getInteger((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: { int _r = _t->static_QInputDialog_getInteger((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 32: { QString _r = _t->static_QInputDialog_getItem((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QStringList(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool*(*)>(_a[7])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 33: { QString _r = _t->static_QInputDialog_getItem((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QStringList(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool*(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 34: { QString _r = _t->static_QInputDialog_getItem((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QStringList(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 35: { QString _r = _t->static_QInputDialog_getItem((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QStringList(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 36: { QString _r = _t->static_QInputDialog_getItem((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QStringList(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 37: { QString _r = _t->static_QInputDialog_getItem((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QStringList(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool*(*)>(_a[7])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[8])),(*reinterpret_cast< Qt::InputMethodHints(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 38: { QString _r = _t->static_QInputDialog_getText((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QLineEdit::EchoMode(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< bool*(*)>(_a[6])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 39: { QString _r = _t->static_QInputDialog_getText((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QLineEdit::EchoMode(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< bool*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 40: { QString _r = _t->static_QInputDialog_getText((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QLineEdit::EchoMode(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 41: { QString _r = _t->static_QInputDialog_getText((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QLineEdit::EchoMode(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 42: { QString _r = _t->static_QInputDialog_getText((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 43: { QString _r = _t->static_QInputDialog_getText((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QLineEdit::EchoMode(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< bool*(*)>(_a[6])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[7])),(*reinterpret_cast< Qt::InputMethodHints(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 44: { QInputDialog::InputMode _r = _t->inputMode((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QInputDialog::InputMode*>(_a[0]) = _r; }  break;
        case 45: { int _r = _t->intMaximum((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 46: { int _r = _t->intMinimum((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 47: { int _r = _t->intStep((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 48: { int _r = _t->intValue((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->isComboBoxEditable((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: { QString _r = _t->labelText((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 51: { QSize _r = _t->minimumSizeHint((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 52: { QString _r = _t->okButtonText((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 53: _t->open((*reinterpret_cast< QInputDialog*(*)>(_a[1]))); break;
        case 54: _t->open((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3]))); break;
        case 55: { QInputDialog::InputDialogOptions _r = _t->options((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QInputDialog::InputDialogOptions*>(_a[0]) = _r; }  break;
        case 56: _t->setCancelButtonText((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 57: _t->setComboBoxEditable((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 58: _t->setComboBoxItems((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 59: _t->setDoubleDecimals((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 60: _t->setDoubleMaximum((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 61: _t->setDoubleMinimum((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 62: _t->setDoubleRange((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 63: _t->setDoubleValue((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 64: _t->setInputMode((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< QInputDialog::InputMode(*)>(_a[2]))); break;
        case 65: _t->setIntMaximum((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 66: _t->setIntMinimum((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 67: _t->setIntRange((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 68: _t->setIntStep((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 69: _t->setIntValue((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 70: _t->setLabelText((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 71: _t->setOkButtonText((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 72: _t->setOption((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< QInputDialog::InputDialogOption(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 73: _t->setOption((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< QInputDialog::InputDialogOption(*)>(_a[2]))); break;
        case 74: _t->setOptions((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< QInputDialog::InputDialogOptions(*)>(_a[2]))); break;
        case 75: _t->setTextEchoMode((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< QLineEdit::EchoMode(*)>(_a[2]))); break;
        case 76: _t->setTextValue((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 77: _t->setVisible((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 78: { QSize _r = _t->sizeHint((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 79: { bool _r = _t->testOption((*reinterpret_cast< QInputDialog*(*)>(_a[1])),(*reinterpret_cast< QInputDialog::InputDialogOption(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 80: { QLineEdit::EchoMode _r = _t->textEchoMode((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLineEdit::EchoMode*>(_a[0]) = _r; }  break;
        case 81: { QString _r = _t->textValue((*reinterpret_cast< QInputDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QInputDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QInputDialog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QInputDialog,
      qt_meta_data_PythonQtWrapper_QInputDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QInputDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QInputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QInputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QInputDialog))
        return static_cast<void*>(const_cast< PythonQtWrapper_QInputDialog*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QInputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 82)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 82;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QInputEvent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      57,   42,   29,   28, 0x0a,
     114,  109,   29,   28, 0x2a,
     148,  144,   28,   28, 0x0a,
     220,  203,  181,   28, 0x0a,
     272,  244,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QInputEvent[] = {
    "PythonQtWrapper_QInputEvent\0\0QInputEvent*\0"
    "type,modifiers\0"
    "new_QInputEvent(QEvent::Type,Qt::KeyboardModifiers)\0"
    "type\0new_QInputEvent(QEvent::Type)\0"
    "obj\0delete_QInputEvent(QInputEvent*)\0"
    "Qt::KeyboardModifiers\0theWrappedObject\0"
    "modifiers(QInputEvent*)\0"
    "theWrappedObject,amodifiers\0"
    "setModifiers(QInputEvent*,Qt::KeyboardModifiers)\0"
};

void PythonQtWrapper_QInputEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QInputEvent *_t = static_cast<PythonQtWrapper_QInputEvent *>(_o);
        switch (_id) {
        case 0: { QInputEvent* _r = _t->new_QInputEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QInputEvent**>(_a[0]) = _r; }  break;
        case 1: { QInputEvent* _r = _t->new_QInputEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QInputEvent**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QInputEvent((*reinterpret_cast< QInputEvent*(*)>(_a[1]))); break;
        case 3: { Qt::KeyboardModifiers _r = _t->modifiers((*reinterpret_cast< QInputEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::KeyboardModifiers*>(_a[0]) = _r; }  break;
        case 4: _t->setModifiers((*reinterpret_cast< QInputEvent*(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QInputEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QInputEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QInputEvent,
      qt_meta_data_PythonQtWrapper_QInputEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QInputEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QInputEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QInputEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QInputEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QInputEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QInputEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QInputMethodEvent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       1,   74, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      54,   34,   35,   34, 0x0a,
      84,   78,   35,   34, 0x0a,
     148,  125,   35,   34, 0x0a,
     219,  215,   34,   34, 0x0a,
     324,  307,  264,   34, 0x0a,
     370,  307,  355,   34, 0x0a,
     403,  307,  355,   34, 0x0a,
     441,  307,  437,   34, 0x0a,
     479,  307,  437,   34, 0x0a,
     572,  516,   34,   34, 0x0a,
     666,  624,   34,   34, 0x2a,
     744,  714,   34,   34, 0x2a,

 // enums: name, flags, count, data
     788, 0x0,    5,   78,

 // enum data: key, value
     802, uint(PythonQtWrapper_QInputMethodEvent::TextFormat),
     813, uint(PythonQtWrapper_QInputMethodEvent::Cursor),
     820, uint(PythonQtWrapper_QInputMethodEvent::Language),
     829, uint(PythonQtWrapper_QInputMethodEvent::Ruby),
     834, uint(PythonQtWrapper_QInputMethodEvent::Selection),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QInputMethodEvent[] = {
    "PythonQtWrapper_QInputMethodEvent\0\0"
    "QInputMethodEvent*\0new_QInputMethodEvent()\0"
    "other\0new_QInputMethodEvent(QInputMethodEvent)\0"
    "preeditText,attributes\0"
    "new_QInputMethodEvent(QString,QList<QInputMethodEvent::Attribute>)\0"
    "obj\0delete_QInputMethodEvent(QInputMethodEvent*)\0"
    "const QList<QInputMethodEvent::Attribute>*\0"
    "theWrappedObject\0attributes(QInputMethodEvent*)\0"
    "const QString*\0commitString(QInputMethodEvent*)\0"
    "preeditString(QInputMethodEvent*)\0int\0"
    "replacementLength(QInputMethodEvent*)\0"
    "replacementStart(QInputMethodEvent*)\0"
    "theWrappedObject,commitString,replaceFrom,replaceLength\0"
    "setCommitString(QInputMethodEvent*,QString,int,int)\0"
    "theWrappedObject,commitString,replaceFrom\0"
    "setCommitString(QInputMethodEvent*,QString,int)\0"
    "theWrappedObject,commitString\0"
    "setCommitString(QInputMethodEvent*,QString)\0"
    "AttributeType\0TextFormat\0Cursor\0"
    "Language\0Ruby\0Selection\0"
};

void PythonQtWrapper_QInputMethodEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QInputMethodEvent *_t = static_cast<PythonQtWrapper_QInputMethodEvent *>(_o);
        switch (_id) {
        case 0: { QInputMethodEvent* _r = _t->new_QInputMethodEvent();
            if (_a[0]) *reinterpret_cast< QInputMethodEvent**>(_a[0]) = _r; }  break;
        case 1: { QInputMethodEvent* _r = _t->new_QInputMethodEvent((*reinterpret_cast< const QInputMethodEvent(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QInputMethodEvent**>(_a[0]) = _r; }  break;
        case 2: { QInputMethodEvent* _r = _t->new_QInputMethodEvent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<QInputMethodEvent::Attribute>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QInputMethodEvent**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QInputMethodEvent((*reinterpret_cast< QInputMethodEvent*(*)>(_a[1]))); break;
        case 4: { const QList<QInputMethodEvent::Attribute>* _r = _t->attributes((*reinterpret_cast< QInputMethodEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QList<QInputMethodEvent::Attribute>**>(_a[0]) = _r; }  break;
        case 5: { const QString* _r = _t->commitString((*reinterpret_cast< QInputMethodEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QString**>(_a[0]) = _r; }  break;
        case 6: { const QString* _r = _t->preeditString((*reinterpret_cast< QInputMethodEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QString**>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->replacementLength((*reinterpret_cast< QInputMethodEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->replacementStart((*reinterpret_cast< QInputMethodEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: _t->setCommitString((*reinterpret_cast< QInputMethodEvent*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 10: _t->setCommitString((*reinterpret_cast< QInputMethodEvent*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->setCommitString((*reinterpret_cast< QInputMethodEvent*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QInputMethodEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QInputMethodEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QInputMethodEvent,
      qt_meta_data_PythonQtWrapper_QInputMethodEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QInputMethodEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QInputMethodEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QInputMethodEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QInputMethodEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QInputMethodEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QInputMethodEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QInputMethodEvent__Attribute[] = {

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
      86,   76,   46,   45, 0x0a,
     174,  170,   45,   45, 0x0a,
     265,  241,   45,   45, 0x0a,
     335,  318,  314,   45, 0x0a,
     403,  380,   45,   45, 0x0a,
     451,  318,  314,   45, 0x0a,
     517,  495,   45,   45, 0x0a,
     626,  318,  593,   45, 0x0a,
     692,  669,   45,   45, 0x0a,
     754,  318,  745,   45, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QInputMethodEvent__Attribute[] = {
    "PythonQtWrapper_QInputMethodEvent__Attribute\0"
    "\0QInputMethodEvent::Attribute*\0t,s,l,val\0"
    "new_QInputMethodEvent__Attribute(QInputMethodEvent::AttributeType,int,"
    "int,QVariant)\0"
    "obj\0"
    "delete_QInputMethodEvent__Attribute(QInputMethodEvent::Attribute*)\0"
    "theWrappedObject,length\0"
    "py_set_length(QInputMethodEvent::Attribute*,int)\0"
    "int\0theWrappedObject\0"
    "py_get_length(QInputMethodEvent::Attribute*)\0"
    "theWrappedObject,start\0"
    "py_set_start(QInputMethodEvent::Attribute*,int)\0"
    "py_get_start(QInputMethodEvent::Attribute*)\0"
    "theWrappedObject,type\0"
    "py_set_type(QInputMethodEvent::Attribute*,QInputMethodEvent::Attribute"
    "Type)\0"
    "QInputMethodEvent::AttributeType\0"
    "py_get_type(QInputMethodEvent::Attribute*)\0"
    "theWrappedObject,value\0"
    "py_set_value(QInputMethodEvent::Attribute*,QVariant)\0"
    "QVariant\0py_get_value(QInputMethodEvent::Attribute*)\0"
};

void PythonQtWrapper_QInputMethodEvent__Attribute::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QInputMethodEvent__Attribute *_t = static_cast<PythonQtWrapper_QInputMethodEvent__Attribute *>(_o);
        switch (_id) {
        case 0: { QInputMethodEvent::Attribute* _r = _t->new_QInputMethodEvent__Attribute((*reinterpret_cast< QInputMethodEvent::AttributeType(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QInputMethodEvent::Attribute**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QInputMethodEvent__Attribute((*reinterpret_cast< QInputMethodEvent::Attribute*(*)>(_a[1]))); break;
        case 2: _t->py_set_length((*reinterpret_cast< QInputMethodEvent::Attribute*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: { int _r = _t->py_get_length((*reinterpret_cast< QInputMethodEvent::Attribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: _t->py_set_start((*reinterpret_cast< QInputMethodEvent::Attribute*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: { int _r = _t->py_get_start((*reinterpret_cast< QInputMethodEvent::Attribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->py_set_type((*reinterpret_cast< QInputMethodEvent::Attribute*(*)>(_a[1])),(*reinterpret_cast< QInputMethodEvent::AttributeType(*)>(_a[2]))); break;
        case 7: { QInputMethodEvent::AttributeType _r = _t->py_get_type((*reinterpret_cast< QInputMethodEvent::Attribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QInputMethodEvent::AttributeType*>(_a[0]) = _r; }  break;
        case 8: _t->py_set_value((*reinterpret_cast< QInputMethodEvent::Attribute*(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 9: { QVariant _r = _t->py_get_value((*reinterpret_cast< QInputMethodEvent::Attribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QInputMethodEvent__Attribute::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QInputMethodEvent__Attribute::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QInputMethodEvent__Attribute,
      qt_meta_data_PythonQtWrapper_QInputMethodEvent__Attribute, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QInputMethodEvent__Attribute::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QInputMethodEvent__Attribute::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QInputMethodEvent__Attribute::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QInputMethodEvent__Attribute))
        return static_cast<void*>(const_cast< PythonQtWrapper_QInputMethodEvent__Attribute*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QInputMethodEvent__Attribute::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QIntValidator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   46,   31,   30, 0x0a,
      81,   30,   31,   30, 0x2a,
     119,  101,   31,   30, 0x0a,
     166,  155,   31,   30, 0x2a,
     197,  193,   30,   30, 0x0a,
     255,  238,  234,   30, 0x0a,
     301,  278,   30,   30, 0x0a,
     356,  332,   30,   30, 0x0a,
     414,  386,   30,   30, 0x0a,
     447,  332,   30,   30, 0x0a,
     474,  238,  234,   30, 0x0a,
     543,  512,  494,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QIntValidator[] = {
    "PythonQtWrapper_QIntValidator\0\0"
    "QIntValidator*\0parent\0new_QIntValidator(QObject*)\0"
    "new_QIntValidator()\0bottom,top,parent\0"
    "new_QIntValidator(int,int,QObject*)\0"
    "bottom,top\0new_QIntValidator(int,int)\0"
    "obj\0delete_QIntValidator(QIntValidator*)\0"
    "int\0theWrappedObject\0bottom(QIntValidator*)\0"
    "theWrappedObject,input\0"
    "fixup(QIntValidator*,QString&)\0"
    "theWrappedObject,arg__1\0"
    "setBottom(QIntValidator*,int)\0"
    "theWrappedObject,bottom,top\0"
    "setRange(QIntValidator*,int,int)\0"
    "setTop(QIntValidator*,int)\0"
    "top(QIntValidator*)\0QValidator::State\0"
    "theWrappedObject,arg__1,arg__2\0"
    "validate(QIntValidator*,QString&,int&)\0"
};

void PythonQtWrapper_QIntValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QIntValidator *_t = static_cast<PythonQtWrapper_QIntValidator *>(_o);
        switch (_id) {
        case 0: { QIntValidator* _r = _t->new_QIntValidator((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIntValidator**>(_a[0]) = _r; }  break;
        case 1: { QIntValidator* _r = _t->new_QIntValidator();
            if (_a[0]) *reinterpret_cast< QIntValidator**>(_a[0]) = _r; }  break;
        case 2: { QIntValidator* _r = _t->new_QIntValidator((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QIntValidator**>(_a[0]) = _r; }  break;
        case 3: { QIntValidator* _r = _t->new_QIntValidator((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIntValidator**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QIntValidator((*reinterpret_cast< QIntValidator*(*)>(_a[1]))); break;
        case 5: { int _r = _t->bottom((*reinterpret_cast< QIntValidator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->fixup((*reinterpret_cast< QIntValidator*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->setBottom((*reinterpret_cast< QIntValidator*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->setRange((*reinterpret_cast< QIntValidator*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->setTop((*reinterpret_cast< QIntValidator*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: { int _r = _t->top((*reinterpret_cast< QIntValidator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QValidator::State _r = _t->validate((*reinterpret_cast< QIntValidator*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QValidator::State*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QIntValidator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QIntValidator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QIntValidator,
      qt_meta_data_PythonQtWrapper_QIntValidator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QIntValidator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QIntValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QIntValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QIntValidator))
        return static_cast<void*>(const_cast< PythonQtWrapper_QIntValidator*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QIntValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QItemDelegate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   46,   31,   30, 0x0a,
      81,   30,   31,   30, 0x2a,
     105,  101,   30,   30, 0x0a,
     189,  148,  142,   30, 0x0a,
     293,  256,  247,   30, 0x0a,
     404,  372,  364,   30, 0x0a,
     499,  461,   30,   30, 0x0a,
     616,  573,   30,   30, 0x0a,
     738,  694,   30,   30, 0x0a,
     856,  814,   30,   30, 0x0a,
     966,  929,   30,   30, 0x0a,
    1076, 1034, 1029,   30, 0x0a,
    1195, 1165, 1029,   30, 0x0a,
    1257, 1240, 1029,   30, 0x0a,
    1305, 1240, 1285,   30, 0x0a,
    1339,  461,   30,   30, 0x0a,
    1439, 1404,  142,   30, 0x0a,
    1519, 1497,   30,   30, 0x0a,
    1582, 1552,   30,   30, 0x0a,
    1658, 1633,   30,   30, 0x0a,
    1751, 1715,   30,   30, 0x0a,
    1872, 1842, 1821,   30, 0x0a,
    1968, 1938, 1932,   30, 0x0a,
    2066, 2026,  142,   30, 0x0a,
    2163, 2126,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QItemDelegate[] = {
    "PythonQtWrapper_QItemDelegate\0\0"
    "QItemDelegate*\0parent\0new_QItemDelegate(QObject*)\0"
    "new_QItemDelegate()\0obj\0"
    "delete_QItemDelegate(QItemDelegate*)\0"
    "QRect\0theWrappedObject,option,bounding,variant\0"
    "check(QItemDelegate*,QStyleOptionViewItem,QRect,QVariant)\0"
    "QWidget*\0theWrappedObject,parent,option,index\0"
    "createEditor(QItemDelegate*,QWidget*,QStyleOptionViewItem,QModelIndex)\0"
    "QPixmap\0theWrappedObject,option,variant\0"
    "decoration(QItemDelegate*,QStyleOptionViewItem,QVariant)\0"
    "theWrappedObject,painter,option,index\0"
    "drawBackground(QItemDelegate*,QPainter*,QStyleOptionViewItem,QModelInd"
    "ex)\0"
    "theWrappedObject,painter,option,rect,state\0"
    "drawCheck(QItemDelegate*,QPainter*,QStyleOptionViewItem,QRect,Qt::Chec"
    "kState)\0"
    "theWrappedObject,painter,option,rect,pixmap\0"
    "drawDecoration(QItemDelegate*,QPainter*,QStyleOptionViewItem,QRect,QPi"
    "xmap)\0"
    "theWrappedObject,painter,option,rect,text\0"
    "drawDisplay(QItemDelegate*,QPainter*,QStyleOptionViewItem,QRect,QStrin"
    "g)\0"
    "theWrappedObject,painter,option,rect\0"
    "drawFocus(QItemDelegate*,QPainter*,QStyleOptionViewItem,QRect)\0"
    "bool\0theWrappedObject,event,model,option,index\0"
    "editorEvent(QItemDelegate*,QEvent*,QAbstractItemModel*,QStyleOptionVie"
    "wItem,QModelIndex)\0"
    "theWrappedObject,object,event\0"
    "eventFilter(QItemDelegate*,QObject*,QEvent*)\0"
    "theWrappedObject\0hasClipping(QItemDelegate*)\0"
    "QItemEditorFactory*\0"
    "itemEditorFactory(QItemDelegate*)\0"
    "paint(QItemDelegate*,QPainter*,QStyleOptionViewItem,QModelIndex)\0"
    "theWrappedObject,option,index,role\0"
    "rect(QItemDelegate*,QStyleOptionViewItem,QModelIndex,int)\0"
    "theWrappedObject,clip\0"
    "setClipping(QItemDelegate*,bool)\0"
    "theWrappedObject,editor,index\0"
    "setEditorData(QItemDelegate*,QWidget*,QModelIndex)\0"
    "theWrappedObject,factory\0"
    "setItemEditorFactory(QItemDelegate*,QItemEditorFactory*)\0"
    "theWrappedObject,editor,model,index\0"
    "setModelData(QItemDelegate*,QWidget*,QAbstractItemModel*,QModelIndex)\0"
    "QStyleOptionViewItem\0theWrappedObject,index,option\0"
    "setOptions(QItemDelegate*,QModelIndex,QStyleOptionViewItem)\0"
    "QSize\0theWrappedObject,option,index\0"
    "sizeHint(QItemDelegate*,QStyleOptionViewItem,QModelIndex)\0"
    "theWrappedObject,painter,rect,font,text\0"
    "textRectangle(QItemDelegate*,QPainter*,QRect,QFont,QString)\0"
    "theWrappedObject,editor,option,index\0"
    "updateEditorGeometry(QItemDelegate*,QWidget*,QStyleOptionViewItem,QMod"
    "elIndex)\0"
};

void PythonQtWrapper_QItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QItemDelegate *_t = static_cast<PythonQtWrapper_QItemDelegate *>(_o);
        switch (_id) {
        case 0: { QItemDelegate* _r = _t->new_QItemDelegate((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QItemDelegate**>(_a[0]) = _r; }  break;
        case 1: { QItemDelegate* _r = _t->new_QItemDelegate();
            if (_a[0]) *reinterpret_cast< QItemDelegate**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QItemDelegate((*reinterpret_cast< QItemDelegate*(*)>(_a[1]))); break;
        case 3: { QRect _r = _t->check((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 4: { QWidget* _r = _t->createEditor((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 5: { QPixmap _r = _t->decoration((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 6: _t->drawBackground((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4]))); break;
        case 7: _t->drawCheck((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QRect(*)>(_a[4])),(*reinterpret_cast< Qt::CheckState(*)>(_a[5]))); break;
        case 8: _t->drawDecoration((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QRect(*)>(_a[4])),(*reinterpret_cast< const QPixmap(*)>(_a[5]))); break;
        case 9: _t->drawDisplay((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QRect(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 10: _t->drawFocus((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QRect(*)>(_a[4]))); break;
        case 11: { bool _r = _t->editorEvent((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])),(*reinterpret_cast< QAbstractItemModel*(*)>(_a[3])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[4])),(*reinterpret_cast< const QModelIndex(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->eventFilter((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->hasClipping((*reinterpret_cast< QItemDelegate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QItemEditorFactory* _r = _t->itemEditorFactory((*reinterpret_cast< QItemDelegate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QItemEditorFactory**>(_a[0]) = _r; }  break;
        case 15: _t->paint((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4]))); break;
        case 16: { QRect _r = _t->rect((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 17: _t->setClipping((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->setEditorData((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3]))); break;
        case 19: _t->setItemEditorFactory((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QItemEditorFactory*(*)>(_a[2]))); break;
        case 20: _t->setModelData((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< QAbstractItemModel*(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4]))); break;
        case 21: { QStyleOptionViewItem _r = _t->setOptions((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItem*>(_a[0]) = _r; }  break;
        case 22: { QSize _r = _t->sizeHint((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 23: { QRect _r = _t->textRectangle((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3])),(*reinterpret_cast< const QFont(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 24: _t->updateEditorGeometry((*reinterpret_cast< QItemDelegate*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QItemDelegate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QItemDelegate,
      qt_meta_data_PythonQtWrapper_QItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QItemDelegate))
        return static_cast<void*>(const_cast< PythonQtWrapper_QItemDelegate*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QItemEditorCreatorBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      64,   39,   40,   39, 0x0a,
      97,   93,   39,   39, 0x0a,
     185,  161,  152,   39, 0x0a,
     260,  243,  232,   39, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QItemEditorCreatorBase[] = {
    "PythonQtWrapper_QItemEditorCreatorBase\0"
    "\0QItemEditorCreatorBase*\0"
    "new_QItemEditorCreatorBase()\0obj\0"
    "delete_QItemEditorCreatorBase(QItemEditorCreatorBase*)\0"
    "QWidget*\0theWrappedObject,parent\0"
    "createWidget(QItemEditorCreatorBase*,QWidget*)\0"
    "QByteArray\0theWrappedObject\0"
    "valuePropertyName(QItemEditorCreatorBase*)\0"
};

void PythonQtWrapper_QItemEditorCreatorBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QItemEditorCreatorBase *_t = static_cast<PythonQtWrapper_QItemEditorCreatorBase *>(_o);
        switch (_id) {
        case 0: { QItemEditorCreatorBase* _r = _t->new_QItemEditorCreatorBase();
            if (_a[0]) *reinterpret_cast< QItemEditorCreatorBase**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QItemEditorCreatorBase((*reinterpret_cast< QItemEditorCreatorBase*(*)>(_a[1]))); break;
        case 2: { QWidget* _r = _t->createWidget((*reinterpret_cast< QItemEditorCreatorBase*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 3: { QByteArray _r = _t->valuePropertyName((*reinterpret_cast< QItemEditorCreatorBase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QItemEditorCreatorBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QItemEditorCreatorBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QItemEditorCreatorBase,
      qt_meta_data_PythonQtWrapper_QItemEditorCreatorBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QItemEditorCreatorBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QItemEditorCreatorBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QItemEditorCreatorBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QItemEditorCreatorBase))
        return static_cast<void*>(const_cast< PythonQtWrapper_QItemEditorCreatorBase*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QItemEditorCreatorBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QItemEditorFactory[] = {

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
      56,   35,   36,   35, 0x0a,
      85,   81,   35,   35, 0x0a,
     170,  141,  132,   35, 0x0a,
     254,   35,  228,   35, 0x0a,
     327,  297,   35,   35, 0x0a,
     410,  402,   35,   35, 0x0a,
     508,  486,  475,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QItemEditorFactory[] = {
    "PythonQtWrapper_QItemEditorFactory\0\0"
    "QItemEditorFactory*\0new_QItemEditorFactory()\0"
    "obj\0delete_QItemEditorFactory(QItemEditorFactory*)\0"
    "QWidget*\0theWrappedObject,type,parent\0"
    "createEditor(QItemEditorFactory*,QVariant::Type,QWidget*)\0"
    "const QItemEditorFactory*\0"
    "static_QItemEditorFactory_defaultFactory()\0"
    "theWrappedObject,type,creator\0"
    "registerEditor(QItemEditorFactory*,QVariant::Type,QItemEditorCreatorBa"
    "se*)\0"
    "factory\0"
    "static_QItemEditorFactory_setDefaultFactory(QItemEditorFactory*)\0"
    "QByteArray\0theWrappedObject,type\0"
    "valuePropertyName(QItemEditorFactory*,QVariant::Type)\0"
};

void PythonQtWrapper_QItemEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QItemEditorFactory *_t = static_cast<PythonQtWrapper_QItemEditorFactory *>(_o);
        switch (_id) {
        case 0: { QItemEditorFactory* _r = _t->new_QItemEditorFactory();
            if (_a[0]) *reinterpret_cast< QItemEditorFactory**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QItemEditorFactory((*reinterpret_cast< QItemEditorFactory*(*)>(_a[1]))); break;
        case 2: { QWidget* _r = _t->createEditor((*reinterpret_cast< QItemEditorFactory*(*)>(_a[1])),(*reinterpret_cast< QVariant::Type(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 3: { const QItemEditorFactory* _r = _t->static_QItemEditorFactory_defaultFactory();
            if (_a[0]) *reinterpret_cast< const QItemEditorFactory**>(_a[0]) = _r; }  break;
        case 4: _t->registerEditor((*reinterpret_cast< QItemEditorFactory*(*)>(_a[1])),(*reinterpret_cast< QVariant::Type(*)>(_a[2])),(*reinterpret_cast< QItemEditorCreatorBase*(*)>(_a[3]))); break;
        case 5: _t->static_QItemEditorFactory_setDefaultFactory((*reinterpret_cast< QItemEditorFactory*(*)>(_a[1]))); break;
        case 6: { QByteArray _r = _t->valuePropertyName((*reinterpret_cast< QItemEditorFactory*(*)>(_a[1])),(*reinterpret_cast< QVariant::Type(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QItemEditorFactory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QItemEditorFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QItemEditorFactory,
      qt_meta_data_PythonQtWrapper_QItemEditorFactory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QItemEditorFactory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QItemEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QItemEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QItemEditorFactory))
        return static_cast<void*>(const_cast< PythonQtWrapper_QItemEditorFactory*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QItemEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QItemSelection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      48,   31,   32,   31, 0x0a,
      89,   69,   32,   31, 0x0a,
     139,  133,   32,   31, 0x0a,
     178,  174,   31,   31, 0x0a,
     236,  217,   31,   31, 0x0a,
     280,  217,   31,   31, 0x0a,
     377,  358,  331,   31, 0x0a,
     418,  401,  331,   31, 0x0a,
     440,  401,   31,   31, 0x0a,
     491,  468,  463,   31, 0x0a,
     533,  401,  529,   31, 0x0a,
     556,  217,  529,   31, 0x0a,
     599,  401,   31,   31, 0x0a,
     629,  401,  463,   31, 0x0a,
     652,  217,  463,   31, 0x0a,
     698,  401,  331,   31, 0x0a,
     755,  748,  721,   31, 0x0a,
     818,  401,  331,   31, 0x0a,
     865,  841,  529,   31, 0x0a,
     914,  217,  529,   31, 0x2a,
     978,  401,  959,   31, 0x0a,
    1003,  401,  463,   31, 0x0a,
    1051, 1028,  463,   31, 0x0a,
    1108,  401,  331,   31, 0x0a,
    1130,  841,  529,   31, 0x0a,
    1183,  217,  529,   31, 0x2a,
    1232,  401,  529,   31, 0x0a,
    1287, 1256,   31,   31, 0x0a,
    1389, 1361,  721,   31, 0x0a,
    1439, 1418,  721,   31, 0x2a,
    1489, 1464,   31,   31, 0x0a,
    1538, 1519,  463,   31, 0x0a,
    1589, 1519,  463,   31, 0x0a,
    1640,  401,   31,   31, 0x0a,
    1666,  401,   31,   31, 0x0a,
    1693,  217,   31,   31, 0x0a,
    1738,  217,   31,   31, 0x0a,
    1785,  217,   31,   31, 0x0a,
    1833,  217,  529,   31, 0x0a,
    1880,  358,   31,   31, 0x0a,
    1910,  401,   31,   31, 0x0a,
    1939,  401,   31,   31, 0x0a,
    1967,  217,  463,   31, 0x0a,
    2035, 2014,   31,   31, 0x0a,
    2106, 2084,   31,   31, 0x0a,
    2172, 2135,   31,   31, 0x0a,
    2246, 2220,   31,   31, 0x0a,
    2280,  401,  529,   31, 0x0a,
    2321, 2302,   31,   31, 0x0a,
    2406,  217,  463,   31, 0x0a,
    2454, 1028,   31,   31, 0x0a,
    2525, 2504,   31,   31, 0x0a,
    2575,  358, 2555,   31, 0x0a,
    2603,  401, 2555,   31, 0x0a,
    2630,  401, 2555,   31, 0x0a,
    2685,  401, 2656,   31, 0x0a,
    2711,  358, 2555,   31, 0x0a,
    2770, 2738, 2555,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QItemSelection[] = {
    "PythonQtWrapper_QItemSelection\0\0"
    "QItemSelection*\0new_QItemSelection()\0"
    "topLeft,bottomRight\0"
    "new_QItemSelection(QModelIndex,QModelIndex)\0"
    "other\0new_QItemSelection(QItemSelection)\0"
    "obj\0delete_QItemSelection(QItemSelection*)\0"
    "theWrappedObject,t\0"
    "append(QItemSelection*,QItemSelectionRange)\0"
    "append(QItemSelection*,QList<QItemSelectionRange>)\0"
    "const QItemSelectionRange*\0"
    "theWrappedObject,i\0at(QItemSelection*,int)\0"
    "theWrappedObject\0back(QItemSelection*)\0"
    "clear(QItemSelection*)\0bool\0"
    "theWrappedObject,index\0"
    "contains(QItemSelection*,QModelIndex)\0"
    "int\0count(QItemSelection*)\0"
    "count(QItemSelection*,QItemSelectionRange)\0"
    "detachShared(QItemSelection*)\0"
    "empty(QItemSelection*)\0"
    "endsWith(QItemSelection*,QItemSelectionRange)\0"
    "first(QItemSelection*)\0"
    "QList<QItemSelectionRange>\0vector\0"
    "static_QItemSelection_fromVector(QVector<QItemSelectionRange>)\0"
    "front(QItemSelection*)\0theWrappedObject,t,from\0"
    "indexOf(QItemSelection*,QItemSelectionRange,int)\0"
    "indexOf(QItemSelection*,QItemSelectionRange)\0"
    "QList<QModelIndex>\0indexes(QItemSelection*)\0"
    "isEmpty(QItemSelection*)\0"
    "theWrappedObject,other\0"
    "isSharedWith(QItemSelection*,QList<QItemSelectionRange>)\0"
    "last(QItemSelection*)\0"
    "lastIndexOf(QItemSelection*,QItemSelectionRange,int)\0"
    "lastIndexOf(QItemSelection*,QItemSelectionRange)\0"
    "length(QItemSelection*)\0"
    "theWrappedObject,other,command\0"
    "merge(QItemSelection*,QItemSelection,QItemSelectionModel::SelectionFla"
    "gs)\0"
    "theWrappedObject,pos,length\0"
    "mid(QItemSelection*,int,int)\0"
    "theWrappedObject,pos\0mid(QItemSelection*,int)\0"
    "theWrappedObject,from,to\0"
    "move(QItemSelection*,int,int)\0"
    "theWrappedObject,l\0"
    "__ne__(QItemSelection*,QList<QItemSelectionRange>)\0"
    "__eq__(QItemSelection*,QList<QItemSelectionRange>)\0"
    "pop_back(QItemSelection*)\0"
    "pop_front(QItemSelection*)\0"
    "prepend(QItemSelection*,QItemSelectionRange)\0"
    "push_back(QItemSelection*,QItemSelectionRange)\0"
    "push_front(QItemSelection*,QItemSelectionRange)\0"
    "removeAll(QItemSelection*,QItemSelectionRange)\0"
    "removeAt(QItemSelection*,int)\0"
    "removeFirst(QItemSelection*)\0"
    "removeLast(QItemSelection*)\0"
    "removeOne(QItemSelection*,QItemSelectionRange)\0"
    "theWrappedObject,i,t\0"
    "replace(QItemSelection*,int,QItemSelectionRange)\0"
    "theWrappedObject,size\0"
    "reserve(QItemSelection*,int)\0"
    "theWrappedObject,topLeft,bottomRight\0"
    "select(QItemSelection*,QModelIndex,QModelIndex)\0"
    "theWrappedObject,sharable\0"
    "setSharable(QItemSelection*,bool)\0"
    "size(QItemSelection*)\0range,other,result\0"
    "static_QItemSelection_split(QItemSelectionRange,QItemSelectionRange,QI"
    "temSelection*)\0"
    "startsWith(QItemSelection*,QItemSelectionRange)\0"
    "swap(QItemSelection*,QList<QItemSelectionRange>&)\0"
    "theWrappedObject,i,j\0swap(QItemSelection*,int,int)\0"
    "QItemSelectionRange\0takeAt(QItemSelection*,int)\0"
    "takeFirst(QItemSelection*)\0"
    "takeLast(QItemSelection*)\0"
    "QVector<QItemSelectionRange>\0"
    "toVector(QItemSelection*)\0"
    "value(QItemSelection*,int)\0"
    "theWrappedObject,i,defaultValue\0"
    "value(QItemSelection*,int,QItemSelectionRange)\0"
};

void PythonQtWrapper_QItemSelection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QItemSelection *_t = static_cast<PythonQtWrapper_QItemSelection *>(_o);
        switch (_id) {
        case 0: { QItemSelection* _r = _t->new_QItemSelection();
            if (_a[0]) *reinterpret_cast< QItemSelection**>(_a[0]) = _r; }  break;
        case 1: { QItemSelection* _r = _t->new_QItemSelection((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QItemSelection**>(_a[0]) = _r; }  break;
        case 2: { QItemSelection* _r = _t->new_QItemSelection((*reinterpret_cast< const QItemSelection(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QItemSelection**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QItemSelection((*reinterpret_cast< QItemSelection*(*)>(_a[1]))); break;
        case 4: _t->append((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2]))); break;
        case 5: _t->append((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QList<QItemSelectionRange>(*)>(_a[2]))); break;
        case 6: { const QItemSelectionRange* _r = _t->at((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< const QItemSelectionRange**>(_a[0]) = _r; }  break;
        case 7: { const QItemSelectionRange* _r = _t->back((*reinterpret_cast< QItemSelection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QItemSelectionRange**>(_a[0]) = _r; }  break;
        case 8: _t->clear((*reinterpret_cast< QItemSelection*(*)>(_a[1]))); break;
        case 9: { bool _r = _t->contains((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->count((*reinterpret_cast< QItemSelection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->count((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: _t->detachShared((*reinterpret_cast< QItemSelection*(*)>(_a[1]))); break;
        case 13: { bool _r = _t->empty((*reinterpret_cast< QItemSelection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->endsWith((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { const QItemSelectionRange* _r = _t->first((*reinterpret_cast< QItemSelection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QItemSelectionRange**>(_a[0]) = _r; }  break;
        case 16: { QList<QItemSelectionRange> _r = _t->static_QItemSelection_fromVector((*reinterpret_cast< const QVector<QItemSelectionRange>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QItemSelectionRange>*>(_a[0]) = _r; }  break;
        case 17: { const QItemSelectionRange* _r = _t->front((*reinterpret_cast< QItemSelection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QItemSelectionRange**>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->indexOf((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->indexOf((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { QList<QModelIndex> _r = _t->indexes((*reinterpret_cast< QItemSelection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isEmpty((*reinterpret_cast< QItemSelection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->isSharedWith((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QList<QItemSelectionRange>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { const QItemSelectionRange* _r = _t->last((*reinterpret_cast< QItemSelection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QItemSelectionRange**>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->lastIndexOf((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->lastIndexOf((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->length((*reinterpret_cast< QItemSelection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: _t->merge((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[3]))); break;
        case 28: { QList<QItemSelectionRange> _r = _t->mid((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QItemSelectionRange>*>(_a[0]) = _r; }  break;
        case 29: { QList<QItemSelectionRange> _r = _t->mid((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QItemSelectionRange>*>(_a[0]) = _r; }  break;
        case 30: _t->move((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 31: { bool _r = _t->__ne__((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QList<QItemSelectionRange>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->__eq__((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QList<QItemSelectionRange>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: _t->pop_back((*reinterpret_cast< QItemSelection*(*)>(_a[1]))); break;
        case 34: _t->pop_front((*reinterpret_cast< QItemSelection*(*)>(_a[1]))); break;
        case 35: _t->prepend((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2]))); break;
        case 36: _t->push_back((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2]))); break;
        case 37: _t->push_front((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2]))); break;
        case 38: { int _r = _t->removeAll((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 39: _t->removeAt((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 40: _t->removeFirst((*reinterpret_cast< QItemSelection*(*)>(_a[1]))); break;
        case 41: _t->removeLast((*reinterpret_cast< QItemSelection*(*)>(_a[1]))); break;
        case 42: { bool _r = _t->removeOne((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: _t->replace((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[3]))); break;
        case 44: _t->reserve((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->select((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3]))); break;
        case 46: _t->setSharable((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 47: { int _r = _t->size((*reinterpret_cast< QItemSelection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 48: _t->static_QItemSelection_split((*reinterpret_cast< const QItemSelectionRange(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2])),(*reinterpret_cast< QItemSelection*(*)>(_a[3]))); break;
        case 49: { bool _r = _t->startsWith((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: _t->swap((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< QList<QItemSelectionRange>(*)>(_a[2]))); break;
        case 51: _t->swap((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 52: { QItemSelectionRange _r = _t->takeAt((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QItemSelectionRange*>(_a[0]) = _r; }  break;
        case 53: { QItemSelectionRange _r = _t->takeFirst((*reinterpret_cast< QItemSelection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QItemSelectionRange*>(_a[0]) = _r; }  break;
        case 54: { QItemSelectionRange _r = _t->takeLast((*reinterpret_cast< QItemSelection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QItemSelectionRange*>(_a[0]) = _r; }  break;
        case 55: { QVector<QItemSelectionRange> _r = _t->toVector((*reinterpret_cast< QItemSelection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QItemSelectionRange>*>(_a[0]) = _r; }  break;
        case 56: { QItemSelectionRange _r = _t->value((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QItemSelectionRange*>(_a[0]) = _r; }  break;
        case 57: { QItemSelectionRange _r = _t->value((*reinterpret_cast< QItemSelection*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QItemSelectionRange*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QItemSelection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QItemSelection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QItemSelection,
      qt_meta_data_PythonQtWrapper_QItemSelection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QItemSelection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QItemSelection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QItemSelection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QItemSelection))
        return static_cast<void*>(const_cast< PythonQtWrapper_QItemSelection*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QItemSelection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QItemSelectionModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       2,  124, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      64,   58,   37,   36, 0x0a,
     122,  109,   37,   36, 0x0a,
     180,  176,   36,   36, 0x0a,
     246,  229,   36,   36, 0x0a,
     310,  279,  274,   36, 0x0a,
     386,  229,  374,   36, 0x0a,
     464,  421,   36,   36, 0x0a,
     537,  229,  274,   36, 0x0a,
     572,  279,  274,   36, 0x0a,
     655,  627,  274,   36, 0x0a,
     730,  707,  274,   36, 0x0a,
     801,  229,  775,   36, 0x0a,
     829,  229,   36,   36, 0x0a,
     857,  627,  274,   36, 0x0a,
     953,  918,   36,   36, 0x0a,
    1064, 1033,   36,   36, 0x0a,
    1181, 1160, 1141,   36, 0x0a,
    1223,  229, 1141,   36, 0x2a,
    1261,  229, 1141,   36, 0x0a,
    1323, 1299, 1141,   36, 0x0a,
    1362,  229, 1141,   36, 0x2a,
    1412,  229, 1397,   36, 0x0a,

 // enums: name, flags, count, data
    1444, 0x0,   11,  132,
    1458, 0x1,   11,  154,

 // enum data: key, value
    1473, uint(PythonQtWrapper_QItemSelectionModel::NoUpdate),
    1482, uint(PythonQtWrapper_QItemSelectionModel::Clear),
    1488, uint(PythonQtWrapper_QItemSelectionModel::Select),
    1495, uint(PythonQtWrapper_QItemSelectionModel::Deselect),
    1504, uint(PythonQtWrapper_QItemSelectionModel::Toggle),
    1511, uint(PythonQtWrapper_QItemSelectionModel::Current),
    1519, uint(PythonQtWrapper_QItemSelectionModel::Rows),
    1524, uint(PythonQtWrapper_QItemSelectionModel::Columns),
    1532, uint(PythonQtWrapper_QItemSelectionModel::SelectCurrent),
    1546, uint(PythonQtWrapper_QItemSelectionModel::ToggleCurrent),
    1560, uint(PythonQtWrapper_QItemSelectionModel::ClearAndSelect),
    1473, uint(PythonQtWrapper_QItemSelectionModel::NoUpdate),
    1482, uint(PythonQtWrapper_QItemSelectionModel::Clear),
    1488, uint(PythonQtWrapper_QItemSelectionModel::Select),
    1495, uint(PythonQtWrapper_QItemSelectionModel::Deselect),
    1504, uint(PythonQtWrapper_QItemSelectionModel::Toggle),
    1511, uint(PythonQtWrapper_QItemSelectionModel::Current),
    1519, uint(PythonQtWrapper_QItemSelectionModel::Rows),
    1524, uint(PythonQtWrapper_QItemSelectionModel::Columns),
    1532, uint(PythonQtWrapper_QItemSelectionModel::SelectCurrent),
    1546, uint(PythonQtWrapper_QItemSelectionModel::ToggleCurrent),
    1560, uint(PythonQtWrapper_QItemSelectionModel::ClearAndSelect),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QItemSelectionModel[] = {
    "PythonQtWrapper_QItemSelectionModel\0"
    "\0QItemSelectionModel*\0model\0"
    "new_QItemSelectionModel(QAbstractItemModel*)\0"
    "model,parent\0"
    "new_QItemSelectionModel(QAbstractItemModel*,QObject*)\0"
    "obj\0delete_QItemSelectionModel(QItemSelectionModel*)\0"
    "theWrappedObject\0clear(QItemSelectionModel*)\0"
    "bool\0theWrappedObject,column,parent\0"
    "columnIntersectsSelection(QItemSelectionModel*,int,QModelIndex)\0"
    "QModelIndex\0currentIndex(QItemSelectionModel*)\0"
    "theWrappedObject,newSelection,oldSelection\0"
    "emitSelectionChanged(QItemSelectionModel*,QItemSelection,QItemSelectio"
    "n)\0"
    "hasSelection(QItemSelectionModel*)\0"
    "isColumnSelected(QItemSelectionModel*,int,QModelIndex)\0"
    "theWrappedObject,row,parent\0"
    "isRowSelected(QItemSelectionModel*,int,QModelIndex)\0"
    "theWrappedObject,index\0"
    "isSelected(QItemSelectionModel*,QModelIndex)\0"
    "const QAbstractItemModel*\0"
    "model(QItemSelectionModel*)\0"
    "reset(QItemSelectionModel*)\0"
    "rowIntersectsSelection(QItemSelectionModel*,int,QModelIndex)\0"
    "theWrappedObject,selection,command\0"
    "select(QItemSelectionModel*,QItemSelection,QItemSelectionModel::Select"
    "ionFlags)\0"
    "theWrappedObject,index,command\0"
    "select(QItemSelectionModel*,QModelIndex,QItemSelectionModel::Selection"
    "Flags)\0"
    "QList<QModelIndex>\0theWrappedObject,row\0"
    "selectedColumns(QItemSelectionModel*,int)\0"
    "selectedColumns(QItemSelectionModel*)\0"
    "selectedIndexes(QItemSelectionModel*)\0"
    "theWrappedObject,column\0"
    "selectedRows(QItemSelectionModel*,int)\0"
    "selectedRows(QItemSelectionModel*)\0"
    "QItemSelection\0selection(QItemSelectionModel*)\0"
    "SelectionFlag\0SelectionFlags\0NoUpdate\0"
    "Clear\0Select\0Deselect\0Toggle\0Current\0"
    "Rows\0Columns\0SelectCurrent\0ToggleCurrent\0"
    "ClearAndSelect\0"
};

void PythonQtWrapper_QItemSelectionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QItemSelectionModel *_t = static_cast<PythonQtWrapper_QItemSelectionModel *>(_o);
        switch (_id) {
        case 0: { QItemSelectionModel* _r = _t->new_QItemSelectionModel((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QItemSelectionModel**>(_a[0]) = _r; }  break;
        case 1: { QItemSelectionModel* _r = _t->new_QItemSelectionModel((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QItemSelectionModel**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QItemSelectionModel((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1]))); break;
        case 3: _t->clear((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->columnIntersectsSelection((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QModelIndex _r = _t->currentIndex((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 6: _t->emitSelectionChanged((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2])),(*reinterpret_cast< const QItemSelection(*)>(_a[3]))); break;
        case 7: { bool _r = _t->hasSelection((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isColumnSelected((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isRowSelected((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isSelected((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { const QAbstractItemModel* _r = _t->model((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QAbstractItemModel**>(_a[0]) = _r; }  break;
        case 12: _t->reset((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1]))); break;
        case 13: { bool _r = _t->rowIntersectsSelection((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->select((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[3]))); break;
        case 15: _t->select((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[3]))); break;
        case 16: { QList<QModelIndex> _r = _t->selectedColumns((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 17: { QList<QModelIndex> _r = _t->selectedColumns((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 18: { QList<QModelIndex> _r = _t->selectedIndexes((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 19: { QList<QModelIndex> _r = _t->selectedRows((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 20: { QList<QModelIndex> _r = _t->selectedRows((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 21: { QItemSelection _r = _t->selection((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QItemSelection*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QItemSelectionModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QItemSelectionModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QItemSelectionModel,
      qt_meta_data_PythonQtWrapper_QItemSelectionModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QItemSelectionModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QItemSelectionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QItemSelectionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QItemSelectionModel))
        return static_cast<void*>(const_cast< PythonQtWrapper_QItemSelectionModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QItemSelectionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QItemSelectionRange[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      58,   36,   37,   36, 0x0a,
      90,   84,   37,   36, 0x0a,
     141,  135,   37,   36, 0x0a,
     198,  178,   37,   36, 0x0a,
     251,  247,   36,   36, 0x0a,
     321,  304,  300,   36, 0x0a,
     362,  304,  350,   36, 0x0a,
     424,  401,  396,   36, 0x0a,
     507,  467,  396,   36, 0x0a,
     558,  304,  300,   36, 0x0a,
     606,  304,  587,   36, 0x0a,
     679,  656,  636,   36, 0x0a,
     733,  656,  396,   36, 0x0a,
     786,  304,  396,   36, 0x0a,
     816,  304,  396,   36, 0x0a,
     846,  304,  300,   36, 0x0a,
     899,  304,  873,   36, 0x0a,
     927,  656,  396,   36, 0x0a,
     976,  656,  396,   36, 0x0a,
    1025,  656,  396,   36, 0x0a,
    1074,  304,  350,   36, 0x0a,
    1103,  304,  300,   36, 0x0a,
    1131,  304,  300,   36, 0x0a,
    1157,  304,  350,   36, 0x0a,
    1187,  304,  300,   36, 0x0a,
    1223,   36, 1215,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QItemSelectionRange[] = {
    "PythonQtWrapper_QItemSelectionRange\0"
    "\0QItemSelectionRange*\0new_QItemSelectionRange()\0"
    "other\0new_QItemSelectionRange(QItemSelectionRange)\0"
    "index\0new_QItemSelectionRange(QModelIndex)\0"
    "topLeft,bottomRight\0"
    "new_QItemSelectionRange(QModelIndex,QModelIndex)\0"
    "obj\0delete_QItemSelectionRange(QItemSelectionRange*)\0"
    "int\0theWrappedObject\0bottom(QItemSelectionRange*)\0"
    "QModelIndex\0bottomRight(QItemSelectionRange*)\0"
    "bool\0theWrappedObject,index\0"
    "contains(QItemSelectionRange*,QModelIndex)\0"
    "theWrappedObject,row,column,parentIndex\0"
    "contains(QItemSelectionRange*,int,int,QModelIndex)\0"
    "height(QItemSelectionRange*)\0"
    "QList<QModelIndex>\0indexes(QItemSelectionRange*)\0"
    "QItemSelectionRange\0theWrappedObject,other\0"
    "intersected(QItemSelectionRange*,QItemSelectionRange)\0"
    "intersects(QItemSelectionRange*,QItemSelectionRange)\0"
    "isEmpty(QItemSelectionRange*)\0"
    "isValid(QItemSelectionRange*)\0"
    "left(QItemSelectionRange*)\0"
    "const QAbstractItemModel*\0"
    "model(QItemSelectionRange*)\0"
    "__ne__(QItemSelectionRange*,QItemSelectionRange)\0"
    "__lt__(QItemSelectionRange*,QItemSelectionRange)\0"
    "__eq__(QItemSelectionRange*,QItemSelectionRange)\0"
    "parent(QItemSelectionRange*)\0"
    "right(QItemSelectionRange*)\0"
    "top(QItemSelectionRange*)\0"
    "topLeft(QItemSelectionRange*)\0"
    "width(QItemSelectionRange*)\0QString\0"
    "py_toString(QItemSelectionRange*)\0"
};

void PythonQtWrapper_QItemSelectionRange::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QItemSelectionRange *_t = static_cast<PythonQtWrapper_QItemSelectionRange *>(_o);
        switch (_id) {
        case 0: { QItemSelectionRange* _r = _t->new_QItemSelectionRange();
            if (_a[0]) *reinterpret_cast< QItemSelectionRange**>(_a[0]) = _r; }  break;
        case 1: { QItemSelectionRange* _r = _t->new_QItemSelectionRange((*reinterpret_cast< const QItemSelectionRange(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QItemSelectionRange**>(_a[0]) = _r; }  break;
        case 2: { QItemSelectionRange* _r = _t->new_QItemSelectionRange((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QItemSelectionRange**>(_a[0]) = _r; }  break;
        case 3: { QItemSelectionRange* _r = _t->new_QItemSelectionRange((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QItemSelectionRange**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QItemSelectionRange((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1]))); break;
        case 5: { int _r = _t->bottom((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { QModelIndex _r = _t->bottomRight((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->contains((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->contains((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->height((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QList<QModelIndex> _r = _t->indexes((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 11: { QItemSelectionRange _r = _t->intersected((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QItemSelectionRange*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->intersects((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isEmpty((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isValid((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->left((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { const QAbstractItemModel* _r = _t->model((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QAbstractItemModel**>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->__ne__((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->__lt__((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->__eq__((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])),(*reinterpret_cast< const QItemSelectionRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { QModelIndex _r = _t->parent((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->right((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->top((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: { QModelIndex _r = _t->topLeft((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->width((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { QString _r = _t->py_toString((*reinterpret_cast< QItemSelectionRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QItemSelectionRange::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QItemSelectionRange::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QItemSelectionRange,
      qt_meta_data_PythonQtWrapper_QItemSelectionRange, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QItemSelectionRange::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QItemSelectionRange::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QItemSelectionRange::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QItemSelectionRange))
        return static_cast<void*>(const_cast< PythonQtWrapper_QItemSelectionRange*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QItemSelectionRange::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QKeyEvent[] = {

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
      76,   38,   27,   26, 0x0a,
     182,  150,   27,   26, 0x2a,
     273,  249,   27,   26, 0x2a,
     354,  335,   27,   26, 0x2a,
     412,  408,   26,   26, 0x0a,
     462,  445,  441,   26, 0x0a,
     566,  480,   27,   26, 0x0a,
     761,  681,   27,   26, 0x2a,
     941,  869,   27,   26, 0x2a,
    1111, 1044,   27,   26, 0x2a,
    1211,  445, 1206,   26, 0x0a,
    1239,  445, 1206,   26, 0x0a,
    1264,  445,  441,   26, 0x0a,
    1301, 1280, 1206,   26, 0x0a,
    1369,  445, 1347,   26, 0x0a,
    1396,  445, 1391,   26, 0x0a,
    1424,  445, 1391,   26, 0x0a,
    1451,  445, 1391,   26, 0x0a,
    1488,  445, 1480,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QKeyEvent[] = {
    "PythonQtWrapper_QKeyEvent\0\0QKeyEvent*\0"
    "type,key,modifiers,text,autorep,count\0"
    "new_QKeyEvent(QEvent::Type,int,Qt::KeyboardModifiers,QString,bool,usho"
    "rt)\0"
    "type,key,modifiers,text,autorep\0"
    "new_QKeyEvent(QEvent::Type,int,Qt::KeyboardModifiers,QString,bool)\0"
    "type,key,modifiers,text\0"
    "new_QKeyEvent(QEvent::Type,int,Qt::KeyboardModifiers,QString)\0"
    "type,key,modifiers\0"
    "new_QKeyEvent(QEvent::Type,int,Qt::KeyboardModifiers)\0"
    "obj\0delete_QKeyEvent(QKeyEvent*)\0int\0"
    "theWrappedObject\0count(QKeyEvent*)\0"
    "type,key,modifiers,nativeScanCode,nativeVirtualKey,nativeModifiers,tex"
    "t,autorep,count\0"
    "static_QKeyEvent_createExtendedKeyEvent(QEvent::Type,int,Qt::KeyboardM"
    "odifiers,uint,uint,uint,QString,bool,ushort)\0"
    "type,key,modifiers,nativeScanCode,nativeVirtualKey,nativeModifiers,tex"
    "t,autorep\0"
    "static_QKeyEvent_createExtendedKeyEvent(QEvent::Type,int,Qt::KeyboardM"
    "odifiers,uint,uint,uint,QString,bool)\0"
    "type,key,modifiers,nativeScanCode,nativeVirtualKey,nativeModifiers,tex"
    "t\0"
    "static_QKeyEvent_createExtendedKeyEvent(QEvent::Type,int,Qt::KeyboardM"
    "odifiers,uint,uint,uint,QString)\0"
    "type,key,modifiers,nativeScanCode,nativeVirtualKey,nativeModifiers\0"
    "static_QKeyEvent_createExtendedKeyEvent(QEvent::Type,int,Qt::KeyboardM"
    "odifiers,uint,uint,uint)\0"
    "bool\0hasExtendedInfo(QKeyEvent*)\0"
    "isAutoRepeat(QKeyEvent*)\0key(QKeyEvent*)\0"
    "theWrappedObject,key\0"
    "matches(QKeyEvent*,QKeySequence::StandardKey)\0"
    "Qt::KeyboardModifiers\0modifiers(QKeyEvent*)\0"
    "uint\0nativeModifiers(QKeyEvent*)\0"
    "nativeScanCode(QKeyEvent*)\0"
    "nativeVirtualKey(QKeyEvent*)\0QString\0"
    "text(QKeyEvent*)\0"
};

void PythonQtWrapper_QKeyEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QKeyEvent *_t = static_cast<PythonQtWrapper_QKeyEvent *>(_o);
        switch (_id) {
        case 0: { QKeyEvent* _r = _t->new_QKeyEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< ushort(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QKeyEvent**>(_a[0]) = _r; }  break;
        case 1: { QKeyEvent* _r = _t->new_QKeyEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QKeyEvent**>(_a[0]) = _r; }  break;
        case 2: { QKeyEvent* _r = _t->new_QKeyEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QKeyEvent**>(_a[0]) = _r; }  break;
        case 3: { QKeyEvent* _r = _t->new_QKeyEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QKeyEvent**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QKeyEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 5: { int _r = _t->count((*reinterpret_cast< QKeyEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { QKeyEvent* _r = _t->static_QKeyEvent_createExtendedKeyEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< ushort(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< QKeyEvent**>(_a[0]) = _r; }  break;
        case 7: { QKeyEvent* _r = _t->static_QKeyEvent_createExtendedKeyEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< QKeyEvent**>(_a[0]) = _r; }  break;
        case 8: { QKeyEvent* _r = _t->static_QKeyEvent_createExtendedKeyEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< QKeyEvent**>(_a[0]) = _r; }  break;
        case 9: { QKeyEvent* _r = _t->static_QKeyEvent_createExtendedKeyEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QKeyEvent**>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->hasExtendedInfo((*reinterpret_cast< QKeyEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isAutoRepeat((*reinterpret_cast< QKeyEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->key((*reinterpret_cast< QKeyEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->matches((*reinterpret_cast< QKeyEvent*(*)>(_a[1])),(*reinterpret_cast< QKeySequence::StandardKey(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { Qt::KeyboardModifiers _r = _t->modifiers((*reinterpret_cast< QKeyEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::KeyboardModifiers*>(_a[0]) = _r; }  break;
        case 15: { uint _r = _t->nativeModifiers((*reinterpret_cast< QKeyEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 16: { uint _r = _t->nativeScanCode((*reinterpret_cast< QKeyEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 17: { uint _r = _t->nativeVirtualKey((*reinterpret_cast< QKeyEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->text((*reinterpret_cast< QKeyEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QKeyEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QKeyEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QKeyEvent,
      qt_meta_data_PythonQtWrapper_QKeyEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QKeyEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QKeyEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QKeyEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QKeyEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QKeyEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QKeyEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QKeyEventTransition[] = {

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
      86,   58,   37,   36, 0x0a,
     161,  145,   37,   36, 0x2a,
     224,  212,   37,   36, 0x0a,
     257,   36,   37,   36, 0x2a,
     287,  283,   36,   36, 0x0a,
     364,  341,  336,   36, 0x0a,
     425,  408,  404,   36, 0x0a,
     473,  408,  451,   36, 0x0a,
     508,  341,   36,   36, 0x0a,
     572,  551,   36,   36, 0x0a,
     632,  605,   36,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QKeyEventTransition[] = {
    "PythonQtWrapper_QKeyEventTransition\0"
    "\0QKeyEventTransition*\0object,type,key,sourceState\0"
    "new_QKeyEventTransition(QObject*,QEvent::Type,int,QState*)\0"
    "object,type,key\0"
    "new_QKeyEventTransition(QObject*,QEvent::Type,int)\0"
    "sourceState\0new_QKeyEventTransition(QState*)\0"
    "new_QKeyEventTransition()\0obj\0"
    "delete_QKeyEventTransition(QKeyEventTransition*)\0"
    "bool\0theWrappedObject,event\0"
    "eventTest(QKeyEventTransition*,QEvent*)\0"
    "int\0theWrappedObject\0key(QKeyEventTransition*)\0"
    "Qt::KeyboardModifiers\0"
    "modifierMask(QKeyEventTransition*)\0"
    "onTransition(QKeyEventTransition*,QEvent*)\0"
    "theWrappedObject,key\0"
    "setKey(QKeyEventTransition*,int)\0"
    "theWrappedObject,modifiers\0"
    "setModifierMask(QKeyEventTransition*,Qt::KeyboardModifiers)\0"
};

void PythonQtWrapper_QKeyEventTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QKeyEventTransition *_t = static_cast<PythonQtWrapper_QKeyEventTransition *>(_o);
        switch (_id) {
        case 0: { QKeyEventTransition* _r = _t->new_QKeyEventTransition((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent::Type(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QState*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QKeyEventTransition**>(_a[0]) = _r; }  break;
        case 1: { QKeyEventTransition* _r = _t->new_QKeyEventTransition((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent::Type(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QKeyEventTransition**>(_a[0]) = _r; }  break;
        case 2: { QKeyEventTransition* _r = _t->new_QKeyEventTransition((*reinterpret_cast< QState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QKeyEventTransition**>(_a[0]) = _r; }  break;
        case 3: { QKeyEventTransition* _r = _t->new_QKeyEventTransition();
            if (_a[0]) *reinterpret_cast< QKeyEventTransition**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QKeyEventTransition((*reinterpret_cast< QKeyEventTransition*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->eventTest((*reinterpret_cast< QKeyEventTransition*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->key((*reinterpret_cast< QKeyEventTransition*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { Qt::KeyboardModifiers _r = _t->modifierMask((*reinterpret_cast< QKeyEventTransition*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::KeyboardModifiers*>(_a[0]) = _r; }  break;
        case 8: _t->onTransition((*reinterpret_cast< QKeyEventTransition*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 9: _t->setKey((*reinterpret_cast< QKeyEventTransition*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->setModifierMask((*reinterpret_cast< QKeyEventTransition*(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QKeyEventTransition::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QKeyEventTransition::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QKeyEventTransition,
      qt_meta_data_PythonQtWrapper_QKeyEventTransition, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QKeyEventTransition::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QKeyEventTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QKeyEventTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QKeyEventTransition))
        return static_cast<void*>(const_cast< PythonQtWrapper_QKeyEventTransition*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QKeyEventTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QLCDNumber[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
     106,   89,   28,   27, 0x0a,
     146,  136,   28,   27, 0x2a,
     171,  167,   27,   27, 0x0a,
     228,  207,  202,   27, 0x0a,
     262,  207,  202,   27, 0x0a,
     314,  297,  293,   27, 0x0a,
     357,  338,  202,   27, 0x0a,
     384,  297,  293,   27, 0x0a,
     423,  297,  406,   27, 0x0a,
     441,  297,  293,   27, 0x0a,
     488,  464,   27,   27, 0x0a,
     550,  297,  525,   27, 0x0a,
     601,  576,   27,   27, 0x0a,
     632,  464,   27,   27, 0x0a,
     670,  576,   27,   27, 0x0a,
     700,  464,   27,   27, 0x0a,
     760,  297,  754,   27, 0x0a,
     782,  297,  202,   27, 0x0a,
     820,  297,  813,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QLCDNumber[] = {
    "PythonQtWrapper_QLCDNumber\0\0QLCDNumber*\0"
    "parent\0new_QLCDNumber(QWidget*)\0"
    "new_QLCDNumber()\0numDigits,parent\0"
    "new_QLCDNumber(uint,QWidget*)\0numDigits\0"
    "new_QLCDNumber(uint)\0obj\0"
    "delete_QLCDNumber(QLCDNumber*)\0bool\0"
    "theWrappedObject,num\0"
    "checkOverflow(QLCDNumber*,double)\0"
    "checkOverflow(QLCDNumber*,int)\0int\0"
    "theWrappedObject\0digitCount(QLCDNumber*)\0"
    "theWrappedObject,e\0event(QLCDNumber*,QEvent*)\0"
    "intValue(QLCDNumber*)\0QLCDNumber::Mode\0"
    "mode(QLCDNumber*)\0numDigits(QLCDNumber*)\0"
    "theWrappedObject,arg__1\0"
    "paintEvent(QLCDNumber*,QPaintEvent*)\0"
    "QLCDNumber::SegmentStyle\0"
    "segmentStyle(QLCDNumber*)\0"
    "theWrappedObject,nDigits\0"
    "setDigitCount(QLCDNumber*,int)\0"
    "setMode(QLCDNumber*,QLCDNumber::Mode)\0"
    "setNumDigits(QLCDNumber*,int)\0"
    "setSegmentStyle(QLCDNumber*,QLCDNumber::SegmentStyle)\0"
    "QSize\0sizeHint(QLCDNumber*)\0"
    "smallDecimalPoint(QLCDNumber*)\0double\0"
    "value(QLCDNumber*)\0"
};

void PythonQtWrapper_QLCDNumber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QLCDNumber *_t = static_cast<PythonQtWrapper_QLCDNumber *>(_o);
        switch (_id) {
        case 0: { QLCDNumber* _r = _t->new_QLCDNumber((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLCDNumber**>(_a[0]) = _r; }  break;
        case 1: { QLCDNumber* _r = _t->new_QLCDNumber();
            if (_a[0]) *reinterpret_cast< QLCDNumber**>(_a[0]) = _r; }  break;
        case 2: { QLCDNumber* _r = _t->new_QLCDNumber((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLCDNumber**>(_a[0]) = _r; }  break;
        case 3: { QLCDNumber* _r = _t->new_QLCDNumber((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLCDNumber**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QLCDNumber((*reinterpret_cast< QLCDNumber*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->checkOverflow((*reinterpret_cast< QLCDNumber*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->checkOverflow((*reinterpret_cast< QLCDNumber*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->digitCount((*reinterpret_cast< QLCDNumber*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->event((*reinterpret_cast< QLCDNumber*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->intValue((*reinterpret_cast< QLCDNumber*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QLCDNumber::Mode _r = _t->mode((*reinterpret_cast< QLCDNumber*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLCDNumber::Mode*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->numDigits((*reinterpret_cast< QLCDNumber*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: _t->paintEvent((*reinterpret_cast< QLCDNumber*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 13: { QLCDNumber::SegmentStyle _r = _t->segmentStyle((*reinterpret_cast< QLCDNumber*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLCDNumber::SegmentStyle*>(_a[0]) = _r; }  break;
        case 14: _t->setDigitCount((*reinterpret_cast< QLCDNumber*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->setMode((*reinterpret_cast< QLCDNumber*(*)>(_a[1])),(*reinterpret_cast< QLCDNumber::Mode(*)>(_a[2]))); break;
        case 16: _t->setNumDigits((*reinterpret_cast< QLCDNumber*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->setSegmentStyle((*reinterpret_cast< QLCDNumber*(*)>(_a[1])),(*reinterpret_cast< QLCDNumber::SegmentStyle(*)>(_a[2]))); break;
        case 18: { QSize _r = _t->sizeHint((*reinterpret_cast< QLCDNumber*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->smallDecimalPoint((*reinterpret_cast< QLCDNumber*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { double _r = _t->value((*reinterpret_cast< QLCDNumber*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QLCDNumber::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QLCDNumber::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QLCDNumber,
      qt_meta_data_PythonQtWrapper_QLCDNumber, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QLCDNumber::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QLCDNumber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QLCDNumber::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QLCDNumber))
        return static_cast<void*>(const_cast< PythonQtWrapper_QLCDNumber*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QLCDNumber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QLabel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      41,   32,   24,   23, 0x0a,
      85,   78,   24,   23, 0x2a,
     106,   23,   24,   23, 0x2a,
     133,  119,   24,   23, 0x0a,
     190,  178,   24,   23, 0x2a,
     224,  219,   24,   23, 0x2a,
     248,  244,   23,   23, 0x0a,
     302,  285,  271,   23, 0x0a,
     330,  285,  321,   23, 0x0a,
     369,  345,   23,   23, 0x0a,
     418,  398,   23,   23, 0x0a,
     487,  468,  463,   23, 0x0a,
     510,  398,   23,   23, 0x0a,
     567,  545,  463,   23, 0x0a,
     600,  398,   23,   23, 0x0a,
     636,  285,  463,   23, 0x0a,
     663,  285,  463,   23, 0x0a,
     692,  345,  688,   23, 0x0a,
     720,  285,  688,   23, 0x0a,
     736,  398,   23,   23, 0x0a,
     770,  285,  688,   23, 0x0a,
     792,  285,  786,   23, 0x0a,
     817,  398,   23,   23, 0x0a,
     854,  398,   23,   23, 0x0a,
     892,  398,   23,   23, 0x0a,
     940,  285,  932,   23, 0x0a,
     955,  285,  463,   23, 0x0a,
     982,  345,   23,   23, 0x0a,
    1031,  285, 1015,   23, 0x0a,
    1063,  285, 1048,   23, 0x0a,
    1087,  285, 1079,   23, 0x0a,
    1109,  285,  688,   23, 0x0a,
    1133,  345,   23,   23, 0x0a,
    1169,  345,   23,   23, 0x0a,
    1196,  345,   23,   23, 0x0a,
    1219,  345,   23,   23, 0x0a,
    1264, 1242,   23,   23, 0x0a,
    1299,  345,   23,   23, 0x0a,
    1362, 1331,   23,   23, 0x0a,
    1392,  345,   23,   23, 0x0a,
    1453, 1430,   23,   23, 0x0a,
    1531, 1511,   23,   23, 0x0a,
    1557,  285,  786,   23, 0x0a,
    1575,  285, 1079,   23, 0x0a,
    1604,  285, 1589,   23, 0x0a,
    1649,  285, 1624,   23, 0x0a,
    1679,  285,  463,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QLabel[] = {
    "PythonQtWrapper_QLabel\0\0QLabel*\0"
    "parent,f\0new_QLabel(QWidget*,Qt::WindowFlags)\0"
    "parent\0new_QLabel(QWidget*)\0new_QLabel()\0"
    "text,parent,f\0"
    "new_QLabel(QString,QWidget*,Qt::WindowFlags)\0"
    "text,parent\0new_QLabel(QString,QWidget*)\0"
    "text\0new_QLabel(QString)\0obj\0"
    "delete_QLabel(QLabel*)\0Qt::Alignment\0"
    "theWrappedObject\0alignment(QLabel*)\0"
    "QWidget*\0buddy(QLabel*)\0theWrappedObject,arg__1\0"
    "changeEvent(QLabel*,QEvent*)\0"
    "theWrappedObject,ev\0"
    "contextMenuEvent(QLabel*,QContextMenuEvent*)\0"
    "bool\0theWrappedObject,e\0event(QLabel*,QEvent*)\0"
    "focusInEvent(QLabel*,QFocusEvent*)\0"
    "theWrappedObject,next\0"
    "focusNextPrevChild(QLabel*,bool)\0"
    "focusOutEvent(QLabel*,QFocusEvent*)\0"
    "hasScaledContents(QLabel*)\0"
    "hasSelectedText(QLabel*)\0int\0"
    "heightForWidth(QLabel*,int)\0indent(QLabel*)\0"
    "keyPressEvent(QLabel*,QKeyEvent*)\0"
    "margin(QLabel*)\0QSize\0minimumSizeHint(QLabel*)\0"
    "mouseMoveEvent(QLabel*,QMouseEvent*)\0"
    "mousePressEvent(QLabel*,QMouseEvent*)\0"
    "mouseReleaseEvent(QLabel*,QMouseEvent*)\0"
    "QMovie*\0movie(QLabel*)\0"
    "openExternalLinks(QLabel*)\0"
    "paintEvent(QLabel*,QPaintEvent*)\0"
    "const QPicture*\0picture(QLabel*)\0"
    "const QPixmap*\0pixmap(QLabel*)\0QString\0"
    "selectedText(QLabel*)\0selectionStart(QLabel*)\0"
    "setAlignment(QLabel*,Qt::Alignment)\0"
    "setBuddy(QLabel*,QWidget*)\0"
    "setIndent(QLabel*,int)\0setMargin(QLabel*,int)\0"
    "theWrappedObject,open\0"
    "setOpenExternalLinks(QLabel*,bool)\0"
    "setScaledContents(QLabel*,bool)\0"
    "theWrappedObject,arg__1,arg__2\0"
    "setSelection(QLabel*,int,int)\0"
    "setTextFormat(QLabel*,Qt::TextFormat)\0"
    "theWrappedObject,flags\0"
    "setTextInteractionFlags(QLabel*,Qt::TextInteractionFlags)\0"
    "theWrappedObject,on\0setWordWrap(QLabel*,bool)\0"
    "sizeHint(QLabel*)\0text(QLabel*)\0"
    "Qt::TextFormat\0textFormat(QLabel*)\0"
    "Qt::TextInteractionFlags\0"
    "textInteractionFlags(QLabel*)\0"
    "wordWrap(QLabel*)\0"
};

void PythonQtWrapper_QLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QLabel *_t = static_cast<PythonQtWrapper_QLabel *>(_o);
        switch (_id) {
        case 0: { QLabel* _r = _t->new_QLabel((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLabel**>(_a[0]) = _r; }  break;
        case 1: { QLabel* _r = _t->new_QLabel((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLabel**>(_a[0]) = _r; }  break;
        case 2: { QLabel* _r = _t->new_QLabel();
            if (_a[0]) *reinterpret_cast< QLabel**>(_a[0]) = _r; }  break;
        case 3: { QLabel* _r = _t->new_QLabel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QLabel**>(_a[0]) = _r; }  break;
        case 4: { QLabel* _r = _t->new_QLabel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLabel**>(_a[0]) = _r; }  break;
        case 5: { QLabel* _r = _t->new_QLabel((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLabel**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QLabel((*reinterpret_cast< QLabel*(*)>(_a[1]))); break;
        case 7: { Qt::Alignment _r = _t->alignment((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 8: { QWidget* _r = _t->buddy((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 9: _t->changeEvent((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 10: _t->contextMenuEvent((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< QContextMenuEvent*(*)>(_a[2]))); break;
        case 11: { bool _r = _t->event((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->focusInEvent((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 13: { bool _r = _t->focusNextPrevChild((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->focusOutEvent((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 15: { bool _r = _t->hasScaledContents((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->hasSelectedText((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->heightForWidth((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->indent((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: _t->keyPressEvent((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 20: { int _r = _t->margin((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { QSize _r = _t->minimumSizeHint((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 22: _t->mouseMoveEvent((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 23: _t->mousePressEvent((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 24: _t->mouseReleaseEvent((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 25: { QMovie* _r = _t->movie((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMovie**>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->openExternalLinks((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->paintEvent((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 28: { const QPicture* _r = _t->picture((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QPicture**>(_a[0]) = _r; }  break;
        case 29: { const QPixmap* _r = _t->pixmap((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QPixmap**>(_a[0]) = _r; }  break;
        case 30: { QString _r = _t->selectedText((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 31: { int _r = _t->selectionStart((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 32: _t->setAlignment((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 33: _t->setBuddy((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 34: _t->setIndent((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 35: _t->setMargin((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 36: _t->setOpenExternalLinks((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 37: _t->setScaledContents((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 38: _t->setSelection((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 39: _t->setTextFormat((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< Qt::TextFormat(*)>(_a[2]))); break;
        case 40: _t->setTextInteractionFlags((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< Qt::TextInteractionFlags(*)>(_a[2]))); break;
        case 41: _t->setWordWrap((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 42: { QSize _r = _t->sizeHint((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 43: { QString _r = _t->text((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 44: { Qt::TextFormat _r = _t->textFormat((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TextFormat*>(_a[0]) = _r; }  break;
        case 45: { Qt::TextInteractionFlags _r = _t->textInteractionFlags((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TextInteractionFlags*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->wordWrap((*reinterpret_cast< QLabel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QLabel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QLabel,
      qt_meta_data_PythonQtWrapper_QLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QLabel))
        return static_cast<void*>(const_cast< PythonQtWrapper_QLabel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QLayout[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   24,   25,   24, 0x0a,
      55,   48,   25,   24, 0x0a,
      81,   77,   24,   24, 0x0a,
     128,  111,  106,   24, 0x0a,
     166,  147,   24,   24, 0x0a,
     247,  228,   24,   24, 0x0a,
     333,  309,   24,   24, 0x0a,
     392,  228,   24,   24, 0x0a,
     473,  449,  106,   24, 0x0a,
     510,  309,  504,   24, 0x0a,
     559,  540,   24,   24, 0x0a,
     603,  599,  593,   24, 0x0a,
     671,  111,  662,   24, 0x0a,
     697,  111,  504,   24, 0x0a,
     724,  111,  720,   24, 0x0a,
     757,  111,  740,   24, 0x0a,
     787,  111,  504,   24, 0x0a,
     806,  309,  720,   24, 0x0a,
     833,  111,   24,   24, 0x0a,
     854,  111,  106,   24, 0x0a,
     872,  111,  106,   24, 0x0a,
     928,  905,  892,   24, 0x0a,
     949,  111,   25,   24, 0x0a,
     966,  111,  593,   24, 0x0a,
     997,  111,  988,   24, 0x0a,
    1015,  111,  593,   24, 0x0a,
    1037,  111,  988,   24, 0x0a,
    1060,  309,   24,   24, 0x0a,
    1125,  228,   24,   24, 0x0a,
    1215, 1188,   24,   24, 0x0a,
    1281, 1252,  106,   24, 0x0a,
    1356, 1327,  106,   24, 0x0a,
    1427, 1402,   24,   24, 0x0a,
    1504, 1465,   24,   24, 0x0a,
    1549,  309,   24,   24, 0x0a,
    1575,  309,   24,   24, 0x0a,
    1603,  309,   24,   24, 0x0a,
    1627,  228,   24,   24, 0x0a,
    1657,  309,   24,   24, 0x0a,
    1709,  309,   24,   24, 0x0a,
    1758,  111, 1734,   24, 0x0a,
    1783,  111,  720,   24, 0x0a,
    1845,  905, 1801,   24, 0x0a,
    1866,  228,  720,   24, 0x0a,
    1900,  111,  593,   24, 0x0a,
    1927,  111,  593,   24, 0x0a,
    1954,  111,  593,   24, 0x0a,
    1978,  111,   24,   24, 0x0a,
    1995,  309,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QLayout[] = {
    "PythonQtWrapper_QLayout\0\0QLayout*\0"
    "new_QLayout()\0parent\0new_QLayout(QWidget*)\0"
    "obj\0delete_QLayout(QLayout*)\0bool\0"
    "theWrappedObject\0activate(QLayout*)\0"
    "theWrappedObject,l\0"
    "addChildLayout(QLayout*,PythonQtPassOwnershipToCPP<QLayout*>)\0"
    "theWrappedObject,w\0"
    "addChildWidget(QLayout*,PythonQtPassOwnershipToCPP<QWidget*>)\0"
    "theWrappedObject,arg__1\0"
    "addItem(QLayout*,PythonQtPassOwnershipToCPP<QLayoutItem*>)\0"
    "addWidget(QLayout*,PythonQtPassOwnershipToCPP<QWidget*>)\0"
    "theWrappedObject,layout\0"
    "adoptLayout(QLayout*,QLayout*)\0QRect\0"
    "alignmentRect(QLayout*,QRect)\0"
    "theWrappedObject,e\0childEvent(QLayout*,QChildEvent*)\0"
    "QSize\0w,s\0"
    "static_QLayout_closestAcceptableSize(const QWidget*,QSize)\0"
    "QMargins\0contentsMargins(QLayout*)\0"
    "contentsRect(QLayout*)\0int\0count(QLayout*)\0"
    "Qt::Orientations\0expandingDirections(QLayout*)\0"
    "geometry(QLayout*)\0indexOf(QLayout*,QWidget*)\0"
    "invalidate(QLayout*)\0isEmpty(QLayout*)\0"
    "isEnabled(QLayout*)\0QLayoutItem*\0"
    "theWrappedObject,index\0itemAt(QLayout*,int)\0"
    "layout(QLayout*)\0maximumSize(QLayout*)\0"
    "QWidget*\0menuBar(QLayout*)\0"
    "minimumSize(QLayout*)\0parentWidget(QLayout*)\0"
    "removeItem(QLayout*,PythonQtPassOwnershipToPython<QLayoutItem*>)\0"
    "removeWidget(QLayout*,PythonQtPassOwnershipToPython<QWidget*>)\0"
    "theWrappedObject,alignment\0"
    "setAlignment(QLayout*,Qt::Alignment)\0"
    "theWrappedObject,l,alignment\0"
    "setAlignment(QLayout*,QLayout*,Qt::Alignment)\0"
    "theWrappedObject,w,alignment\0"
    "setAlignment(QLayout*,QWidget*,Qt::Alignment)\0"
    "theWrappedObject,margins\0"
    "setContentsMargins(QLayout*,QMargins)\0"
    "theWrappedObject,left,top,right,bottom\0"
    "setContentsMargins(QLayout*,int,int,int,int)\0"
    "setEnabled(QLayout*,bool)\0"
    "setGeometry(QLayout*,QRect)\0"
    "setMargin(QLayout*,int)\0"
    "setMenuBar(QLayout*,QWidget*)\0"
    "setSizeConstraint(QLayout*,QLayout::SizeConstraint)\0"
    "setSpacing(QLayout*,int)\0"
    "QLayout::SizeConstraint\0"
    "sizeConstraint(QLayout*)\0spacing(QLayout*)\0"
    "PythonQtPassOwnershipToPython<QLayoutItem*>\0"
    "takeAt(QLayout*,int)\0"
    "totalHeightForWidth(QLayout*,int)\0"
    "totalMaximumSize(QLayout*)\0"
    "totalMinimumSize(QLayout*)\0"
    "totalSizeHint(QLayout*)\0update(QLayout*)\0"
    "widgetEvent(QLayout*,QEvent*)\0"
};

void PythonQtWrapper_QLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QLayout *_t = static_cast<PythonQtWrapper_QLayout *>(_o);
        switch (_id) {
        case 0: { QLayout* _r = _t->new_QLayout();
            if (_a[0]) *reinterpret_cast< QLayout**>(_a[0]) = _r; }  break;
        case 1: { QLayout* _r = _t->new_QLayout((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLayout**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QLayout((*reinterpret_cast< QLayout*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->activate((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->addChildLayout((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QLayout*>(*)>(_a[2]))); break;
        case 5: _t->addChildWidget((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[2]))); break;
        case 6: _t->addItem((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QLayoutItem*>(*)>(_a[2]))); break;
        case 7: _t->addWidget((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[2]))); break;
        case 8: { bool _r = _t->adoptLayout((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< QLayout*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QRect _r = _t->alignmentRect((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 10: _t->childEvent((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< QChildEvent*(*)>(_a[2]))); break;
        case 11: { QSize _r = _t->static_QLayout_closestAcceptableSize((*reinterpret_cast< const QWidget*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 12: { QMargins _r = _t->contentsMargins((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMargins*>(_a[0]) = _r; }  break;
        case 13: { QRect _r = _t->contentsRect((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->count((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { Qt::Orientations _r = _t->expandingDirections((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientations*>(_a[0]) = _r; }  break;
        case 16: { QRect _r = _t->geometry((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->indexOf((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: _t->invalidate((*reinterpret_cast< QLayout*(*)>(_a[1]))); break;
        case 19: { bool _r = _t->isEmpty((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->isEnabled((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { QLayoutItem* _r = _t->itemAt((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLayoutItem**>(_a[0]) = _r; }  break;
        case 22: { QLayout* _r = _t->layout((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLayout**>(_a[0]) = _r; }  break;
        case 23: { QSize _r = _t->maximumSize((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 24: { QWidget* _r = _t->menuBar((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 25: { QSize _r = _t->minimumSize((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 26: { QWidget* _r = _t->parentWidget((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 27: _t->removeItem((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToPython<QLayoutItem*>(*)>(_a[2]))); break;
        case 28: _t->removeWidget((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToPython<QWidget*>(*)>(_a[2]))); break;
        case 29: _t->setAlignment((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 30: { bool _r = _t->setAlignment((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< QLayout*(*)>(_a[2])),(*reinterpret_cast< Qt::Alignment(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->setAlignment((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< Qt::Alignment(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: _t->setContentsMargins((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< const QMargins(*)>(_a[2]))); break;
        case 33: _t->setContentsMargins((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 34: _t->setEnabled((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: _t->setGeometry((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 36: _t->setMargin((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 37: _t->setMenuBar((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 38: _t->setSizeConstraint((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< QLayout::SizeConstraint(*)>(_a[2]))); break;
        case 39: _t->setSpacing((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 40: { QLayout::SizeConstraint _r = _t->sizeConstraint((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLayout::SizeConstraint*>(_a[0]) = _r; }  break;
        case 41: { int _r = _t->spacing((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 42: { PythonQtPassOwnershipToPython<QLayoutItem*> _r = _t->takeAt((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< PythonQtPassOwnershipToPython<QLayoutItem*>*>(_a[0]) = _r; }  break;
        case 43: { int _r = _t->totalHeightForWidth((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 44: { QSize _r = _t->totalMaximumSize((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 45: { QSize _r = _t->totalMinimumSize((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 46: { QSize _r = _t->totalSizeHint((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 47: _t->update((*reinterpret_cast< QLayout*(*)>(_a[1]))); break;
        case 48: _t->widgetEvent((*reinterpret_cast< QLayout*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QLayout,
      qt_meta_data_PythonQtWrapper_QLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QLayout))
        return static_cast<void*>(const_cast< PythonQtWrapper_QLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QLayoutItem[] = {

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
      52,   42,   29,   28, 0x0a,
      83,   28,   29,   28, 0x2a,
     105,  101,   28,   28, 0x0a,
     169,  152,  138,   28, 0x0a,
     219,  152,  193,   28, 0x0a,
     263,  152,  246,   28, 0x0a,
     303,  152,  297,   28, 0x0a,
     331,  152,  326,   28, 0x0a,
     391,  367,  363,   28, 0x0a,
     424,  152,   28,   28, 0x0a,
     449,  152,  326,   28, 0x0a,
     480,  152,  471,   28, 0x0a,
     507,  152,  501,   28, 0x0a,
     533,  367,  363,   28, 0x0a,
     573,  152,  501,   28, 0x0a,
     618,  599,   28,   28, 0x0a,
     659,  367,   28,   28, 0x0a,
     691,  152,  501,   28, 0x0a,
     727,  152,  714,   28, 0x0a,
     761,  152,  752,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QLayoutItem[] = {
    "PythonQtWrapper_QLayoutItem\0\0QLayoutItem*\0"
    "alignment\0new_QLayoutItem(Qt::Alignment)\0"
    "new_QLayoutItem()\0obj\0"
    "delete_QLayoutItem(QLayoutItem*)\0"
    "Qt::Alignment\0theWrappedObject\0"
    "alignment(QLayoutItem*)\0"
    "QSizePolicy::ControlTypes\0"
    "controlTypes(QLayoutItem*)\0Qt::Orientations\0"
    "expandingDirections(QLayoutItem*)\0"
    "QRect\0geometry(QLayoutItem*)\0bool\0"
    "hasHeightForWidth(QLayoutItem*)\0int\0"
    "theWrappedObject,arg__1\0"
    "heightForWidth(QLayoutItem*,int)\0"
    "invalidate(QLayoutItem*)\0isEmpty(QLayoutItem*)\0"
    "QLayout*\0layout(QLayoutItem*)\0QSize\0"
    "maximumSize(QLayoutItem*)\0"
    "minimumHeightForWidth(QLayoutItem*,int)\0"
    "minimumSize(QLayoutItem*)\0theWrappedObject,a\0"
    "setAlignment(QLayoutItem*,Qt::Alignment)\0"
    "setGeometry(QLayoutItem*,QRect)\0"
    "sizeHint(QLayoutItem*)\0QSpacerItem*\0"
    "spacerItem(QLayoutItem*)\0QWidget*\0"
    "widget(QLayoutItem*)\0"
};

void PythonQtWrapper_QLayoutItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QLayoutItem *_t = static_cast<PythonQtWrapper_QLayoutItem *>(_o);
        switch (_id) {
        case 0: { QLayoutItem* _r = _t->new_QLayoutItem((*reinterpret_cast< Qt::Alignment(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLayoutItem**>(_a[0]) = _r; }  break;
        case 1: { QLayoutItem* _r = _t->new_QLayoutItem();
            if (_a[0]) *reinterpret_cast< QLayoutItem**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QLayoutItem((*reinterpret_cast< QLayoutItem*(*)>(_a[1]))); break;
        case 3: { Qt::Alignment _r = _t->alignment((*reinterpret_cast< QLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 4: { QSizePolicy::ControlTypes _r = _t->controlTypes((*reinterpret_cast< QLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizePolicy::ControlTypes*>(_a[0]) = _r; }  break;
        case 5: { Qt::Orientations _r = _t->expandingDirections((*reinterpret_cast< QLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientations*>(_a[0]) = _r; }  break;
        case 6: { QRect _r = _t->geometry((*reinterpret_cast< QLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->hasHeightForWidth((*reinterpret_cast< QLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->heightForWidth((*reinterpret_cast< QLayoutItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: _t->invalidate((*reinterpret_cast< QLayoutItem*(*)>(_a[1]))); break;
        case 10: { bool _r = _t->isEmpty((*reinterpret_cast< QLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QLayout* _r = _t->layout((*reinterpret_cast< QLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLayout**>(_a[0]) = _r; }  break;
        case 12: { QSize _r = _t->maximumSize((*reinterpret_cast< QLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->minimumHeightForWidth((*reinterpret_cast< QLayoutItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { QSize _r = _t->minimumSize((*reinterpret_cast< QLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 15: _t->setAlignment((*reinterpret_cast< QLayoutItem*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 16: _t->setGeometry((*reinterpret_cast< QLayoutItem*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 17: { QSize _r = _t->sizeHint((*reinterpret_cast< QLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 18: { QSpacerItem* _r = _t->spacerItem((*reinterpret_cast< QLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSpacerItem**>(_a[0]) = _r; }  break;
        case 19: { QWidget* _r = _t->widget((*reinterpret_cast< QLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QLayoutItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QLayoutItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QLayoutItem,
      qt_meta_data_PythonQtWrapper_QLayoutItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QLayoutItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QLayoutItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QLayoutItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QLayoutItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QLayoutItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QLayoutItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QLineEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      79,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   38,   27,   26, 0x0a,
      69,   26,   27,   26, 0x2a,
      99,   85,   27,   26, 0x0a,
     138,  131,   27,   26, 0x2a,
     165,  161,   26,   26, 0x0a,
     225,  208,  194,   26, 0x0a,
     247,  208,   26,   26, 0x0a,
     293,  269,   26,   26, 0x0a,
     337,  208,  325,   26, 0x0a,
     359,  269,   26,   26, 0x0a,
     414,  208,  407,   26, 0x0a,
     480,  452,   26,   26, 0x0a,
     538,  516,   26,   26, 0x2a,
     570,  452,   26,   26, 0x0a,
     605,  516,   26,   26, 0x2a,
     656,  208,  636,   26, 0x0a,
     688,  208,  684,   26, 0x0a,
     736,  715,  684,   26, 0x0a,
     778,  208,  772,   26, 0x0a,
     801,  516,   26,   26, 0x0a,
     837,  516,   26,   26, 0x0a,
     872,  208,   26,   26, 0x0a,
     888,  208,   26,   26, 0x0a,
     917,  208,  909,   26, 0x0a,
     946,  208,  941,   26, 0x0a,
     970,  269,   26,   26, 0x0a,
    1033, 1014,   26,   26, 0x0a,
    1077, 1014,   26,   26, 0x0a,
    1119,  269,   26,   26, 0x0a,
    1173,  208, 1153,   26, 0x0a,
    1194,  516,   26,   26, 0x0a,
    1215,  269,  941,   26, 0x0a,
    1241,  269,   26,   26, 0x0a,
    1279,  269,   26,   26, 0x0a,
    1357, 1318,   26,   26, 0x0a,
    1404,  208,  941,   26, 0x0a,
    1435,  208,  941,   26, 0x0a,
    1456,  208,  941,   26, 0x0a,
    1484,  516,   26,   26, 0x0a,
    1530, 1506,   26,   26, 0x0a,
    1577,  208,  909,   26, 0x0a,
    1599,  269,   26,   26, 0x0a,
    1656,  269, 1647,   26, 0x0a,
    1706,  269,   26,   26, 0x0a,
    1733,  208,  941,   26, 0x0a,
    1756,  208,  941,   26, 0x0a,
    1779,  208,  941,   26, 0x0a,
    1807,  208,  941,   26, 0x0a,
    1835,  269,   26,   26, 0x0a,
    1872,  208,  684,   26, 0x0a,
    1900,  208, 1894,   26, 0x0a,
    1928,  269,   26,   26, 0x0a,
    1975,  269,   26,   26, 0x0a,
    2015,  269,   26,   26, 0x0a,
    2056,  269,   26,   26, 0x0a,
    2099,  269,   26,   26, 0x0a,
    2135,  208,  909,   26, 0x0a,
    2163,  208,  909,   26, 0x0a,
    2188,  208,  684,   26, 0x0a,
    2237, 2215,   26,   26, 0x0a,
    2303, 2276,   26,   26, 0x0a,
    2363, 2340,   26,   26, 0x0a,
    2414,  269,   26,   26, 0x0a,
    2467, 2448,   26,   26, 0x0a,
    2499,  269,   26,   26, 0x0a,
    2543,  269,   26,   26, 0x0a,
    2596, 2569,   26,   26, 0x0a,
    2629,  269,   26,   26, 0x0a,
    2658,  269,   26,   26, 0x0a,
    2687,  269,   26,   26, 0x0a,
    2726,  269,   26,   26, 0x0a,
    2786, 2755,   26,   26, 0x0a,
    2844, 2819,   26,   26, 0x0a,
    2880, 1318,   26,   26, 0x0a,
    2923,  269,   26,   26, 0x0a,
    2966,  208, 1894,   26, 0x0a,
    2987,  208,  909,   26, 0x0a,
    3013,  208, 3004,   26, 0x0a,
    3055,  208, 3037,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QLineEdit[] = {
    "PythonQtWrapper_QLineEdit\0\0QLineEdit*\0"
    "parent\0new_QLineEdit(QWidget*)\0"
    "new_QLineEdit()\0arg__1,parent\0"
    "new_QLineEdit(QString,QWidget*)\0arg__1\0"
    "new_QLineEdit(QString)\0obj\0"
    "delete_QLineEdit(QLineEdit*)\0Qt::Alignment\0"
    "theWrappedObject\0alignment(QLineEdit*)\0"
    "backspace(QLineEdit*)\0theWrappedObject,arg__1\0"
    "changeEvent(QLineEdit*,QEvent*)\0"
    "QCompleter*\0completer(QLineEdit*)\0"
    "contextMenuEvent(QLineEdit*,QContextMenuEvent*)\0"
    "QMenu*\0createStandardContextMenu(QLineEdit*)\0"
    "theWrappedObject,mark,steps\0"
    "cursorBackward(QLineEdit*,bool,int)\0"
    "theWrappedObject,mark\0"
    "cursorBackward(QLineEdit*,bool)\0"
    "cursorForward(QLineEdit*,bool,int)\0"
    "cursorForward(QLineEdit*,bool)\0"
    "Qt::CursorMoveStyle\0cursorMoveStyle(QLineEdit*)\0"
    "int\0cursorPosition(QLineEdit*)\0"
    "theWrappedObject,pos\0"
    "cursorPositionAt(QLineEdit*,QPoint)\0"
    "QRect\0cursorRect(QLineEdit*)\0"
    "cursorWordBackward(QLineEdit*,bool)\0"
    "cursorWordForward(QLineEdit*,bool)\0"
    "del(QLineEdit*)\0deselect(QLineEdit*)\0"
    "QString\0displayText(QLineEdit*)\0bool\0"
    "dragEnabled(QLineEdit*)\0"
    "dragEnterEvent(QLineEdit*,QDragEnterEvent*)\0"
    "theWrappedObject,e\0"
    "dragLeaveEvent(QLineEdit*,QDragLeaveEvent*)\0"
    "dragMoveEvent(QLineEdit*,QDragMoveEvent*)\0"
    "dropEvent(QLineEdit*,QDropEvent*)\0"
    "QLineEdit::EchoMode\0echoMode(QLineEdit*)\0"
    "end(QLineEdit*,bool)\0event(QLineEdit*,QEvent*)\0"
    "focusInEvent(QLineEdit*,QFocusEvent*)\0"
    "focusOutEvent(QLineEdit*,QFocusEvent*)\0"
    "theWrappedObject,left,top,right,bottom\0"
    "getTextMargins(QLineEdit*,int*,int*,int*,int*)\0"
    "hasAcceptableInput(QLineEdit*)\0"
    "hasFrame(QLineEdit*)\0hasSelectedText(QLineEdit*)\0"
    "home(QLineEdit*,bool)\0theWrappedObject,option\0"
    "initStyleOption(QLineEdit*,QStyleOptionFrame*)\0"
    "inputMask(QLineEdit*)\0"
    "inputMethodEvent(QLineEdit*,QInputMethodEvent*)\0"
    "QVariant\0inputMethodQuery(QLineEdit*,Qt::InputMethodQuery)\0"
    "insert(QLineEdit*,QString)\0"
    "isModified(QLineEdit*)\0isReadOnly(QLineEdit*)\0"
    "isRedoAvailable(QLineEdit*)\0"
    "isUndoAvailable(QLineEdit*)\0"
    "keyPressEvent(QLineEdit*,QKeyEvent*)\0"
    "maxLength(QLineEdit*)\0QSize\0"
    "minimumSizeHint(QLineEdit*)\0"
    "mouseDoubleClickEvent(QLineEdit*,QMouseEvent*)\0"
    "mouseMoveEvent(QLineEdit*,QMouseEvent*)\0"
    "mousePressEvent(QLineEdit*,QMouseEvent*)\0"
    "mouseReleaseEvent(QLineEdit*,QMouseEvent*)\0"
    "paintEvent(QLineEdit*,QPaintEvent*)\0"
    "placeholderText(QLineEdit*)\0"
    "selectedText(QLineEdit*)\0"
    "selectionStart(QLineEdit*)\0"
    "theWrappedObject,flag\0"
    "setAlignment(QLineEdit*,Qt::Alignment)\0"
    "theWrappedObject,completer\0"
    "setCompleter(QLineEdit*,QCompleter*)\0"
    "theWrappedObject,style\0"
    "setCursorMoveStyle(QLineEdit*,Qt::CursorMoveStyle)\0"
    "setCursorPosition(QLineEdit*,int)\0"
    "theWrappedObject,b\0setDragEnabled(QLineEdit*,bool)\0"
    "setEchoMode(QLineEdit*,QLineEdit::EchoMode)\0"
    "setFrame(QLineEdit*,bool)\0"
    "theWrappedObject,inputMask\0"
    "setInputMask(QLineEdit*,QString)\0"
    "setMaxLength(QLineEdit*,int)\0"
    "setModified(QLineEdit*,bool)\0"
    "setPlaceholderText(QLineEdit*,QString)\0"
    "setReadOnly(QLineEdit*,bool)\0"
    "theWrappedObject,arg__1,arg__2\0"
    "setSelection(QLineEdit*,int,int)\0"
    "theWrappedObject,margins\0"
    "setTextMargins(QLineEdit*,QMargins)\0"
    "setTextMargins(QLineEdit*,int,int,int,int)\0"
    "setValidator(QLineEdit*,const QValidator*)\0"
    "sizeHint(QLineEdit*)\0text(QLineEdit*)\0"
    "QMargins\0textMargins(QLineEdit*)\0"
    "const QValidator*\0validator(QLineEdit*)\0"
};

void PythonQtWrapper_QLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QLineEdit *_t = static_cast<PythonQtWrapper_QLineEdit *>(_o);
        switch (_id) {
        case 0: { QLineEdit* _r = _t->new_QLineEdit((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLineEdit**>(_a[0]) = _r; }  break;
        case 1: { QLineEdit* _r = _t->new_QLineEdit();
            if (_a[0]) *reinterpret_cast< QLineEdit**>(_a[0]) = _r; }  break;
        case 2: { QLineEdit* _r = _t->new_QLineEdit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLineEdit**>(_a[0]) = _r; }  break;
        case 3: { QLineEdit* _r = _t->new_QLineEdit((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLineEdit**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QLineEdit((*reinterpret_cast< QLineEdit*(*)>(_a[1]))); break;
        case 5: { Qt::Alignment _r = _t->alignment((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 6: _t->backspace((*reinterpret_cast< QLineEdit*(*)>(_a[1]))); break;
        case 7: _t->changeEvent((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 8: { QCompleter* _r = _t->completer((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QCompleter**>(_a[0]) = _r; }  break;
        case 9: _t->contextMenuEvent((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QContextMenuEvent*(*)>(_a[2]))); break;
        case 10: { QMenu* _r = _t->createStandardContextMenu((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = _r; }  break;
        case 11: _t->cursorBackward((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->cursorBackward((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->cursorForward((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->cursorForward((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: { Qt::CursorMoveStyle _r = _t->cursorMoveStyle((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::CursorMoveStyle*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->cursorPosition((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->cursorPositionAt((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { QRect _r = _t->cursorRect((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 19: _t->cursorWordBackward((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->cursorWordForward((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->del((*reinterpret_cast< QLineEdit*(*)>(_a[1]))); break;
        case 22: _t->deselect((*reinterpret_cast< QLineEdit*(*)>(_a[1]))); break;
        case 23: { QString _r = _t->displayText((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->dragEnabled((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: _t->dragEnterEvent((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QDragEnterEvent*(*)>(_a[2]))); break;
        case 26: _t->dragLeaveEvent((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QDragLeaveEvent*(*)>(_a[2]))); break;
        case 27: _t->dragMoveEvent((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QDragMoveEvent*(*)>(_a[2]))); break;
        case 28: _t->dropEvent((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2]))); break;
        case 29: { QLineEdit::EchoMode _r = _t->echoMode((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLineEdit::EchoMode*>(_a[0]) = _r; }  break;
        case 30: _t->end((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: { bool _r = _t->event((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: _t->focusInEvent((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 33: _t->focusOutEvent((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 34: _t->getTextMargins((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5]))); break;
        case 35: { bool _r = _t->hasAcceptableInput((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->hasFrame((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->hasSelectedText((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: _t->home((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 39: _t->initStyleOption((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionFrame*(*)>(_a[2]))); break;
        case 40: { QString _r = _t->inputMask((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 41: _t->inputMethodEvent((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QInputMethodEvent*(*)>(_a[2]))); break;
        case 42: { QVariant _r = _t->inputMethodQuery((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< Qt::InputMethodQuery(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 43: _t->insert((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 44: { bool _r = _t->isModified((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->isReadOnly((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->isRedoAvailable((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: { bool _r = _t->isUndoAvailable((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: _t->keyPressEvent((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 49: { int _r = _t->maxLength((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 50: { QSize _r = _t->minimumSizeHint((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 51: _t->mouseDoubleClickEvent((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 52: _t->mouseMoveEvent((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 53: _t->mousePressEvent((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 54: _t->mouseReleaseEvent((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 55: _t->paintEvent((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 56: { QString _r = _t->placeholderText((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 57: { QString _r = _t->selectedText((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 58: { int _r = _t->selectionStart((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 59: _t->setAlignment((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 60: _t->setCompleter((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QCompleter*(*)>(_a[2]))); break;
        case 61: _t->setCursorMoveStyle((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< Qt::CursorMoveStyle(*)>(_a[2]))); break;
        case 62: _t->setCursorPosition((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 63: _t->setDragEnabled((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 64: _t->setEchoMode((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QLineEdit::EchoMode(*)>(_a[2]))); break;
        case 65: _t->setFrame((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 66: _t->setInputMask((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 67: _t->setMaxLength((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 68: _t->setModified((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 69: _t->setPlaceholderText((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 70: _t->setReadOnly((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 71: _t->setSelection((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 72: _t->setTextMargins((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< const QMargins(*)>(_a[2]))); break;
        case 73: _t->setTextMargins((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 74: _t->setValidator((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< const QValidator*(*)>(_a[2]))); break;
        case 75: { QSize _r = _t->sizeHint((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 76: { QString _r = _t->text((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 77: { QMargins _r = _t->textMargins((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMargins*>(_a[0]) = _r; }  break;
        case 78: { const QValidator* _r = _t->validator((*reinterpret_cast< QLineEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QValidator**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QLineEdit::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QLineEdit,
      qt_meta_data_PythonQtWrapper_QLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QLineEdit))
        return static_cast<void*>(const_cast< PythonQtWrapper_QLineEdit*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 79)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 79;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QLinearGradient[] = {

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
      50,   32,   33,   32, 0x0a,
      88,   72,   33,   32, 0x0a,
     161,  125,   33,   32, 0x0a,
     212,  206,   33,   32, 0x0a,
     253,  249,   32,   32, 0x0a,
     319,  302,  294,   32, 0x0a,
     369,  347,   32,   32, 0x0a,
     429,  408,   32,   32, 0x0a,
     495,  472,   32,   32, 0x0a,
     530,  408,   32,   32, 0x0a,
     569,  302,  294,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QLinearGradient[] = {
    "PythonQtWrapper_QLinearGradient\0\0"
    "QLinearGradient*\0new_QLinearGradient()\0"
    "start,finalStop\0new_QLinearGradient(QPointF,QPointF)\0"
    "xStart,yStart,xFinalStop,yFinalStop\0"
    "new_QLinearGradient(qreal,qreal,qreal,qreal)\0"
    "other\0new_QLinearGradient(QLinearGradient)\0"
    "obj\0delete_QLinearGradient(QLinearGradient*)\0"
    "QPointF\0theWrappedObject\0"
    "finalStop(QLinearGradient*)\0"
    "theWrappedObject,stop\0"
    "setFinalStop(QLinearGradient*,QPointF)\0"
    "theWrappedObject,x,y\0"
    "setFinalStop(QLinearGradient*,qreal,qreal)\0"
    "theWrappedObject,start\0"
    "setStart(QLinearGradient*,QPointF)\0"
    "setStart(QLinearGradient*,qreal,qreal)\0"
    "start(QLinearGradient*)\0"
};

void PythonQtWrapper_QLinearGradient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QLinearGradient *_t = static_cast<PythonQtWrapper_QLinearGradient *>(_o);
        switch (_id) {
        case 0: { QLinearGradient* _r = _t->new_QLinearGradient();
            if (_a[0]) *reinterpret_cast< QLinearGradient**>(_a[0]) = _r; }  break;
        case 1: { QLinearGradient* _r = _t->new_QLinearGradient((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLinearGradient**>(_a[0]) = _r; }  break;
        case 2: { QLinearGradient* _r = _t->new_QLinearGradient((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QLinearGradient**>(_a[0]) = _r; }  break;
        case 3: { QLinearGradient* _r = _t->new_QLinearGradient((*reinterpret_cast< const QLinearGradient(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLinearGradient**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QLinearGradient((*reinterpret_cast< QLinearGradient*(*)>(_a[1]))); break;
        case 5: { QPointF _r = _t->finalStop((*reinterpret_cast< QLinearGradient*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 6: _t->setFinalStop((*reinterpret_cast< QLinearGradient*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 7: _t->setFinalStop((*reinterpret_cast< QLinearGradient*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 8: _t->setStart((*reinterpret_cast< QLinearGradient*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 9: _t->setStart((*reinterpret_cast< QLinearGradient*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 10: { QPointF _r = _t->start((*reinterpret_cast< QLinearGradient*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QLinearGradient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QLinearGradient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QLinearGradient,
      qt_meta_data_PythonQtWrapper_QLinearGradient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QLinearGradient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QLinearGradient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QLinearGradient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QLinearGradient))
        return static_cast<void*>(const_cast< PythonQtWrapper_QLinearGradient*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QLinearGradient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QListView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      70,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   38,   27,   26, 0x0a,
      69,   26,   27,   26, 0x2a,
      89,   85,   26,   26, 0x0a,
     139,  122,  118,   26, 0x0a,
     161,  122,   26,   26, 0x0a,
     198,  122,  192,   26, 0x0a,
     257,  223,   26,   26, 0x0a,
     345,  308,   26,   26, 0x0a,
     393,  122,   26,   26, 0x0a,
     438,  419,   26,   26, 0x0a,
     482,  419,   26,   26, 0x0a,
     524,  419,   26,   26, 0x0a,
     563,  419,  558,   26, 0x0a,
     605,  122,  589,   26, 0x0a,
     622,  122,  192,   26, 0x0a,
     643,  122,  118,   26, 0x0a,
     703,  684,  672,   26, 0x0a,
     764,  730,   26,   26, 0x0a,
     805,  419,   26,   26, 0x0a,
     865,  842,  558,   26, 0x0a,
     924,  903,  558,   26, 0x0a,
     952,  122,  558,   26, 0x0a,
     987,  122,  558,   26, 0x0a,
    1032,  122, 1010,   26, 0x0a,
    1055,  122,  118,   26, 0x0a,
    1079,  419,   26,   26, 0x0a,
    1119,  419,   26,   26, 0x0a,
    1202, 1162,  672,   26, 0x0a,
    1271,  122, 1251,   26, 0x0a,
    1292,  419,   26,   26, 0x0a,
    1334,  842, 1328,   26, 0x0a,
    1371,  122,   26,   26, 0x0a,
    1419, 1389,   26,   26, 0x0a,
    1454,  419,   26,   26, 0x0a,
    1514,  122, 1492,   26, 0x0a,
    1571, 1537,   26,   26, 0x0a,
    1624, 1537,   26,   26, 0x0a,
    1692, 1669,   26,   26, 0x0a,
    1757, 1729,   26,   26, 0x0a,
    1820,  842,   26,   26, 0x2a,
    1872,  122, 1853,   26, 0x0a,
    1937, 1900,   26,   26, 0x0a,
    2023, 1996,   26,   26, 0x0a,
    2074, 2052,   26,   26, 0x0a,
    2132, 2110,   26,   26, 0x0a,
    2184, 2162,   26,   26, 0x0a,
    2256, 2232,   26,   26, 0x0a,
    2313, 2287,   26,   26, 0x0a,
    2389, 2357,   26,   26, 0x0a,
    2440, 2162,   26,   26, 0x0a,
    2488,  842,   26,   26, 0x0a,
    2551, 2525,   26,   26, 0x0a,
    2615, 2585,   26,   26, 0x0a,
    2704, 2682,   26,   26, 0x0a,
    2768, 2745,   26,   26, 0x0a,
    2819, 2795,   26,   26, 0x0a,
    2856, 2162,   26,   26, 0x0a,
    2920, 2900,   26,   26, 0x0a,
    2949, 2795,   26,   26, 0x0a,
    2978,  122,  118,   26, 0x0a,
    2998,  730,   26,   26, 0x0a,
    3036,  419,   26,   26, 0x0a,
    3072,  122,  558,   26, 0x0a,
    3101,  122,   26,   26, 0x0a,
    3130,  122,  118,   26, 0x0a,
    3177,  122, 3157,   26, 0x0a,
    3219,  122, 3198,   26, 0x0a,
    3243,  842, 1328,   26, 0x0a,
    3313, 3286, 3278,   26, 0x0a,
    3365,  122,  558,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QListView[] = {
    "PythonQtWrapper_QListView\0\0QListView*\0"
    "parent\0new_QListView(QWidget*)\0"
    "new_QListView()\0obj\0delete_QListView(QListView*)\0"
    "int\0theWrappedObject\0batchSize(QListView*)\0"
    "clearPropertyFlags(QListView*)\0QSize\0"
    "contentsSize(QListView*)\0"
    "theWrappedObject,current,previous\0"
    "currentChanged(QListView*,QModelIndex,QModelIndex)\0"
    "theWrappedObject,topLeft,bottomRight\0"
    "dataChanged(QListView*,QModelIndex,QModelIndex)\0"
    "doItemsLayout(QListView*)\0theWrappedObject,e\0"
    "dragLeaveEvent(QListView*,QDragLeaveEvent*)\0"
    "dragMoveEvent(QListView*,QDragMoveEvent*)\0"
    "dropEvent(QListView*,QDropEvent*)\0"
    "bool\0event(QListView*,QEvent*)\0"
    "QListView::Flow\0flow(QListView*)\0"
    "gridSize(QListView*)\0horizontalOffset(QListView*)\0"
    "QModelIndex\0theWrappedObject,p\0"
    "indexAt(QListView*,QPoint)\0"
    "theWrappedObject,supportedActions\0"
    "internalDrag(QListView*,Qt::DropActions)\0"
    "internalDrop(QListView*,QDropEvent*)\0"
    "theWrappedObject,index\0"
    "isIndexHidden(QListView*,QModelIndex)\0"
    "theWrappedObject,row\0isRowHidden(QListView*,int)\0"
    "isSelectionRectVisible(QListView*)\0"
    "isWrapping(QListView*)\0QListView::LayoutMode\0"
    "layoutMode(QListView*)\0modelColumn(QListView*)\0"
    "mouseMoveEvent(QListView*,QMouseEvent*)\0"
    "mouseReleaseEvent(QListView*,QMouseEvent*)\0"
    "theWrappedObject,cursorAction,modifiers\0"
    "moveCursor(QListView*,int,Qt::KeyboardModifiers)\0"
    "QListView::Movement\0movement(QListView*)\0"
    "paintEvent(QListView*,QPaintEvent*)\0"
    "QRect\0rectForIndex(QListView*,QModelIndex)\0"
    "reset(QListView*)\0theWrappedObject,width,height\0"
    "resizeContents(QListView*,int,int)\0"
    "resizeEvent(QListView*,QResizeEvent*)\0"
    "QListView::ResizeMode\0resizeMode(QListView*)\0"
    "theWrappedObject,parent,start,end\0"
    "rowsAboutToBeRemoved(QListView*,QModelIndex,int,int)\0"
    "rowsInserted(QListView*,QModelIndex,int,int)\0"
    "theWrappedObject,dx,dy\0"
    "scrollContentsBy(QListView*,int,int)\0"
    "theWrappedObject,index,hint\0"
    "scrollTo(QListView*,QModelIndex,QAbstractItemView::ScrollHint)\0"
    "scrollTo(QListView*,QModelIndex)\0"
    "QList<QModelIndex>\0selectedIndexes(QListView*)\0"
    "theWrappedObject,selected,deselected\0"
    "selectionChanged(QListView*,QItemSelection,QItemSelection)\0"
    "theWrappedObject,batchSize\0"
    "setBatchSize(QListView*,int)\0"
    "theWrappedObject,flow\0"
    "setFlow(QListView*,QListView::Flow)\0"
    "theWrappedObject,size\0"
    "setGridSize(QListView*,QSize)\0"
    "theWrappedObject,mode\0"
    "setLayoutMode(QListView*,QListView::LayoutMode)\0"
    "theWrappedObject,column\0"
    "setModelColumn(QListView*,int)\0"
    "theWrappedObject,movement\0"
    "setMovement(QListView*,QListView::Movement)\0"
    "theWrappedObject,position,index\0"
    "setPositionForIndex(QListView*,QPoint,QModelIndex)\0"
    "setResizeMode(QListView*,QListView::ResizeMode)\0"
    "setRootIndex(QListView*,QModelIndex)\0"
    "theWrappedObject,row,hide\0"
    "setRowHidden(QListView*,int,bool)\0"
    "theWrappedObject,rect,command\0"
    "setSelection(QListView*,QRect,QItemSelectionModel::SelectionFlags)\0"
    "theWrappedObject,show\0"
    "setSelectionRectVisible(QListView*,bool)\0"
    "theWrappedObject,space\0"
    "setSpacing(QListView*,int)\0"
    "theWrappedObject,enable\0"
    "setUniformItemSizes(QListView*,bool)\0"
    "setViewMode(QListView*,QListView::ViewMode)\0"
    "theWrappedObject,on\0setWordWrap(QListView*,bool)\0"
    "setWrapping(QListView*,bool)\0"
    "spacing(QListView*)\0"
    "startDrag(QListView*,Qt::DropActions)\0"
    "timerEvent(QListView*,QTimerEvent*)\0"
    "uniformItemSizes(QListView*)\0"
    "updateGeometries(QListView*)\0"
    "verticalOffset(QListView*)\0"
    "QListView::ViewMode\0viewMode(QListView*)\0"
    "QStyleOptionViewItem\0viewOptions(QListView*)\0"
    "visualRect(QListView*,QModelIndex)\0"
    "QRegion\0theWrappedObject,selection\0"
    "visualRegionForSelection(QListView*,QItemSelection)\0"
    "wordWrap(QListView*)\0"
};

void PythonQtWrapper_QListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QListView *_t = static_cast<PythonQtWrapper_QListView *>(_o);
        switch (_id) {
        case 0: { QListView* _r = _t->new_QListView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QListView**>(_a[0]) = _r; }  break;
        case 1: { QListView* _r = _t->new_QListView();
            if (_a[0]) *reinterpret_cast< QListView**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QListView((*reinterpret_cast< QListView*(*)>(_a[1]))); break;
        case 3: { int _r = _t->batchSize((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: _t->clearPropertyFlags((*reinterpret_cast< QListView*(*)>(_a[1]))); break;
        case 5: { QSize _r = _t->contentsSize((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 6: _t->currentChanged((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3]))); break;
        case 7: _t->dataChanged((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3]))); break;
        case 8: _t->doItemsLayout((*reinterpret_cast< QListView*(*)>(_a[1]))); break;
        case 9: _t->dragLeaveEvent((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< QDragLeaveEvent*(*)>(_a[2]))); break;
        case 10: _t->dragMoveEvent((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< QDragMoveEvent*(*)>(_a[2]))); break;
        case 11: _t->dropEvent((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2]))); break;
        case 12: { bool _r = _t->event((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QListView::Flow _r = _t->flow((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QListView::Flow*>(_a[0]) = _r; }  break;
        case 14: { QSize _r = _t->gridSize((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->horizontalOffset((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { QModelIndex _r = _t->indexAt((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 17: _t->internalDrag((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< Qt::DropActions(*)>(_a[2]))); break;
        case 18: _t->internalDrop((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2]))); break;
        case 19: { bool _r = _t->isIndexHidden((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->isRowHidden((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isSelectionRectVisible((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->isWrapping((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { QListView::LayoutMode _r = _t->layoutMode((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QListView::LayoutMode*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->modelColumn((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: _t->mouseMoveEvent((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 26: _t->mouseReleaseEvent((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 27: { QModelIndex _r = _t->moveCursor((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 28: { QListView::Movement _r = _t->movement((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QListView::Movement*>(_a[0]) = _r; }  break;
        case 29: _t->paintEvent((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 30: { QRect _r = _t->rectForIndex((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 31: _t->reset((*reinterpret_cast< QListView*(*)>(_a[1]))); break;
        case 32: _t->resizeContents((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 33: _t->resizeEvent((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 34: { QListView::ResizeMode _r = _t->resizeMode((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QListView::ResizeMode*>(_a[0]) = _r; }  break;
        case 35: _t->rowsAboutToBeRemoved((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 36: _t->rowsInserted((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 37: _t->scrollContentsBy((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 38: _t->scrollTo((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< QAbstractItemView::ScrollHint(*)>(_a[3]))); break;
        case 39: _t->scrollTo((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 40: { QList<QModelIndex> _r = _t->selectedIndexes((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 41: _t->selectionChanged((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2])),(*reinterpret_cast< const QItemSelection(*)>(_a[3]))); break;
        case 42: _t->setBatchSize((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 43: _t->setFlow((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< QListView::Flow(*)>(_a[2]))); break;
        case 44: _t->setGridSize((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 45: _t->setLayoutMode((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< QListView::LayoutMode(*)>(_a[2]))); break;
        case 46: _t->setModelColumn((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 47: _t->setMovement((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< QListView::Movement(*)>(_a[2]))); break;
        case 48: _t->setPositionForIndex((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3]))); break;
        case 49: _t->setResizeMode((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< QListView::ResizeMode(*)>(_a[2]))); break;
        case 50: _t->setRootIndex((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 51: _t->setRowHidden((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 52: _t->setSelection((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[3]))); break;
        case 53: _t->setSelectionRectVisible((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 54: _t->setSpacing((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 55: _t->setUniformItemSizes((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 56: _t->setViewMode((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< QListView::ViewMode(*)>(_a[2]))); break;
        case 57: _t->setWordWrap((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 58: _t->setWrapping((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 59: { int _r = _t->spacing((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 60: _t->startDrag((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< Qt::DropActions(*)>(_a[2]))); break;
        case 61: _t->timerEvent((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< QTimerEvent*(*)>(_a[2]))); break;
        case 62: { bool _r = _t->uniformItemSizes((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 63: _t->updateGeometries((*reinterpret_cast< QListView*(*)>(_a[1]))); break;
        case 64: { int _r = _t->verticalOffset((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 65: { QListView::ViewMode _r = _t->viewMode((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QListView::ViewMode*>(_a[0]) = _r; }  break;
        case 66: { QStyleOptionViewItem _r = _t->viewOptions((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStyleOptionViewItem*>(_a[0]) = _r; }  break;
        case 67: { QRect _r = _t->visualRect((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 68: { QRegion _r = _t->visualRegionForSelection((*reinterpret_cast< QListView*(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 69: { bool _r = _t->wordWrap((*reinterpret_cast< QListView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QListView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QListView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QListView,
      qt_meta_data_PythonQtWrapper_QListView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QListView))
        return static_cast<void*>(const_cast< PythonQtWrapper_QListView*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 70)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QListWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   42,   29,   28, 0x0a,
      75,   28,   29,   28, 0x2a,
      97,   93,   28,   28, 0x0a,
     152,  130,   28,   28, 0x0a,
     242,  219,   28,   28, 0x0a,
     296,  272,   28,   28, 0x0a,
     331,  130,   28,   28, 0x0a,
     405,  388,  384,   28, 0x0a,
     442,  388,  425,   28, 0x0a,
     468,  388,  384,   28, 0x0a,
     516,  493,   28,   28, 0x0a,
     592,  557,  552,   28, 0x0a,
     655,  130,   28,   28, 0x0a,
     714,  695,  552,   28, 0x0a,
     794,  766,  742,   28, 0x0a,
     853,  130,  841,   28, 0x0a,
     924,  898,   28,   28, 0x0a,
    1025,  998,   28,   28, 0x0a,
    1090, 1062,   28,   28, 0x0a,
    1132,  388,  552,   28, 0x0a,
    1184, 1163,  425,   28, 0x0a,
    1226, 1207,  425,   28, 0x0a,
    1275, 1254,  425,   28, 0x0a,
    1327, 1304,  425,   28, 0x0a,
    1376,  130, 1367,   28, 0x0a,
    1440, 1418,  742,   28, 0x0a,
    1489,  388, 1477,   28, 0x0a,
    1513,  130,   28,   28, 0x0a,
    1565,  130,   28,   28, 0x0a,
    1613,  130,  384,   28, 0x0a,
    1654,  388,  742,   28, 0x0a,
    1682,  130,   28,   28, 0x0a,
    1758, 1728,   28,   28, 0x0a,
    1840, 1163,   28,   28, 0x0a,
    1901, 1872,   28,   28, 0x0a,
    1998, 1969,   28,   28, 0x0a,
    2104, 2080,   28,   28, 0x0a,
    2164, 2141,   28,   28, 0x0a,
    2202,  388,   28,   28, 0x2a,
    2242,  388, 2226,   28, 0x0a,
    2325, 1163, 2277,   28, 0x0a,
    2358,  130, 2352,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QListWidget[] = {
    "PythonQtWrapper_QListWidget\0\0QListWidget*\0"
    "parent\0new_QListWidget(QWidget*)\0"
    "new_QListWidget()\0obj\0"
    "delete_QListWidget(QListWidget*)\0"
    "theWrappedObject,item\0"
    "addItem(QListWidget*,PythonQtPassOwnershipToCPP<QListWidgetItem*>)\0"
    "theWrappedObject,label\0"
    "addItem(QListWidget*,QString)\0"
    "theWrappedObject,labels\0"
    "addItems(QListWidget*,QStringList)\0"
    "closePersistentEditor(QListWidget*,QListWidgetItem*)\0"
    "int\0theWrappedObject\0count(QListWidget*)\0"
    "QListWidgetItem*\0currentItem(QListWidget*)\0"
    "currentRow(QListWidget*)\0"
    "theWrappedObject,event\0"
    "dropEvent(QListWidget*,QDropEvent*)\0"
    "bool\0theWrappedObject,index,data,action\0"
    "dropMimeData(QListWidget*,int,const QMimeData*,Qt::DropAction)\0"
    "editItem(QListWidget*,QListWidgetItem*)\0"
    "theWrappedObject,e\0event(QListWidget*,QEvent*)\0"
    "QList<QListWidgetItem*>\0"
    "theWrappedObject,text,flags\0"
    "findItems(QListWidget*,QString,Qt::MatchFlags)\0"
    "QModelIndex\0indexFromItem(QListWidget*,QListWidgetItem*)\0"
    "theWrappedObject,row,item\0"
    "insertItem(QListWidget*,int,PythonQtPassOwnershipToCPP<QListWidgetItem"
    "*>)\0"
    "theWrappedObject,row,label\0"
    "insertItem(QListWidget*,int,QString)\0"
    "theWrappedObject,row,labels\0"
    "insertItems(QListWidget*,int,QStringList)\0"
    "isSortingEnabled(QListWidget*)\0"
    "theWrappedObject,row\0item(QListWidget*,int)\0"
    "theWrappedObject,p\0itemAt(QListWidget*,QPoint)\0"
    "theWrappedObject,x,y\0itemAt(QListWidget*,int,int)\0"
    "theWrappedObject,index\0"
    "itemFromIndex(QListWidget*,QModelIndex)\0"
    "QWidget*\0itemWidget(QListWidget*,QListWidgetItem*)\0"
    "theWrappedObject,data\0"
    "items(QListWidget*,const QMimeData*)\0"
    "QStringList\0mimeTypes(QListWidget*)\0"
    "openPersistentEditor(QListWidget*,QListWidgetItem*)\0"
    "removeItemWidget(QListWidget*,QListWidgetItem*)\0"
    "row(QListWidget*,const QListWidgetItem*)\0"
    "selectedItems(QListWidget*)\0"
    "setCurrentItem(QListWidget*,QListWidgetItem*)\0"
    "theWrappedObject,item,command\0"
    "setCurrentItem(QListWidget*,QListWidgetItem*,QItemSelectionModel::Sele"
    "ctionFlags)\0"
    "setCurrentRow(QListWidget*,int)\0"
    "theWrappedObject,row,command\0"
    "setCurrentRow(QListWidget*,int,QItemSelectionModel::SelectionFlags)\0"
    "theWrappedObject,item,widget\0"
    "setItemWidget(QListWidget*,QListWidgetItem*,PythonQtPassOwnershipToCPP"
    "<QWidget*>)\0"
    "theWrappedObject,enable\0"
    "setSortingEnabled(QListWidget*,bool)\0"
    "theWrappedObject,order\0"
    "sortItems(QListWidget*,Qt::SortOrder)\0"
    "sortItems(QListWidget*)\0Qt::DropActions\0"
    "supportedDropActions(QListWidget*)\0"
    "PythonQtPassOwnershipToPython<QListWidgetItem*>\0"
    "takeItem(QListWidget*,int)\0QRect\0"
    "visualItemRect(QListWidget*,const QListWidgetItem*)\0"
};

void PythonQtWrapper_QListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QListWidget *_t = static_cast<PythonQtWrapper_QListWidget *>(_o);
        switch (_id) {
        case 0: { QListWidget* _r = _t->new_QListWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QListWidget**>(_a[0]) = _r; }  break;
        case 1: { QListWidget* _r = _t->new_QListWidget();
            if (_a[0]) *reinterpret_cast< QListWidget**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QListWidget((*reinterpret_cast< QListWidget*(*)>(_a[1]))); break;
        case 3: _t->addItem((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QListWidgetItem*>(*)>(_a[2]))); break;
        case 4: _t->addItem((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->addItems((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 6: _t->closePersistentEditor((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 7: { int _r = _t->count((*reinterpret_cast< QListWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { QListWidgetItem* _r = _t->currentItem((*reinterpret_cast< QListWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QListWidgetItem**>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->currentRow((*reinterpret_cast< QListWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->dropEvent((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2]))); break;
        case 11: { bool _r = _t->dropMimeData((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QMimeData*(*)>(_a[3])),(*reinterpret_cast< Qt::DropAction(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->editItem((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 13: { bool _r = _t->event((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QList<QListWidgetItem*> _r = _t->findItems((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::MatchFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QListWidgetItem*>*>(_a[0]) = _r; }  break;
        case 15: { QModelIndex _r = _t->indexFromItem((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 16: _t->insertItem((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QListWidgetItem*>(*)>(_a[3]))); break;
        case 17: _t->insertItem((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 18: _t->insertItems((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 19: { bool _r = _t->isSortingEnabled((*reinterpret_cast< QListWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { QListWidgetItem* _r = _t->item((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QListWidgetItem**>(_a[0]) = _r; }  break;
        case 21: { QListWidgetItem* _r = _t->itemAt((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QListWidgetItem**>(_a[0]) = _r; }  break;
        case 22: { QListWidgetItem* _r = _t->itemAt((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QListWidgetItem**>(_a[0]) = _r; }  break;
        case 23: { QListWidgetItem* _r = _t->itemFromIndex((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QListWidgetItem**>(_a[0]) = _r; }  break;
        case 24: { QWidget* _r = _t->itemWidget((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 25: { QList<QListWidgetItem*> _r = _t->items((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QListWidgetItem*>*>(_a[0]) = _r; }  break;
        case 26: { QStringList _r = _t->mimeTypes((*reinterpret_cast< QListWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 27: _t->openPersistentEditor((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 28: _t->removeItemWidget((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 29: { int _r = _t->row((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< const QListWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 30: { QList<QListWidgetItem*> _r = _t->selectedItems((*reinterpret_cast< QListWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QListWidgetItem*>*>(_a[0]) = _r; }  break;
        case 31: _t->setCurrentItem((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 32: _t->setCurrentItem((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[3]))); break;
        case 33: _t->setCurrentRow((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 34: _t->setCurrentRow((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[3]))); break;
        case 35: _t->setItemWidget((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[3]))); break;
        case 36: _t->setSortingEnabled((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 37: _t->sortItems((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 38: _t->sortItems((*reinterpret_cast< QListWidget*(*)>(_a[1]))); break;
        case 39: { Qt::DropActions _r = _t->supportedDropActions((*reinterpret_cast< QListWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::DropActions*>(_a[0]) = _r; }  break;
        case 40: { PythonQtPassOwnershipToPython<QListWidgetItem*> _r = _t->takeItem((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< PythonQtPassOwnershipToPython<QListWidgetItem*>*>(_a[0]) = _r; }  break;
        case 41: { QRect _r = _t->visualItemRect((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< const QListWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QListWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QListWidget,
      qt_meta_data_PythonQtWrapper_QListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QListWidget))
        return static_cast<void*>(const_cast< PythonQtWrapper_QListWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

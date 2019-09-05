/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_opengl0.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "com_trolltech_qt_opengl0.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_opengl0.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QGLBuffer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       3,  124, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   26,   27,   26, 0x0a,
      59,   54,   27,   26, 0x0a,
      96,   90,   27,   26, 0x0a,
     125,  121,   26,   26, 0x0a,
     182,  154,   26,   26, 0x0a,
     242,  219,   26,   26, 0x0a,
     289,  272,  267,   26, 0x0a,
     313,  272,  306,   26, 0x0a,
     334,  272,  267,   26, 0x0a,
     353,  272,   26,   26, 0x0a,
     373,  272,  267,   26, 0x0a,
     425,  401,  395,   26, 0x0a,
     482,  459,   27,   26, 0x0a,
     555,  520,  267,   26, 0x0a,
     586,  272,   26,   26, 0x0a,
     606,   54,   26,   26, 0x0a,
     671,  648,   26,   26, 0x0a,
     727,  272,  723,   26, 0x0a,
     760,  272,  744,   26, 0x0a,
     777,  272,  267,   26, 0x0a,
     819,  272,  795,   26, 0x0a,
     844,  520,   26,   26, 0x0a,

 // enums: name, flags, count, data
     882, 0x0,    3,  136,
     889, 0x0,    4,  142,
     894, 0x0,    9,  150,

 // enum data: key, value
     907, uint(PythonQtWrapper_QGLBuffer::ReadOnly),
     916, uint(PythonQtWrapper_QGLBuffer::WriteOnly),
     926, uint(PythonQtWrapper_QGLBuffer::ReadWrite),
     936, uint(PythonQtWrapper_QGLBuffer::VertexBuffer),
     949, uint(PythonQtWrapper_QGLBuffer::IndexBuffer),
     961, uint(PythonQtWrapper_QGLBuffer::PixelPackBuffer),
     977, uint(PythonQtWrapper_QGLBuffer::PixelUnpackBuffer),
     995, uint(PythonQtWrapper_QGLBuffer::StreamDraw),
    1006, uint(PythonQtWrapper_QGLBuffer::StreamRead),
    1017, uint(PythonQtWrapper_QGLBuffer::StreamCopy),
    1028, uint(PythonQtWrapper_QGLBuffer::StaticDraw),
    1039, uint(PythonQtWrapper_QGLBuffer::StaticRead),
    1050, uint(PythonQtWrapper_QGLBuffer::StaticCopy),
    1061, uint(PythonQtWrapper_QGLBuffer::DynamicDraw),
    1073, uint(PythonQtWrapper_QGLBuffer::DynamicRead),
    1085, uint(PythonQtWrapper_QGLBuffer::DynamicCopy),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGLBuffer[] = {
    "PythonQtWrapper_QGLBuffer\0\0QGLBuffer*\0"
    "new_QGLBuffer()\0type\0"
    "new_QGLBuffer(QGLBuffer::Type)\0other\0"
    "new_QGLBuffer(QGLBuffer)\0obj\0"
    "delete_QGLBuffer(QGLBuffer*)\0"
    "theWrappedObject,data,count\0"
    "allocate(QGLBuffer*,const void*,int)\0"
    "theWrappedObject,count\0allocate(QGLBuffer*,int)\0"
    "bool\0theWrappedObject\0bind(QGLBuffer*)\0"
    "GLuint\0bufferId(QGLBuffer*)\0"
    "create(QGLBuffer*)\0destroy(QGLBuffer*)\0"
    "isCreated(QGLBuffer*)\0void*\0"
    "theWrappedObject,access\0"
    "map(QGLBuffer*,QGLBuffer::Access)\0"
    "theWrappedObject,other\0"
    "operator_assign(QGLBuffer*,QGLBuffer)\0"
    "theWrappedObject,offset,data,count\0"
    "read(QGLBuffer*,int,void*,int)\0"
    "release(QGLBuffer*)\0"
    "static_QGLBuffer_release(QGLBuffer::Type)\0"
    "theWrappedObject,value\0"
    "setUsagePattern(QGLBuffer*,QGLBuffer::UsagePattern)\0"
    "int\0size(QGLBuffer*)\0QGLBuffer::Type\0"
    "type(QGLBuffer*)\0unmap(QGLBuffer*)\0"
    "QGLBuffer::UsagePattern\0"
    "usagePattern(QGLBuffer*)\0"
    "write(QGLBuffer*,int,const void*,int)\0"
    "Access\0Type\0UsagePattern\0ReadOnly\0"
    "WriteOnly\0ReadWrite\0VertexBuffer\0"
    "IndexBuffer\0PixelPackBuffer\0"
    "PixelUnpackBuffer\0StreamDraw\0StreamRead\0"
    "StreamCopy\0StaticDraw\0StaticRead\0"
    "StaticCopy\0DynamicDraw\0DynamicRead\0"
    "DynamicCopy\0"
};

void PythonQtWrapper_QGLBuffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGLBuffer *_t = static_cast<PythonQtWrapper_QGLBuffer *>(_o);
        switch (_id) {
        case 0: { QGLBuffer* _r = _t->new_QGLBuffer();
            if (_a[0]) *reinterpret_cast< QGLBuffer**>(_a[0]) = _r; }  break;
        case 1: { QGLBuffer* _r = _t->new_QGLBuffer((*reinterpret_cast< QGLBuffer::Type(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLBuffer**>(_a[0]) = _r; }  break;
        case 2: { QGLBuffer* _r = _t->new_QGLBuffer((*reinterpret_cast< const QGLBuffer(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLBuffer**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QGLBuffer((*reinterpret_cast< QGLBuffer*(*)>(_a[1]))); break;
        case 4: _t->allocate((*reinterpret_cast< QGLBuffer*(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->allocate((*reinterpret_cast< QGLBuffer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: { bool _r = _t->bind((*reinterpret_cast< QGLBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { GLuint _r = _t->bufferId((*reinterpret_cast< QGLBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->create((*reinterpret_cast< QGLBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->destroy((*reinterpret_cast< QGLBuffer*(*)>(_a[1]))); break;
        case 10: { bool _r = _t->isCreated((*reinterpret_cast< QGLBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { void* _r = _t->map((*reinterpret_cast< QGLBuffer*(*)>(_a[1])),(*reinterpret_cast< QGLBuffer::Access(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 12: { QGLBuffer* _r = _t->operator_assign((*reinterpret_cast< QGLBuffer*(*)>(_a[1])),(*reinterpret_cast< const QGLBuffer(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGLBuffer**>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->read((*reinterpret_cast< QGLBuffer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->release((*reinterpret_cast< QGLBuffer*(*)>(_a[1]))); break;
        case 15: _t->static_QGLBuffer_release((*reinterpret_cast< QGLBuffer::Type(*)>(_a[1]))); break;
        case 16: _t->setUsagePattern((*reinterpret_cast< QGLBuffer*(*)>(_a[1])),(*reinterpret_cast< QGLBuffer::UsagePattern(*)>(_a[2]))); break;
        case 17: { int _r = _t->size((*reinterpret_cast< QGLBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { QGLBuffer::Type _r = _t->type((*reinterpret_cast< QGLBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLBuffer::Type*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->unmap((*reinterpret_cast< QGLBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { QGLBuffer::UsagePattern _r = _t->usagePattern((*reinterpret_cast< QGLBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLBuffer::UsagePattern*>(_a[0]) = _r; }  break;
        case 21: _t->write((*reinterpret_cast< QGLBuffer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const void*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGLBuffer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGLBuffer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGLBuffer,
      qt_meta_data_PythonQtWrapper_QGLBuffer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGLBuffer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGLBuffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGLBuffer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGLBuffer))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGLBuffer*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGLBuffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGLColormap[] = {

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
      42,   28,   29,   28, 0x0a,
      67,   60,   29,   28, 0x0a,
     100,   96,   28,   28, 0x0a,
     161,  140,  133,   28, 0x0a,
     195,  140,  190,   28, 0x0a,
     249,  226,  222,   28, 0x0a,
     273,  226,  222,   28, 0x0a,
     332,  315,  304,   28, 0x0a,
     358,  315,  353,   28, 0x0a,
     407,  380,   28,   28, 0x0a,
     441,  380,   28,   28, 0x0a,
     498,  473,   28,   28, 0x0a,
     533,  315,  222,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGLColormap[] = {
    "PythonQtWrapper_QGLColormap\0\0QGLColormap*\0"
    "new_QGLColormap()\0arg__1\0"
    "new_QGLColormap(QGLColormap)\0obj\0"
    "delete_QGLColormap(QGLColormap*)\0"
    "QColor\0theWrappedObject,idx\0"
    "entryColor(QGLColormap*,int)\0uint\0"
    "entryRgb(QGLColormap*,int)\0int\0"
    "theWrappedObject,color\0find(QGLColormap*,uint)\0"
    "findNearest(QGLColormap*,uint)\0"
    "Qt::HANDLE\0theWrappedObject\0"
    "handle(QGLColormap*)\0bool\0"
    "isEmpty(QGLColormap*)\0theWrappedObject,idx,color\0"
    "setEntry(QGLColormap*,int,QColor)\0"
    "setEntry(QGLColormap*,int,uint)\0"
    "theWrappedObject,ahandle\0"
    "setHandle(QGLColormap*,Qt::HANDLE)\0"
    "size(QGLColormap*)\0"
};

void PythonQtWrapper_QGLColormap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGLColormap *_t = static_cast<PythonQtWrapper_QGLColormap *>(_o);
        switch (_id) {
        case 0: { QGLColormap* _r = _t->new_QGLColormap();
            if (_a[0]) *reinterpret_cast< QGLColormap**>(_a[0]) = _r; }  break;
        case 1: { QGLColormap* _r = _t->new_QGLColormap((*reinterpret_cast< const QGLColormap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLColormap**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGLColormap((*reinterpret_cast< QGLColormap*(*)>(_a[1]))); break;
        case 3: { QColor _r = _t->entryColor((*reinterpret_cast< QGLColormap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 4: { uint _r = _t->entryRgb((*reinterpret_cast< QGLColormap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->find((*reinterpret_cast< QGLColormap*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->findNearest((*reinterpret_cast< QGLColormap*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { Qt::HANDLE _r = _t->handle((*reinterpret_cast< QGLColormap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::HANDLE*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isEmpty((*reinterpret_cast< QGLColormap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->setEntry((*reinterpret_cast< QGLColormap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 10: _t->setEntry((*reinterpret_cast< QGLColormap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 11: _t->setHandle((*reinterpret_cast< QGLColormap*(*)>(_a[1])),(*reinterpret_cast< Qt::HANDLE(*)>(_a[2]))); break;
        case 12: { int _r = _t->size((*reinterpret_cast< QGLColormap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGLColormap::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGLColormap::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGLColormap,
      qt_meta_data_PythonQtWrapper_QGLColormap, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGLColormap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGLColormap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGLColormap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGLColormap))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGLColormap*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGLColormap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGLContext[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   14, // methods
       0,    0, // properties
       2,  229, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   40,   28,   27, 0x0a,
      87,   73,   28,   27, 0x0a,
     131,  127,   27,   27, 0x0a,
     185,  167,  162,   27, 0x0a,
     295,  258,  251,   27, 0x0a,
     370,  340,  251,   27, 0x2a,
     432,  409,  251,   27, 0x2a,
     509,  464,  251,   27, 0x0a,
     616,  578,  251,   27, 0x0a,
     693,  662,  251,   27, 0x2a,
     757,  733,  251,   27, 0x2a,
     836,  790,  251,   27, 0x0a,
     932,  906,  251,   27, 0x0a,
     995,  965,  162,   27, 0x0a,
    1057, 1040,  162,   27, 0x2a,
    1108, 1089, 1084,   27, 0x0a,
    1139,  965,  162,   27, 0x0a,
    1177, 1040,  162,   27, 0x2a,
    1215,   27, 1197,   27, 0x0a,
    1273, 1250,   27,   27, 0x0a,
    1321, 1040, 1307,   27, 0x0a,
    1341, 1040,  162,   27, 0x0a,
    1369, 1040,   27,   27, 0x0a,
    1441, 1394,   27,   27, 0x0a,
    1521, 1488,   27,   27, 0x2a,
    1609, 1561,   27,   27, 0x0a,
    1689, 1655,   27,   27, 0x2a,
    1738, 1040, 1728,   27, 0x0a,
    1758, 1040,  162,   27, 0x0a,
    1783, 1040,  162,   27, 0x0a,
    1806, 1040,  162,   27, 0x0a,
    1827, 1040,   27,   27, 0x0a,
    1859, 1040, 1852,   27, 0x0a,
    1896, 1040, 1728,   27, 0x0a,
    1925, 1040,   27,   27, 0x0a,
    1968, 1944,   27,   27, 0x0a,
    2021, 2001,   27,   27, 0x0a,
    2059, 2054,   27,   27, 0x0a,
    2126, 2103,   27,   27, 0x0a,
    2153, 2001,   27,   27, 0x0a,
    2188, 1040,   27,   27, 0x0a,
    2217,   27, 2213,   27, 0x0a,
    2255, 1040,  162,   27, 0x0a,

 // enums: name, flags, count, data
    2282, 0x0,    9,  237,
    2293, 0x1,    9,  255,

 // enum data: key, value
    2305, uint(PythonQtWrapper_QGLContext::NoBindOption),
    2318, uint(PythonQtWrapper_QGLContext::InvertedYBindOption),
    2338, uint(PythonQtWrapper_QGLContext::MipmapBindOption),
    2355, uint(PythonQtWrapper_QGLContext::PremultipliedAlphaBindOption),
    2384, uint(PythonQtWrapper_QGLContext::LinearFilteringBindOption),
    2410, uint(PythonQtWrapper_QGLContext::MemoryManagedBindOption),
    2434, uint(PythonQtWrapper_QGLContext::CanFlipNativePixmapBindOption),
    2464, uint(PythonQtWrapper_QGLContext::DefaultBindOption),
    2482, uint(PythonQtWrapper_QGLContext::InternalBindOption),
    2305, uint(PythonQtWrapper_QGLContext::NoBindOption),
    2318, uint(PythonQtWrapper_QGLContext::InvertedYBindOption),
    2338, uint(PythonQtWrapper_QGLContext::MipmapBindOption),
    2355, uint(PythonQtWrapper_QGLContext::PremultipliedAlphaBindOption),
    2384, uint(PythonQtWrapper_QGLContext::LinearFilteringBindOption),
    2410, uint(PythonQtWrapper_QGLContext::MemoryManagedBindOption),
    2434, uint(PythonQtWrapper_QGLContext::CanFlipNativePixmapBindOption),
    2464, uint(PythonQtWrapper_QGLContext::DefaultBindOption),
    2482, uint(PythonQtWrapper_QGLContext::InternalBindOption),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGLContext[] = {
    "PythonQtWrapper_QGLContext\0\0QGLContext*\0"
    "format\0new_QGLContext(QGLFormat)\0"
    "format,device\0new_QGLContext(QGLFormat,QPaintDevice*)\0"
    "obj\0delete_QGLContext(QGLContext*)\0"
    "bool\0context1,context2\0"
    "static_QGLContext_areSharing(const QGLContext*,const QGLContext*)\0"
    "GLuint\0theWrappedObject,image,target,format\0"
    "bindTexture(QGLContext*,QImage,GLenum,GLint)\0"
    "theWrappedObject,image,target\0"
    "bindTexture(QGLContext*,QImage,GLenum)\0"
    "theWrappedObject,image\0"
    "bindTexture(QGLContext*,QImage)\0"
    "theWrappedObject,image,target,format,options\0"
    "bindTexture(QGLContext*,QImage,GLenum,GLint,QGLContext::BindOptions)\0"
    "theWrappedObject,pixmap,target,format\0"
    "bindTexture(QGLContext*,QPixmap,GLenum,GLint)\0"
    "theWrappedObject,pixmap,target\0"
    "bindTexture(QGLContext*,QPixmap,GLenum)\0"
    "theWrappedObject,pixmap\0"
    "bindTexture(QGLContext*,QPixmap)\0"
    "theWrappedObject,pixmap,target,format,options\0"
    "bindTexture(QGLContext*,QPixmap,GLenum,GLint,QGLContext::BindOptions)\0"
    "theWrappedObject,fileName\0"
    "bindTexture(QGLContext*,QString)\0"
    "theWrappedObject,shareContext\0"
    "chooseContext(QGLContext*,const QGLContext*)\0"
    "theWrappedObject\0chooseContext(QGLContext*)\0"
    "uint\0theWrappedObject,c\0"
    "colorIndex(QGLContext*,QColor)\0"
    "create(QGLContext*,const QGLContext*)\0"
    "create(QGLContext*)\0const QGLContext*\0"
    "static_QGLContext_currentContext()\0"
    "theWrappedObject,tx_id\0"
    "deleteTexture(QGLContext*,GLuint)\0"
    "QPaintDevice*\0device(QGLContext*)\0"
    "deviceIsPixmap(QGLContext*)\0"
    "doneCurrent(QGLContext*)\0"
    "theWrappedObject,point,textureId,textureTarget\0"
    "drawTexture(QGLContext*,QPointF,GLuint,GLenum)\0"
    "theWrappedObject,point,textureId\0"
    "drawTexture(QGLContext*,QPointF,GLuint)\0"
    "theWrappedObject,target,textureId,textureTarget\0"
    "drawTexture(QGLContext*,QRectF,GLuint,GLenum)\0"
    "theWrappedObject,target,textureId\0"
    "drawTexture(QGLContext*,QRectF,GLuint)\0"
    "QGLFormat\0format(QGLContext*)\0"
    "initialized(QGLContext*)\0"
    "isSharing(QGLContext*)\0isValid(QGLContext*)\0"
    "makeCurrent(QGLContext*)\0QColor\0"
    "overlayTransparentColor(QGLContext*)\0"
    "requestedFormat(QGLContext*)\0"
    "reset(QGLContext*)\0theWrappedObject,format\0"
    "setFormat(QGLContext*,QGLFormat)\0"
    "theWrappedObject,on\0"
    "setInitialized(QGLContext*,bool)\0size\0"
    "static_QGLContext_setTextureCacheLimit(int)\0"
    "theWrappedObject,valid\0"
    "setValid(QGLContext*,bool)\0"
    "setWindowCreated(QGLContext*,bool)\0"
    "swapBuffers(QGLContext*)\0int\0"
    "static_QGLContext_textureCacheLimit()\0"
    "windowCreated(QGLContext*)\0BindOption\0"
    "BindOptions\0NoBindOption\0InvertedYBindOption\0"
    "MipmapBindOption\0PremultipliedAlphaBindOption\0"
    "LinearFilteringBindOption\0"
    "MemoryManagedBindOption\0"
    "CanFlipNativePixmapBindOption\0"
    "DefaultBindOption\0InternalBindOption\0"
};

void PythonQtWrapper_QGLContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGLContext *_t = static_cast<PythonQtWrapper_QGLContext *>(_o);
        switch (_id) {
        case 0: { QGLContext* _r = _t->new_QGLContext((*reinterpret_cast< const QGLFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLContext**>(_a[0]) = _r; }  break;
        case 1: { QGLContext* _r = _t->new_QGLContext((*reinterpret_cast< const QGLFormat(*)>(_a[1])),(*reinterpret_cast< QPaintDevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGLContext**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGLContext((*reinterpret_cast< QGLContext*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->static_QGLContext_areSharing((*reinterpret_cast< const QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QGLContext*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLint(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 5: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 6: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 7: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLint(*)>(_a[4])),(*reinterpret_cast< QGLContext::BindOptions(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 8: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLint(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 9: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 10: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 11: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLint(*)>(_a[4])),(*reinterpret_cast< QGLContext::BindOptions(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 12: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->chooseContext((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QGLContext*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->chooseContext((*reinterpret_cast< QGLContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { uint _r = _t->colorIndex((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->create((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QGLContext*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->create((*reinterpret_cast< QGLContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { const QGLContext* _r = _t->static_QGLContext_currentContext();
            if (_a[0]) *reinterpret_cast< const QGLContext**>(_a[0]) = _r; }  break;
        case 19: _t->deleteTexture((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2]))); break;
        case 20: { QPaintDevice* _r = _t->device((*reinterpret_cast< QGLContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPaintDevice**>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->deviceIsPixmap((*reinterpret_cast< QGLContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: _t->doneCurrent((*reinterpret_cast< QGLContext*(*)>(_a[1]))); break;
        case 23: _t->drawTexture((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4]))); break;
        case 24: _t->drawTexture((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3]))); break;
        case 25: _t->drawTexture((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4]))); break;
        case 26: _t->drawTexture((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3]))); break;
        case 27: { QGLFormat _r = _t->format((*reinterpret_cast< QGLContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLFormat*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->initialized((*reinterpret_cast< QGLContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->isSharing((*reinterpret_cast< QGLContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->isValid((*reinterpret_cast< QGLContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: _t->makeCurrent((*reinterpret_cast< QGLContext*(*)>(_a[1]))); break;
        case 32: { QColor _r = _t->overlayTransparentColor((*reinterpret_cast< QGLContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 33: { QGLFormat _r = _t->requestedFormat((*reinterpret_cast< QGLContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLFormat*>(_a[0]) = _r; }  break;
        case 34: _t->reset((*reinterpret_cast< QGLContext*(*)>(_a[1]))); break;
        case 35: _t->setFormat((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< const QGLFormat(*)>(_a[2]))); break;
        case 36: _t->setInitialized((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 37: _t->static_QGLContext_setTextureCacheLimit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->setValid((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 39: _t->setWindowCreated((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->swapBuffers((*reinterpret_cast< QGLContext*(*)>(_a[1]))); break;
        case 41: { int _r = _t->static_QGLContext_textureCacheLimit();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->windowCreated((*reinterpret_cast< QGLContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGLContext::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGLContext::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGLContext,
      qt_meta_data_PythonQtWrapper_QGLContext, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGLContext::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGLContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGLContext::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGLContext))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGLContext*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGLContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QGLFormat[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
       0,    0, // properties
       3,  319, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   26,   27,   26, 0x0a,
      68,   54,   27,   26, 0x0a,
     114,  106,   27,   26, 0x2a,
     154,  148,   27,   26, 0x0a,
     183,  179,   26,   26, 0x0a,
     234,  217,  212,   26, 0x0a,
     256,  217,  252,   26, 0x0a,
     284,  217,  212,   26, 0x0a,
     302,  217,  252,   26, 0x0a,
     330,  217,  252,   26, 0x0a,
     367,   26,  357,   26, 0x0a,
     400,   26,  357,   26, 0x0a,
     440,  217,  212,   26, 0x0a,
     458,  217,  252,   26, 0x0a,
     486,  217,  212,   26, 0x0a,
     514,  217,  212,   26, 0x0a,
     539,  217,  252,   26, 0x0a,
     567,   26,  212,   26, 0x0a,
     596,   26,  212,   26, 0x0a,
     633,  217,  212,   26, 0x0a,
     656,  217,  252,   26, 0x0a,
     681,  217,  252,   26, 0x0a,
     736,   26,  706,   26, 0x0a,
     798,  774,  212,   26, 0x0a,
     827,  217,  252,   26, 0x0a,
     877,  217,  845,   26, 0x0a,
     897,  217,  252,   26, 0x0a,
     923,  217,  212,   26, 0x0a,
     940,  217,  212,   26, 0x0a,
     966,  217,  252,   26, 0x0a,
    1010,  986,   26,   26, 0x0a,
    1058, 1036,   26,   26, 0x0a,
    1093,  986,   26,   26, 0x0a,
    1119, 1036,   26,   26, 0x0a,
    1154, 1036,   26,   26, 0x0a,
    1190, 1188,   26,   26, 0x0a,
    1235, 1188,   26,   26, 0x0a,
    1287,  986,   26,   26, 0x0a,
    1313, 1036,   26,   26, 0x0a,
    1348,  986,   26,   26, 0x0a,
    1384,  986,   26,   26, 0x0a,
    1417, 1036,   26,   26, 0x0a,
    1473, 1452,   26,   26, 0x0a,
    1514,  986,   26,   26, 0x0a,
    1565, 1542,   26,   26, 0x0a,
    1615, 1590,   26,   26, 0x0a,
    1670, 1036,   26,   26, 0x0a,
    1703,  986,   26,   26, 0x0a,
    1728,  986,   26,   26, 0x0a,
    1790, 1762,   26,   26, 0x0a,
    1817,  986,   26,   26, 0x0a,
    1845, 1036,   26,   26, 0x0a,
    1882,  986,   26,   26, 0x0a,
    1935, 1909,   26,   26, 0x0a,
    1996, 1967,   26,   26, 0x0a,
    2027,  217,  212,   26, 0x0a,
    2047,  217,  252,   26, 0x0a,
    2077,  217,  212,   26, 0x0a,
    2096,  217,  252,   26, 0x0a,
    2121, 1452,  212,   26, 0x0a,
    2171,   26, 2163,   26, 0x0a,

 // enums: name, flags, count, data
    2195, 0x0,    3,  331,
    2216, 0x0,   18,  337,
    2234, 0x1,   18,  373,

 // enum data: key, value
    2253, uint(PythonQtWrapper_QGLFormat::NoProfile),
    2263, uint(PythonQtWrapper_QGLFormat::CoreProfile),
    2275, uint(PythonQtWrapper_QGLFormat::CompatibilityProfile),
    2296, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_None),
    2316, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_1_1),
    2335, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_1_2),
    2354, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_1_3),
    2373, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_1_4),
    2392, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_1_5),
    2411, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_2_0),
    2430, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_2_1),
    2449, uint(PythonQtWrapper_QGLFormat::OpenGL_ES_Common_Version_1_0),
    2478, uint(PythonQtWrapper_QGLFormat::OpenGL_ES_CommonLite_Version_1_0),
    2511, uint(PythonQtWrapper_QGLFormat::OpenGL_ES_Common_Version_1_1),
    2540, uint(PythonQtWrapper_QGLFormat::OpenGL_ES_CommonLite_Version_1_1),
    2573, uint(PythonQtWrapper_QGLFormat::OpenGL_ES_Version_2_0),
    2595, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_3_0),
    2614, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_3_1),
    2633, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_3_2),
    2652, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_3_3),
    2671, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_4_0),
    2296, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_None),
    2316, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_1_1),
    2335, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_1_2),
    2354, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_1_3),
    2373, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_1_4),
    2392, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_1_5),
    2411, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_2_0),
    2430, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_2_1),
    2449, uint(PythonQtWrapper_QGLFormat::OpenGL_ES_Common_Version_1_0),
    2478, uint(PythonQtWrapper_QGLFormat::OpenGL_ES_CommonLite_Version_1_0),
    2511, uint(PythonQtWrapper_QGLFormat::OpenGL_ES_Common_Version_1_1),
    2540, uint(PythonQtWrapper_QGLFormat::OpenGL_ES_CommonLite_Version_1_1),
    2573, uint(PythonQtWrapper_QGLFormat::OpenGL_ES_Version_2_0),
    2595, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_3_0),
    2614, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_3_1),
    2633, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_3_2),
    2652, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_3_3),
    2671, uint(PythonQtWrapper_QGLFormat::OpenGL_Version_4_0),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGLFormat[] = {
    "PythonQtWrapper_QGLFormat\0\0QGLFormat*\0"
    "new_QGLFormat()\0options,plane\0"
    "new_QGLFormat(QGL::FormatOptions,int)\0"
    "options\0new_QGLFormat(QGL::FormatOptions)\0"
    "other\0new_QGLFormat(QGLFormat)\0obj\0"
    "delete_QGLFormat(QGLFormat*)\0bool\0"
    "theWrappedObject\0accum(QGLFormat*)\0"
    "int\0accumBufferSize(QGLFormat*)\0"
    "alpha(QGLFormat*)\0alphaBufferSize(QGLFormat*)\0"
    "blueBufferSize(QGLFormat*)\0QGLFormat\0"
    "static_QGLFormat_defaultFormat()\0"
    "static_QGLFormat_defaultOverlayFormat()\0"
    "depth(QGLFormat*)\0depthBufferSize(QGLFormat*)\0"
    "directRendering(QGLFormat*)\0"
    "doubleBuffer(QGLFormat*)\0"
    "greenBufferSize(QGLFormat*)\0"
    "static_QGLFormat_hasOpenGL()\0"
    "static_QGLFormat_hasOpenGLOverlays()\0"
    "hasOverlay(QGLFormat*)\0majorVersion(QGLFormat*)\0"
    "minorVersion(QGLFormat*)\0"
    "QGLFormat::OpenGLVersionFlags\0"
    "static_QGLFormat_openGLVersionFlags()\0"
    "theWrappedObject,arg__2\0"
    "__eq__(QGLFormat*,QGLFormat)\0"
    "plane(QGLFormat*)\0QGLFormat::OpenGLContextProfile\0"
    "profile(QGLFormat*)\0redBufferSize(QGLFormat*)\0"
    "rgba(QGLFormat*)\0sampleBuffers(QGLFormat*)\0"
    "samples(QGLFormat*)\0theWrappedObject,enable\0"
    "setAccum(QGLFormat*,bool)\0"
    "theWrappedObject,size\0"
    "setAccumBufferSize(QGLFormat*,int)\0"
    "setAlpha(QGLFormat*,bool)\0"
    "setAlphaBufferSize(QGLFormat*,int)\0"
    "setBlueBufferSize(QGLFormat*,int)\0f\0"
    "static_QGLFormat_setDefaultFormat(QGLFormat)\0"
    "static_QGLFormat_setDefaultOverlayFormat(QGLFormat)\0"
    "setDepth(QGLFormat*,bool)\0"
    "setDepthBufferSize(QGLFormat*,int)\0"
    "setDirectRendering(QGLFormat*,bool)\0"
    "setDoubleBuffer(QGLFormat*,bool)\0"
    "setGreenBufferSize(QGLFormat*,int)\0"
    "theWrappedObject,opt\0"
    "setOption(QGLFormat*,QGL::FormatOptions)\0"
    "setOverlay(QGLFormat*,bool)\0"
    "theWrappedObject,plane\0setPlane(QGLFormat*,int)\0"
    "theWrappedObject,profile\0"
    "setProfile(QGLFormat*,QGLFormat::OpenGLContextProfile)\0"
    "setRedBufferSize(QGLFormat*,int)\0"
    "setRgba(QGLFormat*,bool)\0"
    "setSampleBuffers(QGLFormat*,bool)\0"
    "theWrappedObject,numSamples\0"
    "setSamples(QGLFormat*,int)\0"
    "setStencil(QGLFormat*,bool)\0"
    "setStencilBufferSize(QGLFormat*,int)\0"
    "setStereo(QGLFormat*,bool)\0"
    "theWrappedObject,interval\0"
    "setSwapInterval(QGLFormat*,int)\0"
    "theWrappedObject,major,minor\0"
    "setVersion(QGLFormat*,int,int)\0"
    "stencil(QGLFormat*)\0stencilBufferSize(QGLFormat*)\0"
    "stereo(QGLFormat*)\0swapInterval(QGLFormat*)\0"
    "testOption(QGLFormat*,QGL::FormatOptions)\0"
    "QString\0py_toString(QGLFormat*)\0"
    "OpenGLContextProfile\0OpenGLVersionFlag\0"
    "OpenGLVersionFlags\0NoProfile\0CoreProfile\0"
    "CompatibilityProfile\0OpenGL_Version_None\0"
    "OpenGL_Version_1_1\0OpenGL_Version_1_2\0"
    "OpenGL_Version_1_3\0OpenGL_Version_1_4\0"
    "OpenGL_Version_1_5\0OpenGL_Version_2_0\0"
    "OpenGL_Version_2_1\0OpenGL_ES_Common_Version_1_0\0"
    "OpenGL_ES_CommonLite_Version_1_0\0"
    "OpenGL_ES_Common_Version_1_1\0"
    "OpenGL_ES_CommonLite_Version_1_1\0"
    "OpenGL_ES_Version_2_0\0OpenGL_Version_3_0\0"
    "OpenGL_Version_3_1\0OpenGL_Version_3_2\0"
    "OpenGL_Version_3_3\0OpenGL_Version_4_0\0"
};

void PythonQtWrapper_QGLFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGLFormat *_t = static_cast<PythonQtWrapper_QGLFormat *>(_o);
        switch (_id) {
        case 0: { QGLFormat* _r = _t->new_QGLFormat();
            if (_a[0]) *reinterpret_cast< QGLFormat**>(_a[0]) = _r; }  break;
        case 1: { QGLFormat* _r = _t->new_QGLFormat((*reinterpret_cast< QGL::FormatOptions(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGLFormat**>(_a[0]) = _r; }  break;
        case 2: { QGLFormat* _r = _t->new_QGLFormat((*reinterpret_cast< QGL::FormatOptions(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLFormat**>(_a[0]) = _r; }  break;
        case 3: { QGLFormat* _r = _t->new_QGLFormat((*reinterpret_cast< const QGLFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLFormat**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QGLFormat((*reinterpret_cast< QGLFormat*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->accum((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->accumBufferSize((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->alpha((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->alphaBufferSize((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->blueBufferSize((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QGLFormat _r = _t->static_QGLFormat_defaultFormat();
            if (_a[0]) *reinterpret_cast< QGLFormat*>(_a[0]) = _r; }  break;
        case 11: { QGLFormat _r = _t->static_QGLFormat_defaultOverlayFormat();
            if (_a[0]) *reinterpret_cast< QGLFormat*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->depth((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->depthBufferSize((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->directRendering((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->doubleBuffer((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->greenBufferSize((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->static_QGLFormat_hasOpenGL();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->static_QGLFormat_hasOpenGLOverlays();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->hasOverlay((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->majorVersion((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->minorVersion((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { QGLFormat::OpenGLVersionFlags _r = _t->static_QGLFormat_openGLVersionFlags();
            if (_a[0]) *reinterpret_cast< QGLFormat::OpenGLVersionFlags*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->__eq__((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< const QGLFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->plane((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { QGLFormat::OpenGLContextProfile _r = _t->profile((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLFormat::OpenGLContextProfile*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->redBufferSize((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->rgba((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->sampleBuffers((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { int _r = _t->samples((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 30: _t->setAccum((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->setAccumBufferSize((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->setAlpha((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 33: _t->setAlphaBufferSize((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 34: _t->setBlueBufferSize((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 35: _t->static_QGLFormat_setDefaultFormat((*reinterpret_cast< const QGLFormat(*)>(_a[1]))); break;
        case 36: _t->static_QGLFormat_setDefaultOverlayFormat((*reinterpret_cast< const QGLFormat(*)>(_a[1]))); break;
        case 37: _t->setDepth((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 38: _t->setDepthBufferSize((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 39: _t->setDirectRendering((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->setDoubleBuffer((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 41: _t->setGreenBufferSize((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 42: _t->setOption((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< QGL::FormatOptions(*)>(_a[2]))); break;
        case 43: _t->setOverlay((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 44: _t->setPlane((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->setProfile((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< QGLFormat::OpenGLContextProfile(*)>(_a[2]))); break;
        case 46: _t->setRedBufferSize((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 47: _t->setRgba((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 48: _t->setSampleBuffers((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 49: _t->setSamples((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 50: _t->setStencil((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 51: _t->setStencilBufferSize((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 52: _t->setStereo((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 53: _t->setSwapInterval((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 54: _t->setVersion((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 55: { bool _r = _t->stencil((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 56: { int _r = _t->stencilBufferSize((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 57: { bool _r = _t->stereo((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 58: { int _r = _t->swapInterval((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 59: { bool _r = _t->testOption((*reinterpret_cast< QGLFormat*(*)>(_a[1])),(*reinterpret_cast< QGL::FormatOptions(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 60: { QString _r = _t->py_toString((*reinterpret_cast< QGLFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGLFormat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGLFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGLFormat,
      qt_meta_data_PythonQtWrapper_QGLFormat, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGLFormat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGLFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGLFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGLFormat))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGLFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGLFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QGLFramebufferObject[] = {

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
      72,   60,   38,   37, 0x0a,
     116,  111,   38,   37, 0x2a,
     187,  148,   38,   37, 0x0a,
     289,  266,   38,   37, 0x2a,
     377,  361,   38,   37, 0x2a,
     454,  442,   38,   37, 0x0a,
     533,  513,   38,   37, 0x0a,
     587,  574,   38,   37, 0x2a,
     668,  621,   38,   37, 0x0a,
     780,  749,   38,   37, 0x2a,
     878,  854,   38,   37, 0x2a,
     965,  945,   38,   37, 0x0a,
    1030, 1026,   37,   37, 0x0a,
    1131, 1114, 1081,   37, 0x0a,
    1170, 1114, 1165,   37, 0x0a,
    1198,   37, 1165,   37, 0x0a,
    1291, 1240,   37,   37, 0x0a,
    1454, 1410,   37,   37, 0x2a,
    1602, 1566,   37,   37, 0x2a,
    1707, 1114, 1703,   37, 0x0a,
    1785, 1738,   37,   37, 0x0a,
    1875, 1842,   37,   37, 0x2a,
    1973, 1925,   37,   37, 0x0a,
    2063, 2029,   37,   37, 0x2a,
    2139, 1114, 2112,   37, 0x0a,
    2176, 1114, 2169,   37, 0x0a,
    2206,   37, 1165,   37, 0x0a,
    2261,   37, 1165,   37, 0x0a,
    2319, 1114, 1165,   37, 0x0a,
    2350, 1114, 1165,   37, 0x0a,
    2405, 2381, 1703,   37, 0x0a,
    2481, 1114, 2467,   37, 0x0a,
    2516, 1114, 1165,   37, 0x0a,
    2553, 1114, 2547,   37, 0x0a,
    2581, 1114, 2169,   37, 0x0a,
    2619, 1114, 2612,   37, 0x0a,

 // enums: name, flags, count, data
    2650, 0x0,    3,  198,

 // enum data: key, value
    2661, uint(PythonQtWrapper_QGLFramebufferObject::NoAttachment),
    2674, uint(PythonQtWrapper_QGLFramebufferObject::CombinedDepthStencil),
    2695, uint(PythonQtWrapper_QGLFramebufferObject::Depth),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGLFramebufferObject[] = {
    "PythonQtWrapper_QGLFramebufferObject\0"
    "\0QGLFramebufferObject*\0size,target\0"
    "new_QGLFramebufferObject(QSize,GLenum)\0"
    "size\0new_QGLFramebufferObject(QSize)\0"
    "size,attachment,target,internal_format\0"
    "new_QGLFramebufferObject(QSize,QGLFramebufferObject::Attachment,GLenum"
    ",GLenum)\0"
    "size,attachment,target\0"
    "new_QGLFramebufferObject(QSize,QGLFramebufferObject::Attachment,GLenum"
    ")\0"
    "size,attachment\0"
    "new_QGLFramebufferObject(QSize,QGLFramebufferObject::Attachment)\0"
    "size,format\0"
    "new_QGLFramebufferObject(QSize,QGLFramebufferObjectFormat)\0"
    "width,height,target\0"
    "new_QGLFramebufferObject(int,int,GLenum)\0"
    "width,height\0new_QGLFramebufferObject(int,int)\0"
    "width,height,attachment,target,internal_format\0"
    "new_QGLFramebufferObject(int,int,QGLFramebufferObject::Attachment,GLen"
    "um,GLenum)\0"
    "width,height,attachment,target\0"
    "new_QGLFramebufferObject(int,int,QGLFramebufferObject::Attachment,GLen"
    "um)\0"
    "width,height,attachment\0"
    "new_QGLFramebufferObject(int,int,QGLFramebufferObject::Attachment)\0"
    "width,height,format\0"
    "new_QGLFramebufferObject(int,int,QGLFramebufferObjectFormat)\0"
    "obj\0delete_QGLFramebufferObject(QGLFramebufferObject*)\0"
    "QGLFramebufferObject::Attachment\0"
    "theWrappedObject\0attachment(QGLFramebufferObject*)\0"
    "bool\0bind(QGLFramebufferObject*)\0"
    "static_QGLFramebufferObject_bindDefault()\0"
    "target,targetRect,source,sourceRect,buffers,filter\0"
    "static_QGLFramebufferObject_blitFramebuffer(QGLFramebufferObject*,QRec"
    "t,QGLFramebufferObject*,QRect,GLbitfield,GLenum)\0"
    "target,targetRect,source,sourceRect,buffers\0"
    "static_QGLFramebufferObject_blitFramebuffer(QGLFramebufferObject*,QRec"
    "t,QGLFramebufferObject*,QRect,GLbitfield)\0"
    "target,targetRect,source,sourceRect\0"
    "static_QGLFramebufferObject_blitFramebuffer(QGLFramebufferObject*,QRec"
    "t,QGLFramebufferObject*,QRect)\0"
    "int\0devType(QGLFramebufferObject*)\0"
    "theWrappedObject,point,textureId,textureTarget\0"
    "drawTexture(QGLFramebufferObject*,QPointF,GLuint,GLenum)\0"
    "theWrappedObject,point,textureId\0"
    "drawTexture(QGLFramebufferObject*,QPointF,GLuint)\0"
    "theWrappedObject,target,textureId,textureTarget\0"
    "drawTexture(QGLFramebufferObject*,QRectF,GLuint,GLenum)\0"
    "theWrappedObject,target,textureId\0"
    "drawTexture(QGLFramebufferObject*,QRectF,GLuint)\0"
    "QGLFramebufferObjectFormat\0"
    "format(QGLFramebufferObject*)\0GLuint\0"
    "handle(QGLFramebufferObject*)\0"
    "static_QGLFramebufferObject_hasOpenGLFramebufferBlit()\0"
    "static_QGLFramebufferObject_hasOpenGLFramebufferObjects()\0"
    "isBound(QGLFramebufferObject*)\0"
    "isValid(QGLFramebufferObject*)\0"
    "theWrappedObject,metric\0"
    "metric(QGLFramebufferObject*,QPaintDevice::PaintDeviceMetric)\0"
    "QPaintEngine*\0paintEngine(QGLFramebufferObject*)\0"
    "release(QGLFramebufferObject*)\0QSize\0"
    "size(QGLFramebufferObject*)\0"
    "texture(QGLFramebufferObject*)\0QImage\0"
    "toImage(QGLFramebufferObject*)\0"
    "Attachment\0NoAttachment\0CombinedDepthStencil\0"
    "Depth\0"
};

void PythonQtWrapper_QGLFramebufferObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGLFramebufferObject *_t = static_cast<PythonQtWrapper_QGLFramebufferObject *>(_o);
        switch (_id) {
        case 0: { QGLFramebufferObject* _r = _t->new_QGLFramebufferObject((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObject**>(_a[0]) = _r; }  break;
        case 1: { QGLFramebufferObject* _r = _t->new_QGLFramebufferObject((*reinterpret_cast< const QSize(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObject**>(_a[0]) = _r; }  break;
        case 2: { QGLFramebufferObject* _r = _t->new_QGLFramebufferObject((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< QGLFramebufferObject::Attachment(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObject**>(_a[0]) = _r; }  break;
        case 3: { QGLFramebufferObject* _r = _t->new_QGLFramebufferObject((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< QGLFramebufferObject::Attachment(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObject**>(_a[0]) = _r; }  break;
        case 4: { QGLFramebufferObject* _r = _t->new_QGLFramebufferObject((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< QGLFramebufferObject::Attachment(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObject**>(_a[0]) = _r; }  break;
        case 5: { QGLFramebufferObject* _r = _t->new_QGLFramebufferObject((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< const QGLFramebufferObjectFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObject**>(_a[0]) = _r; }  break;
        case 6: { QGLFramebufferObject* _r = _t->new_QGLFramebufferObject((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObject**>(_a[0]) = _r; }  break;
        case 7: { QGLFramebufferObject* _r = _t->new_QGLFramebufferObject((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObject**>(_a[0]) = _r; }  break;
        case 8: { QGLFramebufferObject* _r = _t->new_QGLFramebufferObject((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QGLFramebufferObject::Attachment(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4])),(*reinterpret_cast< GLenum(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObject**>(_a[0]) = _r; }  break;
        case 9: { QGLFramebufferObject* _r = _t->new_QGLFramebufferObject((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QGLFramebufferObject::Attachment(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObject**>(_a[0]) = _r; }  break;
        case 10: { QGLFramebufferObject* _r = _t->new_QGLFramebufferObject((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QGLFramebufferObject::Attachment(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObject**>(_a[0]) = _r; }  break;
        case 11: { QGLFramebufferObject* _r = _t->new_QGLFramebufferObject((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QGLFramebufferObjectFormat(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObject**>(_a[0]) = _r; }  break;
        case 12: _t->delete_QGLFramebufferObject((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1]))); break;
        case 13: { QGLFramebufferObject::Attachment _r = _t->attachment((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObject::Attachment*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->bind((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->static_QGLFramebufferObject_bindDefault();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->static_QGLFramebufferObject_blitFramebuffer((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< QGLFramebufferObject*(*)>(_a[3])),(*reinterpret_cast< const QRect(*)>(_a[4])),(*reinterpret_cast< GLbitfield(*)>(_a[5])),(*reinterpret_cast< GLenum(*)>(_a[6]))); break;
        case 17: _t->static_QGLFramebufferObject_blitFramebuffer((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< QGLFramebufferObject*(*)>(_a[3])),(*reinterpret_cast< const QRect(*)>(_a[4])),(*reinterpret_cast< GLbitfield(*)>(_a[5]))); break;
        case 18: _t->static_QGLFramebufferObject_blitFramebuffer((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< QGLFramebufferObject*(*)>(_a[3])),(*reinterpret_cast< const QRect(*)>(_a[4]))); break;
        case 19: { int _r = _t->devType((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: _t->drawTexture((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4]))); break;
        case 21: _t->drawTexture((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3]))); break;
        case 22: _t->drawTexture((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4]))); break;
        case 23: _t->drawTexture((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3]))); break;
        case 24: { QGLFramebufferObjectFormat _r = _t->format((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObjectFormat*>(_a[0]) = _r; }  break;
        case 25: { GLuint _r = _t->handle((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->static_QGLFramebufferObject_hasOpenGLFramebufferBlit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->static_QGLFramebufferObject_hasOpenGLFramebufferObjects();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->isBound((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->isValid((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->metric((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])),(*reinterpret_cast< QPaintDevice::PaintDeviceMetric(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: { QPaintEngine* _r = _t->paintEngine((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPaintEngine**>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->release((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { QSize _r = _t->size((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 34: { GLuint _r = _t->texture((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 35: { QImage _r = _t->toImage((*reinterpret_cast< QGLFramebufferObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGLFramebufferObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGLFramebufferObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGLFramebufferObject,
      qt_meta_data_PythonQtWrapper_QGLFramebufferObject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGLFramebufferObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGLFramebufferObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGLFramebufferObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGLFramebufferObject))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGLFramebufferObject*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGLFramebufferObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGLFramebufferObjectFormat[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      72,   43,   44,   43, 0x0a,
     111,  105,   44,   43, 0x0a,
     174,  170,   43,   43, 0x0a,
     287,  270,  237,   43, 0x0a,
     334,  270,  327,   43, 0x0a,
     390,  270,  385,   43, 0x0a,
     449,  426,  385,   43, 0x0a,
     512,  426,   44,   43, 0x0a,
     584,  426,  385,   43, 0x0a,
     651,  270,  647,   43, 0x0a,
     716,  688,   43,   43, 0x0a,
     831,  792,   43,   43, 0x0a,
     917,  892,   43,   43, 0x0a,
     986,  961,   43,   43, 0x0a,
    1054, 1030,   43,   43, 0x0a,
    1107,  270,  327,   43, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGLFramebufferObjectFormat[] = {
    "PythonQtWrapper_QGLFramebufferObjectFormat\0"
    "\0QGLFramebufferObjectFormat*\0"
    "new_QGLFramebufferObjectFormat()\0other\0"
    "new_QGLFramebufferObjectFormat(QGLFramebufferObjectFormat)\0"
    "obj\0delete_QGLFramebufferObjectFormat(QGLFramebufferObjectFormat*)\0"
    "QGLFramebufferObject::Attachment\0"
    "theWrappedObject\0"
    "attachment(QGLFramebufferObjectFormat*)\0"
    "GLenum\0internalTextureFormat(QGLFramebufferObjectFormat*)\0"
    "bool\0mipmap(QGLFramebufferObjectFormat*)\0"
    "theWrappedObject,other\0"
    "__ne__(QGLFramebufferObjectFormat*,QGLFramebufferObjectFormat)\0"
    "operator_assign(QGLFramebufferObjectFormat*,QGLFramebufferObjectFormat"
    ")\0"
    "__eq__(QGLFramebufferObjectFormat*,QGLFramebufferObjectFormat)\0"
    "int\0samples(QGLFramebufferObjectFormat*)\0"
    "theWrappedObject,attachment\0"
    "setAttachment(QGLFramebufferObjectFormat*,QGLFramebufferObject::Attach"
    "ment)\0"
    "theWrappedObject,internalTextureFormat\0"
    "setInternalTextureFormat(QGLFramebufferObjectFormat*,GLenum)\0"
    "theWrappedObject,enabled\0"
    "setMipmap(QGLFramebufferObjectFormat*,bool)\0"
    "theWrappedObject,samples\0"
    "setSamples(QGLFramebufferObjectFormat*,int)\0"
    "theWrappedObject,target\0"
    "setTextureTarget(QGLFramebufferObjectFormat*,GLenum)\0"
    "textureTarget(QGLFramebufferObjectFormat*)\0"
};

void PythonQtWrapper_QGLFramebufferObjectFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGLFramebufferObjectFormat *_t = static_cast<PythonQtWrapper_QGLFramebufferObjectFormat *>(_o);
        switch (_id) {
        case 0: { QGLFramebufferObjectFormat* _r = _t->new_QGLFramebufferObjectFormat();
            if (_a[0]) *reinterpret_cast< QGLFramebufferObjectFormat**>(_a[0]) = _r; }  break;
        case 1: { QGLFramebufferObjectFormat* _r = _t->new_QGLFramebufferObjectFormat((*reinterpret_cast< const QGLFramebufferObjectFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObjectFormat**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGLFramebufferObjectFormat((*reinterpret_cast< QGLFramebufferObjectFormat*(*)>(_a[1]))); break;
        case 3: { QGLFramebufferObject::Attachment _r = _t->attachment((*reinterpret_cast< QGLFramebufferObjectFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObject::Attachment*>(_a[0]) = _r; }  break;
        case 4: { GLenum _r = _t->internalTextureFormat((*reinterpret_cast< QGLFramebufferObjectFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GLenum*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->mipmap((*reinterpret_cast< QGLFramebufferObjectFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->__ne__((*reinterpret_cast< QGLFramebufferObjectFormat*(*)>(_a[1])),(*reinterpret_cast< const QGLFramebufferObjectFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QGLFramebufferObjectFormat* _r = _t->operator_assign((*reinterpret_cast< QGLFramebufferObjectFormat*(*)>(_a[1])),(*reinterpret_cast< const QGLFramebufferObjectFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGLFramebufferObjectFormat**>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__eq__((*reinterpret_cast< QGLFramebufferObjectFormat*(*)>(_a[1])),(*reinterpret_cast< const QGLFramebufferObjectFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->samples((*reinterpret_cast< QGLFramebufferObjectFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->setAttachment((*reinterpret_cast< QGLFramebufferObjectFormat*(*)>(_a[1])),(*reinterpret_cast< QGLFramebufferObject::Attachment(*)>(_a[2]))); break;
        case 11: _t->setInternalTextureFormat((*reinterpret_cast< QGLFramebufferObjectFormat*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2]))); break;
        case 12: _t->setMipmap((*reinterpret_cast< QGLFramebufferObjectFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->setSamples((*reinterpret_cast< QGLFramebufferObjectFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->setTextureTarget((*reinterpret_cast< QGLFramebufferObjectFormat*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2]))); break;
        case 15: { GLenum _r = _t->textureTarget((*reinterpret_cast< QGLFramebufferObjectFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GLenum*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGLFramebufferObjectFormat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGLFramebufferObjectFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGLFramebufferObjectFormat,
      qt_meta_data_PythonQtWrapper_QGLFramebufferObjectFormat, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGLFramebufferObjectFormat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGLFramebufferObjectFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGLFramebufferObjectFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGLFramebufferObjectFormat))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGLFramebufferObjectFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGLFramebufferObjectFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGLFunctions[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
     102,   14, // methods
       0,    0, // properties
       2,  524, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   29,   30,   29, 0x0a,
      71,   63,   30,   29, 0x0a,
     111,  107,   29,   29, 0x0a,
     171,  146,   29,   29, 0x0a,
     241,  209,   29,   29, 0x0a,
     321,  285,   29,   29, 0x0a,
     414,  383,   29,   29, 0x0a,
     492,  456,   29,   29, 0x0a,
     576,  539,   29,   29, 0x0a,
     662,  624,   29,   29, 0x0a,
     748,  726,   29,   29, 0x0a,
     821,  786,   29,   29, 0x0a,
     923,  874,   29,   29, 0x0a,
    1017,  993,  986,   29, 0x0a,
    1087, 1064,   29,   29, 0x0a,
    1149, 1125,   29,   29, 0x0a,
    1267, 1187,   29,   29, 0x0a,
    1448, 1367,   29,   29, 0x0a,
    1581, 1564, 1557,   29, 0x0a,
    1634, 1612, 1557,   29, 0x0a,
    1698, 1671,   29,   29, 0x0a,
    1783, 1751,   29,   29, 0x0a,
    1866, 1841,   29,   29, 0x0a,
    1937, 1904,   29,   29, 0x0a,
    1996, 1125,   29,   29, 0x0a,
    2061, 2033,   29,   29, 0x0a,
    2108,  209,   29,   29, 0x0a,
    2175, 2152,   29,   29, 0x0a,
    2224, 2152,   29,   29, 0x0a,
    2339, 2272,   29,   29, 0x0a,
    2467, 2408,   29,   29, 0x0a,
    2539, 1671,   29,   29, 0x0a,
    2583, 1751,   29,   29, 0x0a,
    2632, 1904,   29,   29, 0x0a,
    2682,  993,   29,   29, 0x0a,
    2782, 2721,   29,   29, 0x0a,
    2867, 2721,   29,   29, 0x0a,
    3001, 2953,   29,   29, 0x0a,
    3103, 3073, 3069,   29, 0x0a,
    3194, 3157,   29,   29, 0x0a,
    3301, 3253,   29,   29, 0x0a,
    3430, 3382,   29,   29, 0x0a,
    3533, 3495,   29,   29, 0x0a,
    3584, 3157,   29,   29, 0x0a,
    3696, 3649,   29,   29, 0x0a,
    3818, 3760,   29,   29, 0x0a,
    3934, 3888,   29,   29, 0x0a,
    4034, 3997,   29,   29, 0x0a,
    4084, 3073, 3069,   29, 0x0a,
    4180, 4139,   29,   29, 0x0a,
    4232, 4139,   29,   29, 0x0a,
    4319, 4282,   29,   29, 0x0a,
    4417, 4381,   29,   29, 0x0a,
    4475, 4381,   29,   29, 0x0a,
    4565, 4541, 4531,   29, 0x0a,
    4627, 4598, 4531,   29, 0x0a,
    4665, 1841, 4531,   29, 0x0a,
    4729, 4699, 4531,   29, 0x0a,
    4768, 1125, 4531,   29, 0x0a,
    4801, 1841,   29,   29, 0x0a,
    4837, 1564,   29,   29, 0x0a,
    4928, 4876,   29,   29, 0x0a,
    5025, 4995,   29,   29, 0x0a,
    5130, 5076,   29,   29, 0x0a,
    5249, 5205,   29,   29, 0x0a,
    5356, 5320,   29,   29, 0x0a,
    5447, 5420,   29,   29, 0x0a,
    5537, 5498,   29,   29, 0x0a,
    5628, 5600,   29,   29, 0x0a,
    5703, 5669,   29,   29, 0x0a,
    5760, 5600,   29,   29, 0x0a,
    5799, 5669,   29,   29, 0x0a,
    5884, 5854,   29,   29, 0x0a,
    5933, 5669,   29,   29, 0x0a,
    5990, 5854,   29,   29, 0x0a,
    6035, 5669,   29,   29, 0x0a,
    6122, 6090,   29,   29, 0x0a,
    6179, 5669,   29,   29, 0x0a,
    6236, 6090,   29,   29, 0x0a,
    6287, 5669,   29,   29, 0x0a,
    6376, 6342,   29,   29, 0x0a,
    6441, 5669,   29,   29, 0x0a,
    6498, 6342,   29,   29, 0x0a,
    6555, 5669,   29,   29, 0x0a,
    6658, 6610,   29,   29, 0x0a,
    6731, 6610,   29,   29, 0x0a,
    6804, 6610,   29,   29, 0x0a,
    6877, 1841,   29,   29, 0x0a,
    6912, 1841,   29,   29, 0x0a,
    6976, 6952,   29,   29, 0x0a,
    7052, 7023,   29,   29, 0x0a,
    7133, 7107,   29,   29, 0x0a,
    7188, 7023,   29,   29, 0x0a,
    7271, 7243,   29,   29, 0x0a,
    7334, 7023,   29,   29, 0x0a,
    7419, 7389,   29,   29, 0x0a,
    7490, 7023,   29,   29, 0x0a,
    7599, 7545,   29,   29, 0x0a,
    7716, 7691, 7686,   29, 0x0a,
    7801, 7776,   29,   29, 0x0a,
    7856, 1564,   29,   29, 0x2a,
    7922, 1564, 7893,   29, 0x0a,

 // enums: name, flags, count, data
    7952, 0x0,   13,  532,
    7966, 0x1,   13,  558,

 // enum data: key, value
    7981, uint(PythonQtWrapper_QGLFunctions::Multitexture),
    7994, uint(PythonQtWrapper_QGLFunctions::Shaders),
    8002, uint(PythonQtWrapper_QGLFunctions::Buffers),
    8010, uint(PythonQtWrapper_QGLFunctions::Framebuffers),
    8023, uint(PythonQtWrapper_QGLFunctions::BlendColor),
    8034, uint(PythonQtWrapper_QGLFunctions::BlendEquation),
    8048, uint(PythonQtWrapper_QGLFunctions::BlendEquationSeparate),
    8070, uint(PythonQtWrapper_QGLFunctions::BlendFuncSeparate),
    8088, uint(PythonQtWrapper_QGLFunctions::BlendSubtract),
    8102, uint(PythonQtWrapper_QGLFunctions::CompressedTextures),
    8121, uint(PythonQtWrapper_QGLFunctions::Multisample),
    8133, uint(PythonQtWrapper_QGLFunctions::StencilSeparate),
    8149, uint(PythonQtWrapper_QGLFunctions::NPOTTextures),
    7981, uint(PythonQtWrapper_QGLFunctions::Multitexture),
    7994, uint(PythonQtWrapper_QGLFunctions::Shaders),
    8002, uint(PythonQtWrapper_QGLFunctions::Buffers),
    8010, uint(PythonQtWrapper_QGLFunctions::Framebuffers),
    8023, uint(PythonQtWrapper_QGLFunctions::BlendColor),
    8034, uint(PythonQtWrapper_QGLFunctions::BlendEquation),
    8048, uint(PythonQtWrapper_QGLFunctions::BlendEquationSeparate),
    8070, uint(PythonQtWrapper_QGLFunctions::BlendFuncSeparate),
    8088, uint(PythonQtWrapper_QGLFunctions::BlendSubtract),
    8102, uint(PythonQtWrapper_QGLFunctions::CompressedTextures),
    8121, uint(PythonQtWrapper_QGLFunctions::Multisample),
    8133, uint(PythonQtWrapper_QGLFunctions::StencilSeparate),
    8149, uint(PythonQtWrapper_QGLFunctions::NPOTTextures),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGLFunctions[] = {
    "PythonQtWrapper_QGLFunctions\0\0"
    "QGLFunctions*\0new_QGLFunctions()\0"
    "context\0new_QGLFunctions(const QGLContext*)\0"
    "obj\0delete_QGLFunctions(QGLFunctions*)\0"
    "theWrappedObject,texture\0"
    "glActiveTexture(QGLFunctions*,GLenum)\0"
    "theWrappedObject,program,shader\0"
    "glAttachShader(QGLFunctions*,GLuint,GLuint)\0"
    "theWrappedObject,program,index,name\0"
    "glBindAttribLocation(QGLFunctions*,GLuint,GLuint,const char*)\0"
    "theWrappedObject,target,buffer\0"
    "glBindBuffer(QGLFunctions*,GLenum,GLuint)\0"
    "theWrappedObject,target,framebuffer\0"
    "glBindFramebuffer(QGLFunctions*,GLenum,GLuint)\0"
    "theWrappedObject,target,renderbuffer\0"
    "glBindRenderbuffer(QGLFunctions*,GLenum,GLuint)\0"
    "theWrappedObject,red,green,blue,alpha\0"
    "glBlendColor(QGLFunctions*,GLclampf,GLclampf,GLclampf,GLclampf)\0"
    "theWrappedObject,mode\0"
    "glBlendEquation(QGLFunctions*,GLenum)\0"
    "theWrappedObject,modeRGB,modeAlpha\0"
    "glBlendEquationSeparate(QGLFunctions*,GLenum,GLenum)\0"
    "theWrappedObject,srcRGB,dstRGB,srcAlpha,dstAlpha\0"
    "glBlendFuncSeparate(QGLFunctions*,GLenum,GLenum,GLenum,GLenum)\0"
    "GLenum\0theWrappedObject,target\0"
    "glCheckFramebufferStatus(QGLFunctions*,GLenum)\0"
    "theWrappedObject,depth\0"
    "glClearDepthf(QGLFunctions*,GLclampf)\0"
    "theWrappedObject,shader\0"
    "glCompileShader(QGLFunctions*,GLuint)\0"
    "theWrappedObject,target,level,internalformat,width,height,border,image"
    "Size,data\0"
    "glCompressedTexImage2D(QGLFunctions*,GLenum,GLint,GLenum,GLsizei,GLsiz"
    "ei,GLint,GLsizei,const void*)\0"
    "theWrappedObject,target,level,xoffset,yoffset,width,height,format,imag"
    "eSize,data\0"
    "glCompressedTexSubImage2D(QGLFunctions*,GLenum,GLint,GLint,GLint,GLsiz"
    "ei,GLsizei,GLenum,GLsizei,const void*)\0"
    "GLuint\0theWrappedObject\0"
    "glCreateProgram(QGLFunctions*)\0"
    "theWrappedObject,type\0"
    "glCreateShader(QGLFunctions*,GLenum)\0"
    "theWrappedObject,n,buffers\0"
    "glDeleteBuffers(QGLFunctions*,GLsizei,const GLuint*)\0"
    "theWrappedObject,n,framebuffers\0"
    "glDeleteFramebuffers(QGLFunctions*,GLsizei,const GLuint*)\0"
    "theWrappedObject,program\0"
    "glDeleteProgram(QGLFunctions*,GLuint)\0"
    "theWrappedObject,n,renderbuffers\0"
    "glDeleteRenderbuffers(QGLFunctions*,GLsizei,const GLuint*)\0"
    "glDeleteShader(QGLFunctions*,GLuint)\0"
    "theWrappedObject,zNear,zFar\0"
    "glDepthRangef(QGLFunctions*,GLclampf,GLclampf)\0"
    "glDetachShader(QGLFunctions*,GLuint,GLuint)\0"
    "theWrappedObject,index\0"
    "glDisableVertexAttribArray(QGLFunctions*,GLuint)\0"
    "glEnableVertexAttribArray(QGLFunctions*,GLuint)\0"
    "theWrappedObject,target,attachment,renderbuffertarget,renderbuffer\0"
    "glFramebufferRenderbuffer(QGLFunctions*,GLenum,GLenum,GLenum,GLuint)\0"
    "theWrappedObject,target,attachment,textarget,texture,level\0"
    "glFramebufferTexture2D(QGLFunctions*,GLenum,GLenum,GLenum,GLuint,GLint"
    ")\0"
    "glGenBuffers(QGLFunctions*,GLsizei,GLuint*)\0"
    "glGenFramebuffers(QGLFunctions*,GLsizei,GLuint*)\0"
    "glGenRenderbuffers(QGLFunctions*,GLsizei,GLuint*)\0"
    "glGenerateMipmap(QGLFunctions*,GLenum)\0"
    "theWrappedObject,program,index,bufsize,length,size,type,name\0"
    "glGetActiveAttrib(QGLFunctions*,GLuint,GLuint,GLsizei,GLsizei*,GLint*,"
    "GLenum*,char*)\0"
    "glGetActiveUniform(QGLFunctions*,GLuint,GLuint,GLsizei,GLsizei*,GLint*"
    ",GLenum*,char*)\0"
    "theWrappedObject,program,maxcount,count,shaders\0"
    "glGetAttachedShaders(QGLFunctions*,GLuint,GLsizei,GLsizei*,GLuint*)\0"
    "int\0theWrappedObject,program,name\0"
    "glGetAttribLocation(QGLFunctions*,GLuint,const char*)\0"
    "theWrappedObject,target,pname,params\0"
    "glGetBufferParameteriv(QGLFunctions*,GLenum,GLenum,GLint*)\0"
    "theWrappedObject,target,attachment,pname,params\0"
    "glGetFramebufferAttachmentParameteriv(QGLFunctions*,GLenum,GLenum,GLen"
    "um,GLint*)\0"
    "theWrappedObject,program,bufsize,length,infolog\0"
    "glGetProgramInfoLog(QGLFunctions*,GLuint,GLsizei,GLsizei*,char*)\0"
    "theWrappedObject,program,pname,params\0"
    "glGetProgramiv(QGLFunctions*,GLuint,GLenum,GLint*)\0"
    "glGetRenderbufferParameteriv(QGLFunctions*,GLenum,GLenum,GLint*)\0"
    "theWrappedObject,shader,bufsize,length,infolog\0"
    "glGetShaderInfoLog(QGLFunctions*,GLuint,GLsizei,GLsizei*,char*)\0"
    "theWrappedObject,shadertype,precisiontype,range,precision\0"
    "glGetShaderPrecisionFormat(QGLFunctions*,GLenum,GLenum,GLint*,GLint*)\0"
    "theWrappedObject,shader,bufsize,length,source\0"
    "glGetShaderSource(QGLFunctions*,GLuint,GLsizei,GLsizei*,char*)\0"
    "theWrappedObject,shader,pname,params\0"
    "glGetShaderiv(QGLFunctions*,GLuint,GLenum,GLint*)\0"
    "glGetUniformLocation(QGLFunctions*,GLuint,const char*)\0"
    "theWrappedObject,program,location,params\0"
    "glGetUniformfv(QGLFunctions*,GLuint,GLint,GLfloat*)\0"
    "glGetUniformiv(QGLFunctions*,GLuint,GLint,GLint*)\0"
    "theWrappedObject,index,pname,pointer\0"
    "glGetVertexAttribPointerv(QGLFunctions*,GLuint,GLenum,void**)\0"
    "theWrappedObject,index,pname,params\0"
    "glGetVertexAttribfv(QGLFunctions*,GLuint,GLenum,GLfloat*)\0"
    "glGetVertexAttribiv(QGLFunctions*,GLuint,GLenum,GLint*)\0"
    "GLboolean\0theWrappedObject,buffer\0"
    "glIsBuffer(QGLFunctions*,GLuint)\0"
    "theWrappedObject,framebuffer\0"
    "glIsFramebuffer(QGLFunctions*,GLuint)\0"
    "glIsProgram(QGLFunctions*,GLuint)\0"
    "theWrappedObject,renderbuffer\0"
    "glIsRenderbuffer(QGLFunctions*,GLuint)\0"
    "glIsShader(QGLFunctions*,GLuint)\0"
    "glLinkProgram(QGLFunctions*,GLuint)\0"
    "glReleaseShaderCompiler(QGLFunctions*)\0"
    "theWrappedObject,target,internalformat,width,height\0"
    "glRenderbufferStorage(QGLFunctions*,GLenum,GLenum,GLsizei,GLsizei)\0"
    "theWrappedObject,value,invert\0"
    "glSampleCoverage(QGLFunctions*,GLclampf,GLboolean)\0"
    "theWrappedObject,n,shaders,binaryformat,binary,length\0"
    "glShaderBinary(QGLFunctions*,GLint,const GLuint*,GLenum,const void*,GL"
    "int)\0"
    "theWrappedObject,shader,count,string,length\0"
    "glShaderSource(QGLFunctions*,GLuint,GLsizei,const char**,const GLint*)\0"
    "theWrappedObject,face,func,ref,mask\0"
    "glStencilFuncSeparate(QGLFunctions*,GLenum,GLenum,GLint,GLuint)\0"
    "theWrappedObject,face,mask\0"
    "glStencilMaskSeparate(QGLFunctions*,GLenum,GLuint)\0"
    "theWrappedObject,face,fail,zfail,zpass\0"
    "glStencilOpSeparate(QGLFunctions*,GLenum,GLenum,GLenum,GLenum)\0"
    "theWrappedObject,location,x\0"
    "glUniform1f(QGLFunctions*,GLint,GLfloat)\0"
    "theWrappedObject,location,count,v\0"
    "glUniform1fv(QGLFunctions*,GLint,GLsizei,const GLfloat*)\0"
    "glUniform1i(QGLFunctions*,GLint,GLint)\0"
    "glUniform1iv(QGLFunctions*,GLint,GLsizei,const GLint*)\0"
    "theWrappedObject,location,x,y\0"
    "glUniform2f(QGLFunctions*,GLint,GLfloat,GLfloat)\0"
    "glUniform2fv(QGLFunctions*,GLint,GLsizei,const GLfloat*)\0"
    "glUniform2i(QGLFunctions*,GLint,GLint,GLint)\0"
    "glUniform2iv(QGLFunctions*,GLint,GLsizei,const GLint*)\0"
    "theWrappedObject,location,x,y,z\0"
    "glUniform3f(QGLFunctions*,GLint,GLfloat,GLfloat,GLfloat)\0"
    "glUniform3fv(QGLFunctions*,GLint,GLsizei,const GLfloat*)\0"
    "glUniform3i(QGLFunctions*,GLint,GLint,GLint,GLint)\0"
    "glUniform3iv(QGLFunctions*,GLint,GLsizei,const GLint*)\0"
    "theWrappedObject,location,x,y,z,w\0"
    "glUniform4f(QGLFunctions*,GLint,GLfloat,GLfloat,GLfloat,GLfloat)\0"
    "glUniform4fv(QGLFunctions*,GLint,GLsizei,const GLfloat*)\0"
    "glUniform4i(QGLFunctions*,GLint,GLint,GLint,GLint,GLint)\0"
    "glUniform4iv(QGLFunctions*,GLint,GLsizei,const GLint*)\0"
    "theWrappedObject,location,count,transpose,value\0"
    "glUniformMatrix2fv(QGLFunctions*,GLint,GLsizei,GLboolean,const GLfloat"
    "*)\0"
    "glUniformMatrix3fv(QGLFunctions*,GLint,GLsizei,GLboolean,const GLfloat"
    "*)\0"
    "glUniformMatrix4fv(QGLFunctions*,GLint,GLsizei,GLboolean,const GLfloat"
    "*)\0"
    "glUseProgram(QGLFunctions*,GLuint)\0"
    "glValidateProgram(QGLFunctions*,GLuint)\0"
    "theWrappedObject,indx,x\0"
    "glVertexAttrib1f(QGLFunctions*,GLuint,GLfloat)\0"
    "theWrappedObject,indx,values\0"
    "glVertexAttrib1fv(QGLFunctions*,GLuint,const GLfloat*)\0"
    "theWrappedObject,indx,x,y\0"
    "glVertexAttrib2f(QGLFunctions*,GLuint,GLfloat,GLfloat)\0"
    "glVertexAttrib2fv(QGLFunctions*,GLuint,const GLfloat*)\0"
    "theWrappedObject,indx,x,y,z\0"
    "glVertexAttrib3f(QGLFunctions*,GLuint,GLfloat,GLfloat,GLfloat)\0"
    "glVertexAttrib3fv(QGLFunctions*,GLuint,const GLfloat*)\0"
    "theWrappedObject,indx,x,y,z,w\0"
    "glVertexAttrib4f(QGLFunctions*,GLuint,GLfloat,GLfloat,GLfloat,GLfloat)\0"
    "glVertexAttrib4fv(QGLFunctions*,GLuint,const GLfloat*)\0"
    "theWrappedObject,indx,size,type,normalized,stride,ptr\0"
    "glVertexAttribPointer(QGLFunctions*,GLuint,GLint,GLenum,GLboolean,GLsi"
    "zei,const void*)\0"
    "bool\0theWrappedObject,feature\0"
    "hasOpenGLFeature(QGLFunctions*,QGLFunctions::OpenGLFeature)\0"
    "theWrappedObject,context\0"
    "initializeGLFunctions(QGLFunctions*,const QGLContext*)\0"
    "initializeGLFunctions(QGLFunctions*)\0"
    "QGLFunctions::OpenGLFeatures\0"
    "openGLFeatures(QGLFunctions*)\0"
    "OpenGLFeature\0OpenGLFeatures\0Multitexture\0"
    "Shaders\0Buffers\0Framebuffers\0BlendColor\0"
    "BlendEquation\0BlendEquationSeparate\0"
    "BlendFuncSeparate\0BlendSubtract\0"
    "CompressedTextures\0Multisample\0"
    "StencilSeparate\0NPOTTextures\0"
};

void PythonQtWrapper_QGLFunctions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGLFunctions *_t = static_cast<PythonQtWrapper_QGLFunctions *>(_o);
        switch (_id) {
        case 0: { QGLFunctions* _r = _t->new_QGLFunctions();
            if (_a[0]) *reinterpret_cast< QGLFunctions**>(_a[0]) = _r; }  break;
        case 1: { QGLFunctions* _r = _t->new_QGLFunctions((*reinterpret_cast< const QGLContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLFunctions**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGLFunctions((*reinterpret_cast< QGLFunctions*(*)>(_a[1]))); break;
        case 3: _t->glActiveTexture((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2]))); break;
        case 4: _t->glAttachShader((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3]))); break;
        case 5: _t->glBindAttribLocation((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3])),(*reinterpret_cast< const char*(*)>(_a[4]))); break;
        case 6: _t->glBindBuffer((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3]))); break;
        case 7: _t->glBindFramebuffer((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3]))); break;
        case 8: _t->glBindRenderbuffer((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3]))); break;
        case 9: _t->glBlendColor((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLclampf(*)>(_a[2])),(*reinterpret_cast< GLclampf(*)>(_a[3])),(*reinterpret_cast< GLclampf(*)>(_a[4])),(*reinterpret_cast< GLclampf(*)>(_a[5]))); break;
        case 10: _t->glBlendEquation((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2]))); break;
        case 11: _t->glBlendEquationSeparate((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3]))); break;
        case 12: _t->glBlendFuncSeparate((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4])),(*reinterpret_cast< GLenum(*)>(_a[5]))); break;
        case 13: { GLenum _r = _t->glCheckFramebufferStatus((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLenum*>(_a[0]) = _r; }  break;
        case 14: _t->glClearDepthf((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLclampf(*)>(_a[2]))); break;
        case 15: _t->glCompileShader((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2]))); break;
        case 16: _t->glCompressedTexImage2D((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLint(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4])),(*reinterpret_cast< GLsizei(*)>(_a[5])),(*reinterpret_cast< GLsizei(*)>(_a[6])),(*reinterpret_cast< GLint(*)>(_a[7])),(*reinterpret_cast< GLsizei(*)>(_a[8])),(*reinterpret_cast< const void*(*)>(_a[9]))); break;
        case 17: _t->glCompressedTexSubImage2D((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLint(*)>(_a[3])),(*reinterpret_cast< GLint(*)>(_a[4])),(*reinterpret_cast< GLint(*)>(_a[5])),(*reinterpret_cast< GLsizei(*)>(_a[6])),(*reinterpret_cast< GLsizei(*)>(_a[7])),(*reinterpret_cast< GLenum(*)>(_a[8])),(*reinterpret_cast< GLsizei(*)>(_a[9])),(*reinterpret_cast< const void*(*)>(_a[10]))); break;
        case 18: { GLuint _r = _t->glCreateProgram((*reinterpret_cast< QGLFunctions*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 19: { GLuint _r = _t->glCreateShader((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 20: _t->glDeleteBuffers((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLsizei(*)>(_a[2])),(*reinterpret_cast< const GLuint*(*)>(_a[3]))); break;
        case 21: _t->glDeleteFramebuffers((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLsizei(*)>(_a[2])),(*reinterpret_cast< const GLuint*(*)>(_a[3]))); break;
        case 22: _t->glDeleteProgram((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2]))); break;
        case 23: _t->glDeleteRenderbuffers((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLsizei(*)>(_a[2])),(*reinterpret_cast< const GLuint*(*)>(_a[3]))); break;
        case 24: _t->glDeleteShader((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2]))); break;
        case 25: _t->glDepthRangef((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLclampf(*)>(_a[2])),(*reinterpret_cast< GLclampf(*)>(_a[3]))); break;
        case 26: _t->glDetachShader((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3]))); break;
        case 27: _t->glDisableVertexAttribArray((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2]))); break;
        case 28: _t->glEnableVertexAttribArray((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2]))); break;
        case 29: _t->glFramebufferRenderbuffer((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4])),(*reinterpret_cast< GLuint(*)>(_a[5]))); break;
        case 30: _t->glFramebufferTexture2D((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4])),(*reinterpret_cast< GLuint(*)>(_a[5])),(*reinterpret_cast< GLint(*)>(_a[6]))); break;
        case 31: _t->glGenBuffers((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLsizei(*)>(_a[2])),(*reinterpret_cast< GLuint*(*)>(_a[3]))); break;
        case 32: _t->glGenFramebuffers((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLsizei(*)>(_a[2])),(*reinterpret_cast< GLuint*(*)>(_a[3]))); break;
        case 33: _t->glGenRenderbuffers((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLsizei(*)>(_a[2])),(*reinterpret_cast< GLuint*(*)>(_a[3]))); break;
        case 34: _t->glGenerateMipmap((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2]))); break;
        case 35: _t->glGetActiveAttrib((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3])),(*reinterpret_cast< GLsizei(*)>(_a[4])),(*reinterpret_cast< GLsizei*(*)>(_a[5])),(*reinterpret_cast< GLint*(*)>(_a[6])),(*reinterpret_cast< GLenum*(*)>(_a[7])),(*reinterpret_cast< char*(*)>(_a[8]))); break;
        case 36: _t->glGetActiveUniform((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3])),(*reinterpret_cast< GLsizei(*)>(_a[4])),(*reinterpret_cast< GLsizei*(*)>(_a[5])),(*reinterpret_cast< GLint*(*)>(_a[6])),(*reinterpret_cast< GLenum*(*)>(_a[7])),(*reinterpret_cast< char*(*)>(_a[8]))); break;
        case 37: _t->glGetAttachedShaders((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLsizei(*)>(_a[3])),(*reinterpret_cast< GLsizei*(*)>(_a[4])),(*reinterpret_cast< GLuint*(*)>(_a[5]))); break;
        case 38: { int _r = _t->glGetAttribLocation((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 39: _t->glGetBufferParameteriv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLint*(*)>(_a[4]))); break;
        case 40: _t->glGetFramebufferAttachmentParameteriv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4])),(*reinterpret_cast< GLint*(*)>(_a[5]))); break;
        case 41: _t->glGetProgramInfoLog((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLsizei(*)>(_a[3])),(*reinterpret_cast< GLsizei*(*)>(_a[4])),(*reinterpret_cast< char*(*)>(_a[5]))); break;
        case 42: _t->glGetProgramiv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLint*(*)>(_a[4]))); break;
        case 43: _t->glGetRenderbufferParameteriv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLint*(*)>(_a[4]))); break;
        case 44: _t->glGetShaderInfoLog((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLsizei(*)>(_a[3])),(*reinterpret_cast< GLsizei*(*)>(_a[4])),(*reinterpret_cast< char*(*)>(_a[5]))); break;
        case 45: _t->glGetShaderPrecisionFormat((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLint*(*)>(_a[4])),(*reinterpret_cast< GLint*(*)>(_a[5]))); break;
        case 46: _t->glGetShaderSource((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLsizei(*)>(_a[3])),(*reinterpret_cast< GLsizei*(*)>(_a[4])),(*reinterpret_cast< char*(*)>(_a[5]))); break;
        case 47: _t->glGetShaderiv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLint*(*)>(_a[4]))); break;
        case 48: { int _r = _t->glGetUniformLocation((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 49: _t->glGetUniformfv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLint(*)>(_a[3])),(*reinterpret_cast< GLfloat*(*)>(_a[4]))); break;
        case 50: _t->glGetUniformiv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLint(*)>(_a[3])),(*reinterpret_cast< GLint*(*)>(_a[4]))); break;
        case 51: _t->glGetVertexAttribPointerv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< void**(*)>(_a[4]))); break;
        case 52: _t->glGetVertexAttribfv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLfloat*(*)>(_a[4]))); break;
        case 53: _t->glGetVertexAttribiv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLint*(*)>(_a[4]))); break;
        case 54: { GLboolean _r = _t->glIsBuffer((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLboolean*>(_a[0]) = _r; }  break;
        case 55: { GLboolean _r = _t->glIsFramebuffer((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLboolean*>(_a[0]) = _r; }  break;
        case 56: { GLboolean _r = _t->glIsProgram((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLboolean*>(_a[0]) = _r; }  break;
        case 57: { GLboolean _r = _t->glIsRenderbuffer((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLboolean*>(_a[0]) = _r; }  break;
        case 58: { GLboolean _r = _t->glIsShader((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLboolean*>(_a[0]) = _r; }  break;
        case 59: _t->glLinkProgram((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2]))); break;
        case 60: _t->glReleaseShaderCompiler((*reinterpret_cast< QGLFunctions*(*)>(_a[1]))); break;
        case 61: _t->glRenderbufferStorage((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLsizei(*)>(_a[4])),(*reinterpret_cast< GLsizei(*)>(_a[5]))); break;
        case 62: _t->glSampleCoverage((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLclampf(*)>(_a[2])),(*reinterpret_cast< GLboolean(*)>(_a[3]))); break;
        case 63: _t->glShaderBinary((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< const GLuint*(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4])),(*reinterpret_cast< const void*(*)>(_a[5])),(*reinterpret_cast< GLint(*)>(_a[6]))); break;
        case 64: _t->glShaderSource((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLsizei(*)>(_a[3])),(*reinterpret_cast< const char**(*)>(_a[4])),(*reinterpret_cast< const GLint*(*)>(_a[5]))); break;
        case 65: _t->glStencilFuncSeparate((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLint(*)>(_a[4])),(*reinterpret_cast< GLuint(*)>(_a[5]))); break;
        case 66: _t->glStencilMaskSeparate((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3]))); break;
        case 67: _t->glStencilOpSeparate((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4])),(*reinterpret_cast< GLenum(*)>(_a[5]))); break;
        case 68: _t->glUniform1f((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3]))); break;
        case 69: _t->glUniform1fv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLsizei(*)>(_a[3])),(*reinterpret_cast< const GLfloat*(*)>(_a[4]))); break;
        case 70: _t->glUniform1i((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLint(*)>(_a[3]))); break;
        case 71: _t->glUniform1iv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLsizei(*)>(_a[3])),(*reinterpret_cast< const GLint*(*)>(_a[4]))); break;
        case 72: _t->glUniform2f((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4]))); break;
        case 73: _t->glUniform2fv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLsizei(*)>(_a[3])),(*reinterpret_cast< const GLfloat*(*)>(_a[4]))); break;
        case 74: _t->glUniform2i((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLint(*)>(_a[3])),(*reinterpret_cast< GLint(*)>(_a[4]))); break;
        case 75: _t->glUniform2iv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLsizei(*)>(_a[3])),(*reinterpret_cast< const GLint*(*)>(_a[4]))); break;
        case 76: _t->glUniform3f((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4])),(*reinterpret_cast< GLfloat(*)>(_a[5]))); break;
        case 77: _t->glUniform3fv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLsizei(*)>(_a[3])),(*reinterpret_cast< const GLfloat*(*)>(_a[4]))); break;
        case 78: _t->glUniform3i((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLint(*)>(_a[3])),(*reinterpret_cast< GLint(*)>(_a[4])),(*reinterpret_cast< GLint(*)>(_a[5]))); break;
        case 79: _t->glUniform3iv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLsizei(*)>(_a[3])),(*reinterpret_cast< const GLint*(*)>(_a[4]))); break;
        case 80: _t->glUniform4f((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4])),(*reinterpret_cast< GLfloat(*)>(_a[5])),(*reinterpret_cast< GLfloat(*)>(_a[6]))); break;
        case 81: _t->glUniform4fv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLsizei(*)>(_a[3])),(*reinterpret_cast< const GLfloat*(*)>(_a[4]))); break;
        case 82: _t->glUniform4i((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLint(*)>(_a[3])),(*reinterpret_cast< GLint(*)>(_a[4])),(*reinterpret_cast< GLint(*)>(_a[5])),(*reinterpret_cast< GLint(*)>(_a[6]))); break;
        case 83: _t->glUniform4iv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLsizei(*)>(_a[3])),(*reinterpret_cast< const GLint*(*)>(_a[4]))); break;
        case 84: _t->glUniformMatrix2fv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLsizei(*)>(_a[3])),(*reinterpret_cast< GLboolean(*)>(_a[4])),(*reinterpret_cast< const GLfloat*(*)>(_a[5]))); break;
        case 85: _t->glUniformMatrix3fv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLsizei(*)>(_a[3])),(*reinterpret_cast< GLboolean(*)>(_a[4])),(*reinterpret_cast< const GLfloat*(*)>(_a[5]))); break;
        case 86: _t->glUniformMatrix4fv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLint(*)>(_a[2])),(*reinterpret_cast< GLsizei(*)>(_a[3])),(*reinterpret_cast< GLboolean(*)>(_a[4])),(*reinterpret_cast< const GLfloat*(*)>(_a[5]))); break;
        case 87: _t->glUseProgram((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2]))); break;
        case 88: _t->glValidateProgram((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2]))); break;
        case 89: _t->glVertexAttrib1f((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3]))); break;
        case 90: _t->glVertexAttrib1fv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< const GLfloat*(*)>(_a[3]))); break;
        case 91: _t->glVertexAttrib2f((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4]))); break;
        case 92: _t->glVertexAttrib2fv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< const GLfloat*(*)>(_a[3]))); break;
        case 93: _t->glVertexAttrib3f((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4])),(*reinterpret_cast< GLfloat(*)>(_a[5]))); break;
        case 94: _t->glVertexAttrib3fv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< const GLfloat*(*)>(_a[3]))); break;
        case 95: _t->glVertexAttrib4f((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4])),(*reinterpret_cast< GLfloat(*)>(_a[5])),(*reinterpret_cast< GLfloat(*)>(_a[6]))); break;
        case 96: _t->glVertexAttrib4fv((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< const GLfloat*(*)>(_a[3]))); break;
        case 97: _t->glVertexAttribPointer((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])),(*reinterpret_cast< GLint(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4])),(*reinterpret_cast< GLboolean(*)>(_a[5])),(*reinterpret_cast< GLsizei(*)>(_a[6])),(*reinterpret_cast< const void*(*)>(_a[7]))); break;
        case 98: { bool _r = _t->hasOpenGLFeature((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< QGLFunctions::OpenGLFeature(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 99: _t->initializeGLFunctions((*reinterpret_cast< QGLFunctions*(*)>(_a[1])),(*reinterpret_cast< const QGLContext*(*)>(_a[2]))); break;
        case 100: _t->initializeGLFunctions((*reinterpret_cast< QGLFunctions*(*)>(_a[1]))); break;
        case 101: { QGLFunctions::OpenGLFeatures _r = _t->openGLFeatures((*reinterpret_cast< QGLFunctions*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLFunctions::OpenGLFeatures*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGLFunctions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGLFunctions::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGLFunctions,
      qt_meta_data_PythonQtWrapper_QGLFunctions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGLFunctions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGLFunctions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGLFunctions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGLFunctions))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGLFunctions*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGLFunctions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 102)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 102;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QGLPixelBuffer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      72,   48,   32,   31, 0x0a,
     131,  119,   32,   31, 0x2a,
     172,  167,   32,   31, 0x2a,
     230,  198,   32,   31, 0x0a,
     299,  279,   32,   31, 0x2a,
     350,  337,   32,   31, 0x2a,
     382,  378,   31,   31, 0x0a,
     458,  428,  421,   31, 0x0a,
     524,  501,  421,   31, 0x2a,
     591,  560,  421,   31, 0x0a,
     659,  635,  421,   31, 0x2a,
     722,  696,  421,   31, 0x0a,
     789,  764,  759,   31, 0x0a,
     862,  834,   31,   31, 0x0a,
     921,  904,  900,   31, 0x0a,
     946,  904,  759,   31, 0x0a,
    1022,  975,   31,   31, 0x0a,
    1106, 1073,   31,   31, 0x2a,
    1198, 1150,   31,   31, 0x0a,
    1282, 1248,   31,   31, 0x2a,
    1335,  904, 1325,   31, 0x0a,
    1359,  904,  421,   31, 0x0a,
    1410,  904, 1399,   31, 0x0a,
    1434,   31,  759,   31, 0x0a,
    1476,  904,  759,   31, 0x0a,
    1501,  904,  759,   31, 0x0a,
    1554, 1530,  900,   31, 0x0a,
    1624,  904, 1610,   31, 0x0a,
    1653,  904,   31,   31, 0x0a,
    1702,  904, 1696,   31, 0x0a,
    1731,  904, 1724,   31, 0x0a,
    1756,  834,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGLPixelBuffer[] = {
    "PythonQtWrapper_QGLPixelBuffer\0\0"
    "QGLPixelBuffer*\0size,format,shareWidget\0"
    "new_QGLPixelBuffer(QSize,QGLFormat,QGLWidget*)\0"
    "size,format\0new_QGLPixelBuffer(QSize,QGLFormat)\0"
    "size\0new_QGLPixelBuffer(QSize)\0"
    "width,height,format,shareWidget\0"
    "new_QGLPixelBuffer(int,int,QGLFormat,QGLWidget*)\0"
    "width,height,format\0"
    "new_QGLPixelBuffer(int,int,QGLFormat)\0"
    "width,height\0new_QGLPixelBuffer(int,int)\0"
    "obj\0delete_QGLPixelBuffer(QGLPixelBuffer*)\0"
    "GLuint\0theWrappedObject,image,target\0"
    "bindTexture(QGLPixelBuffer*,QImage,GLenum)\0"
    "theWrappedObject,image\0"
    "bindTexture(QGLPixelBuffer*,QImage)\0"
    "theWrappedObject,pixmap,target\0"
    "bindTexture(QGLPixelBuffer*,QPixmap,GLenum)\0"
    "theWrappedObject,pixmap\0"
    "bindTexture(QGLPixelBuffer*,QPixmap)\0"
    "theWrappedObject,fileName\0"
    "bindTexture(QGLPixelBuffer*,QString)\0"
    "bool\0theWrappedObject,texture\0"
    "bindToDynamicTexture(QGLPixelBuffer*,GLuint)\0"
    "theWrappedObject,texture_id\0"
    "deleteTexture(QGLPixelBuffer*,GLuint)\0"
    "int\0theWrappedObject\0devType(QGLPixelBuffer*)\0"
    "doneCurrent(QGLPixelBuffer*)\0"
    "theWrappedObject,point,textureId,textureTarget\0"
    "drawTexture(QGLPixelBuffer*,QPointF,GLuint,GLenum)\0"
    "theWrappedObject,point,textureId\0"
    "drawTexture(QGLPixelBuffer*,QPointF,GLuint)\0"
    "theWrappedObject,target,textureId,textureTarget\0"
    "drawTexture(QGLPixelBuffer*,QRectF,GLuint,GLenum)\0"
    "theWrappedObject,target,textureId\0"
    "drawTexture(QGLPixelBuffer*,QRectF,GLuint)\0"
    "QGLFormat\0format(QGLPixelBuffer*)\0"
    "generateDynamicTexture(QGLPixelBuffer*)\0"
    "Qt::HANDLE\0handle(QGLPixelBuffer*)\0"
    "static_QGLPixelBuffer_hasOpenGLPbuffers()\0"
    "isValid(QGLPixelBuffer*)\0"
    "makeCurrent(QGLPixelBuffer*)\0"
    "theWrappedObject,metric\0"
    "metric(QGLPixelBuffer*,QPaintDevice::PaintDeviceMetric)\0"
    "QPaintEngine*\0paintEngine(QGLPixelBuffer*)\0"
    "releaseFromDynamicTexture(QGLPixelBuffer*)\0"
    "QSize\0size(QGLPixelBuffer*)\0QImage\0"
    "toImage(QGLPixelBuffer*)\0"
    "updateDynamicTexture(QGLPixelBuffer*,GLuint)\0"
};

void PythonQtWrapper_QGLPixelBuffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGLPixelBuffer *_t = static_cast<PythonQtWrapper_QGLPixelBuffer *>(_o);
        switch (_id) {
        case 0: { QGLPixelBuffer* _r = _t->new_QGLPixelBuffer((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< const QGLFormat(*)>(_a[2])),(*reinterpret_cast< QGLWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QGLPixelBuffer**>(_a[0]) = _r; }  break;
        case 1: { QGLPixelBuffer* _r = _t->new_QGLPixelBuffer((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< const QGLFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGLPixelBuffer**>(_a[0]) = _r; }  break;
        case 2: { QGLPixelBuffer* _r = _t->new_QGLPixelBuffer((*reinterpret_cast< const QSize(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLPixelBuffer**>(_a[0]) = _r; }  break;
        case 3: { QGLPixelBuffer* _r = _t->new_QGLPixelBuffer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QGLFormat(*)>(_a[3])),(*reinterpret_cast< QGLWidget*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QGLPixelBuffer**>(_a[0]) = _r; }  break;
        case 4: { QGLPixelBuffer* _r = _t->new_QGLPixelBuffer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QGLFormat(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QGLPixelBuffer**>(_a[0]) = _r; }  break;
        case 5: { QGLPixelBuffer* _r = _t->new_QGLPixelBuffer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGLPixelBuffer**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QGLPixelBuffer((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1]))); break;
        case 7: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 8: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 9: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 10: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 11: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->bindToDynamicTexture((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->deleteTexture((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2]))); break;
        case 14: { int _r = _t->devType((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->doneCurrent((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->drawTexture((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4]))); break;
        case 17: _t->drawTexture((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3]))); break;
        case 18: _t->drawTexture((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4]))); break;
        case 19: _t->drawTexture((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3]))); break;
        case 20: { QGLFormat _r = _t->format((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLFormat*>(_a[0]) = _r; }  break;
        case 21: { GLuint _r = _t->generateDynamicTexture((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 22: { Qt::HANDLE _r = _t->handle((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::HANDLE*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->static_QGLPixelBuffer_hasOpenGLPbuffers();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->isValid((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->makeCurrent((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->metric((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])),(*reinterpret_cast< QPaintDevice::PaintDeviceMetric(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { QPaintEngine* _r = _t->paintEngine((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPaintEngine**>(_a[0]) = _r; }  break;
        case 28: _t->releaseFromDynamicTexture((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1]))); break;
        case 29: { QSize _r = _t->size((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 30: { QImage _r = _t->toImage((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 31: _t->updateDynamicTexture((*reinterpret_cast< QGLPixelBuffer*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGLPixelBuffer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGLPixelBuffer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGLPixelBuffer,
      qt_meta_data_PythonQtWrapper_QGLPixelBuffer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGLPixelBuffer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGLPixelBuffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGLPixelBuffer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGLPixelBuffer))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGLPixelBuffer*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGLPixelBuffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QGLShader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       2,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      50,   38,   27,   26, 0x0a,
     101,   96,   27,   26, 0x2a,
     158,  138,   27,   26, 0x0a,
     235,  222,   27,   26, 0x2a,
     294,  290,   26,   26, 0x0a,
     352,  328,  323,   26, 0x0a,
     393,  328,  323,   26, 0x0a,
     431,  328,  323,   26, 0x0a,
     499,  473,  323,   26, 0x0a,
     537,  222,  323,   26, 0x0a,
     612,   96,  323,   26, 0x2a,
     686,  669,  323,   26, 0x0a,
     717,  669,  709,   26, 0x0a,
     740,  669,  733,   26, 0x0a,
     783,  669,  761,   26, 0x0a,
     817,  669,  806,   26, 0x0a,

 // enums: name, flags, count, data
     840, 0x0,    3,  102,
     854, 0x1,    3,  108,

 // enum data: key, value
     865, uint(PythonQtWrapper_QGLShader::Vertex),
     872, uint(PythonQtWrapper_QGLShader::Fragment),
     881, uint(PythonQtWrapper_QGLShader::Geometry),
     865, uint(PythonQtWrapper_QGLShader::Vertex),
     872, uint(PythonQtWrapper_QGLShader::Fragment),
     881, uint(PythonQtWrapper_QGLShader::Geometry),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGLShader[] = {
    "PythonQtWrapper_QGLShader\0\0QGLShader*\0"
    "type,parent\0new_QGLShader(QGLShader::ShaderType,QObject*)\0"
    "type\0new_QGLShader(QGLShader::ShaderType)\0"
    "type,context,parent\0"
    "new_QGLShader(QGLShader::ShaderType,const QGLContext*,QObject*)\0"
    "type,context\0"
    "new_QGLShader(QGLShader::ShaderType,const QGLContext*)\0"
    "obj\0delete_QGLShader(QGLShader*)\0bool\0"
    "theWrappedObject,source\0"
    "compileSourceCode(QGLShader*,QByteArray)\0"
    "compileSourceCode(QGLShader*,QString)\0"
    "compileSourceCode(QGLShader*,const char*)\0"
    "theWrappedObject,fileName\0"
    "compileSourceFile(QGLShader*,QString)\0"
    "static_QGLShader_hasOpenGLShaders(QGLShader::ShaderType,const QGLConte"
    "xt*)\0"
    "static_QGLShader_hasOpenGLShaders(QGLShader::ShaderType)\0"
    "theWrappedObject\0isCompiled(QGLShader*)\0"
    "QString\0log(QGLShader*)\0GLuint\0"
    "shaderId(QGLShader*)\0QGLShader::ShaderType\0"
    "shaderType(QGLShader*)\0QByteArray\0"
    "sourceCode(QGLShader*)\0ShaderTypeBit\0"
    "ShaderType\0Vertex\0Fragment\0Geometry\0"
};

void PythonQtWrapper_QGLShader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGLShader *_t = static_cast<PythonQtWrapper_QGLShader *>(_o);
        switch (_id) {
        case 0: { QGLShader* _r = _t->new_QGLShader((*reinterpret_cast< QGLShader::ShaderType(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGLShader**>(_a[0]) = _r; }  break;
        case 1: { QGLShader* _r = _t->new_QGLShader((*reinterpret_cast< QGLShader::ShaderType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLShader**>(_a[0]) = _r; }  break;
        case 2: { QGLShader* _r = _t->new_QGLShader((*reinterpret_cast< QGLShader::ShaderType(*)>(_a[1])),(*reinterpret_cast< const QGLContext*(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QGLShader**>(_a[0]) = _r; }  break;
        case 3: { QGLShader* _r = _t->new_QGLShader((*reinterpret_cast< QGLShader::ShaderType(*)>(_a[1])),(*reinterpret_cast< const QGLContext*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGLShader**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QGLShader((*reinterpret_cast< QGLShader*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->compileSourceCode((*reinterpret_cast< QGLShader*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->compileSourceCode((*reinterpret_cast< QGLShader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->compileSourceCode((*reinterpret_cast< QGLShader*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->compileSourceFile((*reinterpret_cast< QGLShader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->static_QGLShader_hasOpenGLShaders((*reinterpret_cast< QGLShader::ShaderType(*)>(_a[1])),(*reinterpret_cast< const QGLContext*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->static_QGLShader_hasOpenGLShaders((*reinterpret_cast< QGLShader::ShaderType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isCompiled((*reinterpret_cast< QGLShader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->log((*reinterpret_cast< QGLShader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { GLuint _r = _t->shaderId((*reinterpret_cast< QGLShader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 14: { QGLShader::ShaderType _r = _t->shaderType((*reinterpret_cast< QGLShader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLShader::ShaderType*>(_a[0]) = _r; }  break;
        case 15: { QByteArray _r = _t->sourceCode((*reinterpret_cast< QGLShader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGLShader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGLShader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGLShader,
      qt_meta_data_PythonQtWrapper_QGLShader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGLShader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGLShader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGLShader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGLShader))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGLShader*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGLShader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGLShaderProgram[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
     126,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      59,   52,   34,   33, 0x0a,
      90,   33,   34,   33, 0x2a,
     128,  113,   34,   33, 0x0a,
     185,  177,   34,   33, 0x2a,
     229,  225,   33,   33, 0x0a,
     301,  277,  272,   33, 0x0a,
     370,  341,  272,   33, 0x0a,
     446,  341,  272,   33, 0x0a,
     519,  341,  272,   33, 0x0a,
     627,  596,  272,   33, 0x0a,
     726,  704,  700,   33, 0x0a,
     774,  704,  700,   33, 0x0a,
     819,  704,  700,   33, 0x0a,
     885,  868,  272,   33, 0x0a,
     940,  909,   33,   33, 0x0a,
     996,  909,   33,   33, 0x0a,
    1049,  909,   33,   33, 0x0a,
    1106,  704,   33,   33, 0x0a,
    1185, 1159,   33,   33, 0x0a,
    1230,  704,   33,   33, 0x0a,
    1282, 1159,   33,   33, 0x0a,
    1333,  868, 1326,   33, 0x0a,
    1370,  868, 1326,   33, 0x0a,
    1408,  868,  700,   33, 0x0a,
    1453,  177,  272,   33, 0x0a,
    1520,   33,  272,   33, 0x2a,
    1570,  868,  272,   33, 0x0a,
    1598,  868,  272,   33, 0x0a,
    1630,  868, 1622,   33, 0x0a,
    1653,  868,  700,   33, 0x0a,
    1705,  868, 1698,   33, 0x0a,
    1734,  868,   33,   33, 0x0a,
    1761,  868,   33,   33, 0x0a,
    1797,  277,   33,   33, 0x0a,
    1891, 1840,   33,   33, 0x0a,
    2011, 1967,   33,   33, 0x2a,
    2129, 2083,   33,   33, 0x0a,
    2240, 2201,   33,   33, 0x2a,
    2344, 2308,   33,   33, 0x0a,
    2443, 2414,   33,   33, 0x2a,
    2509, 2308,   33,   33, 0x0a,
    2579, 2414,   33,   33, 0x2a,
    2645, 2308,   33,   33, 0x0a,
    2715, 2414,   33,   33, 0x2a,
    2836, 2781,   33,   33, 0x0a,
    2952, 2904,   33,   33, 0x2a,
    3066, 3016,   33,   33, 0x0a,
    3173, 3130,   33,   33, 0x2a,
    3273, 3233,   33,   33, 0x0a,
    3368, 3335,   33,   33, 0x2a,
    3426, 3233,   33,   33, 0x0a,
    3488, 3335,   33,   33, 0x2a,
    3546, 3233,   33,   33, 0x0a,
    3608, 3335,   33,   33, 0x2a,
    3717, 3666,   33,   33, 0x0a,
    3830, 3786,   33,   33, 0x2a,
    3950, 3895,   33,   33, 0x0a,
    4059, 4011,   33,   33, 0x2a,
    4144, 4116,   33,   33, 0x0a,
    4227, 4201,   33,   33, 0x0a,
    4320, 4292,   33,   33, 0x0a,
    4423, 4393,   33,   33, 0x0a,
    4546, 4504,   33,   33, 0x0a,
    4618, 4116,   33,   33, 0x0a,
    4674, 4116,   33,   33, 0x0a,
    4733, 4116,   33,   33, 0x0a,
    4792, 4116,   33,   33, 0x0a,
    4883, 4851,   33,   33, 0x0a,
    4962, 4932,   33,   33, 0x0a,
    5051, 5019,   33,   33, 0x0a,
    5150, 5116,   33,   33, 0x0a,
    5269, 5223,   33,   33, 0x0a,
    5333, 4851,   33,   33, 0x0a,
    5381, 4851,   33,   33, 0x0a,
    5432, 4851,   33,   33, 0x0a,
    5483, 4851,   33,   33, 0x0a,
    5561, 5534,   33,   33, 0x0a,
    5636, 5608,   33,   33, 0x0a,
    5707, 5684,   33,   33, 0x0a,
    5759, 4116,   33,   33, 0x0a,
    5814, 4201,   33,   33, 0x0a,
    5877, 4292,   33,   33, 0x0a,
    5948, 4393,   33,   33, 0x0a,
    6027, 4116,   33,   33, 0x0a,
    6108, 6080,   33,   33, 0x0a,
    6162, 4116,   33,   33, 0x0a,
    6248, 6220,   33,   33, 0x0a,
    6302, 6220,   33,   33, 0x0a,
    6384, 6357,   33,   33, 0x0a,
    6437, 6357,   33,   33, 0x0a,
    6491, 4116,   33,   33, 0x0a,
    6549, 4116,   33,   33, 0x0a,
    6606, 4116,   33,   33, 0x0a,
    6663, 4116,   33,   33, 0x0a,
    6720, 4851,   33,   33, 0x0a,
    6767, 4932,   33,   33, 0x0a,
    6822, 5019,   33,   33, 0x0a,
    6885, 5116,   33,   33, 0x0a,
    6956, 4851,   33,   33, 0x0a,
    7033, 7001,   33,   33, 0x0a,
    7079, 4851,   33,   33, 0x0a,
    7161, 7129,   33,   33, 0x0a,
    7207, 7129,   33,   33, 0x0a,
    7285, 7254,   33,   33, 0x0a,
    7330, 7254,   33,   33, 0x0a,
    7376, 4851,   33,   33, 0x0a,
    7426, 4851,   33,   33, 0x0a,
    7475, 4851,   33,   33, 0x0a,
    7524, 4851,   33,   33, 0x0a,
    7618, 7573,   33,   33, 0x0a,
    7728, 7693,   33,   33, 0x0a,
    7797, 7693,   33,   33, 0x0a,
    7871, 7693,   33,   33, 0x0a,
    7944, 7693,   33,   33, 0x0a,
    8017, 7693,   33,   33, 0x0a,
    8139, 8090,   33,   33, 0x0a,
    8245, 8206,   33,   33, 0x0a,
    8306, 8206,   33,   33, 0x0a,
    8368, 8206,   33,   33, 0x0a,
    8434, 8206,   33,   33, 0x0a,
    8499, 8206,   33,   33, 0x0a,
    8564, 8206,   33,   33, 0x0a,
    8647,  868, 8629,   33, 0x0a,
    8674,  704,  700,   33, 0x0a,
    8720,  704,  700,   33, 0x0a,
    8763,  704,  700,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGLShaderProgram[] = {
    "PythonQtWrapper_QGLShaderProgram\0\0"
    "QGLShaderProgram*\0parent\0"
    "new_QGLShaderProgram(QObject*)\0"
    "new_QGLShaderProgram()\0context,parent\0"
    "new_QGLShaderProgram(const QGLContext*,QObject*)\0"
    "context\0new_QGLShaderProgram(const QGLContext*)\0"
    "obj\0delete_QGLShaderProgram(QGLShaderProgram*)\0"
    "bool\0theWrappedObject,shader\0"
    "addShader(QGLShaderProgram*,QGLShader*)\0"
    "theWrappedObject,type,source\0"
    "addShaderFromSourceCode(QGLShaderProgram*,QGLShader::ShaderType,QByteA"
    "rray)\0"
    "addShaderFromSourceCode(QGLShaderProgram*,QGLShader::ShaderType,QStrin"
    "g)\0"
    "addShaderFromSourceCode(QGLShaderProgram*,QGLShader::ShaderType,const "
    "char*)\0"
    "theWrappedObject,type,fileName\0"
    "addShaderFromSourceFile(QGLShaderProgram*,QGLShader::ShaderType,QStrin"
    "g)\0"
    "int\0theWrappedObject,name\0"
    "attributeLocation(QGLShaderProgram*,QByteArray)\0"
    "attributeLocation(QGLShaderProgram*,QString)\0"
    "attributeLocation(QGLShaderProgram*,const char*)\0"
    "theWrappedObject\0bind(QGLShaderProgram*)\0"
    "theWrappedObject,name,location\0"
    "bindAttributeLocation(QGLShaderProgram*,QByteArray,int)\0"
    "bindAttributeLocation(QGLShaderProgram*,QString,int)\0"
    "bindAttributeLocation(QGLShaderProgram*,const char*,int)\0"
    "disableAttributeArray(QGLShaderProgram*,const char*)\0"
    "theWrappedObject,location\0"
    "disableAttributeArray(QGLShaderProgram*,int)\0"
    "enableAttributeArray(QGLShaderProgram*,const char*)\0"
    "enableAttributeArray(QGLShaderProgram*,int)\0"
    "GLenum\0geometryInputType(QGLShaderProgram*)\0"
    "geometryOutputType(QGLShaderProgram*)\0"
    "geometryOutputVertexCount(QGLShaderProgram*)\0"
    "static_QGLShaderProgram_hasOpenGLShaderPrograms(const QGLContext*)\0"
    "static_QGLShaderProgram_hasOpenGLShaderPrograms()\0"
    "isLinked(QGLShaderProgram*)\0"
    "link(QGLShaderProgram*)\0QString\0"
    "log(QGLShaderProgram*)\0"
    "maxGeometryOutputVertices(QGLShaderProgram*)\0"
    "GLuint\0programId(QGLShaderProgram*)\0"
    "release(QGLShaderProgram*)\0"
    "removeAllShaders(QGLShaderProgram*)\0"
    "removeShader(QGLShaderProgram*,QGLShader*)\0"
    "theWrappedObject,name,type,values,tupleSize,stride\0"
    "setAttributeArray(QGLShaderProgram*,const char*,GLenum,const void*,int"
    ",int)\0"
    "theWrappedObject,name,type,values,tupleSize\0"
    "setAttributeArray(QGLShaderProgram*,const char*,GLenum,const void*,int"
    ")\0"
    "theWrappedObject,name,values,tupleSize,stride\0"
    "setAttributeArray(QGLShaderProgram*,const char*,const GLfloat*,int,int"
    ")\0"
    "theWrappedObject,name,values,tupleSize\0"
    "setAttributeArray(QGLShaderProgram*,const char*,const GLfloat*,int)\0"
    "theWrappedObject,name,values,stride\0"
    "setAttributeArray(QGLShaderProgram*,const char*,const QVector2D*,int)\0"
    "theWrappedObject,name,values\0"
    "setAttributeArray(QGLShaderProgram*,const char*,const QVector2D*)\0"
    "setAttributeArray(QGLShaderProgram*,const char*,const QVector3D*,int)\0"
    "setAttributeArray(QGLShaderProgram*,const char*,const QVector3D*)\0"
    "setAttributeArray(QGLShaderProgram*,const char*,const QVector4D*,int)\0"
    "setAttributeArray(QGLShaderProgram*,const char*,const QVector4D*)\0"
    "theWrappedObject,location,type,values,tupleSize,stride\0"
    "setAttributeArray(QGLShaderProgram*,int,GLenum,const void*,int,int)\0"
    "theWrappedObject,location,type,values,tupleSize\0"
    "setAttributeArray(QGLShaderProgram*,int,GLenum,const void*,int)\0"
    "theWrappedObject,location,values,tupleSize,stride\0"
    "setAttributeArray(QGLShaderProgram*,int,const GLfloat*,int,int)\0"
    "theWrappedObject,location,values,tupleSize\0"
    "setAttributeArray(QGLShaderProgram*,int,const GLfloat*,int)\0"
    "theWrappedObject,location,values,stride\0"
    "setAttributeArray(QGLShaderProgram*,int,const QVector2D*,int)\0"
    "theWrappedObject,location,values\0"
    "setAttributeArray(QGLShaderProgram*,int,const QVector2D*)\0"
    "setAttributeArray(QGLShaderProgram*,int,const QVector3D*,int)\0"
    "setAttributeArray(QGLShaderProgram*,int,const QVector3D*)\0"
    "setAttributeArray(QGLShaderProgram*,int,const QVector4D*,int)\0"
    "setAttributeArray(QGLShaderProgram*,int,const QVector4D*)\0"
    "theWrappedObject,name,type,offset,tupleSize,stride\0"
    "setAttributeBuffer(QGLShaderProgram*,const char*,GLenum,int,int,int)\0"
    "theWrappedObject,name,type,offset,tupleSize\0"
    "setAttributeBuffer(QGLShaderProgram*,const char*,GLenum,int,int)\0"
    "theWrappedObject,location,type,offset,tupleSize,stride\0"
    "setAttributeBuffer(QGLShaderProgram*,int,GLenum,int,int,int)\0"
    "theWrappedObject,location,type,offset,tupleSize\0"
    "setAttributeBuffer(QGLShaderProgram*,int,GLenum,int,int)\0"
    "theWrappedObject,name,value\0"
    "setAttributeValue(QGLShaderProgram*,const char*,GLfloat)\0"
    "theWrappedObject,name,x,y\0"
    "setAttributeValue(QGLShaderProgram*,const char*,GLfloat,GLfloat)\0"
    "theWrappedObject,name,x,y,z\0"
    "setAttributeValue(QGLShaderProgram*,const char*,GLfloat,GLfloat,GLfloa"
    "t)\0"
    "theWrappedObject,name,x,y,z,w\0"
    "setAttributeValue(QGLShaderProgram*,const char*,GLfloat,GLfloat,GLfloa"
    "t,GLfloat)\0"
    "theWrappedObject,name,values,columns,rows\0"
    "setAttributeValue(QGLShaderProgram*,const char*,const GLfloat*,int,int"
    ")\0"
    "setAttributeValue(QGLShaderProgram*,const char*,QColor)\0"
    "setAttributeValue(QGLShaderProgram*,const char*,QVector2D)\0"
    "setAttributeValue(QGLShaderProgram*,const char*,QVector3D)\0"
    "setAttributeValue(QGLShaderProgram*,const char*,QVector4D)\0"
    "theWrappedObject,location,value\0"
    "setAttributeValue(QGLShaderProgram*,int,GLfloat)\0"
    "theWrappedObject,location,x,y\0"
    "setAttributeValue(QGLShaderProgram*,int,GLfloat,GLfloat)\0"
    "theWrappedObject,location,x,y,z\0"
    "setAttributeValue(QGLShaderProgram*,int,GLfloat,GLfloat,GLfloat)\0"
    "theWrappedObject,location,x,y,z,w\0"
    "setAttributeValue(QGLShaderProgram*,int,GLfloat,GLfloat,GLfloat,GLfloa"
    "t)\0"
    "theWrappedObject,location,values,columns,rows\0"
    "setAttributeValue(QGLShaderProgram*,int,const GLfloat*,int,int)\0"
    "setAttributeValue(QGLShaderProgram*,int,QColor)\0"
    "setAttributeValue(QGLShaderProgram*,int,QVector2D)\0"
    "setAttributeValue(QGLShaderProgram*,int,QVector3D)\0"
    "setAttributeValue(QGLShaderProgram*,int,QVector4D)\0"
    "theWrappedObject,inputType\0"
    "setGeometryInputType(QGLShaderProgram*,GLenum)\0"
    "theWrappedObject,outputType\0"
    "setGeometryOutputType(QGLShaderProgram*,GLenum)\0"
    "theWrappedObject,count\0"
    "setGeometryOutputVertexCount(QGLShaderProgram*,int)\0"
    "setUniformValue(QGLShaderProgram*,const char*,GLfloat)\0"
    "setUniformValue(QGLShaderProgram*,const char*,GLfloat,GLfloat)\0"
    "setUniformValue(QGLShaderProgram*,const char*,GLfloat,GLfloat,GLfloat)\0"
    "setUniformValue(QGLShaderProgram*,const char*,GLfloat,GLfloat,GLfloat,"
    "GLfloat)\0"
    "setUniformValue(QGLShaderProgram*,const char*,GLint)\0"
    "theWrappedObject,name,color\0"
    "setUniformValue(QGLShaderProgram*,const char*,QColor)\0"
    "setUniformValue(QGLShaderProgram*,const char*,QMatrix4x4)\0"
    "theWrappedObject,name,point\0"
    "setUniformValue(QGLShaderProgram*,const char*,QPoint)\0"
    "setUniformValue(QGLShaderProgram*,const char*,QPointF)\0"
    "theWrappedObject,name,size\0"
    "setUniformValue(QGLShaderProgram*,const char*,QSize)\0"
    "setUniformValue(QGLShaderProgram*,const char*,QSizeF)\0"
    "setUniformValue(QGLShaderProgram*,const char*,QTransform)\0"
    "setUniformValue(QGLShaderProgram*,const char*,QVector2D)\0"
    "setUniformValue(QGLShaderProgram*,const char*,QVector3D)\0"
    "setUniformValue(QGLShaderProgram*,const char*,QVector4D)\0"
    "setUniformValue(QGLShaderProgram*,int,GLfloat)\0"
    "setUniformValue(QGLShaderProgram*,int,GLfloat,GLfloat)\0"
    "setUniformValue(QGLShaderProgram*,int,GLfloat,GLfloat,GLfloat)\0"
    "setUniformValue(QGLShaderProgram*,int,GLfloat,GLfloat,GLfloat,GLfloat)\0"
    "setUniformValue(QGLShaderProgram*,int,GLint)\0"
    "theWrappedObject,location,color\0"
    "setUniformValue(QGLShaderProgram*,int,QColor)\0"
    "setUniformValue(QGLShaderProgram*,int,QMatrix4x4)\0"
    "theWrappedObject,location,point\0"
    "setUniformValue(QGLShaderProgram*,int,QPoint)\0"
    "setUniformValue(QGLShaderProgram*,int,QPointF)\0"
    "theWrappedObject,location,size\0"
    "setUniformValue(QGLShaderProgram*,int,QSize)\0"
    "setUniformValue(QGLShaderProgram*,int,QSizeF)\0"
    "setUniformValue(QGLShaderProgram*,int,QTransform)\0"
    "setUniformValue(QGLShaderProgram*,int,QVector2D)\0"
    "setUniformValue(QGLShaderProgram*,int,QVector3D)\0"
    "setUniformValue(QGLShaderProgram*,int,QVector4D)\0"
    "theWrappedObject,name,values,count,tupleSize\0"
    "setUniformValueArray(QGLShaderProgram*,const char*,const GLfloat*,int,"
    "int)\0"
    "theWrappedObject,name,values,count\0"
    "setUniformValueArray(QGLShaderProgram*,const char*,const GLint*,int)\0"
    "setUniformValueArray(QGLShaderProgram*,const char*,const QMatrix4x4*,i"
    "nt)\0"
    "setUniformValueArray(QGLShaderProgram*,const char*,const QVector2D*,in"
    "t)\0"
    "setUniformValueArray(QGLShaderProgram*,const char*,const QVector3D*,in"
    "t)\0"
    "setUniformValueArray(QGLShaderProgram*,const char*,const QVector4D*,in"
    "t)\0"
    "theWrappedObject,location,values,count,tupleSize\0"
    "setUniformValueArray(QGLShaderProgram*,int,const GLfloat*,int,int)\0"
    "theWrappedObject,location,values,count\0"
    "setUniformValueArray(QGLShaderProgram*,int,const GLint*,int)\0"
    "setUniformValueArray(QGLShaderProgram*,int,const GLuint*,int)\0"
    "setUniformValueArray(QGLShaderProgram*,int,const QMatrix4x4*,int)\0"
    "setUniformValueArray(QGLShaderProgram*,int,const QVector2D*,int)\0"
    "setUniformValueArray(QGLShaderProgram*,int,const QVector3D*,int)\0"
    "setUniformValueArray(QGLShaderProgram*,int,const QVector4D*,int)\0"
    "QList<QGLShader*>\0shaders(QGLShaderProgram*)\0"
    "uniformLocation(QGLShaderProgram*,QByteArray)\0"
    "uniformLocation(QGLShaderProgram*,QString)\0"
    "uniformLocation(QGLShaderProgram*,const char*)\0"
};

void PythonQtWrapper_QGLShaderProgram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGLShaderProgram *_t = static_cast<PythonQtWrapper_QGLShaderProgram *>(_o);
        switch (_id) {
        case 0: { QGLShaderProgram* _r = _t->new_QGLShaderProgram((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLShaderProgram**>(_a[0]) = _r; }  break;
        case 1: { QGLShaderProgram* _r = _t->new_QGLShaderProgram();
            if (_a[0]) *reinterpret_cast< QGLShaderProgram**>(_a[0]) = _r; }  break;
        case 2: { QGLShaderProgram* _r = _t->new_QGLShaderProgram((*reinterpret_cast< const QGLContext*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGLShaderProgram**>(_a[0]) = _r; }  break;
        case 3: { QGLShaderProgram* _r = _t->new_QGLShaderProgram((*reinterpret_cast< const QGLContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLShaderProgram**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QGLShaderProgram((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->addShader((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< QGLShader*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->addShaderFromSourceCode((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< QGLShader::ShaderType(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->addShaderFromSourceCode((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< QGLShader::ShaderType(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->addShaderFromSourceCode((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< QGLShader::ShaderType(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->addShaderFromSourceFile((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< QGLShader::ShaderType(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->attributeLocation((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->attributeLocation((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->attributeLocation((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->bind((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->bindAttributeLocation((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->bindAttributeLocation((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: _t->bindAttributeLocation((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 17: _t->disableAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 18: _t->disableAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->enableAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 20: _t->enableAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: { GLenum _r = _t->geometryInputType((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GLenum*>(_a[0]) = _r; }  break;
        case 22: { GLenum _r = _t->geometryOutputType((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GLenum*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->geometryOutputVertexCount((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->static_QGLShaderProgram_hasOpenGLShaderPrograms((*reinterpret_cast< const QGLContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->static_QGLShaderProgram_hasOpenGLShaderPrograms();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->isLinked((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->link((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { QString _r = _t->log((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 29: { int _r = _t->maxGeometryOutputVertices((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 30: { GLuint _r = _t->programId((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 31: _t->release((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1]))); break;
        case 32: _t->removeAllShaders((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1]))); break;
        case 33: _t->removeShader((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< QGLShader*(*)>(_a[2]))); break;
        case 34: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< const void*(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 35: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< const void*(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 36: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const GLfloat*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 37: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const GLfloat*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 38: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QVector2D*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 39: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QVector2D*(*)>(_a[3]))); break;
        case 40: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QVector3D*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 41: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QVector3D*(*)>(_a[3]))); break;
        case 42: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QVector4D*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 43: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QVector4D*(*)>(_a[3]))); break;
        case 44: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< const void*(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 45: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< const void*(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 46: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const GLfloat*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 47: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const GLfloat*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 48: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector2D*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 49: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector2D*(*)>(_a[3]))); break;
        case 50: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector3D*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 51: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector3D*(*)>(_a[3]))); break;
        case 52: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector4D*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 53: _t->setAttributeArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector4D*(*)>(_a[3]))); break;
        case 54: _t->setAttributeBuffer((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 55: _t->setAttributeBuffer((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 56: _t->setAttributeBuffer((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 57: _t->setAttributeBuffer((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 58: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3]))); break;
        case 59: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4]))); break;
        case 60: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4])),(*reinterpret_cast< GLfloat(*)>(_a[5]))); break;
        case 61: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4])),(*reinterpret_cast< GLfloat(*)>(_a[5])),(*reinterpret_cast< GLfloat(*)>(_a[6]))); break;
        case 62: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const GLfloat*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 63: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 64: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QVector2D(*)>(_a[3]))); break;
        case 65: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QVector3D(*)>(_a[3]))); break;
        case 66: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QVector4D(*)>(_a[3]))); break;
        case 67: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3]))); break;
        case 68: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4]))); break;
        case 69: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4])),(*reinterpret_cast< GLfloat(*)>(_a[5]))); break;
        case 70: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4])),(*reinterpret_cast< GLfloat(*)>(_a[5])),(*reinterpret_cast< GLfloat(*)>(_a[6]))); break;
        case 71: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const GLfloat*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 72: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 73: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector2D(*)>(_a[3]))); break;
        case 74: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector3D(*)>(_a[3]))); break;
        case 75: _t->setAttributeValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector4D(*)>(_a[3]))); break;
        case 76: _t->setGeometryInputType((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2]))); break;
        case 77: _t->setGeometryOutputType((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< GLenum(*)>(_a[2]))); break;
        case 78: _t->setGeometryOutputVertexCount((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 79: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3]))); break;
        case 80: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4]))); break;
        case 81: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4])),(*reinterpret_cast< GLfloat(*)>(_a[5]))); break;
        case 82: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4])),(*reinterpret_cast< GLfloat(*)>(_a[5])),(*reinterpret_cast< GLfloat(*)>(_a[6]))); break;
        case 83: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< GLint(*)>(_a[3]))); break;
        case 84: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 85: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QMatrix4x4(*)>(_a[3]))); break;
        case 86: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3]))); break;
        case 87: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3]))); break;
        case 88: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QSize(*)>(_a[3]))); break;
        case 89: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QSizeF(*)>(_a[3]))); break;
        case 90: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QTransform(*)>(_a[3]))); break;
        case 91: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QVector2D(*)>(_a[3]))); break;
        case 92: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QVector3D(*)>(_a[3]))); break;
        case 93: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QVector4D(*)>(_a[3]))); break;
        case 94: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3]))); break;
        case 95: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4]))); break;
        case 96: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4])),(*reinterpret_cast< GLfloat(*)>(_a[5]))); break;
        case 97: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< GLfloat(*)>(_a[3])),(*reinterpret_cast< GLfloat(*)>(_a[4])),(*reinterpret_cast< GLfloat(*)>(_a[5])),(*reinterpret_cast< GLfloat(*)>(_a[6]))); break;
        case 98: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< GLint(*)>(_a[3]))); break;
        case 99: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 100: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QMatrix4x4(*)>(_a[3]))); break;
        case 101: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3]))); break;
        case 102: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3]))); break;
        case 103: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSize(*)>(_a[3]))); break;
        case 104: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSizeF(*)>(_a[3]))); break;
        case 105: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QTransform(*)>(_a[3]))); break;
        case 106: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector2D(*)>(_a[3]))); break;
        case 107: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector3D(*)>(_a[3]))); break;
        case 108: _t->setUniformValue((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector4D(*)>(_a[3]))); break;
        case 109: _t->setUniformValueArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const GLfloat*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 110: _t->setUniformValueArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const GLint*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 111: _t->setUniformValueArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QMatrix4x4*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 112: _t->setUniformValueArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QVector2D*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 113: _t->setUniformValueArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QVector3D*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 114: _t->setUniformValueArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QVector4D*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 115: _t->setUniformValueArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const GLfloat*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 116: _t->setUniformValueArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const GLint*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 117: _t->setUniformValueArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const GLuint*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 118: _t->setUniformValueArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QMatrix4x4*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 119: _t->setUniformValueArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector2D*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 120: _t->setUniformValueArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector3D*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 121: _t->setUniformValueArray((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector4D*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 122: { QList<QGLShader*> _r = _t->shaders((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGLShader*>*>(_a[0]) = _r; }  break;
        case 123: { int _r = _t->uniformLocation((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 124: { int _r = _t->uniformLocation((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 125: { int _r = _t->uniformLocation((*reinterpret_cast< QGLShaderProgram*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGLShaderProgram::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGLShaderProgram::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGLShaderProgram,
      qt_meta_data_PythonQtWrapper_QGLShaderProgram, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGLShaderProgram::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGLShaderProgram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGLShaderProgram::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGLShaderProgram))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGLShaderProgram*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGLShaderProgram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 126)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 126;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QGLWidget[] = {

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
      67,   38,   27,   26, 0x0a,
     163,  136,   27,   26, 0x2a,
     231,  216,   27,   26, 0x2a,
     275,  267,   27,   26, 0x2a,
     323,  302,   27,   26, 0x0a,
     399,  380,   27,   26, 0x2a,
     447,  440,   27,   26, 0x2a,
     471,   26,   27,   26, 0x2a,
     515,  487,   27,   26, 0x0a,
     608,  582,   27,   26, 0x2a,
     673,  659,   27,   26, 0x2a,
     714,  707,   27,   26, 0x2a,
     743,  739,   26,   26, 0x0a,
     794,  777,  772,   26, 0x0a,
     865,  828,  821,   26, 0x0a,
     939,  909,  821,   26, 0x2a,
    1000,  977,  821,   26, 0x2a,
    1076, 1031,  821,   26, 0x0a,
    1182, 1144,  821,   26, 0x0a,
    1258, 1227,  821,   26, 0x2a,
    1321, 1297,  821,   26, 0x2a,
    1399, 1353,  821,   26, 0x0a,
    1494, 1468,  821,   26, 0x0a,
    1545,  777, 1526,   26, 0x0a,
    1584,  777, 1566,   26, 0x0a,
    1615, 1611, 1604,   26, 0x0a,
    1681, 1658,   26,   26, 0x0a,
    1714,  777,   26,   26, 0x0a,
    1738,  777,  772,   26, 0x0a,
    1810, 1763,   26,   26, 0x0a,
    1889, 1856,   26,   26, 0x2a,
    1976, 1928,   26,   26, 0x0a,
    2055, 2021,   26,   26, 0x2a,
    2117, 2093,  772,   26, 0x0a,
    2153,  777, 2143,   26, 0x0a,
    2172,  777,   26,   26, 0x0a,
    2191,  777,   26,   26, 0x0a,
    2237, 2210, 1604,   26, 0x0a,
    2270,  777, 1604,   26, 0x2a,
    2298,  777,   26,   26, 0x0a,
    2323,  777,   26,   26, 0x0a,
    2355,  777,  772,   26, 0x0a,
    2377,  777,  772,   26, 0x0a,
    2397,  777,   26,   26, 0x0a,
    2421,  777,   26,   26, 0x0a,
    2452,  777, 1566,   26, 0x0a,
    2493,  777, 2479,   26, 0x0a,
    2517, 2093,   26,   26, 0x0a,
    2553,  777,   26,   26, 0x0a,
    2573,  777,   26,   26, 0x0a,
    2619, 2600,   26,   26, 0x0a,
    2652, 2600,   26,   26, 0x0a,
    2720, 2688, 2680,   26, 0x0a,
    2779, 2758, 2680,   26, 0x2a,
    2831, 2812, 2680,   26, 0x2a,
    2860,  777, 2680,   26, 0x2a,
    2925, 2885,   26,   26, 0x0a,
    3018, 2987,   26,   26, 0x2a,
    3103, 3076,   26,   26, 0x2a,
    3193, 3155,   26,   26, 0x0a,
    3271, 3242,   26,   26, 0x2a,
    3341, 3316,   26,   26, 0x2a,
    3380, 2093,   26,   26, 0x0a,
    3418, 2758,   26,   26, 0x0a,
    3447, 2758,   26,   26, 0x0a,
    3503, 3483,   26,   26, 0x0a,
    3559, 3538,   26,   26, 0x0a,
    3595,  777,   26,   26, 0x0a,
    3619,  777,   26,   26, 0x0a,
    3640,  777,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGLWidget[] = {
    "PythonQtWrapper_QGLWidget\0\0QGLWidget*\0"
    "context,parent,shareWidget,f\0"
    "new_QGLWidget(QGLContext*,QWidget*,const QGLWidget*,Qt::WindowFlags)\0"
    "context,parent,shareWidget\0"
    "new_QGLWidget(QGLContext*,QWidget*,const QGLWidget*)\0"
    "context,parent\0new_QGLWidget(QGLContext*,QWidget*)\0"
    "context\0new_QGLWidget(QGLContext*)\0"
    "parent,shareWidget,f\0"
    "new_QGLWidget(QWidget*,const QGLWidget*,Qt::WindowFlags)\0"
    "parent,shareWidget\0"
    "new_QGLWidget(QWidget*,const QGLWidget*)\0"
    "parent\0new_QGLWidget(QWidget*)\0"
    "new_QGLWidget()\0format,parent,shareWidget,f\0"
    "new_QGLWidget(QGLFormat,QWidget*,const QGLWidget*,Qt::WindowFlags)\0"
    "format,parent,shareWidget\0"
    "new_QGLWidget(QGLFormat,QWidget*,const QGLWidget*)\0"
    "format,parent\0new_QGLWidget(QGLFormat,QWidget*)\0"
    "format\0new_QGLWidget(QGLFormat)\0obj\0"
    "delete_QGLWidget(QGLWidget*)\0bool\0"
    "theWrappedObject\0autoBufferSwap(QGLWidget*)\0"
    "GLuint\0theWrappedObject,image,target,format\0"
    "bindTexture(QGLWidget*,QImage,GLenum,GLint)\0"
    "theWrappedObject,image,target\0"
    "bindTexture(QGLWidget*,QImage,GLenum)\0"
    "theWrappedObject,image\0"
    "bindTexture(QGLWidget*,QImage)\0"
    "theWrappedObject,image,target,format,options\0"
    "bindTexture(QGLWidget*,QImage,GLenum,GLint,QGLContext::BindOptions)\0"
    "theWrappedObject,pixmap,target,format\0"
    "bindTexture(QGLWidget*,QPixmap,GLenum,GLint)\0"
    "theWrappedObject,pixmap,target\0"
    "bindTexture(QGLWidget*,QPixmap,GLenum)\0"
    "theWrappedObject,pixmap\0"
    "bindTexture(QGLWidget*,QPixmap)\0"
    "theWrappedObject,pixmap,target,format,options\0"
    "bindTexture(QGLWidget*,QPixmap,GLenum,GLint,QGLContext::BindOptions)\0"
    "theWrappedObject,fileName\0"
    "bindTexture(QGLWidget*,QString)\0"
    "const QGLColormap*\0colormap(QGLWidget*)\0"
    "const QGLContext*\0context(QGLWidget*)\0"
    "QImage\0img\0static_QGLWidget_convertToGLFormat(QImage)\0"
    "theWrappedObject,tx_id\0"
    "deleteTexture(QGLWidget*,GLuint)\0"
    "doneCurrent(QGLWidget*)\0"
    "doubleBuffer(QGLWidget*)\0"
    "theWrappedObject,point,textureId,textureTarget\0"
    "drawTexture(QGLWidget*,QPointF,GLuint,GLenum)\0"
    "theWrappedObject,point,textureId\0"
    "drawTexture(QGLWidget*,QPointF,GLuint)\0"
    "theWrappedObject,target,textureId,textureTarget\0"
    "drawTexture(QGLWidget*,QRectF,GLuint,GLenum)\0"
    "theWrappedObject,target,textureId\0"
    "drawTexture(QGLWidget*,QRectF,GLuint)\0"
    "theWrappedObject,arg__1\0"
    "event(QGLWidget*,QEvent*)\0QGLFormat\0"
    "format(QGLWidget*)\0glDraw(QGLWidget*)\0"
    "glInit(QGLWidget*)\0theWrappedObject,withAlpha\0"
    "grabFrameBuffer(QGLWidget*,bool)\0"
    "grabFrameBuffer(QGLWidget*)\0"
    "initializeGL(QGLWidget*)\0"
    "initializeOverlayGL(QGLWidget*)\0"
    "isSharing(QGLWidget*)\0isValid(QGLWidget*)\0"
    "makeCurrent(QGLWidget*)\0"
    "makeOverlayCurrent(QGLWidget*)\0"
    "overlayContext(QGLWidget*)\0QPaintEngine*\0"
    "paintEngine(QGLWidget*)\0"
    "paintEvent(QGLWidget*,QPaintEvent*)\0"
    "paintGL(QGLWidget*)\0paintOverlayGL(QGLWidget*)\0"
    "theWrappedObject,c\0qglClearColor(QGLWidget*,QColor)\0"
    "qglColor(QGLWidget*,QColor)\0QPixmap\0"
    "theWrappedObject,w,h,useContext\0"
    "renderPixmap(QGLWidget*,int,int,bool)\0"
    "theWrappedObject,w,h\0"
    "renderPixmap(QGLWidget*,int,int)\0"
    "theWrappedObject,w\0renderPixmap(QGLWidget*,int)\0"
    "renderPixmap(QGLWidget*)\0"
    "theWrappedObject,x,y,z,str,fnt,listBase\0"
    "renderText(QGLWidget*,double,double,double,QString,QFont,int)\0"
    "theWrappedObject,x,y,z,str,fnt\0"
    "renderText(QGLWidget*,double,double,double,QString,QFont)\0"
    "theWrappedObject,x,y,z,str\0"
    "renderText(QGLWidget*,double,double,double,QString)\0"
    "theWrappedObject,x,y,str,fnt,listBase\0"
    "renderText(QGLWidget*,int,int,QString,QFont,int)\0"
    "theWrappedObject,x,y,str,fnt\0"
    "renderText(QGLWidget*,int,int,QString,QFont)\0"
    "theWrappedObject,x,y,str\0"
    "renderText(QGLWidget*,int,int,QString)\0"
    "resizeEvent(QGLWidget*,QResizeEvent*)\0"
    "resizeGL(QGLWidget*,int,int)\0"
    "resizeOverlayGL(QGLWidget*,int,int)\0"
    "theWrappedObject,on\0"
    "setAutoBufferSwap(QGLWidget*,bool)\0"
    "theWrappedObject,map\0"
    "setColormap(QGLWidget*,QGLColormap)\0"
    "swapBuffers(QGLWidget*)\0updateGL(QGLWidget*)\0"
    "updateOverlayGL(QGLWidget*)\0"
};

void PythonQtWrapper_QGLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGLWidget *_t = static_cast<PythonQtWrapper_QGLWidget *>(_o);
        switch (_id) {
        case 0: { QGLWidget* _r = _t->new_QGLWidget((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const QGLWidget*(*)>(_a[3])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QGLWidget**>(_a[0]) = _r; }  break;
        case 1: { QGLWidget* _r = _t->new_QGLWidget((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const QGLWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QGLWidget**>(_a[0]) = _r; }  break;
        case 2: { QGLWidget* _r = _t->new_QGLWidget((*reinterpret_cast< QGLContext*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGLWidget**>(_a[0]) = _r; }  break;
        case 3: { QGLWidget* _r = _t->new_QGLWidget((*reinterpret_cast< QGLContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLWidget**>(_a[0]) = _r; }  break;
        case 4: { QGLWidget* _r = _t->new_QGLWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QGLWidget*(*)>(_a[2])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QGLWidget**>(_a[0]) = _r; }  break;
        case 5: { QGLWidget* _r = _t->new_QGLWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QGLWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGLWidget**>(_a[0]) = _r; }  break;
        case 6: { QGLWidget* _r = _t->new_QGLWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLWidget**>(_a[0]) = _r; }  break;
        case 7: { QGLWidget* _r = _t->new_QGLWidget();
            if (_a[0]) *reinterpret_cast< QGLWidget**>(_a[0]) = _r; }  break;
        case 8: { QGLWidget* _r = _t->new_QGLWidget((*reinterpret_cast< const QGLFormat(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const QGLWidget*(*)>(_a[3])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QGLWidget**>(_a[0]) = _r; }  break;
        case 9: { QGLWidget* _r = _t->new_QGLWidget((*reinterpret_cast< const QGLFormat(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const QGLWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QGLWidget**>(_a[0]) = _r; }  break;
        case 10: { QGLWidget* _r = _t->new_QGLWidget((*reinterpret_cast< const QGLFormat(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGLWidget**>(_a[0]) = _r; }  break;
        case 11: { QGLWidget* _r = _t->new_QGLWidget((*reinterpret_cast< const QGLFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLWidget**>(_a[0]) = _r; }  break;
        case 12: _t->delete_QGLWidget((*reinterpret_cast< QGLWidget*(*)>(_a[1]))); break;
        case 13: { bool _r = _t->autoBufferSwap((*reinterpret_cast< QGLWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLint(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 15: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 16: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 17: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLint(*)>(_a[4])),(*reinterpret_cast< QGLContext::BindOptions(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 18: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLint(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 19: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 20: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 21: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])),(*reinterpret_cast< GLenum(*)>(_a[3])),(*reinterpret_cast< GLint(*)>(_a[4])),(*reinterpret_cast< QGLContext::BindOptions(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 22: { GLuint _r = _t->bindTexture((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 23: { const QGLColormap* _r = _t->colormap((*reinterpret_cast< QGLWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QGLColormap**>(_a[0]) = _r; }  break;
        case 24: { const QGLContext* _r = _t->context((*reinterpret_cast< QGLWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QGLContext**>(_a[0]) = _r; }  break;
        case 25: { QImage _r = _t->static_QGLWidget_convertToGLFormat((*reinterpret_cast< const QImage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 26: _t->deleteTexture((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2]))); break;
        case 27: _t->doneCurrent((*reinterpret_cast< QGLWidget*(*)>(_a[1]))); break;
        case 28: { bool _r = _t->doubleBuffer((*reinterpret_cast< QGLWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: _t->drawTexture((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4]))); break;
        case 30: _t->drawTexture((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3]))); break;
        case 31: _t->drawTexture((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3])),(*reinterpret_cast< GLenum(*)>(_a[4]))); break;
        case 32: _t->drawTexture((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< GLuint(*)>(_a[3]))); break;
        case 33: { bool _r = _t->event((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { QGLFormat _r = _t->format((*reinterpret_cast< QGLWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGLFormat*>(_a[0]) = _r; }  break;
        case 35: _t->glDraw((*reinterpret_cast< QGLWidget*(*)>(_a[1]))); break;
        case 36: _t->glInit((*reinterpret_cast< QGLWidget*(*)>(_a[1]))); break;
        case 37: { QImage _r = _t->grabFrameBuffer((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 38: { QImage _r = _t->grabFrameBuffer((*reinterpret_cast< QGLWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 39: _t->initializeGL((*reinterpret_cast< QGLWidget*(*)>(_a[1]))); break;
        case 40: _t->initializeOverlayGL((*reinterpret_cast< QGLWidget*(*)>(_a[1]))); break;
        case 41: { bool _r = _t->isSharing((*reinterpret_cast< QGLWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->isValid((*reinterpret_cast< QGLWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: _t->makeCurrent((*reinterpret_cast< QGLWidget*(*)>(_a[1]))); break;
        case 44: _t->makeOverlayCurrent((*reinterpret_cast< QGLWidget*(*)>(_a[1]))); break;
        case 45: { const QGLContext* _r = _t->overlayContext((*reinterpret_cast< QGLWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QGLContext**>(_a[0]) = _r; }  break;
        case 46: { QPaintEngine* _r = _t->paintEngine((*reinterpret_cast< QGLWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPaintEngine**>(_a[0]) = _r; }  break;
        case 47: _t->paintEvent((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 48: _t->paintGL((*reinterpret_cast< QGLWidget*(*)>(_a[1]))); break;
        case 49: _t->paintOverlayGL((*reinterpret_cast< QGLWidget*(*)>(_a[1]))); break;
        case 50: _t->qglClearColor((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 51: _t->qglColor((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 52: { QPixmap _r = _t->renderPixmap((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 53: { QPixmap _r = _t->renderPixmap((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 54: { QPixmap _r = _t->renderPixmap((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 55: { QPixmap _r = _t->renderPixmap((*reinterpret_cast< QGLWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 56: _t->renderText((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QFont(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 57: _t->renderText((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QFont(*)>(_a[6]))); break;
        case 58: _t->renderText((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 59: _t->renderText((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QFont(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 60: _t->renderText((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QFont(*)>(_a[5]))); break;
        case 61: _t->renderText((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 62: _t->resizeEvent((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 63: _t->resizeGL((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 64: _t->resizeOverlayGL((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 65: _t->setAutoBufferSwap((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 66: _t->setColormap((*reinterpret_cast< QGLWidget*(*)>(_a[1])),(*reinterpret_cast< const QGLColormap(*)>(_a[2]))); break;
        case 67: _t->swapBuffers((*reinterpret_cast< QGLWidget*(*)>(_a[1]))); break;
        case 68: _t->updateGL((*reinterpret_cast< QGLWidget*(*)>(_a[1]))); break;
        case 69: _t->updateOverlayGL((*reinterpret_cast< QGLWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGLWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGLWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGLWidget,
      qt_meta_data_PythonQtWrapper_QGLWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGLWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGLWidget))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGLWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE

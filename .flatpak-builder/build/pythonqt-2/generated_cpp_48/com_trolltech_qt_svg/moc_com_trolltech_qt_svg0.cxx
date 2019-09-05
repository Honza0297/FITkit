/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_svg0.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "com_trolltech_qt_svg0.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_svg0.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QGraphicsSvgItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       1,   99, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      63,   52,   34,   33, 0x0a,
     100,   33,   34,   33, 0x2a,
     143,  123,   34,   33, 0x0a,
     197,  188,   34,   33, 0x2a,
     231,  227,   33,   33, 0x0a,
     298,  281,  274,   33, 0x0a,
     338,  281,  330,   33, 0x0a,
     372,  281,  367,   33, 0x0a,
     414,  281,  408,   33, 0x0a,
     489,  450,   33,   33, 0x0a,
     597,  565,   33,   33, 0x2a,
     678,  281,  664,   33, 0x0a,
     730,  706,   33,   33, 0x0a,
     792,  772,   33,   33, 0x0a,
     854,  832,   33,   33, 0x0a,
     925,  899,   33,   33, 0x0a,
     980,  281,  976,   33, 0x0a,

 // enums: name, flags, count, data
    1004, 0x0,    1,  103,

 // enum data: key, value
    1011, uint(PythonQtWrapper_QGraphicsSvgItem::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsSvgItem[] = {
    "PythonQtWrapper_QGraphicsSvgItem\0\0"
    "QGraphicsSvgItem*\0parentItem\0"
    "new_QGraphicsSvgItem(QGraphicsItem*)\0"
    "new_QGraphicsSvgItem()\0fileName,parentItem\0"
    "new_QGraphicsSvgItem(QString,QGraphicsItem*)\0"
    "fileName\0new_QGraphicsSvgItem(QString)\0"
    "obj\0delete_QGraphicsSvgItem(QGraphicsSvgItem*)\0"
    "QRectF\0theWrappedObject\0"
    "boundingRect(QGraphicsSvgItem*)\0QString\0"
    "elementId(QGraphicsSvgItem*)\0bool\0"
    "isCachingEnabled(QGraphicsSvgItem*)\0"
    "QSize\0maximumCacheSize(QGraphicsSvgItem*)\0"
    "theWrappedObject,painter,option,widget\0"
    "paint(QGraphicsSvgItem*,QPainter*,const QStyleOptionGraphicsItem*,QWid"
    "get*)\0"
    "theWrappedObject,painter,option\0"
    "paint(QGraphicsSvgItem*,QPainter*,const QStyleOptionGraphicsItem*)\0"
    "QSvgRenderer*\0renderer(QGraphicsSvgItem*)\0"
    "theWrappedObject,arg__1\0"
    "setCachingEnabled(QGraphicsSvgItem*,bool)\0"
    "theWrappedObject,id\0"
    "setElementId(QGraphicsSvgItem*,QString)\0"
    "theWrappedObject,size\0"
    "setMaximumCacheSize(QGraphicsSvgItem*,QSize)\0"
    "theWrappedObject,renderer\0"
    "setSharedRenderer(QGraphicsSvgItem*,QSvgRenderer*)\0"
    "int\0type(QGraphicsSvgItem*)\0enum_1\0"
    "Type\0"
};

void PythonQtWrapper_QGraphicsSvgItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsSvgItem *_t = static_cast<PythonQtWrapper_QGraphicsSvgItem *>(_o);
        switch (_id) {
        case 0: { QGraphicsSvgItem* _r = _t->new_QGraphicsSvgItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsSvgItem**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsSvgItem* _r = _t->new_QGraphicsSvgItem();
            if (_a[0]) *reinterpret_cast< QGraphicsSvgItem**>(_a[0]) = _r; }  break;
        case 2: { QGraphicsSvgItem* _r = _t->new_QGraphicsSvgItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsSvgItem**>(_a[0]) = _r; }  break;
        case 3: { QGraphicsSvgItem* _r = _t->new_QGraphicsSvgItem((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsSvgItem**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QGraphicsSvgItem((*reinterpret_cast< QGraphicsSvgItem*(*)>(_a[1]))); break;
        case 5: { QRectF _r = _t->boundingRect((*reinterpret_cast< QGraphicsSvgItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->elementId((*reinterpret_cast< QGraphicsSvgItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isCachingEnabled((*reinterpret_cast< QGraphicsSvgItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QSize _r = _t->maximumCacheSize((*reinterpret_cast< QGraphicsSvgItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 9: _t->paint((*reinterpret_cast< QGraphicsSvgItem*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionGraphicsItem*(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4]))); break;
        case 10: _t->paint((*reinterpret_cast< QGraphicsSvgItem*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionGraphicsItem*(*)>(_a[3]))); break;
        case 11: { QSvgRenderer* _r = _t->renderer((*reinterpret_cast< QGraphicsSvgItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSvgRenderer**>(_a[0]) = _r; }  break;
        case 12: _t->setCachingEnabled((*reinterpret_cast< QGraphicsSvgItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->setElementId((*reinterpret_cast< QGraphicsSvgItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->setMaximumCacheSize((*reinterpret_cast< QGraphicsSvgItem*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 15: _t->setSharedRenderer((*reinterpret_cast< QGraphicsSvgItem*(*)>(_a[1])),(*reinterpret_cast< QSvgRenderer*(*)>(_a[2]))); break;
        case 16: { int _r = _t->type((*reinterpret_cast< QGraphicsSvgItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsSvgItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsSvgItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsSvgItem,
      qt_meta_data_PythonQtWrapper_QGraphicsSvgItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsSvgItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsSvgItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsSvgItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsSvgItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsSvgItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsSvgItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSvgGenerator[] = {

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
      46,   30,   31,   30, 0x0a,
      70,   66,   30,   30, 0x0a,
     132,  115,  107,   30, 0x0a,
     160,  115,  107,   30, 0x0a,
     213,  189,  185,   30, 0x0a,
     279,  115,  268,   30, 0x0a,
     322,  115,  308,   30, 0x0a,
     350,  115,  185,   30, 0x0a,
     406,  377,   30,   30, 0x0a,
     471,  445,   30,   30, 0x0a,
     537,  507,   30,   30, 0x0a,
     601,  580,   30,   30, 0x0a,
     657,  635,   30,   30, 0x0a,
     710,  687,   30,   30, 0x0a,
     768,  743,   30,   30, 0x0a,
     801,  743,   30,   30, 0x0a,
     841,  115,  835,   30, 0x0a,
     862,  115,  107,   30, 0x0a,
     890,  115,  884,   30, 0x0a,
     921,  115,  914,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSvgGenerator[] = {
    "PythonQtWrapper_QSvgGenerator\0\0"
    "QSvgGenerator*\0new_QSvgGenerator()\0"
    "obj\0delete_QSvgGenerator(QSvgGenerator*)\0"
    "QString\0theWrappedObject\0"
    "description(QSvgGenerator*)\0"
    "fileName(QSvgGenerator*)\0int\0"
    "theWrappedObject,metric\0"
    "metric(QSvgGenerator*,QPaintDevice::PaintDeviceMetric)\0"
    "QIODevice*\0outputDevice(QSvgGenerator*)\0"
    "QPaintEngine*\0paintEngine(QSvgGenerator*)\0"
    "resolution(QSvgGenerator*)\0"
    "theWrappedObject,description\0"
    "setDescription(QSvgGenerator*,QString)\0"
    "theWrappedObject,fileName\0"
    "setFileName(QSvgGenerator*,QString)\0"
    "theWrappedObject,outputDevice\0"
    "setOutputDevice(QSvgGenerator*,QIODevice*)\0"
    "theWrappedObject,dpi\0"
    "setResolution(QSvgGenerator*,int)\0"
    "theWrappedObject,size\0"
    "setSize(QSvgGenerator*,QSize)\0"
    "theWrappedObject,title\0"
    "setTitle(QSvgGenerator*,QString)\0"
    "theWrappedObject,viewBox\0"
    "setViewBox(QSvgGenerator*,QRect)\0"
    "setViewBox(QSvgGenerator*,QRectF)\0"
    "QSize\0size(QSvgGenerator*)\0"
    "title(QSvgGenerator*)\0QRect\0"
    "viewBox(QSvgGenerator*)\0QRectF\0"
    "viewBoxF(QSvgGenerator*)\0"
};

void PythonQtWrapper_QSvgGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSvgGenerator *_t = static_cast<PythonQtWrapper_QSvgGenerator *>(_o);
        switch (_id) {
        case 0: { QSvgGenerator* _r = _t->new_QSvgGenerator();
            if (_a[0]) *reinterpret_cast< QSvgGenerator**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QSvgGenerator((*reinterpret_cast< QSvgGenerator*(*)>(_a[1]))); break;
        case 2: { QString _r = _t->description((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->fileName((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->metric((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])),(*reinterpret_cast< QPaintDevice::PaintDeviceMetric(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { QIODevice* _r = _t->outputDevice((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 6: { QPaintEngine* _r = _t->paintEngine((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPaintEngine**>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->resolution((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: _t->setDescription((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->setFileName((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->setOutputDevice((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 11: _t->setResolution((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->setSize((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 13: _t->setTitle((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->setViewBox((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 15: _t->setViewBox((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 16: { QSize _r = _t->size((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->title((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { QRect _r = _t->viewBox((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 19: { QRectF _r = _t->viewBoxF((*reinterpret_cast< QSvgGenerator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSvgGenerator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSvgGenerator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSvgGenerator,
      qt_meta_data_PythonQtWrapper_QSvgGenerator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSvgGenerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSvgGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSvgGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSvgGenerator))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSvgGenerator*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSvgGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSvgRenderer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      51,   44,   30,   29, 0x0a,
      78,   29,   30,   29, 0x2a,
     113,   97,   30,   29, 0x0a,
     167,  158,   30,   29, 0x2a,
     203,   97,   30,   29, 0x0a,
     241,  158,   30,   29, 0x2a,
     286,  270,   30,   29, 0x0a,
     330,  321,   30,   29, 0x2a,
     360,  356,   29,   29, 0x0a,
     417,  400,  395,   29, 0x0a,
     445,  400,  441,   29, 0x0a,
     505,  485,  478,   29, 0x0a,
     544,  400,  441,   29, 0x0a,
     578,  400,  572,   29, 0x0a,
     605,  485,  395,   29, 0x0a,
     642,  400,  441,   29, 0x0a,
     673,  400,  395,   29, 0x0a,
     704,  485,  696,   29, 0x0a,
     768,  744,   29,   29, 0x0a,
     824,  803,   29,   29, 0x0a,
     887,  862,   29,   29, 0x0a,
     919,  862,   29,   29, 0x0a,
     958,  400,  952,   29, 0x0a,
     981,  400,  478,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSvgRenderer[] = {
    "PythonQtWrapper_QSvgRenderer\0\0"
    "QSvgRenderer*\0parent\0new_QSvgRenderer(QObject*)\0"
    "new_QSvgRenderer()\0contents,parent\0"
    "new_QSvgRenderer(QXmlStreamReader*,QObject*)\0"
    "contents\0new_QSvgRenderer(QXmlStreamReader*)\0"
    "new_QSvgRenderer(QByteArray,QObject*)\0"
    "new_QSvgRenderer(QByteArray)\0"
    "filename,parent\0new_QSvgRenderer(QString,QObject*)\0"
    "filename\0new_QSvgRenderer(QString)\0"
    "obj\0delete_QSvgRenderer(QSvgRenderer*)\0"
    "bool\0theWrappedObject\0animated(QSvgRenderer*)\0"
    "int\0animationDuration(QSvgRenderer*)\0"
    "QRectF\0theWrappedObject,id\0"
    "boundsOnElement(QSvgRenderer*,QString)\0"
    "currentFrame(QSvgRenderer*)\0QSize\0"
    "defaultSize(QSvgRenderer*)\0"
    "elementExists(QSvgRenderer*,QString)\0"
    "framesPerSecond(QSvgRenderer*)\0"
    "isValid(QSvgRenderer*)\0QMatrix\0"
    "matrixForElement(QSvgRenderer*,QString)\0"
    "theWrappedObject,arg__1\0"
    "setCurrentFrame(QSvgRenderer*,int)\0"
    "theWrappedObject,num\0"
    "setFramesPerSecond(QSvgRenderer*,int)\0"
    "theWrappedObject,viewbox\0"
    "setViewBox(QSvgRenderer*,QRect)\0"
    "setViewBox(QSvgRenderer*,QRectF)\0QRect\0"
    "viewBox(QSvgRenderer*)\0viewBoxF(QSvgRenderer*)\0"
};

void PythonQtWrapper_QSvgRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSvgRenderer *_t = static_cast<PythonQtWrapper_QSvgRenderer *>(_o);
        switch (_id) {
        case 0: { QSvgRenderer* _r = _t->new_QSvgRenderer((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSvgRenderer**>(_a[0]) = _r; }  break;
        case 1: { QSvgRenderer* _r = _t->new_QSvgRenderer();
            if (_a[0]) *reinterpret_cast< QSvgRenderer**>(_a[0]) = _r; }  break;
        case 2: { QSvgRenderer* _r = _t->new_QSvgRenderer((*reinterpret_cast< QXmlStreamReader*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSvgRenderer**>(_a[0]) = _r; }  break;
        case 3: { QSvgRenderer* _r = _t->new_QSvgRenderer((*reinterpret_cast< QXmlStreamReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSvgRenderer**>(_a[0]) = _r; }  break;
        case 4: { QSvgRenderer* _r = _t->new_QSvgRenderer((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSvgRenderer**>(_a[0]) = _r; }  break;
        case 5: { QSvgRenderer* _r = _t->new_QSvgRenderer((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSvgRenderer**>(_a[0]) = _r; }  break;
        case 6: { QSvgRenderer* _r = _t->new_QSvgRenderer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSvgRenderer**>(_a[0]) = _r; }  break;
        case 7: { QSvgRenderer* _r = _t->new_QSvgRenderer((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSvgRenderer**>(_a[0]) = _r; }  break;
        case 8: _t->delete_QSvgRenderer((*reinterpret_cast< QSvgRenderer*(*)>(_a[1]))); break;
        case 9: { bool _r = _t->animated((*reinterpret_cast< QSvgRenderer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->animationDuration((*reinterpret_cast< QSvgRenderer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QRectF _r = _t->boundsOnElement((*reinterpret_cast< QSvgRenderer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->currentFrame((*reinterpret_cast< QSvgRenderer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { QSize _r = _t->defaultSize((*reinterpret_cast< QSvgRenderer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->elementExists((*reinterpret_cast< QSvgRenderer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->framesPerSecond((*reinterpret_cast< QSvgRenderer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isValid((*reinterpret_cast< QSvgRenderer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { QMatrix _r = _t->matrixForElement((*reinterpret_cast< QSvgRenderer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMatrix*>(_a[0]) = _r; }  break;
        case 18: _t->setCurrentFrame((*reinterpret_cast< QSvgRenderer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->setFramesPerSecond((*reinterpret_cast< QSvgRenderer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->setViewBox((*reinterpret_cast< QSvgRenderer*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 21: _t->setViewBox((*reinterpret_cast< QSvgRenderer*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 22: { QRect _r = _t->viewBox((*reinterpret_cast< QSvgRenderer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 23: { QRectF _r = _t->viewBoxF((*reinterpret_cast< QSvgRenderer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSvgRenderer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSvgRenderer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSvgRenderer,
      qt_meta_data_PythonQtWrapper_QSvgRenderer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSvgRenderer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSvgRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSvgRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSvgRenderer))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSvgRenderer*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSvgRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSvgWidget[] = {

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
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
     101,   89,   28,   27, 0x0a,
     139,  134,   28,   27, 0x2a,
     167,  163,   27,   27, 0x0a,
     221,  198,   27,   27, 0x0a,
     289,  272,  258,   27, 0x0a,
     317,  272,  311,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSvgWidget[] = {
    "PythonQtWrapper_QSvgWidget\0\0QSvgWidget*\0"
    "parent\0new_QSvgWidget(QWidget*)\0"
    "new_QSvgWidget()\0file,parent\0"
    "new_QSvgWidget(QString,QWidget*)\0file\0"
    "new_QSvgWidget(QString)\0obj\0"
    "delete_QSvgWidget(QSvgWidget*)\0"
    "theWrappedObject,event\0"
    "paintEvent(QSvgWidget*,QPaintEvent*)\0"
    "QSvgRenderer*\0theWrappedObject\0"
    "renderer(QSvgWidget*)\0QSize\0"
    "sizeHint(QSvgWidget*)\0"
};

void PythonQtWrapper_QSvgWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSvgWidget *_t = static_cast<PythonQtWrapper_QSvgWidget *>(_o);
        switch (_id) {
        case 0: { QSvgWidget* _r = _t->new_QSvgWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSvgWidget**>(_a[0]) = _r; }  break;
        case 1: { QSvgWidget* _r = _t->new_QSvgWidget();
            if (_a[0]) *reinterpret_cast< QSvgWidget**>(_a[0]) = _r; }  break;
        case 2: { QSvgWidget* _r = _t->new_QSvgWidget((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSvgWidget**>(_a[0]) = _r; }  break;
        case 3: { QSvgWidget* _r = _t->new_QSvgWidget((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSvgWidget**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSvgWidget((*reinterpret_cast< QSvgWidget*(*)>(_a[1]))); break;
        case 5: _t->paintEvent((*reinterpret_cast< QSvgWidget*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 6: { QSvgRenderer* _r = _t->renderer((*reinterpret_cast< QSvgWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSvgRenderer**>(_a[0]) = _r; }  break;
        case 7: { QSize _r = _t->sizeHint((*reinterpret_cast< QSvgWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSvgWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSvgWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSvgWidget,
      qt_meta_data_PythonQtWrapper_QSvgWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSvgWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSvgWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSvgWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSvgWidget))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSvgWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSvgWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE

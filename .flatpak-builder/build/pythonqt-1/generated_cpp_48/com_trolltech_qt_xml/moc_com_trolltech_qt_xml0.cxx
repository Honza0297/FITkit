/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_xml0.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "com_trolltech_qt_xml0.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_xml0.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QDomAttr[] = {

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
      36,   25,   26,   25, 0x0a,
      53,   51,   26,   25, 0x0a,
      80,   76,   25,   25, 0x0a,
     132,  115,  107,   25, 0x0a,
     160,  115,  148,   25, 0x0a,
     208,  184,   25,   25, 0x0a,
     241,  115,  236,   25, 0x0a,
     262,  115,  107,   25, 0x0a,
     279,   76,  236,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomAttr[] = {
    "PythonQtWrapper_QDomAttr\0\0QDomAttr*\0"
    "new_QDomAttr()\0x\0new_QDomAttr(QDomAttr)\0"
    "obj\0delete_QDomAttr(QDomAttr*)\0QString\0"
    "theWrappedObject\0name(QDomAttr*)\0"
    "QDomElement\0ownerElement(QDomAttr*)\0"
    "theWrappedObject,arg__1\0"
    "setValue(QDomAttr*,QString)\0bool\0"
    "specified(QDomAttr*)\0value(QDomAttr*)\0"
    "__nonzero__(QDomAttr*)\0"
};

void PythonQtWrapper_QDomAttr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomAttr *_t = static_cast<PythonQtWrapper_QDomAttr *>(_o);
        switch (_id) {
        case 0: { QDomAttr* _r = _t->new_QDomAttr();
            if (_a[0]) *reinterpret_cast< QDomAttr**>(_a[0]) = _r; }  break;
        case 1: { QDomAttr* _r = _t->new_QDomAttr((*reinterpret_cast< const QDomAttr(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomAttr**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomAttr((*reinterpret_cast< QDomAttr*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->name((*reinterpret_cast< QDomAttr*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QDomElement _r = _t->ownerElement((*reinterpret_cast< QDomAttr*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 5: _t->setValue((*reinterpret_cast< QDomAttr*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: { bool _r = _t->specified((*reinterpret_cast< QDomAttr*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->value((*reinterpret_cast< QDomAttr*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomAttr*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomAttr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomAttr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomAttr,
      qt_meta_data_PythonQtWrapper_QDomAttr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomAttr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomAttr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomAttr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomAttr))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomAttr*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomAttr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDomCDATASection[] = {

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
      52,   33,   34,   33, 0x0a,
      77,   75,   34,   33, 0x0a,
     120,  116,   33,   33, 0x0a,
     168,  116,  163,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomCDATASection[] = {
    "PythonQtWrapper_QDomCDATASection\0\0"
    "QDomCDATASection*\0new_QDomCDATASection()\0"
    "x\0new_QDomCDATASection(QDomCDATASection)\0"
    "obj\0delete_QDomCDATASection(QDomCDATASection*)\0"
    "bool\0__nonzero__(QDomCDATASection*)\0"
};

void PythonQtWrapper_QDomCDATASection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomCDATASection *_t = static_cast<PythonQtWrapper_QDomCDATASection *>(_o);
        switch (_id) {
        case 0: { QDomCDATASection* _r = _t->new_QDomCDATASection();
            if (_a[0]) *reinterpret_cast< QDomCDATASection**>(_a[0]) = _r; }  break;
        case 1: { QDomCDATASection* _r = _t->new_QDomCDATASection((*reinterpret_cast< const QDomCDATASection(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomCDATASection**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomCDATASection((*reinterpret_cast< QDomCDATASection*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomCDATASection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomCDATASection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomCDATASection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomCDATASection,
      qt_meta_data_PythonQtWrapper_QDomCDATASection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomCDATASection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomCDATASection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomCDATASection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomCDATASection))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomCDATASection*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomCDATASection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDomCharacterData[] = {

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
      54,   34,   35,   34, 0x0a,
      80,   78,   35,   34, 0x0a,
     125,  121,   34,   34, 0x0a,
     191,  170,   34,   34, 0x0a,
     255,  238,  230,   34, 0x0a,
     310,  280,   34,   34, 0x0a,
     381,  353,   34,   34, 0x0a,
     431,  238,  426,   34, 0x0a,
     492,  458,   34,   34, 0x0a,
     568,  544,   34,   34, 0x0a,
     604,  280,  230,   34, 0x0a,
     655,  121,  650,   34, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomCharacterData[] = {
    "PythonQtWrapper_QDomCharacterData\0\0"
    "QDomCharacterData*\0new_QDomCharacterData()\0"
    "x\0new_QDomCharacterData(QDomCharacterData)\0"
    "obj\0delete_QDomCharacterData(QDomCharacterData*)\0"
    "theWrappedObject,arg\0"
    "appendData(QDomCharacterData*,QString)\0"
    "QString\0theWrappedObject\0"
    "data(QDomCharacterData*)\0"
    "theWrappedObject,offset,count\0"
    "deleteData(QDomCharacterData*,ulong,ulong)\0"
    "theWrappedObject,offset,arg\0"
    "insertData(QDomCharacterData*,ulong,QString)\0"
    "uint\0length(QDomCharacterData*)\0"
    "theWrappedObject,offset,count,arg\0"
    "replaceData(QDomCharacterData*,ulong,ulong,QString)\0"
    "theWrappedObject,arg__1\0"
    "setData(QDomCharacterData*,QString)\0"
    "substringData(QDomCharacterData*,ulong,ulong)\0"
    "bool\0__nonzero__(QDomCharacterData*)\0"
};

void PythonQtWrapper_QDomCharacterData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomCharacterData *_t = static_cast<PythonQtWrapper_QDomCharacterData *>(_o);
        switch (_id) {
        case 0: { QDomCharacterData* _r = _t->new_QDomCharacterData();
            if (_a[0]) *reinterpret_cast< QDomCharacterData**>(_a[0]) = _r; }  break;
        case 1: { QDomCharacterData* _r = _t->new_QDomCharacterData((*reinterpret_cast< const QDomCharacterData(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomCharacterData**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomCharacterData((*reinterpret_cast< QDomCharacterData*(*)>(_a[1]))); break;
        case 3: _t->appendData((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: { QString _r = _t->data((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: _t->deleteData((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< ulong(*)>(_a[3]))); break;
        case 6: _t->insertData((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: { uint _r = _t->length((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 8: _t->replaceData((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< ulong(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 9: _t->setData((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: { QString _r = _t->substringData((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< ulong(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomCharacterData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomCharacterData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomCharacterData,
      qt_meta_data_PythonQtWrapper_QDomCharacterData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomCharacterData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomCharacterData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomCharacterData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomCharacterData))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomCharacterData*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomCharacterData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDomComment[] = {

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
      42,   28,   29,   28, 0x0a,
      62,   60,   29,   28, 0x0a,
      95,   91,   28,   28, 0x0a,
     133,   91,  128,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomComment[] = {
    "PythonQtWrapper_QDomComment\0\0QDomComment*\0"
    "new_QDomComment()\0x\0new_QDomComment(QDomComment)\0"
    "obj\0delete_QDomComment(QDomComment*)\0"
    "bool\0__nonzero__(QDomComment*)\0"
};

void PythonQtWrapper_QDomComment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomComment *_t = static_cast<PythonQtWrapper_QDomComment *>(_o);
        switch (_id) {
        case 0: { QDomComment* _r = _t->new_QDomComment();
            if (_a[0]) *reinterpret_cast< QDomComment**>(_a[0]) = _r; }  break;
        case 1: { QDomComment* _r = _t->new_QDomComment((*reinterpret_cast< const QDomComment(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomComment**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomComment((*reinterpret_cast< QDomComment*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomComment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomComment::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomComment::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomComment,
      qt_meta_data_PythonQtWrapper_QDomComment, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomComment::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomComment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomComment::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomComment))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomComment*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomComment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDomDocument[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      60,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   29,   30,   29, 0x0a,
      65,   63,   30,   29, 0x0a,
     104,   96,   30,   29, 0x0a,
     144,  139,   30,   29, 0x0a,
     174,  170,   29,   29, 0x0a,
     240,  218,  209,   29, 0x0a,
     308,  279,  209,   29, 0x0a,
     396,  374,  357,   29, 0x0a,
     450,  374,  438,   29, 0x0a,
     525,  508,  487,   29, 0x0a,
     600,  575,  563,   29, 0x0a,
     637,  279,  563,   29, 0x0a,
     704,  218,  684,   29, 0x0a,
     804,  775,  749,   29, 0x0a,
     872,  374,  863,   29, 0x0a,
     927,  508,  910,   29, 0x0a,
     950,  508,  563,   29, 0x0a,
    1008,  981,  563,   29, 0x0a,
    1081, 1056, 1043,   29, 0x0a,
    1155, 1122, 1043,   29, 0x0a,
    1225,  508, 1206,   29, 0x0a,
    1299, 1264, 1255,   29, 0x0a,
    1396, 1344, 1339,   29, 0x0a,
    1492, 1452, 1339,   29, 0x2a,
    1573, 1543, 1339,   29, 0x2a,
    1640, 1619, 1339,   29, 0x2a,
    1749, 1677, 1339,   29, 0x0a,
    1870, 1810, 1339,   29, 0x2a,
    1976, 1926, 1339,   29, 0x2a,
    2068, 2027, 1339,   29, 0x2a,
    2172, 2110, 1339,   29, 0x0a,
    2296, 2246, 1339,   29, 0x2a,
    2405, 2365, 1339,   29, 0x2a,
    2500, 2469, 1339,   29, 0x2a,
    2630, 2555, 1339,   29, 0x0a,
    2760, 2697, 1339,   29, 0x2a,
    2875, 2822, 1339,   29, 0x2a,
    2976, 2932, 1339,   29, 0x2a,
    3077, 3024, 1339,   29, 0x0a,
    3174, 3133, 1339,   29, 0x2a,
    3256, 3225, 1339,   29, 0x2a,
    3324, 3302, 1339,   29, 0x2a,
    3434, 3361, 1339,   29, 0x0a,
    3556, 3495, 1339,   29, 0x2a,
    3663, 3612, 1339,   29, 0x2a,
    3756, 3714, 1339,   29, 0x2a,
    3798, 3024, 1339,   29, 0x0a,
    3851, 3133, 1339,   29, 0x2a,
    3899, 3225, 1339,   29, 0x2a,
    3942, 3302, 1339,   29, 0x2a,
    3976, 3361, 1339,   29, 0x0a,
    4034, 3495, 1339,   29, 0x2a,
    4087, 3612, 1339,   29, 0x2a,
    4135, 3714, 1339,   29, 0x2a,
    4209, 4185, 4174,   29, 0x0a,
    4240,  508, 4174,   29, 0x2a,
    4275, 4185, 4267,   29, 0x0a,
    4303,  508, 4267,   29, 0x2a,
    4327,   29, 4267,   29, 0x0a,
    4354,  170, 1339,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomDocument[] = {
    "PythonQtWrapper_QDomDocument\0\0"
    "QDomDocument*\0new_QDomDocument()\0x\0"
    "new_QDomDocument(QDomDocument)\0doctype\0"
    "new_QDomDocument(QDomDocumentType)\0"
    "name\0new_QDomDocument(QString)\0obj\0"
    "delete_QDomDocument(QDomDocument*)\0"
    "QDomAttr\0theWrappedObject,name\0"
    "createAttribute(QDomDocument*,QString)\0"
    "theWrappedObject,nsURI,qName\0"
    "createAttributeNS(QDomDocument*,QString,QString)\0"
    "QDomCDATASection\0theWrappedObject,data\0"
    "createCDATASection(QDomDocument*,QString)\0"
    "QDomComment\0createComment(QDomDocument*,QString)\0"
    "QDomDocumentFragment\0theWrappedObject\0"
    "createDocumentFragment(QDomDocument*)\0"
    "QDomElement\0theWrappedObject,tagName\0"
    "createElement(QDomDocument*,QString)\0"
    "createElementNS(QDomDocument*,QString,QString)\0"
    "QDomEntityReference\0"
    "createEntityReference(QDomDocument*,QString)\0"
    "QDomProcessingInstruction\0"
    "theWrappedObject,target,data\0"
    "createProcessingInstruction(QDomDocument*,QString,QString)\0"
    "QDomText\0createTextNode(QDomDocument*,QString)\0"
    "QDomDocumentType\0doctype(QDomDocument*)\0"
    "documentElement(QDomDocument*)\0"
    "theWrappedObject,elementId\0"
    "elementById(QDomDocument*,QString)\0"
    "QDomNodeList\0theWrappedObject,tagname\0"
    "elementsByTagName(QDomDocument*,QString)\0"
    "theWrappedObject,nsURI,localName\0"
    "elementsByTagNameNS(QDomDocument*,QString,QString)\0"
    "QDomImplementation\0implementation(QDomDocument*)\0"
    "QDomNode\0theWrappedObject,importedNode,deep\0"
    "importNode(QDomDocument*,QDomNode,bool)\0"
    "bool\0theWrappedObject,dev,errorMsg,errorLine,errorColumn\0"
    "setContent(QDomDocument*,QIODevice*,QString*,int*,int*)\0"
    "theWrappedObject,dev,errorMsg,errorLine\0"
    "setContent(QDomDocument*,QIODevice*,QString*,int*)\0"
    "theWrappedObject,dev,errorMsg\0"
    "setContent(QDomDocument*,QIODevice*,QString*)\0"
    "theWrappedObject,dev\0"
    "setContent(QDomDocument*,QIODevice*)\0"
    "theWrappedObject,dev,namespaceProcessing,errorMsg,errorLine,errorColum"
    "n\0"
    "setContent(QDomDocument*,QIODevice*,bool,QString*,int*,int*)\0"
    "theWrappedObject,dev,namespaceProcessing,errorMsg,errorLine\0"
    "setContent(QDomDocument*,QIODevice*,bool,QString*,int*)\0"
    "theWrappedObject,dev,namespaceProcessing,errorMsg\0"
    "setContent(QDomDocument*,QIODevice*,bool,QString*)\0"
    "theWrappedObject,dev,namespaceProcessing\0"
    "setContent(QDomDocument*,QIODevice*,bool)\0"
    "theWrappedObject,source,reader,errorMsg,errorLine,errorColumn\0"
    "setContent(QDomDocument*,QXmlInputSource*,QXmlReader*,QString*,int*,in"
    "t*)\0"
    "theWrappedObject,source,reader,errorMsg,errorLine\0"
    "setContent(QDomDocument*,QXmlInputSource*,QXmlReader*,QString*,int*)\0"
    "theWrappedObject,source,reader,errorMsg\0"
    "setContent(QDomDocument*,QXmlInputSource*,QXmlReader*,QString*)\0"
    "theWrappedObject,source,reader\0"
    "setContent(QDomDocument*,QXmlInputSource*,QXmlReader*)\0"
    "theWrappedObject,source,namespaceProcessing,errorMsg,errorLine,errorCo"
    "lumn\0"
    "setContent(QDomDocument*,QXmlInputSource*,bool,QString*,int*,int*)\0"
    "theWrappedObject,source,namespaceProcessing,errorMsg,errorLine\0"
    "setContent(QDomDocument*,QXmlInputSource*,bool,QString*,int*)\0"
    "theWrappedObject,source,namespaceProcessing,errorMsg\0"
    "setContent(QDomDocument*,QXmlInputSource*,bool,QString*)\0"
    "theWrappedObject,source,namespaceProcessing\0"
    "setContent(QDomDocument*,QXmlInputSource*,bool)\0"
    "theWrappedObject,text,errorMsg,errorLine,errorColumn\0"
    "setContent(QDomDocument*,QByteArray,QString*,int*,int*)\0"
    "theWrappedObject,text,errorMsg,errorLine\0"
    "setContent(QDomDocument*,QByteArray,QString*,int*)\0"
    "theWrappedObject,text,errorMsg\0"
    "setContent(QDomDocument*,QByteArray,QString*)\0"
    "theWrappedObject,text\0"
    "setContent(QDomDocument*,QByteArray)\0"
    "theWrappedObject,text,namespaceProcessing,errorMsg,errorLine,errorColu"
    "mn\0"
    "setContent(QDomDocument*,QByteArray,bool,QString*,int*,int*)\0"
    "theWrappedObject,text,namespaceProcessing,errorMsg,errorLine\0"
    "setContent(QDomDocument*,QByteArray,bool,QString*,int*)\0"
    "theWrappedObject,text,namespaceProcessing,errorMsg\0"
    "setContent(QDomDocument*,QByteArray,bool,QString*)\0"
    "theWrappedObject,text,namespaceProcessing\0"
    "setContent(QDomDocument*,QByteArray,bool)\0"
    "setContent(QDomDocument*,QString,QString*,int*,int*)\0"
    "setContent(QDomDocument*,QString,QString*,int*)\0"
    "setContent(QDomDocument*,QString,QString*)\0"
    "setContent(QDomDocument*,QString)\0"
    "setContent(QDomDocument*,QString,bool,QString*,int*,int*)\0"
    "setContent(QDomDocument*,QString,bool,QString*,int*)\0"
    "setContent(QDomDocument*,QString,bool,QString*)\0"
    "setContent(QDomDocument*,QString,bool)\0"
    "QByteArray\0theWrappedObject,arg__1\0"
    "toByteArray(QDomDocument*,int)\0"
    "toByteArray(QDomDocument*)\0QString\0"
    "toString(QDomDocument*,int)\0"
    "toString(QDomDocument*)\0"
    "py_toString(QDomDocument*)\0"
    "__nonzero__(QDomDocument*)\0"
};

void PythonQtWrapper_QDomDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomDocument *_t = static_cast<PythonQtWrapper_QDomDocument *>(_o);
        switch (_id) {
        case 0: { QDomDocument* _r = _t->new_QDomDocument();
            if (_a[0]) *reinterpret_cast< QDomDocument**>(_a[0]) = _r; }  break;
        case 1: { QDomDocument* _r = _t->new_QDomDocument((*reinterpret_cast< const QDomDocument(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocument**>(_a[0]) = _r; }  break;
        case 2: { QDomDocument* _r = _t->new_QDomDocument((*reinterpret_cast< const QDomDocumentType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocument**>(_a[0]) = _r; }  break;
        case 3: { QDomDocument* _r = _t->new_QDomDocument((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocument**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QDomDocument((*reinterpret_cast< QDomDocument*(*)>(_a[1]))); break;
        case 5: { QDomAttr _r = _t->createAttribute((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomAttr*>(_a[0]) = _r; }  break;
        case 6: { QDomAttr _r = _t->createAttributeNS((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomAttr*>(_a[0]) = _r; }  break;
        case 7: { QDomCDATASection _r = _t->createCDATASection((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomCDATASection*>(_a[0]) = _r; }  break;
        case 8: { QDomComment _r = _t->createComment((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomComment*>(_a[0]) = _r; }  break;
        case 9: { QDomDocumentFragment _r = _t->createDocumentFragment((*reinterpret_cast< QDomDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocumentFragment*>(_a[0]) = _r; }  break;
        case 10: { QDomElement _r = _t->createElement((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 11: { QDomElement _r = _t->createElementNS((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 12: { QDomEntityReference _r = _t->createEntityReference((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomEntityReference*>(_a[0]) = _r; }  break;
        case 13: { QDomProcessingInstruction _r = _t->createProcessingInstruction((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomProcessingInstruction*>(_a[0]) = _r; }  break;
        case 14: { QDomText _r = _t->createTextNode((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomText*>(_a[0]) = _r; }  break;
        case 15: { QDomDocumentType _r = _t->doctype((*reinterpret_cast< QDomDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocumentType*>(_a[0]) = _r; }  break;
        case 16: { QDomElement _r = _t->documentElement((*reinterpret_cast< QDomDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 17: { QDomElement _r = _t->elementById((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 18: { QDomNodeList _r = _t->elementsByTagName((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNodeList*>(_a[0]) = _r; }  break;
        case 19: { QDomNodeList _r = _t->elementsByTagNameNS((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomNodeList*>(_a[0]) = _r; }  break;
        case 20: { QDomImplementation _r = _t->implementation((*reinterpret_cast< QDomDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomImplementation*>(_a[0]) = _r; }  break;
        case 21: { QDomNode _r = _t->importNode((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])),(*reinterpret_cast< int*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< QXmlReader*(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])),(*reinterpret_cast< int*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< QXmlReader*(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< QXmlReader*(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< QXmlReader*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])),(*reinterpret_cast< int*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])),(*reinterpret_cast< int*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])),(*reinterpret_cast< int*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 51: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 52: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 53: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 54: { QByteArray _r = _t->toByteArray((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 55: { QByteArray _r = _t->toByteArray((*reinterpret_cast< QDomDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 56: { QString _r = _t->toString((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 57: { QString _r = _t->toString((*reinterpret_cast< QDomDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 58: { QString _r = _t->py_toString((*reinterpret_cast< QDomDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 59: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomDocument::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomDocument::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomDocument,
      qt_meta_data_PythonQtWrapper_QDomDocument, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomDocument::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomDocument))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomDocument*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QDomDocumentFragment[] = {

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
      60,   37,   38,   37, 0x0a,
      89,   87,   38,   37, 0x0a,
     140,  136,   37,   37, 0x0a,
     196,  136,  191,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomDocumentFragment[] = {
    "PythonQtWrapper_QDomDocumentFragment\0"
    "\0QDomDocumentFragment*\0"
    "new_QDomDocumentFragment()\0x\0"
    "new_QDomDocumentFragment(QDomDocumentFragment)\0"
    "obj\0delete_QDomDocumentFragment(QDomDocumentFragment*)\0"
    "bool\0__nonzero__(QDomDocumentFragment*)\0"
};

void PythonQtWrapper_QDomDocumentFragment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomDocumentFragment *_t = static_cast<PythonQtWrapper_QDomDocumentFragment *>(_o);
        switch (_id) {
        case 0: { QDomDocumentFragment* _r = _t->new_QDomDocumentFragment();
            if (_a[0]) *reinterpret_cast< QDomDocumentFragment**>(_a[0]) = _r; }  break;
        case 1: { QDomDocumentFragment* _r = _t->new_QDomDocumentFragment((*reinterpret_cast< const QDomDocumentFragment(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocumentFragment**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomDocumentFragment((*reinterpret_cast< QDomDocumentFragment*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomDocumentFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomDocumentFragment::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomDocumentFragment::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomDocumentFragment,
      qt_meta_data_PythonQtWrapper_QDomDocumentFragment, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomDocumentFragment::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomDocumentFragment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomDocumentFragment::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomDocumentFragment))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomDocumentFragment*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomDocumentFragment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDomDocumentType[] = {

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
      52,   33,   34,   33, 0x0a,
      77,   75,   34,   33, 0x0a,
     120,  116,   33,   33, 0x0a,
     197,  180,  163,   33, 0x0a,
     233,  180,  225,   33, 0x0a,
     267,  180,  225,   33, 0x0a,
     291,  180,  163,   33, 0x0a,
     320,  180,  225,   33, 0x0a,
     348,  180,  225,   33, 0x0a,
     381,  116,  376,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomDocumentType[] = {
    "PythonQtWrapper_QDomDocumentType\0\0"
    "QDomDocumentType*\0new_QDomDocumentType()\0"
    "x\0new_QDomDocumentType(QDomDocumentType)\0"
    "obj\0delete_QDomDocumentType(QDomDocumentType*)\0"
    "QDomNamedNodeMap\0theWrappedObject\0"
    "entities(QDomDocumentType*)\0QString\0"
    "internalSubset(QDomDocumentType*)\0"
    "name(QDomDocumentType*)\0"
    "notations(QDomDocumentType*)\0"
    "publicId(QDomDocumentType*)\0"
    "systemId(QDomDocumentType*)\0bool\0"
    "__nonzero__(QDomDocumentType*)\0"
};

void PythonQtWrapper_QDomDocumentType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomDocumentType *_t = static_cast<PythonQtWrapper_QDomDocumentType *>(_o);
        switch (_id) {
        case 0: { QDomDocumentType* _r = _t->new_QDomDocumentType();
            if (_a[0]) *reinterpret_cast< QDomDocumentType**>(_a[0]) = _r; }  break;
        case 1: { QDomDocumentType* _r = _t->new_QDomDocumentType((*reinterpret_cast< const QDomDocumentType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocumentType**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomDocumentType((*reinterpret_cast< QDomDocumentType*(*)>(_a[1]))); break;
        case 3: { QDomNamedNodeMap _r = _t->entities((*reinterpret_cast< QDomDocumentType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNamedNodeMap*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->internalSubset((*reinterpret_cast< QDomDocumentType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->name((*reinterpret_cast< QDomDocumentType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QDomNamedNodeMap _r = _t->notations((*reinterpret_cast< QDomDocumentType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNamedNodeMap*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->publicId((*reinterpret_cast< QDomDocumentType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->systemId((*reinterpret_cast< QDomDocumentType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomDocumentType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomDocumentType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomDocumentType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomDocumentType,
      qt_meta_data_PythonQtWrapper_QDomDocumentType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomDocumentType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomDocumentType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomDocumentType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomDocumentType))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomDocumentType*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomDocumentType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDomElement[] = {

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
      42,   28,   29,   28, 0x0a,
      62,   60,   29,   28, 0x0a,
      95,   91,   28,   28, 0x0a,
     167,  136,  128,   28, 0x0a,
     229,  207,  128,   28, 0x2a,
     303,  261,  128,   28, 0x0a,
     386,  353,  128,   28, 0x2a,
     437,  207,  428,   28, 0x0a,
     473,  353,  428,   28, 0x0a,
     553,  536,  519,   28, 0x0a,
     616,  591,  578,   28, 0x0a,
     656,  353,  578,   28, 0x0a,
     711,  207,  706,   28, 0x0a,
     746,  353,  706,   28, 0x0a,
     791,  207,   28,   28, 0x0a,
     829,  353,   28,   28, 0x0a,
     902,  877,  428,   28, 0x0a,
     973,  945,   28,   28, 0x0a,
    1016,  945,   28,   28, 0x0a,
    1058,  945,   28,   28, 0x0a,
    1099,  945,   28,   28, 0x0a,
    1138,  945,   28,   28, 0x0a,
    1218, 1183,   28,   28, 0x0a,
    1271, 1183,   28,   28, 0x0a,
    1323, 1183,   28,   28, 0x0a,
    1372, 1183,   28,   28, 0x0a,
    1452, 1427,  428,   28, 0x0a,
    1492, 1427,  428,   28, 0x0a,
    1534,  207,   28,   28, 0x0a,
    1567,  536,  128,   28, 0x0a,
    1589,  536,  128,   28, 0x0a,
    1608,   91,  706,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomElement[] = {
    "PythonQtWrapper_QDomElement\0\0QDomElement*\0"
    "new_QDomElement()\0x\0new_QDomElement(QDomElement)\0"
    "obj\0delete_QDomElement(QDomElement*)\0"
    "QString\0theWrappedObject,name,defValue\0"
    "attribute(QDomElement*,QString,QString)\0"
    "theWrappedObject,name\0"
    "attribute(QDomElement*,QString)\0"
    "theWrappedObject,nsURI,localName,defValue\0"
    "attributeNS(QDomElement*,QString,QString,QString)\0"
    "theWrappedObject,nsURI,localName\0"
    "attributeNS(QDomElement*,QString,QString)\0"
    "QDomAttr\0attributeNode(QDomElement*,QString)\0"
    "attributeNodeNS(QDomElement*,QString,QString)\0"
    "QDomNamedNodeMap\0theWrappedObject\0"
    "attributes(QDomElement*)\0QDomNodeList\0"
    "theWrappedObject,tagname\0"
    "elementsByTagName(QDomElement*,QString)\0"
    "elementsByTagNameNS(QDomElement*,QString,QString)\0"
    "bool\0hasAttribute(QDomElement*,QString)\0"
    "hasAttributeNS(QDomElement*,QString,QString)\0"
    "removeAttribute(QDomElement*,QString)\0"
    "removeAttributeNS(QDomElement*,QString,QString)\0"
    "theWrappedObject,oldAttr\0"
    "removeAttributeNode(QDomElement*,QDomAttr)\0"
    "theWrappedObject,name,value\0"
    "setAttribute(QDomElement*,QString,QString)\0"
    "setAttribute(QDomElement*,QString,double)\0"
    "setAttribute(QDomElement*,QString,float)\0"
    "setAttribute(QDomElement*,QString,int)\0"
    "setAttribute(QDomElement*,QString,qlonglong)\0"
    "theWrappedObject,nsURI,qName,value\0"
    "setAttributeNS(QDomElement*,QString,QString,QString)\0"
    "setAttributeNS(QDomElement*,QString,QString,double)\0"
    "setAttributeNS(QDomElement*,QString,QString,int)\0"
    "setAttributeNS(QDomElement*,QString,QString,qlonglong)\0"
    "theWrappedObject,newAttr\0"
    "setAttributeNode(QDomElement*,QDomAttr)\0"
    "setAttributeNodeNS(QDomElement*,QDomAttr)\0"
    "setTagName(QDomElement*,QString)\0"
    "tagName(QDomElement*)\0text(QDomElement*)\0"
    "__nonzero__(QDomElement*)\0"
};

void PythonQtWrapper_QDomElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomElement *_t = static_cast<PythonQtWrapper_QDomElement *>(_o);
        switch (_id) {
        case 0: { QDomElement* _r = _t->new_QDomElement();
            if (_a[0]) *reinterpret_cast< QDomElement**>(_a[0]) = _r; }  break;
        case 1: { QDomElement* _r = _t->new_QDomElement((*reinterpret_cast< const QDomElement(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomElement**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomElement((*reinterpret_cast< QDomElement*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->attribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->attribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->attributeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->attributeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QDomAttr _r = _t->attributeNode((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomAttr*>(_a[0]) = _r; }  break;
        case 8: { QDomAttr _r = _t->attributeNodeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomAttr*>(_a[0]) = _r; }  break;
        case 9: { QDomNamedNodeMap _r = _t->attributes((*reinterpret_cast< QDomElement*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNamedNodeMap*>(_a[0]) = _r; }  break;
        case 10: { QDomNodeList _r = _t->elementsByTagName((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNodeList*>(_a[0]) = _r; }  break;
        case 11: { QDomNodeList _r = _t->elementsByTagNameNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomNodeList*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->hasAttribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->hasAttributeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->removeAttribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: _t->removeAttributeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 16: { QDomAttr _r = _t->removeAttributeNode((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QDomAttr(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomAttr*>(_a[0]) = _r; }  break;
        case 17: _t->setAttribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 18: _t->setAttribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 19: _t->setAttribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 20: _t->setAttribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 21: _t->setAttribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< qlonglong(*)>(_a[3]))); break;
        case 22: _t->setAttributeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 23: _t->setAttributeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 24: _t->setAttributeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 25: _t->setAttributeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< qlonglong(*)>(_a[4]))); break;
        case 26: { QDomAttr _r = _t->setAttributeNode((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QDomAttr(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomAttr*>(_a[0]) = _r; }  break;
        case 27: { QDomAttr _r = _t->setAttributeNodeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QDomAttr(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomAttr*>(_a[0]) = _r; }  break;
        case 28: _t->setTagName((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 29: { QString _r = _t->tagName((*reinterpret_cast< QDomElement*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 30: { QString _r = _t->text((*reinterpret_cast< QDomElement*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomElement*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomElement::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomElement::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomElement,
      qt_meta_data_PythonQtWrapper_QDomElement, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomElement::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomElement::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomElement))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomElement*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDomEntity[] = {

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
      40,   27,   28,   27, 0x0a,
      59,   57,   28,   27, 0x0a,
      90,   86,   27,   27, 0x0a,
     146,  129,  121,   27, 0x0a,
     172,  129,  121,   27, 0x0a,
     194,  129,  121,   27, 0x0a,
     221,   86,  216,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomEntity[] = {
    "PythonQtWrapper_QDomEntity\0\0QDomEntity*\0"
    "new_QDomEntity()\0x\0new_QDomEntity(QDomEntity)\0"
    "obj\0delete_QDomEntity(QDomEntity*)\0"
    "QString\0theWrappedObject\0"
    "notationName(QDomEntity*)\0"
    "publicId(QDomEntity*)\0systemId(QDomEntity*)\0"
    "bool\0__nonzero__(QDomEntity*)\0"
};

void PythonQtWrapper_QDomEntity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomEntity *_t = static_cast<PythonQtWrapper_QDomEntity *>(_o);
        switch (_id) {
        case 0: { QDomEntity* _r = _t->new_QDomEntity();
            if (_a[0]) *reinterpret_cast< QDomEntity**>(_a[0]) = _r; }  break;
        case 1: { QDomEntity* _r = _t->new_QDomEntity((*reinterpret_cast< const QDomEntity(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomEntity**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomEntity((*reinterpret_cast< QDomEntity*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->notationName((*reinterpret_cast< QDomEntity*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->publicId((*reinterpret_cast< QDomEntity*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->systemId((*reinterpret_cast< QDomEntity*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomEntity*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomEntity::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomEntity::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomEntity,
      qt_meta_data_PythonQtWrapper_QDomEntity, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomEntity::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomEntity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomEntity::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomEntity))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomEntity*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomEntity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDomEntityReference[] = {

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
      58,   36,   37,   36, 0x0a,
      86,   84,   37,   36, 0x0a,
     135,  131,   36,   36, 0x0a,
     189,  131,  184,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomEntityReference[] = {
    "PythonQtWrapper_QDomEntityReference\0"
    "\0QDomEntityReference*\0new_QDomEntityReference()\0"
    "x\0new_QDomEntityReference(QDomEntityReference)\0"
    "obj\0delete_QDomEntityReference(QDomEntityReference*)\0"
    "bool\0__nonzero__(QDomEntityReference*)\0"
};

void PythonQtWrapper_QDomEntityReference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomEntityReference *_t = static_cast<PythonQtWrapper_QDomEntityReference *>(_o);
        switch (_id) {
        case 0: { QDomEntityReference* _r = _t->new_QDomEntityReference();
            if (_a[0]) *reinterpret_cast< QDomEntityReference**>(_a[0]) = _r; }  break;
        case 1: { QDomEntityReference* _r = _t->new_QDomEntityReference((*reinterpret_cast< const QDomEntityReference(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomEntityReference**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomEntityReference((*reinterpret_cast< QDomEntityReference*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomEntityReference*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomEntityReference::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomEntityReference::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomEntityReference,
      qt_meta_data_PythonQtWrapper_QDomEntityReference, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomEntityReference::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomEntityReference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomEntityReference::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomEntityReference))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomEntityReference*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomEntityReference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDomImplementation[] = {

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
      56,   35,   36,   35, 0x0a,
      88,   81,   36,   35, 0x0a,
     135,  131,   35,   35, 0x0a,
     232,  195,  182,   35, 0x0a,
     359,  318,  301,   35, 0x0a,
     461,  428,  423,   35, 0x0a,
     547,   35,  509,   35, 0x0a,
     610,  593,  423,   35, 0x0a,
     662,  638,  423,   35, 0x0a,
     709,  638,  423,   35, 0x0a,
     763,  756,   35,   35, 0x0a,
     849,  131,  423,   35, 0x0a,

 // enums: name, flags, count, data
     882, 0x0,    3,   78,

 // enum data: key, value
     900, uint(PythonQtWrapper_QDomImplementation::AcceptInvalidChars),
     919, uint(PythonQtWrapper_QDomImplementation::DropInvalidChars),
     936, uint(PythonQtWrapper_QDomImplementation::ReturnNullNode),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomImplementation[] = {
    "PythonQtWrapper_QDomImplementation\0\0"
    "QDomImplementation*\0new_QDomImplementation()\0"
    "arg__1\0new_QDomImplementation(QDomImplementation)\0"
    "obj\0delete_QDomImplementation(QDomImplementation*)\0"
    "QDomDocument\0theWrappedObject,nsURI,qName,doctype\0"
    "createDocument(QDomImplementation*,QString,QString,QDomDocumentType)\0"
    "QDomDocumentType\0"
    "theWrappedObject,qName,publicId,systemId\0"
    "createDocumentType(QDomImplementation*,QString,QString,QString)\0"
    "bool\0theWrappedObject,feature,version\0"
    "hasFeature(QDomImplementation*,QString,QString)\0"
    "QDomImplementation::InvalidDataPolicy\0"
    "static_QDomImplementation_invalidDataPolicy()\0"
    "theWrappedObject\0isNull(QDomImplementation*)\0"
    "theWrappedObject,arg__1\0"
    "__ne__(QDomImplementation*,QDomImplementation)\0"
    "__eq__(QDomImplementation*,QDomImplementation)\0"
    "policy\0"
    "static_QDomImplementation_setInvalidDataPolicy(QDomImplementation::Inv"
    "alidDataPolicy)\0"
    "__nonzero__(QDomImplementation*)\0"
    "InvalidDataPolicy\0AcceptInvalidChars\0"
    "DropInvalidChars\0ReturnNullNode\0"
};

void PythonQtWrapper_QDomImplementation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomImplementation *_t = static_cast<PythonQtWrapper_QDomImplementation *>(_o);
        switch (_id) {
        case 0: { QDomImplementation* _r = _t->new_QDomImplementation();
            if (_a[0]) *reinterpret_cast< QDomImplementation**>(_a[0]) = _r; }  break;
        case 1: { QDomImplementation* _r = _t->new_QDomImplementation((*reinterpret_cast< const QDomImplementation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomImplementation**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomImplementation((*reinterpret_cast< QDomImplementation*(*)>(_a[1]))); break;
        case 3: { QDomDocument _r = _t->createDocument((*reinterpret_cast< QDomImplementation*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QDomDocumentType(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDomDocument*>(_a[0]) = _r; }  break;
        case 4: { QDomDocumentType _r = _t->createDocumentType((*reinterpret_cast< QDomImplementation*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDomDocumentType*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->hasFeature((*reinterpret_cast< QDomImplementation*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QDomImplementation::InvalidDataPolicy _r = _t->static_QDomImplementation_invalidDataPolicy();
            if (_a[0]) *reinterpret_cast< QDomImplementation::InvalidDataPolicy*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isNull((*reinterpret_cast< QDomImplementation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__ne__((*reinterpret_cast< QDomImplementation*(*)>(_a[1])),(*reinterpret_cast< const QDomImplementation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->__eq__((*reinterpret_cast< QDomImplementation*(*)>(_a[1])),(*reinterpret_cast< const QDomImplementation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->static_QDomImplementation_setInvalidDataPolicy((*reinterpret_cast< QDomImplementation::InvalidDataPolicy(*)>(_a[1]))); break;
        case 11: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomImplementation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomImplementation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomImplementation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomImplementation,
      qt_meta_data_PythonQtWrapper_QDomImplementation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomImplementation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomImplementation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomImplementation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomImplementation))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomImplementation*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomImplementation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDomNamedNodeMap[] = {

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
      52,   33,   34,   33, 0x0a,
      82,   75,   34,   33, 0x0a,
     125,  121,   33,   33, 0x0a,
     195,  173,  168,   33, 0x0a,
     252,  235,  231,   33, 0x0a,
     277,  235,  168,   33, 0x0a,
     336,  313,  304,   33, 0x0a,
     369,  235,  364,   33, 0x0a,
     395,  173,  304,   33, 0x0a,
     465,  432,  304,   33, 0x0a,
     536,  512,  168,   33, 0x0a,
     579,  512,  168,   33, 0x0a,
     622,  173,  304,   33, 0x0a,
     665,  432,  304,   33, 0x0a,
     743,  718,  304,   33, 0x0a,
     784,  718,  304,   33, 0x0a,
     827,  235,  231,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomNamedNodeMap[] = {
    "PythonQtWrapper_QDomNamedNodeMap\0\0"
    "QDomNamedNodeMap*\0new_QDomNamedNodeMap()\0"
    "arg__1\0new_QDomNamedNodeMap(QDomNamedNodeMap)\0"
    "obj\0delete_QDomNamedNodeMap(QDomNamedNodeMap*)\0"
    "bool\0theWrappedObject,name\0"
    "contains(QDomNamedNodeMap*,QString)\0"
    "int\0theWrappedObject\0count(QDomNamedNodeMap*)\0"
    "isEmpty(QDomNamedNodeMap*)\0QDomNode\0"
    "theWrappedObject,index\0"
    "item(QDomNamedNodeMap*,int)\0uint\0"
    "length(QDomNamedNodeMap*)\0"
    "namedItem(QDomNamedNodeMap*,QString)\0"
    "theWrappedObject,nsURI,localName\0"
    "namedItemNS(QDomNamedNodeMap*,QString,QString)\0"
    "theWrappedObject,arg__1\0"
    "__ne__(QDomNamedNodeMap*,QDomNamedNodeMap)\0"
    "__eq__(QDomNamedNodeMap*,QDomNamedNodeMap)\0"
    "removeNamedItem(QDomNamedNodeMap*,QString)\0"
    "removeNamedItemNS(QDomNamedNodeMap*,QString,QString)\0"
    "theWrappedObject,newNode\0"
    "setNamedItem(QDomNamedNodeMap*,QDomNode)\0"
    "setNamedItemNS(QDomNamedNodeMap*,QDomNode)\0"
    "size(QDomNamedNodeMap*)\0"
};

void PythonQtWrapper_QDomNamedNodeMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomNamedNodeMap *_t = static_cast<PythonQtWrapper_QDomNamedNodeMap *>(_o);
        switch (_id) {
        case 0: { QDomNamedNodeMap* _r = _t->new_QDomNamedNodeMap();
            if (_a[0]) *reinterpret_cast< QDomNamedNodeMap**>(_a[0]) = _r; }  break;
        case 1: { QDomNamedNodeMap* _r = _t->new_QDomNamedNodeMap((*reinterpret_cast< const QDomNamedNodeMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNamedNodeMap**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomNamedNodeMap((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->contains((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->count((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isEmpty((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QDomNode _r = _t->item((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 7: { uint _r = _t->length((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 8: { QDomNode _r = _t->namedItem((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 9: { QDomNode _r = _t->namedItemNS((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->__ne__((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QDomNamedNodeMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__eq__((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QDomNamedNodeMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QDomNode _r = _t->removeNamedItem((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 13: { QDomNode _r = _t->removeNamedItemNS((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 14: { QDomNode _r = _t->setNamedItem((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 15: { QDomNode _r = _t->setNamedItemNS((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->size((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomNamedNodeMap::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomNamedNodeMap::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomNamedNodeMap,
      qt_meta_data_PythonQtWrapper_QDomNamedNodeMap, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomNamedNodeMap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomNamedNodeMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomNamedNodeMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomNamedNodeMap))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomNamedNodeMap*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomNamedNodeMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDomNode[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      74,   14, // methods
       0,    0, // properties
       2,  384, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   25,   26,   25, 0x0a,
      58,   51,   26,   25, 0x0a,
      85,   81,   25,   25, 0x0a,
     147,  121,  112,   25, 0x0a,
     209,  192,  179,   25, 0x0a,
     231,  192,   25,   25, 0x0a,
     270,  248,  112,   25, 0x0a,
     296,  192,  112,   25, 0x2a,
     321,  192,  317,   25, 0x0a,
     345,  192,  112,   25, 0x0a,
     404,  379,  367,   25, 0x0a,
     441,  192,  367,   25, 0x2a,
     475,  192,  470,   25, 0x0a,
     500,  192,  470,   25, 0x0a,
     560,  525,  112,   25, 0x0a,
     601,  525,  112,   25, 0x0a,
     643,  192,  470,   25, 0x0a,
     661,  192,  470,   25, 0x0a,
     687,  192,  470,   25, 0x0a,
     714,  192,  470,   25, 0x0a,
     735,  192,  470,   25, 0x0a,
     757,  192,  470,   25, 0x0a,
     787,  192,  470,   25, 0x0a,
     813,  192,  470,   25, 0x0a,
     834,  192,  470,   25, 0x0a,
     854,  192,  470,   25, 0x0a,
     883,  192,  470,   25, 0x0a,
     905,  192,  470,   25, 0x0a,
     923,  192,  470,   25, 0x0a,
     991,  958,  470,   25, 0x0a,
    1030,  192,  470,   25, 0x0a,
    1048,  192,  112,   25, 0x0a,
    1069,  379,  367,   25, 0x0a,
    1105,  192,  367,   25, 0x2a,
    1133,  192,  317,   25, 0x0a,
    1163,  192, 1155,   25, 0x0a,
    1206, 1184,  112,   25, 0x0a,
    1235,  192, 1155,   25, 0x0a,
    1259,  192,  112,   25, 0x0a,
    1306, 1282,  367,   25, 0x0a,
    1344,  192,  367,   25, 0x2a,
    1374,  192, 1155,   25, 0x0a,
    1413,  192, 1394,   25, 0x0a,
    1433,  192, 1155,   25, 0x0a,
    1454,  192,   25,   25, 0x0a,
    1499, 1475,  470,   25, 0x0a,
    1526, 1475,   25,   25, 0x0a,
    1558, 1475,  470,   25, 0x0a,
    1598,  192, 1585,   25, 0x0a,
    1623,  192,  112,   25, 0x0a,
    1645,  192, 1155,   25, 0x0a,
    1663,  192,  112,   25, 0x0a,
    1690,  379,  367,   25, 0x0a,
    1732,  192,  367,   25, 0x2a,
    1792, 1766,  112,   25, 0x0a,
    1859, 1824,  112,   25, 0x0a,
    1932, 1901,   25,   25, 0x0a,
    2003, 1965,   25,   25, 0x0a,
    2061, 1475,   25,   25, 0x0a,
    2114, 2093,   25,   25, 0x0a,
    2152,  192, 2143,   25, 0x0a,
    2187,  192, 2170,   25, 0x0a,
    2231,  192, 2213,   25, 0x0a,
    2270,  192, 2258,   25, 0x0a,
    2291,  192, 1585,   25, 0x0a,
    2334,  192, 2313,   25, 0x0a,
    2381,  192, 2364,   25, 0x0a,
    2407,  192,  367,   25, 0x0a,
    2439,  192, 2428,   25, 0x0a,
    2479,  192, 2459,   25, 0x0a,
    2521,  192, 2508,   25, 0x0a,
    2569,  192, 2543,   25, 0x0a,
    2613,  192, 2604,   25, 0x0a,
    2631,   81,  470,   25, 0x0a,

 // enums: name, flags, count, data
    2654, 0x0,    2,  392,
    2669, 0x0,   14,  396,

 // enum data: key, value
    2678, uint(PythonQtWrapper_QDomNode::EncodingFromDocument),
    2699, uint(PythonQtWrapper_QDomNode::EncodingFromTextStream),
    2722, uint(PythonQtWrapper_QDomNode::ElementNode),
    2734, uint(PythonQtWrapper_QDomNode::AttributeNode),
    2748, uint(PythonQtWrapper_QDomNode::TextNode),
    2757, uint(PythonQtWrapper_QDomNode::CDATASectionNode),
    2774, uint(PythonQtWrapper_QDomNode::EntityReferenceNode),
    2794, uint(PythonQtWrapper_QDomNode::EntityNode),
    2805, uint(PythonQtWrapper_QDomNode::ProcessingInstructionNode),
    2831, uint(PythonQtWrapper_QDomNode::CommentNode),
    2843, uint(PythonQtWrapper_QDomNode::DocumentNode),
    2856, uint(PythonQtWrapper_QDomNode::DocumentTypeNode),
    2873, uint(PythonQtWrapper_QDomNode::DocumentFragmentNode),
    2894, uint(PythonQtWrapper_QDomNode::NotationNode),
    2907, uint(PythonQtWrapper_QDomNode::BaseNode),
    2916, uint(PythonQtWrapper_QDomNode::CharacterDataNode),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomNode[] = {
    "PythonQtWrapper_QDomNode\0\0QDomNode*\0"
    "new_QDomNode()\0arg__1\0new_QDomNode(QDomNode)\0"
    "obj\0delete_QDomNode(QDomNode*)\0QDomNode\0"
    "theWrappedObject,newChild\0"
    "appendChild(QDomNode*,QDomNode)\0"
    "QDomNodeList\0theWrappedObject\0"
    "childNodes(QDomNode*)\0clear(QDomNode*)\0"
    "theWrappedObject,deep\0cloneNode(QDomNode*,bool)\0"
    "cloneNode(QDomNode*)\0int\0"
    "columnNumber(QDomNode*)\0firstChild(QDomNode*)\0"
    "QDomElement\0theWrappedObject,tagName\0"
    "firstChildElement(QDomNode*,QString)\0"
    "firstChildElement(QDomNode*)\0bool\0"
    "hasAttributes(QDomNode*)\0"
    "hasChildNodes(QDomNode*)\0"
    "theWrappedObject,newChild,refChild\0"
    "insertAfter(QDomNode*,QDomNode,QDomNode)\0"
    "insertBefore(QDomNode*,QDomNode,QDomNode)\0"
    "isAttr(QDomNode*)\0isCDATASection(QDomNode*)\0"
    "isCharacterData(QDomNode*)\0"
    "isComment(QDomNode*)\0isDocument(QDomNode*)\0"
    "isDocumentFragment(QDomNode*)\0"
    "isDocumentType(QDomNode*)\0"
    "isElement(QDomNode*)\0isEntity(QDomNode*)\0"
    "isEntityReference(QDomNode*)\0"
    "isNotation(QDomNode*)\0isNull(QDomNode*)\0"
    "isProcessingInstruction(QDomNode*)\0"
    "theWrappedObject,feature,version\0"
    "isSupported(QDomNode*,QString,QString)\0"
    "isText(QDomNode*)\0lastChild(QDomNode*)\0"
    "lastChildElement(QDomNode*,QString)\0"
    "lastChildElement(QDomNode*)\0"
    "lineNumber(QDomNode*)\0QString\0"
    "localName(QDomNode*)\0theWrappedObject,name\0"
    "namedItem(QDomNode*,QString)\0"
    "namespaceURI(QDomNode*)\0nextSibling(QDomNode*)\0"
    "theWrappedObject,taName\0"
    "nextSiblingElement(QDomNode*,QString)\0"
    "nextSiblingElement(QDomNode*)\0"
    "nodeName(QDomNode*)\0QDomNode::NodeType\0"
    "nodeType(QDomNode*)\0nodeValue(QDomNode*)\0"
    "normalize(QDomNode*)\0theWrappedObject,arg__1\0"
    "__ne__(QDomNode*,QDomNode)\0"
    "writeTo(QDomNode*,QTextStream&)\0"
    "__eq__(QDomNode*,QDomNode)\0QDomDocument\0"
    "ownerDocument(QDomNode*)\0parentNode(QDomNode*)\0"
    "prefix(QDomNode*)\0previousSibling(QDomNode*)\0"
    "previousSiblingElement(QDomNode*,QString)\0"
    "previousSiblingElement(QDomNode*)\0"
    "theWrappedObject,oldChild\0"
    "removeChild(QDomNode*,QDomNode)\0"
    "theWrappedObject,newChild,oldChild\0"
    "replaceChild(QDomNode*,QDomNode,QDomNode)\0"
    "theWrappedObject,arg__1,arg__2\0"
    "save(QDomNode*,QTextStream&,int)\0"
    "theWrappedObject,arg__1,arg__2,arg__3\0"
    "save(QDomNode*,QTextStream&,int,QDomNode::EncodingPolicy)\0"
    "setNodeValue(QDomNode*,QString)\0"
    "theWrappedObject,pre\0setPrefix(QDomNode*,QString)\0"
    "QDomAttr\0toAttr(QDomNode*)\0QDomCDATASection\0"
    "toCDATASection(QDomNode*)\0QDomCharacterData\0"
    "toCharacterData(QDomNode*)\0QDomComment\0"
    "toComment(QDomNode*)\0toDocument(QDomNode*)\0"
    "QDomDocumentFragment\0toDocumentFragment(QDomNode*)\0"
    "QDomDocumentType\0toDocumentType(QDomNode*)\0"
    "toElement(QDomNode*)\0QDomEntity\0"
    "toEntity(QDomNode*)\0QDomEntityReference\0"
    "toEntityReference(QDomNode*)\0QDomNotation\0"
    "toNotation(QDomNode*)\0QDomProcessingInstruction\0"
    "toProcessingInstruction(QDomNode*)\0"
    "QDomText\0toText(QDomNode*)\0"
    "__nonzero__(QDomNode*)\0EncodingPolicy\0"
    "NodeType\0EncodingFromDocument\0"
    "EncodingFromTextStream\0ElementNode\0"
    "AttributeNode\0TextNode\0CDATASectionNode\0"
    "EntityReferenceNode\0EntityNode\0"
    "ProcessingInstructionNode\0CommentNode\0"
    "DocumentNode\0DocumentTypeNode\0"
    "DocumentFragmentNode\0NotationNode\0"
    "BaseNode\0CharacterDataNode\0"
};

void PythonQtWrapper_QDomNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomNode *_t = static_cast<PythonQtWrapper_QDomNode *>(_o);
        switch (_id) {
        case 0: { QDomNode* _r = _t->new_QDomNode();
            if (_a[0]) *reinterpret_cast< QDomNode**>(_a[0]) = _r; }  break;
        case 1: { QDomNode* _r = _t->new_QDomNode((*reinterpret_cast< const QDomNode(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNode**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomNode((*reinterpret_cast< QDomNode*(*)>(_a[1]))); break;
        case 3: { QDomNode _r = _t->appendChild((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 4: { QDomNodeList _r = _t->childNodes((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNodeList*>(_a[0]) = _r; }  break;
        case 5: _t->clear((*reinterpret_cast< QDomNode*(*)>(_a[1]))); break;
        case 6: { QDomNode _r = _t->cloneNode((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 7: { QDomNode _r = _t->cloneNode((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->columnNumber((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QDomNode _r = _t->firstChild((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 10: { QDomElement _r = _t->firstChildElement((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 11: { QDomElement _r = _t->firstChildElement((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->hasAttributes((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->hasChildNodes((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QDomNode _r = _t->insertAfter((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])),(*reinterpret_cast< const QDomNode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 15: { QDomNode _r = _t->insertBefore((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])),(*reinterpret_cast< const QDomNode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isAttr((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isCDATASection((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->isCharacterData((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->isComment((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->isDocument((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isDocumentFragment((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->isDocumentType((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->isElement((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->isEntity((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->isEntityReference((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->isNotation((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->isNull((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->isProcessingInstruction((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->isSupported((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->isText((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { QDomNode _r = _t->lastChild((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 32: { QDomElement _r = _t->lastChildElement((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 33: { QDomElement _r = _t->lastChildElement((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 34: { int _r = _t->lineNumber((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 35: { QString _r = _t->localName((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 36: { QDomNode _r = _t->namedItem((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 37: { QString _r = _t->namespaceURI((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 38: { QDomNode _r = _t->nextSibling((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 39: { QDomElement _r = _t->nextSiblingElement((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 40: { QDomElement _r = _t->nextSiblingElement((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 41: { QString _r = _t->nodeName((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 42: { QDomNode::NodeType _r = _t->nodeType((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNode::NodeType*>(_a[0]) = _r; }  break;
        case 43: { QString _r = _t->nodeValue((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 44: _t->normalize((*reinterpret_cast< QDomNode*(*)>(_a[1]))); break;
        case 45: { bool _r = _t->__ne__((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: _t->writeTo((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< QTextStream(*)>(_a[2]))); break;
        case 47: { bool _r = _t->__eq__((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { QDomDocument _r = _t->ownerDocument((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocument*>(_a[0]) = _r; }  break;
        case 49: { QDomNode _r = _t->parentNode((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 50: { QString _r = _t->prefix((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 51: { QDomNode _r = _t->previousSibling((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 52: { QDomElement _r = _t->previousSiblingElement((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 53: { QDomElement _r = _t->previousSiblingElement((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 54: { QDomNode _r = _t->removeChild((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 55: { QDomNode _r = _t->replaceChild((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])),(*reinterpret_cast< const QDomNode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 56: _t->save((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< QTextStream(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 57: _t->save((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< QTextStream(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QDomNode::EncodingPolicy(*)>(_a[4]))); break;
        case 58: _t->setNodeValue((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 59: _t->setPrefix((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 60: { QDomAttr _r = _t->toAttr((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomAttr*>(_a[0]) = _r; }  break;
        case 61: { QDomCDATASection _r = _t->toCDATASection((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomCDATASection*>(_a[0]) = _r; }  break;
        case 62: { QDomCharacterData _r = _t->toCharacterData((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomCharacterData*>(_a[0]) = _r; }  break;
        case 63: { QDomComment _r = _t->toComment((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomComment*>(_a[0]) = _r; }  break;
        case 64: { QDomDocument _r = _t->toDocument((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocument*>(_a[0]) = _r; }  break;
        case 65: { QDomDocumentFragment _r = _t->toDocumentFragment((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocumentFragment*>(_a[0]) = _r; }  break;
        case 66: { QDomDocumentType _r = _t->toDocumentType((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocumentType*>(_a[0]) = _r; }  break;
        case 67: { QDomElement _r = _t->toElement((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 68: { QDomEntity _r = _t->toEntity((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomEntity*>(_a[0]) = _r; }  break;
        case 69: { QDomEntityReference _r = _t->toEntityReference((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomEntityReference*>(_a[0]) = _r; }  break;
        case 70: { QDomNotation _r = _t->toNotation((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNotation*>(_a[0]) = _r; }  break;
        case 71: { QDomProcessingInstruction _r = _t->toProcessingInstruction((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomProcessingInstruction*>(_a[0]) = _r; }  break;
        case 72: { QDomText _r = _t->toText((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomText*>(_a[0]) = _r; }  break;
        case 73: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomNode::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomNode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomNode,
      qt_meta_data_PythonQtWrapper_QDomNode, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomNode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomNode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomNode))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomNode*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QDomNodeList[] = {

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
      44,   29,   30,   29, 0x0a,
      70,   63,   30,   29, 0x0a,
     105,  101,   29,   29, 0x0a,
     172,  149,  140,   29, 0x0a,
     215,  198,  194,   29, 0x0a,
     241,  198,  236,   29, 0x0a,
     264,  149,  140,   29, 0x0a,
     293,  198,  288,   29, 0x0a,
     339,  315,  236,   29, 0x0a,
     374,  315,  236,   29, 0x0a,
     409,  198,  194,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomNodeList[] = {
    "PythonQtWrapper_QDomNodeList\0\0"
    "QDomNodeList*\0new_QDomNodeList()\0"
    "arg__1\0new_QDomNodeList(QDomNodeList)\0"
    "obj\0delete_QDomNodeList(QDomNodeList*)\0"
    "QDomNode\0theWrappedObject,index\0"
    "at(QDomNodeList*,int)\0int\0theWrappedObject\0"
    "count(QDomNodeList*)\0bool\0"
    "isEmpty(QDomNodeList*)\0item(QDomNodeList*,int)\0"
    "uint\0length(QDomNodeList*)\0"
    "theWrappedObject,arg__1\0"
    "__ne__(QDomNodeList*,QDomNodeList)\0"
    "__eq__(QDomNodeList*,QDomNodeList)\0"
    "size(QDomNodeList*)\0"
};

void PythonQtWrapper_QDomNodeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomNodeList *_t = static_cast<PythonQtWrapper_QDomNodeList *>(_o);
        switch (_id) {
        case 0: { QDomNodeList* _r = _t->new_QDomNodeList();
            if (_a[0]) *reinterpret_cast< QDomNodeList**>(_a[0]) = _r; }  break;
        case 1: { QDomNodeList* _r = _t->new_QDomNodeList((*reinterpret_cast< const QDomNodeList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNodeList**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomNodeList((*reinterpret_cast< QDomNodeList*(*)>(_a[1]))); break;
        case 3: { QDomNode _r = _t->at((*reinterpret_cast< QDomNodeList*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->count((*reinterpret_cast< QDomNodeList*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isEmpty((*reinterpret_cast< QDomNodeList*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QDomNode _r = _t->item((*reinterpret_cast< QDomNodeList*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 7: { uint _r = _t->length((*reinterpret_cast< QDomNodeList*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__ne__((*reinterpret_cast< QDomNodeList*(*)>(_a[1])),(*reinterpret_cast< const QDomNodeList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->__eq__((*reinterpret_cast< QDomNodeList*(*)>(_a[1])),(*reinterpret_cast< const QDomNodeList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->size((*reinterpret_cast< QDomNodeList*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomNodeList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomNodeList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomNodeList,
      qt_meta_data_PythonQtWrapper_QDomNodeList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomNodeList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomNodeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomNodeList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomNodeList))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomNodeList*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomNodeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDomNotation[] = {

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
      44,   29,   30,   29, 0x0a,
      65,   63,   30,   29, 0x0a,
     100,   96,   29,   29, 0x0a,
     160,  143,  135,   29, 0x0a,
     184,  143,  135,   29, 0x0a,
     213,   96,  208,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomNotation[] = {
    "PythonQtWrapper_QDomNotation\0\0"
    "QDomNotation*\0new_QDomNotation()\0x\0"
    "new_QDomNotation(QDomNotation)\0obj\0"
    "delete_QDomNotation(QDomNotation*)\0"
    "QString\0theWrappedObject\0"
    "publicId(QDomNotation*)\0systemId(QDomNotation*)\0"
    "bool\0__nonzero__(QDomNotation*)\0"
};

void PythonQtWrapper_QDomNotation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomNotation *_t = static_cast<PythonQtWrapper_QDomNotation *>(_o);
        switch (_id) {
        case 0: { QDomNotation* _r = _t->new_QDomNotation();
            if (_a[0]) *reinterpret_cast< QDomNotation**>(_a[0]) = _r; }  break;
        case 1: { QDomNotation* _r = _t->new_QDomNotation((*reinterpret_cast< const QDomNotation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNotation**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomNotation((*reinterpret_cast< QDomNotation*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->publicId((*reinterpret_cast< QDomNotation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->systemId((*reinterpret_cast< QDomNotation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomNotation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomNotation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomNotation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomNotation,
      qt_meta_data_PythonQtWrapper_QDomNotation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomNotation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomNotation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomNotation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomNotation))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomNotation*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomNotation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDomProcessingInstruction[] = {

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
      70,   42,   43,   42, 0x0a,
     104,  102,   43,   42, 0x0a,
     165,  161,   42,   42, 0x0a,
     251,  234,  226,   42, 0x0a,
     303,  284,   42,   42, 0x0a,
     347,  234,  226,   42, 0x0a,
     387,  161,  382,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomProcessingInstruction[] = {
    "PythonQtWrapper_QDomProcessingInstruction\0"
    "\0QDomProcessingInstruction*\0"
    "new_QDomProcessingInstruction()\0x\0"
    "new_QDomProcessingInstruction(QDomProcessingInstruction)\0"
    "obj\0delete_QDomProcessingInstruction(QDomProcessingInstruction*)\0"
    "QString\0theWrappedObject\0"
    "data(QDomProcessingInstruction*)\0"
    "theWrappedObject,d\0"
    "setData(QDomProcessingInstruction*,QString)\0"
    "target(QDomProcessingInstruction*)\0"
    "bool\0__nonzero__(QDomProcessingInstruction*)\0"
};

void PythonQtWrapper_QDomProcessingInstruction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomProcessingInstruction *_t = static_cast<PythonQtWrapper_QDomProcessingInstruction *>(_o);
        switch (_id) {
        case 0: { QDomProcessingInstruction* _r = _t->new_QDomProcessingInstruction();
            if (_a[0]) *reinterpret_cast< QDomProcessingInstruction**>(_a[0]) = _r; }  break;
        case 1: { QDomProcessingInstruction* _r = _t->new_QDomProcessingInstruction((*reinterpret_cast< const QDomProcessingInstruction(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomProcessingInstruction**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomProcessingInstruction((*reinterpret_cast< QDomProcessingInstruction*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->data((*reinterpret_cast< QDomProcessingInstruction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->setData((*reinterpret_cast< QDomProcessingInstruction*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: { QString _r = _t->target((*reinterpret_cast< QDomProcessingInstruction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomProcessingInstruction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomProcessingInstruction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomProcessingInstruction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomProcessingInstruction,
      qt_meta_data_PythonQtWrapper_QDomProcessingInstruction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomProcessingInstruction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomProcessingInstruction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomProcessingInstruction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomProcessingInstruction))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomProcessingInstruction*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomProcessingInstruction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QDomText[] = {

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
      36,   25,   26,   25, 0x0a,
      53,   51,   26,   25, 0x0a,
      80,   76,   25,   25, 0x0a,
     140,  116,  107,   25, 0x0a,
     170,   76,  165,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QDomText[] = {
    "PythonQtWrapper_QDomText\0\0QDomText*\0"
    "new_QDomText()\0x\0new_QDomText(QDomText)\0"
    "obj\0delete_QDomText(QDomText*)\0QDomText\0"
    "theWrappedObject,offset\0"
    "splitText(QDomText*,int)\0bool\0"
    "__nonzero__(QDomText*)\0"
};

void PythonQtWrapper_QDomText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QDomText *_t = static_cast<PythonQtWrapper_QDomText *>(_o);
        switch (_id) {
        case 0: { QDomText* _r = _t->new_QDomText();
            if (_a[0]) *reinterpret_cast< QDomText**>(_a[0]) = _r; }  break;
        case 1: { QDomText* _r = _t->new_QDomText((*reinterpret_cast< const QDomText(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomText**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomText((*reinterpret_cast< QDomText*(*)>(_a[1]))); break;
        case 3: { QDomText _r = _t->splitText((*reinterpret_cast< QDomText*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomText*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomText*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QDomText::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QDomText::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomText,
      qt_meta_data_PythonQtWrapper_QDomText, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QDomText::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QDomText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QDomText::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomText))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomText*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlAttributes[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      48,   31,   32,   31, 0x0a,
      75,   69,   32,   31, 0x0a,
     114,  110,   31,   31, 0x0a,
     196,  153,   31,   31, 0x0a,
     269,  252,   31,   31, 0x0a,
     296,  252,  292,   31, 0x0a,
     342,  319,  292,   31, 0x0a,
     404,  373,  292,   31, 0x0a,
     443,  252,  292,   31, 0x0a,
     498,  475,  467,   31, 0x0a,
     529,  475,  467,   31, 0x0a,
     556,  319,  467,   31, 0x0a,
     617,  586,  467,   31, 0x0a,
     655,  475,  467,   31, 0x0a,
     681,  475,  467,   31, 0x0a,
     706,  319,  467,   31, 0x0a,
     737,  586,  467,   31, 0x0a,
     776,  475,  467,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlAttributes[] = {
    "PythonQtWrapper_QXmlAttributes\0\0"
    "QXmlAttributes*\0new_QXmlAttributes()\0"
    "other\0new_QXmlAttributes(QXmlAttributes)\0"
    "obj\0delete_QXmlAttributes(QXmlAttributes*)\0"
    "theWrappedObject,qName,uri,localPart,value\0"
    "append(QXmlAttributes*,QString,QString,QString,QString)\0"
    "theWrappedObject\0clear(QXmlAttributes*)\0"
    "int\0count(QXmlAttributes*)\0"
    "theWrappedObject,qName\0"
    "index(QXmlAttributes*,QString)\0"
    "theWrappedObject,uri,localPart\0"
    "index(QXmlAttributes*,QString,QString)\0"
    "length(QXmlAttributes*)\0QString\0"
    "theWrappedObject,index\0"
    "localName(QXmlAttributes*,int)\0"
    "qName(QXmlAttributes*,int)\0"
    "type(QXmlAttributes*,QString)\0"
    "theWrappedObject,uri,localName\0"
    "type(QXmlAttributes*,QString,QString)\0"
    "type(QXmlAttributes*,int)\0"
    "uri(QXmlAttributes*,int)\0"
    "value(QXmlAttributes*,QString)\0"
    "value(QXmlAttributes*,QString,QString)\0"
    "value(QXmlAttributes*,int)\0"
};

void PythonQtWrapper_QXmlAttributes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlAttributes *_t = static_cast<PythonQtWrapper_QXmlAttributes *>(_o);
        switch (_id) {
        case 0: { QXmlAttributes* _r = _t->new_QXmlAttributes();
            if (_a[0]) *reinterpret_cast< QXmlAttributes**>(_a[0]) = _r; }  break;
        case 1: { QXmlAttributes* _r = _t->new_QXmlAttributes((*reinterpret_cast< const QXmlAttributes(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlAttributes**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QXmlAttributes((*reinterpret_cast< QXmlAttributes*(*)>(_a[1]))); break;
        case 3: _t->append((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 4: _t->clear((*reinterpret_cast< QXmlAttributes*(*)>(_a[1]))); break;
        case 5: { int _r = _t->count((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->index((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->index((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->length((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->localName((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->qName((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->type((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->type((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->type((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->uri((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->value((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->value((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->value((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlAttributes::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlAttributes::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlAttributes,
      qt_meta_data_PythonQtWrapper_QXmlAttributes, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlAttributes::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlAttributes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlAttributes::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlAttributes))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlAttributes*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlAttributes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlContentHandler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      56,   35,   36,   35, 0x0a,
      85,   81,   35,   35, 0x0a,
     157,  137,  132,   35, 0x0a,
     214,  197,  132,   35, 0x0a,
     293,  247,  132,   35, 0x0a,
     373,  349,  132,   35, 0x0a,
     427,  197,  419,   35, 0x0a,
     460,  137,  132,   35, 0x0a,
     538,  509,  132,   35, 0x0a,
     622,  597,   35,   35, 0x0a,
     697,  675,  132,   35, 0x0a,
     740,  197,  132,   35, 0x0a,
     826,  775,  132,   35, 0x0a,
     927,  899,  132,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlContentHandler[] = {
    "PythonQtWrapper_QXmlContentHandler\0\0"
    "QXmlContentHandler*\0new_QXmlContentHandler()\0"
    "obj\0delete_QXmlContentHandler(QXmlContentHandler*)\0"
    "bool\0theWrappedObject,ch\0"
    "characters(QXmlContentHandler*,QString)\0"
    "theWrappedObject\0endDocument(QXmlContentHandler*)\0"
    "theWrappedObject,namespaceURI,localName,qName\0"
    "endElement(QXmlContentHandler*,QString,QString,QString)\0"
    "theWrappedObject,prefix\0"
    "endPrefixMapping(QXmlContentHandler*,QString)\0"
    "QString\0errorString(QXmlContentHandler*)\0"
    "ignorableWhitespace(QXmlContentHandler*,QString)\0"
    "theWrappedObject,target,data\0"
    "processingInstruction(QXmlContentHandler*,QString,QString)\0"
    "theWrappedObject,locator\0"
    "setDocumentLocator(QXmlContentHandler*,QXmlLocator*)\0"
    "theWrappedObject,name\0"
    "skippedEntity(QXmlContentHandler*,QString)\0"
    "startDocument(QXmlContentHandler*)\0"
    "theWrappedObject,namespaceURI,localName,qName,atts\0"
    "startElement(QXmlContentHandler*,QString,QString,QString,QXmlAttribute"
    "s)\0"
    "theWrappedObject,prefix,uri\0"
    "startPrefixMapping(QXmlContentHandler*,QString,QString)\0"
};

void PythonQtWrapper_QXmlContentHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlContentHandler *_t = static_cast<PythonQtWrapper_QXmlContentHandler *>(_o);
        switch (_id) {
        case 0: { QXmlContentHandler* _r = _t->new_QXmlContentHandler();
            if (_a[0]) *reinterpret_cast< QXmlContentHandler**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlContentHandler((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->characters((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->endDocument((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->endElement((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->endPrefixMapping((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->errorString((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->ignorableWhitespace((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->processingInstruction((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->setDocumentLocator((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< QXmlLocator*(*)>(_a[2]))); break;
        case 10: { bool _r = _t->skippedEntity((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->startDocument((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->startElement((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QXmlAttributes(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->startPrefixMapping((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlContentHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlContentHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlContentHandler,
      qt_meta_data_PythonQtWrapper_QXmlContentHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlContentHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlContentHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlContentHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlContentHandler))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlContentHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlContentHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QXmlDTDHandler[] = {

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
      48,   31,   32,   31, 0x0a,
      73,   69,   31,   31, 0x0a,
     137,  120,  112,   31, 0x0a,
     211,  171,  166,   31, 0x0a,
     318,  265,  166,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlDTDHandler[] = {
    "PythonQtWrapper_QXmlDTDHandler\0\0"
    "QXmlDTDHandler*\0new_QXmlDTDHandler()\0"
    "obj\0delete_QXmlDTDHandler(QXmlDTDHandler*)\0"
    "QString\0theWrappedObject\0"
    "errorString(QXmlDTDHandler*)\0bool\0"
    "theWrappedObject,name,publicId,systemId\0"
    "notationDecl(QXmlDTDHandler*,QString,QString,QString)\0"
    "theWrappedObject,name,publicId,systemId,notationName\0"
    "unparsedEntityDecl(QXmlDTDHandler*,QString,QString,QString,QString)\0"
};

void PythonQtWrapper_QXmlDTDHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlDTDHandler *_t = static_cast<PythonQtWrapper_QXmlDTDHandler *>(_o);
        switch (_id) {
        case 0: { QXmlDTDHandler* _r = _t->new_QXmlDTDHandler();
            if (_a[0]) *reinterpret_cast< QXmlDTDHandler**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlDTDHandler((*reinterpret_cast< QXmlDTDHandler*(*)>(_a[1]))); break;
        case 2: { QString _r = _t->errorString((*reinterpret_cast< QXmlDTDHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->notationDecl((*reinterpret_cast< QXmlDTDHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->unparsedEntityDecl((*reinterpret_cast< QXmlDTDHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlDTDHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlDTDHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlDTDHandler,
      qt_meta_data_PythonQtWrapper_QXmlDTDHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlDTDHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlDTDHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlDTDHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlDTDHandler))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlDTDHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlDTDHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlDeclHandler[] = {

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
      50,   32,   33,   32, 0x0a,
      76,   72,   32,   32, 0x0a,
     175,  122,  117,   32, 0x0a,
     272,  255,  247,   32, 0x0a,
     342,  302,  117,   32, 0x0a,
     431,  403,  117,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlDeclHandler[] = {
    "PythonQtWrapper_QXmlDeclHandler\0\0"
    "QXmlDeclHandler*\0new_QXmlDeclHandler()\0"
    "obj\0delete_QXmlDeclHandler(QXmlDeclHandler*)\0"
    "bool\0theWrappedObject,eName,aName,type,valueDefault,value\0"
    "attributeDecl(QXmlDeclHandler*,QString,QString,QString,QString,QString"
    ")\0"
    "QString\0theWrappedObject\0"
    "errorString(QXmlDeclHandler*)\0"
    "theWrappedObject,name,publicId,systemId\0"
    "externalEntityDecl(QXmlDeclHandler*,QString,QString,QString)\0"
    "theWrappedObject,name,value\0"
    "internalEntityDecl(QXmlDeclHandler*,QString,QString)\0"
};

void PythonQtWrapper_QXmlDeclHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlDeclHandler *_t = static_cast<PythonQtWrapper_QXmlDeclHandler *>(_o);
        switch (_id) {
        case 0: { QXmlDeclHandler* _r = _t->new_QXmlDeclHandler();
            if (_a[0]) *reinterpret_cast< QXmlDeclHandler**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlDeclHandler((*reinterpret_cast< QXmlDeclHandler*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->attributeDecl((*reinterpret_cast< QXmlDeclHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->errorString((*reinterpret_cast< QXmlDeclHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->externalEntityDecl((*reinterpret_cast< QXmlDeclHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->internalEntityDecl((*reinterpret_cast< QXmlDeclHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlDeclHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlDeclHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlDeclHandler,
      qt_meta_data_PythonQtWrapper_QXmlDeclHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlDeclHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlDeclHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlDeclHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlDeclHandler))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlDeclHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlDeclHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlDefaultHandler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      56,   35,   36,   35, 0x0a,
      85,   81,   35,   35, 0x0a,
     190,  137,  132,   35, 0x0a,
     285,  265,  132,   35, 0x0a,
     325,  265,  132,   35, 0x0a,
     379,  362,  132,   35, 0x0a,
     409,  362,  132,   35, 0x0a,
     437,  362,  132,   35, 0x0a,
     516,  470,  132,   35, 0x0a,
     594,  572,  132,   35, 0x0a,
     657,  633,  132,   35, 0x0a,
     730,  703,  132,   35, 0x0a,
     784,  362,  776,   35, 0x0a,
     857,  817,  132,   35, 0x0a,
     921,  703,  132,   35, 0x0a,
     972,  265,  132,   35, 0x0a,
    1049, 1021,  132,   35, 0x0a,
    1105,  817,  132,   35, 0x0a,
    1192, 1163,  132,   35, 0x0a,
    1290, 1251,  132,   35, 0x0a,
    1384, 1359,   35,   35, 0x0a,
    1437,  572,  132,   35, 0x0a,
    1480,  362,  132,   35, 0x0a,
    1512,  817,  132,   35, 0x0a,
    1566,  362,  132,   35, 0x0a,
    1652, 1601,  132,   35, 0x0a,
    1725,  572,  132,   35, 0x0a,
    1794, 1766,  132,   35, 0x0a,
    1903, 1850,  132,   35, 0x0a,
    1975,  703,  132,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlDefaultHandler[] = {
    "PythonQtWrapper_QXmlDefaultHandler\0\0"
    "QXmlDefaultHandler*\0new_QXmlDefaultHandler()\0"
    "obj\0delete_QXmlDefaultHandler(QXmlDefaultHandler*)\0"
    "bool\0theWrappedObject,eName,aName,type,valueDefault,value\0"
    "attributeDecl(QXmlDefaultHandler*,QString,QString,QString,QString,QStr"
    "ing)\0"
    "theWrappedObject,ch\0"
    "characters(QXmlDefaultHandler*,QString)\0"
    "comment(QXmlDefaultHandler*,QString)\0"
    "theWrappedObject\0endCDATA(QXmlDefaultHandler*)\0"
    "endDTD(QXmlDefaultHandler*)\0"
    "endDocument(QXmlDefaultHandler*)\0"
    "theWrappedObject,namespaceURI,localName,qName\0"
    "endElement(QXmlDefaultHandler*,QString,QString,QString)\0"
    "theWrappedObject,name\0"
    "endEntity(QXmlDefaultHandler*,QString)\0"
    "theWrappedObject,prefix\0"
    "endPrefixMapping(QXmlDefaultHandler*,QString)\0"
    "theWrappedObject,exception\0"
    "error(QXmlDefaultHandler*,QXmlParseException)\0"
    "QString\0errorString(QXmlDefaultHandler*)\0"
    "theWrappedObject,name,publicId,systemId\0"
    "externalEntityDecl(QXmlDefaultHandler*,QString,QString,QString)\0"
    "fatalError(QXmlDefaultHandler*,QXmlParseException)\0"
    "ignorableWhitespace(QXmlDefaultHandler*,QString)\0"
    "theWrappedObject,name,value\0"
    "internalEntityDecl(QXmlDefaultHandler*,QString,QString)\0"
    "notationDecl(QXmlDefaultHandler*,QString,QString,QString)\0"
    "theWrappedObject,target,data\0"
    "processingInstruction(QXmlDefaultHandler*,QString,QString)\0"
    "theWrappedObject,publicId,systemId,ret\0"
    "resolveEntity(QXmlDefaultHandler*,QString,QString,QXmlInputSource*&)\0"
    "theWrappedObject,locator\0"
    "setDocumentLocator(QXmlDefaultHandler*,QXmlLocator*)\0"
    "skippedEntity(QXmlDefaultHandler*,QString)\0"
    "startCDATA(QXmlDefaultHandler*)\0"
    "startDTD(QXmlDefaultHandler*,QString,QString,QString)\0"
    "startDocument(QXmlDefaultHandler*)\0"
    "theWrappedObject,namespaceURI,localName,qName,atts\0"
    "startElement(QXmlDefaultHandler*,QString,QString,QString,QXmlAttribute"
    "s)\0"
    "startEntity(QXmlDefaultHandler*,QString)\0"
    "theWrappedObject,prefix,uri\0"
    "startPrefixMapping(QXmlDefaultHandler*,QString,QString)\0"
    "theWrappedObject,name,publicId,systemId,notationName\0"
    "unparsedEntityDecl(QXmlDefaultHandler*,QString,QString,QString,QString"
    ")\0"
    "warning(QXmlDefaultHandler*,QXmlParseException)\0"
};

void PythonQtWrapper_QXmlDefaultHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlDefaultHandler *_t = static_cast<PythonQtWrapper_QXmlDefaultHandler *>(_o);
        switch (_id) {
        case 0: { QXmlDefaultHandler* _r = _t->new_QXmlDefaultHandler();
            if (_a[0]) *reinterpret_cast< QXmlDefaultHandler**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlDefaultHandler((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->attributeDecl((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->characters((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->comment((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->endCDATA((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->endDTD((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->endDocument((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->endElement((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->endEntity((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->endPrefixMapping((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->error((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QXmlParseException(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->errorString((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->externalEntityDecl((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->fatalError((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QXmlParseException(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->ignorableWhitespace((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->internalEntityDecl((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->notationDecl((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->processingInstruction((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->resolveEntity((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: _t->setDocumentLocator((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< QXmlLocator*(*)>(_a[2]))); break;
        case 21: { bool _r = _t->skippedEntity((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->startCDATA((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->startDTD((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->startDocument((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->startElement((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QXmlAttributes(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->startEntity((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->startPrefixMapping((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->unparsedEntityDecl((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->warning((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QXmlParseException(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlDefaultHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlDefaultHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlDefaultHandler,
      qt_meta_data_PythonQtWrapper_QXmlDefaultHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlDefaultHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlDefaultHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlDefaultHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlDefaultHandler))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlDefaultHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlDefaultHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QXmlEntityResolver[] = {

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
      56,   35,   36,   35, 0x0a,
      85,   81,   35,   35, 0x0a,
     157,  140,  132,   35, 0x0a,
     234,  195,  190,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlEntityResolver[] = {
    "PythonQtWrapper_QXmlEntityResolver\0\0"
    "QXmlEntityResolver*\0new_QXmlEntityResolver()\0"
    "obj\0delete_QXmlEntityResolver(QXmlEntityResolver*)\0"
    "QString\0theWrappedObject\0"
    "errorString(QXmlEntityResolver*)\0bool\0"
    "theWrappedObject,publicId,systemId,ret\0"
    "resolveEntity(QXmlEntityResolver*,QString,QString,QXmlInputSource*&)\0"
};

void PythonQtWrapper_QXmlEntityResolver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlEntityResolver *_t = static_cast<PythonQtWrapper_QXmlEntityResolver *>(_o);
        switch (_id) {
        case 0: { QXmlEntityResolver* _r = _t->new_QXmlEntityResolver();
            if (_a[0]) *reinterpret_cast< QXmlEntityResolver**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlEntityResolver((*reinterpret_cast< QXmlEntityResolver*(*)>(_a[1]))); break;
        case 2: { QString _r = _t->errorString((*reinterpret_cast< QXmlEntityResolver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->resolveEntity((*reinterpret_cast< QXmlEntityResolver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlEntityResolver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlEntityResolver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlEntityResolver,
      qt_meta_data_PythonQtWrapper_QXmlEntityResolver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlEntityResolver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlEntityResolver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlEntityResolver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlEntityResolver))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlEntityResolver*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlEntityResolver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlErrorHandler[] = {

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
      52,   33,   34,   33, 0x0a,
      79,   75,   33,   33, 0x0a,
     154,  127,  122,   33, 0x0a,
     223,  206,  198,   33, 0x0a,
     254,  127,  122,   33, 0x0a,
     303,  127,  122,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlErrorHandler[] = {
    "PythonQtWrapper_QXmlErrorHandler\0\0"
    "QXmlErrorHandler*\0new_QXmlErrorHandler()\0"
    "obj\0delete_QXmlErrorHandler(QXmlErrorHandler*)\0"
    "bool\0theWrappedObject,exception\0"
    "error(QXmlErrorHandler*,QXmlParseException)\0"
    "QString\0theWrappedObject\0"
    "errorString(QXmlErrorHandler*)\0"
    "fatalError(QXmlErrorHandler*,QXmlParseException)\0"
    "warning(QXmlErrorHandler*,QXmlParseException)\0"
};

void PythonQtWrapper_QXmlErrorHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlErrorHandler *_t = static_cast<PythonQtWrapper_QXmlErrorHandler *>(_o);
        switch (_id) {
        case 0: { QXmlErrorHandler* _r = _t->new_QXmlErrorHandler();
            if (_a[0]) *reinterpret_cast< QXmlErrorHandler**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlErrorHandler((*reinterpret_cast< QXmlErrorHandler*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->error((*reinterpret_cast< QXmlErrorHandler*(*)>(_a[1])),(*reinterpret_cast< const QXmlParseException(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->errorString((*reinterpret_cast< QXmlErrorHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->fatalError((*reinterpret_cast< QXmlErrorHandler*(*)>(_a[1])),(*reinterpret_cast< const QXmlParseException(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->warning((*reinterpret_cast< QXmlErrorHandler*(*)>(_a[1])),(*reinterpret_cast< const QXmlParseException(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlErrorHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlErrorHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlErrorHandler,
      qt_meta_data_PythonQtWrapper_QXmlErrorHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlErrorHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlErrorHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlErrorHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlErrorHandler))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlErrorHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlErrorHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlInputSource[] = {

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
      76,   72,   33,   32, 0x0a,
     112,  108,   32,   32, 0x0a,
     178,  161,  153,   32, 0x0a,
     201,  161,   32,   32, 0x0a,
     261,  229,  153,   32, 0x0a,
     329,  307,  153,   32, 0x2a,
     376,  161,  370,   32, 0x0a,
     399,  161,   32,   32, 0x0a,
     444,  423,   32,   32, 0x0a,
     481,  423,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlInputSource[] = {
    "PythonQtWrapper_QXmlInputSource\0\0"
    "QXmlInputSource*\0new_QXmlInputSource()\0"
    "dev\0new_QXmlInputSource(QIODevice*)\0"
    "obj\0delete_QXmlInputSource(QXmlInputSource*)\0"
    "QString\0theWrappedObject\0"
    "data(QXmlInputSource*)\0"
    "fetchData(QXmlInputSource*)\0"
    "theWrappedObject,data,beginning\0"
    "fromRawData(QXmlInputSource*,QByteArray,bool)\0"
    "theWrappedObject,data\0"
    "fromRawData(QXmlInputSource*,QByteArray)\0"
    "QChar\0next(QXmlInputSource*)\0"
    "reset(QXmlInputSource*)\0theWrappedObject,dat\0"
    "setData(QXmlInputSource*,QByteArray)\0"
    "setData(QXmlInputSource*,QString)\0"
};

void PythonQtWrapper_QXmlInputSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlInputSource *_t = static_cast<PythonQtWrapper_QXmlInputSource *>(_o);
        switch (_id) {
        case 0: { QXmlInputSource* _r = _t->new_QXmlInputSource();
            if (_a[0]) *reinterpret_cast< QXmlInputSource**>(_a[0]) = _r; }  break;
        case 1: { QXmlInputSource* _r = _t->new_QXmlInputSource((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlInputSource**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QXmlInputSource((*reinterpret_cast< QXmlInputSource*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->data((*reinterpret_cast< QXmlInputSource*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->fetchData((*reinterpret_cast< QXmlInputSource*(*)>(_a[1]))); break;
        case 5: { QString _r = _t->fromRawData((*reinterpret_cast< QXmlInputSource*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->fromRawData((*reinterpret_cast< QXmlInputSource*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QChar _r = _t->next((*reinterpret_cast< QXmlInputSource*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QChar*>(_a[0]) = _r; }  break;
        case 8: _t->reset((*reinterpret_cast< QXmlInputSource*(*)>(_a[1]))); break;
        case 9: _t->setData((*reinterpret_cast< QXmlInputSource*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 10: _t->setData((*reinterpret_cast< QXmlInputSource*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlInputSource::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlInputSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlInputSource,
      qt_meta_data_PythonQtWrapper_QXmlInputSource, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlInputSource::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlInputSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlInputSource::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlInputSource))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlInputSource*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlInputSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlLexicalHandler[] = {

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
      56,   35,   36,   35, 0x0a,
      85,   81,   35,   35, 0x0a,
     157,  137,  132,   35, 0x0a,
     211,  194,  132,   35, 0x0a,
     241,  194,  132,   35, 0x0a,
     291,  269,  132,   35, 0x0a,
     338,  194,  330,   35, 0x0a,
     371,  194,  132,   35, 0x0a,
     443,  403,  132,   35, 0x0a,
     497,  269,  132,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlLexicalHandler[] = {
    "PythonQtWrapper_QXmlLexicalHandler\0\0"
    "QXmlLexicalHandler*\0new_QXmlLexicalHandler()\0"
    "obj\0delete_QXmlLexicalHandler(QXmlLexicalHandler*)\0"
    "bool\0theWrappedObject,ch\0"
    "comment(QXmlLexicalHandler*,QString)\0"
    "theWrappedObject\0endCDATA(QXmlLexicalHandler*)\0"
    "endDTD(QXmlLexicalHandler*)\0"
    "theWrappedObject,name\0"
    "endEntity(QXmlLexicalHandler*,QString)\0"
    "QString\0errorString(QXmlLexicalHandler*)\0"
    "startCDATA(QXmlLexicalHandler*)\0"
    "theWrappedObject,name,publicId,systemId\0"
    "startDTD(QXmlLexicalHandler*,QString,QString,QString)\0"
    "startEntity(QXmlLexicalHandler*,QString)\0"
};

void PythonQtWrapper_QXmlLexicalHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlLexicalHandler *_t = static_cast<PythonQtWrapper_QXmlLexicalHandler *>(_o);
        switch (_id) {
        case 0: { QXmlLexicalHandler* _r = _t->new_QXmlLexicalHandler();
            if (_a[0]) *reinterpret_cast< QXmlLexicalHandler**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlLexicalHandler((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->comment((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->endCDATA((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->endDTD((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->endEntity((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->errorString((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->startCDATA((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->startDTD((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->startEntity((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlLexicalHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlLexicalHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlLexicalHandler,
      qt_meta_data_PythonQtWrapper_QXmlLexicalHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlLexicalHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlLexicalHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlLexicalHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlLexicalHandler))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlLexicalHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlLexicalHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlLocator[] = {

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
      42,   28,   29,   28, 0x0a,
      64,   60,   28,   28, 0x0a,
     118,  101,   97,   28, 0x0a,
     145,  101,   97,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlLocator[] = {
    "PythonQtWrapper_QXmlLocator\0\0QXmlLocator*\0"
    "new_QXmlLocator()\0obj\0"
    "delete_QXmlLocator(QXmlLocator*)\0int\0"
    "theWrappedObject\0columnNumber(QXmlLocator*)\0"
    "lineNumber(QXmlLocator*)\0"
};

void PythonQtWrapper_QXmlLocator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlLocator *_t = static_cast<PythonQtWrapper_QXmlLocator *>(_o);
        switch (_id) {
        case 0: { QXmlLocator* _r = _t->new_QXmlLocator();
            if (_a[0]) *reinterpret_cast< QXmlLocator**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlLocator((*reinterpret_cast< QXmlLocator*(*)>(_a[1]))); break;
        case 2: { int _r = _t->columnNumber((*reinterpret_cast< QXmlLocator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->lineNumber((*reinterpret_cast< QXmlLocator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlLocator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlLocator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlLocator,
      qt_meta_data_PythonQtWrapper_QXmlLocator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlLocator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlLocator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlLocator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlLocator))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlLocator*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlLocator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlParseException[] = {

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
      69,   56,   36,   35, 0x0a,
     136,  125,   36,   35, 0x2a,
     193,  184,   36,   35, 0x2a,
     240,  233,   36,   35, 0x2a,
     281,  276,   36,   35, 0x2a,
     313,   35,   36,   35, 0x2a,
     344,  338,   36,   35, 0x0a,
     391,  387,   35,   35, 0x0a,
     459,  442,  438,   35, 0x0a,
     493,  442,  438,   35, 0x0a,
     533,  442,  525,   35, 0x0a,
     562,  442,  525,   35, 0x0a,
     592,  442,  525,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlParseException[] = {
    "PythonQtWrapper_QXmlParseException\0\0"
    "QXmlParseException*\0name,c,l,p,s\0"
    "new_QXmlParseException(QString,int,int,QString,QString)\0"
    "name,c,l,p\0new_QXmlParseException(QString,int,int,QString)\0"
    "name,c,l\0new_QXmlParseException(QString,int,int)\0"
    "name,c\0new_QXmlParseException(QString,int)\0"
    "name\0new_QXmlParseException(QString)\0"
    "new_QXmlParseException()\0other\0"
    "new_QXmlParseException(QXmlParseException)\0"
    "obj\0delete_QXmlParseException(QXmlParseException*)\0"
    "int\0theWrappedObject\0"
    "columnNumber(QXmlParseException*)\0"
    "lineNumber(QXmlParseException*)\0QString\0"
    "message(QXmlParseException*)\0"
    "publicId(QXmlParseException*)\0"
    "systemId(QXmlParseException*)\0"
};

void PythonQtWrapper_QXmlParseException::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlParseException *_t = static_cast<PythonQtWrapper_QXmlParseException *>(_o);
        switch (_id) {
        case 0: { QXmlParseException* _r = _t->new_QXmlParseException((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QXmlParseException**>(_a[0]) = _r; }  break;
        case 1: { QXmlParseException* _r = _t->new_QXmlParseException((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QXmlParseException**>(_a[0]) = _r; }  break;
        case 2: { QXmlParseException* _r = _t->new_QXmlParseException((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QXmlParseException**>(_a[0]) = _r; }  break;
        case 3: { QXmlParseException* _r = _t->new_QXmlParseException((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlParseException**>(_a[0]) = _r; }  break;
        case 4: { QXmlParseException* _r = _t->new_QXmlParseException((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlParseException**>(_a[0]) = _r; }  break;
        case 5: { QXmlParseException* _r = _t->new_QXmlParseException();
            if (_a[0]) *reinterpret_cast< QXmlParseException**>(_a[0]) = _r; }  break;
        case 6: { QXmlParseException* _r = _t->new_QXmlParseException((*reinterpret_cast< const QXmlParseException(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlParseException**>(_a[0]) = _r; }  break;
        case 7: _t->delete_QXmlParseException((*reinterpret_cast< QXmlParseException*(*)>(_a[1]))); break;
        case 8: { int _r = _t->columnNumber((*reinterpret_cast< QXmlParseException*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->lineNumber((*reinterpret_cast< QXmlParseException*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->message((*reinterpret_cast< QXmlParseException*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->publicId((*reinterpret_cast< QXmlParseException*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->systemId((*reinterpret_cast< QXmlParseException*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlParseException::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlParseException::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlParseException,
      qt_meta_data_PythonQtWrapper_QXmlParseException, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlParseException::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlParseException::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlParseException::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlParseException))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlParseException*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlParseException::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlReader[] = {

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
      40,   27,   28,   27, 0x0a,
      61,   57,   27,   27, 0x0a,
     125,  108,   92,   27, 0x0a,
     169,  108,  149,   27, 0x0a,
     214,  108,  197,   27, 0x0a,
     259,  108,  239,   27, 0x0a,
     305,  108,  287,   27, 0x0a,
     361,  336,  331,   27, 0x0a,
     418,  396,  331,   27, 0x2a,
     447,  396,  331,   27, 0x0a,
     479,  396,  331,   27, 0x0a,
     532,  108,  512,   27, 0x0a,
     583,  560,  331,   27, 0x0a,
     618,  560,  331,   27, 0x0a,
     666,  336,  660,   27, 0x0a,
     702,  396,  660,   27, 0x2a,
     757,  732,   27,   27, 0x0a,
     808,  732,   27,   27, 0x0a,
     851,  732,   27,   27, 0x0a,
     896,  732,   27,   27, 0x0a,
     947,  732,   27,   27, 0x0a,
    1022,  994,   27,   27, 0x0a,
    1059,  732,   27,   27, 0x0a,
    1110,  994,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlReader[] = {
    "PythonQtWrapper_QXmlReader\0\0QXmlReader*\0"
    "new_QXmlReader()\0obj\0"
    "delete_QXmlReader(QXmlReader*)\0"
    "QXmlDTDHandler*\0theWrappedObject\0"
    "DTDHandler(QXmlReader*)\0QXmlContentHandler*\0"
    "contentHandler(QXmlReader*)\0"
    "QXmlDeclHandler*\0declHandler(QXmlReader*)\0"
    "QXmlEntityResolver*\0entityResolver(QXmlReader*)\0"
    "QXmlErrorHandler*\0errorHandler(QXmlReader*)\0"
    "bool\0theWrappedObject,name,ok\0"
    "feature(QXmlReader*,QString,bool*)\0"
    "theWrappedObject,name\0"
    "feature(QXmlReader*,QString)\0"
    "hasFeature(QXmlReader*,QString)\0"
    "hasProperty(QXmlReader*,QString)\0"
    "QXmlLexicalHandler*\0lexicalHandler(QXmlReader*)\0"
    "theWrappedObject,input\0"
    "parse(QXmlReader*,QXmlInputSource)\0"
    "parse(QXmlReader*,const QXmlInputSource*)\0"
    "void*\0property(QXmlReader*,QString,bool*)\0"
    "property(QXmlReader*,QString)\0"
    "theWrappedObject,handler\0"
    "setContentHandler(QXmlReader*,QXmlContentHandler*)\0"
    "setDTDHandler(QXmlReader*,QXmlDTDHandler*)\0"
    "setDeclHandler(QXmlReader*,QXmlDeclHandler*)\0"
    "setEntityResolver(QXmlReader*,QXmlEntityResolver*)\0"
    "setErrorHandler(QXmlReader*,QXmlErrorHandler*)\0"
    "theWrappedObject,name,value\0"
    "setFeature(QXmlReader*,QString,bool)\0"
    "setLexicalHandler(QXmlReader*,QXmlLexicalHandler*)\0"
    "setProperty(QXmlReader*,QString,void*)\0"
};

void PythonQtWrapper_QXmlReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlReader *_t = static_cast<PythonQtWrapper_QXmlReader *>(_o);
        switch (_id) {
        case 0: { QXmlReader* _r = _t->new_QXmlReader();
            if (_a[0]) *reinterpret_cast< QXmlReader**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlReader((*reinterpret_cast< QXmlReader*(*)>(_a[1]))); break;
        case 2: { QXmlDTDHandler* _r = _t->DTDHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlDTDHandler**>(_a[0]) = _r; }  break;
        case 3: { QXmlContentHandler* _r = _t->contentHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlContentHandler**>(_a[0]) = _r; }  break;
        case 4: { QXmlDeclHandler* _r = _t->declHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlDeclHandler**>(_a[0]) = _r; }  break;
        case 5: { QXmlEntityResolver* _r = _t->entityResolver((*reinterpret_cast< QXmlReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlEntityResolver**>(_a[0]) = _r; }  break;
        case 6: { QXmlErrorHandler* _r = _t->errorHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlErrorHandler**>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->feature((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->feature((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->hasFeature((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->hasProperty((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QXmlLexicalHandler* _r = _t->lexicalHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlLexicalHandler**>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->parse((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QXmlInputSource(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->parse((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QXmlInputSource*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { void* _r = _t->property((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 15: { void* _r = _t->property((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 16: _t->setContentHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< QXmlContentHandler*(*)>(_a[2]))); break;
        case 17: _t->setDTDHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< QXmlDTDHandler*(*)>(_a[2]))); break;
        case 18: _t->setDeclHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< QXmlDeclHandler*(*)>(_a[2]))); break;
        case 19: _t->setEntityResolver((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< QXmlEntityResolver*(*)>(_a[2]))); break;
        case 20: _t->setErrorHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< QXmlErrorHandler*(*)>(_a[2]))); break;
        case 21: _t->setFeature((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 22: _t->setLexicalHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[2]))); break;
        case 23: _t->setProperty((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlReader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlReader,
      qt_meta_data_PythonQtWrapper_QXmlReader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlReader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlReader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlReader))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlReader*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlSimpleReader[] = {

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
      52,   33,   34,   33, 0x0a,
      79,   75,   33,   33, 0x0a,
     155,  138,  122,   33, 0x0a,
     205,  138,  185,   33, 0x0a,
     256,  138,  239,   33, 0x0a,
     307,  138,  287,   33, 0x0a,
     359,  138,  341,   33, 0x0a,
     421,  396,  391,   33, 0x0a,
     484,  462,  391,   33, 0x2a,
     519,  462,  391,   33, 0x0a,
     557,  462,  391,   33, 0x0a,
     616,  138,  596,   33, 0x0a,
     673,  650,  391,   33, 0x0a,
     714,  650,  391,   33, 0x0a,
     797,  762,  391,   33, 0x0a,
     850,  138,  391,   33, 0x0a,
     889,  396,  883,   33, 0x0a,
     931,  462,  883,   33, 0x2a,
     992,  967,   33,   33, 0x0a,
    1049,  967,   33,   33, 0x0a,
    1098,  967,   33,   33, 0x0a,
    1149,  967,   33,   33, 0x0a,
    1206,  967,   33,   33, 0x0a,
    1287, 1259,   33,   33, 0x0a,
    1330,  967,   33,   33, 0x0a,
    1387, 1259,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlSimpleReader[] = {
    "PythonQtWrapper_QXmlSimpleReader\0\0"
    "QXmlSimpleReader*\0new_QXmlSimpleReader()\0"
    "obj\0delete_QXmlSimpleReader(QXmlSimpleReader*)\0"
    "QXmlDTDHandler*\0theWrappedObject\0"
    "DTDHandler(QXmlSimpleReader*)\0"
    "QXmlContentHandler*\0"
    "contentHandler(QXmlSimpleReader*)\0"
    "QXmlDeclHandler*\0declHandler(QXmlSimpleReader*)\0"
    "QXmlEntityResolver*\0"
    "entityResolver(QXmlSimpleReader*)\0"
    "QXmlErrorHandler*\0errorHandler(QXmlSimpleReader*)\0"
    "bool\0theWrappedObject,name,ok\0"
    "feature(QXmlSimpleReader*,QString,bool*)\0"
    "theWrappedObject,name\0"
    "feature(QXmlSimpleReader*,QString)\0"
    "hasFeature(QXmlSimpleReader*,QString)\0"
    "hasProperty(QXmlSimpleReader*,QString)\0"
    "QXmlLexicalHandler*\0"
    "lexicalHandler(QXmlSimpleReader*)\0"
    "theWrappedObject,input\0"
    "parse(QXmlSimpleReader*,QXmlInputSource)\0"
    "parse(QXmlSimpleReader*,const QXmlInputSource*)\0"
    "theWrappedObject,input,incremental\0"
    "parse(QXmlSimpleReader*,const QXmlInputSource*,bool)\0"
    "parseContinue(QXmlSimpleReader*)\0void*\0"
    "property(QXmlSimpleReader*,QString,bool*)\0"
    "property(QXmlSimpleReader*,QString)\0"
    "theWrappedObject,handler\0"
    "setContentHandler(QXmlSimpleReader*,QXmlContentHandler*)\0"
    "setDTDHandler(QXmlSimpleReader*,QXmlDTDHandler*)\0"
    "setDeclHandler(QXmlSimpleReader*,QXmlDeclHandler*)\0"
    "setEntityResolver(QXmlSimpleReader*,QXmlEntityResolver*)\0"
    "setErrorHandler(QXmlSimpleReader*,QXmlErrorHandler*)\0"
    "theWrappedObject,name,value\0"
    "setFeature(QXmlSimpleReader*,QString,bool)\0"
    "setLexicalHandler(QXmlSimpleReader*,QXmlLexicalHandler*)\0"
    "setProperty(QXmlSimpleReader*,QString,void*)\0"
};

void PythonQtWrapper_QXmlSimpleReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlSimpleReader *_t = static_cast<PythonQtWrapper_QXmlSimpleReader *>(_o);
        switch (_id) {
        case 0: { QXmlSimpleReader* _r = _t->new_QXmlSimpleReader();
            if (_a[0]) *reinterpret_cast< QXmlSimpleReader**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlSimpleReader((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1]))); break;
        case 2: { QXmlDTDHandler* _r = _t->DTDHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlDTDHandler**>(_a[0]) = _r; }  break;
        case 3: { QXmlContentHandler* _r = _t->contentHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlContentHandler**>(_a[0]) = _r; }  break;
        case 4: { QXmlDeclHandler* _r = _t->declHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlDeclHandler**>(_a[0]) = _r; }  break;
        case 5: { QXmlEntityResolver* _r = _t->entityResolver((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlEntityResolver**>(_a[0]) = _r; }  break;
        case 6: { QXmlErrorHandler* _r = _t->errorHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlErrorHandler**>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->feature((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->feature((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->hasFeature((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->hasProperty((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QXmlLexicalHandler* _r = _t->lexicalHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlLexicalHandler**>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->parse((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QXmlInputSource(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->parse((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QXmlInputSource*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->parse((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->parseContinue((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { void* _r = _t->property((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 17: { void* _r = _t->property((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 18: _t->setContentHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< QXmlContentHandler*(*)>(_a[2]))); break;
        case 19: _t->setDTDHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< QXmlDTDHandler*(*)>(_a[2]))); break;
        case 20: _t->setDeclHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< QXmlDeclHandler*(*)>(_a[2]))); break;
        case 21: _t->setEntityResolver((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< QXmlEntityResolver*(*)>(_a[2]))); break;
        case 22: _t->setErrorHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< QXmlErrorHandler*(*)>(_a[2]))); break;
        case 23: _t->setFeature((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 24: _t->setLexicalHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[2]))); break;
        case 25: _t->setProperty((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlSimpleReader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlSimpleReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlSimpleReader,
      qt_meta_data_PythonQtWrapper_QXmlSimpleReader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlSimpleReader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlSimpleReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlSimpleReader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlSimpleReader))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlSimpleReader*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlSimpleReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE

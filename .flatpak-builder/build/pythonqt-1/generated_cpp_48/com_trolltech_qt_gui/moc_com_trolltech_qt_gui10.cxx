/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_gui10.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "com_trolltech_qt_gui10.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_gui10.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QTextLayout__FormatRange[] = {

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
      68,   41,   42,   41, 0x0a,
     105,   99,   42,   41, 0x0a,
     164,  160,   41,   41, 0x0a,
     247,  223,   41,   41, 0x0a,
     337,  320,  304,   41, 0x0a,
     402,  378,   41,   41, 0x0a,
     451,  320,  447,   41, 0x0a,
     515,  492,   41,   41, 0x0a,
     559,  320,  447,   41, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextLayout__FormatRange[] = {
    "PythonQtWrapper_QTextLayout__FormatRange\0"
    "\0QTextLayout::FormatRange*\0"
    "new_QTextLayout__FormatRange()\0other\0"
    "new_QTextLayout__FormatRange(QTextLayout::FormatRange)\0"
    "obj\0delete_QTextLayout__FormatRange(QTextLayout::FormatRange*)\0"
    "theWrappedObject,format\0"
    "py_set_format(QTextLayout::FormatRange*,QTextCharFormat)\0"
    "QTextCharFormat\0theWrappedObject\0"
    "py_get_format(QTextLayout::FormatRange*)\0"
    "theWrappedObject,length\0"
    "py_set_length(QTextLayout::FormatRange*,int)\0"
    "int\0py_get_length(QTextLayout::FormatRange*)\0"
    "theWrappedObject,start\0"
    "py_set_start(QTextLayout::FormatRange*,int)\0"
    "py_get_start(QTextLayout::FormatRange*)\0"
};

void PythonQtWrapper_QTextLayout__FormatRange::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextLayout__FormatRange *_t = static_cast<PythonQtWrapper_QTextLayout__FormatRange *>(_o);
        switch (_id) {
        case 0: { QTextLayout::FormatRange* _r = _t->new_QTextLayout__FormatRange();
            if (_a[0]) *reinterpret_cast< QTextLayout::FormatRange**>(_a[0]) = _r; }  break;
        case 1: { QTextLayout::FormatRange* _r = _t->new_QTextLayout__FormatRange((*reinterpret_cast< const QTextLayout::FormatRange(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextLayout::FormatRange**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextLayout__FormatRange((*reinterpret_cast< QTextLayout::FormatRange*(*)>(_a[1]))); break;
        case 3: _t->py_set_format((*reinterpret_cast< QTextLayout::FormatRange*(*)>(_a[1])),(*reinterpret_cast< QTextCharFormat(*)>(_a[2]))); break;
        case 4: { QTextCharFormat _r = _t->py_get_format((*reinterpret_cast< QTextLayout::FormatRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_length((*reinterpret_cast< QTextLayout::FormatRange*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: { int _r = _t->py_get_length((*reinterpret_cast< QTextLayout::FormatRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_start((*reinterpret_cast< QTextLayout::FormatRange*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: { int _r = _t->py_get_start((*reinterpret_cast< QTextLayout::FormatRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextLayout__FormatRange::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextLayout__FormatRange::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextLayout__FormatRange,
      qt_meta_data_PythonQtWrapper_QTextLayout__FormatRange, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextLayout__FormatRange::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextLayout__FormatRange::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextLayout__FormatRange::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextLayout__FormatRange))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextLayout__FormatRange*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextLayout__FormatRange::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextLine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       2,  169, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   26,   27,   26, 0x0a,
      60,   54,   27,   26, 0x0a,
      89,   85,   26,   26, 0x0a,
     141,  124,  118,   26, 0x0a,
     192,  160,  118,   26, 0x0a,
     261,  234,  118,   26, 0x2a,
     287,  124,  118,   26, 0x0a,
     342,  307,   26,   26, 0x0a,
     434,  409,   26,   26, 0x2a,
     469,  124,  118,   26, 0x0a,
     488,  124,  118,   26, 0x0a,
     523,  124,  518,   26, 0x0a,
     543,  124,  118,   26, 0x0a,
     563,  124,  518,   26, 0x0a,
     595,  124,  591,   26, 0x0a,
     625,  124,  618,   26, 0x0a,
     653,  124,  118,   26, 0x0a,
     690,  124,  682,   26, 0x0a,
     711,  124,  618,   26, 0x0a,
     754,  728,   26,   26, 0x0a,
     813,  790,   26,   26, 0x0a,
     869,  844,   26,   26, 0x0a,
     939,  899,   26,   26, 0x0a,
     996,  975,   26,   26, 0x0a,
    1028,  124,  591,   26, 0x0a,
    1051,  124,  591,   26, 0x0a,
    1073,  124,  118,   26, 0x0a,
    1091,  124,  118,   26, 0x0a,
    1131, 1105,  591,   26, 0x0a,
    1204, 1185,  591,   26, 0x2a,
    1232,  124,  118,   26, 0x0a,

 // enums: name, flags, count, data
    1246, 0x0,    2,  177,
    1261, 0x0,    2,  181,

 // enum data: key, value
    1266, uint(PythonQtWrapper_QTextLine::CursorBetweenCharacters),
    1290, uint(PythonQtWrapper_QTextLine::CursorOnCharacter),
    1308, uint(PythonQtWrapper_QTextLine::Leading),
    1316, uint(PythonQtWrapper_QTextLine::Trailing),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextLine[] = {
    "PythonQtWrapper_QTextLine\0\0QTextLine*\0"
    "new_QTextLine()\0other\0new_QTextLine(QTextLine)\0"
    "obj\0delete_QTextLine(QTextLine*)\0qreal\0"
    "theWrappedObject\0ascent(QTextLine*)\0"
    "theWrappedObject,cursorPos,edge\0"
    "cursorToX(QTextLine*,int,QTextLine::Edge)\0"
    "theWrappedObject,cursorPos\0"
    "cursorToX(QTextLine*,int)\0descent(QTextLine*)\0"
    "theWrappedObject,p,point,selection\0"
    "draw(QTextLine*,QPainter*,QPointF,const QTextLayout::FormatRange*)\0"
    "theWrappedObject,p,point\0"
    "draw(QTextLine*,QPainter*,QPointF)\0"
    "height(QTextLine*)\0horizontalAdvance(QTextLine*)\0"
    "bool\0isValid(QTextLine*)\0leading(QTextLine*)\0"
    "leadingIncluded(QTextLine*)\0int\0"
    "lineNumber(QTextLine*)\0QRectF\0"
    "naturalTextRect(QTextLine*)\0"
    "naturalTextWidth(QTextLine*)\0QPointF\0"
    "position(QTextLine*)\0rect(QTextLine*)\0"
    "theWrappedObject,included\0"
    "setLeadingIncluded(QTextLine*,bool)\0"
    "theWrappedObject,width\0"
    "setLineWidth(QTextLine*,qreal)\0"
    "theWrappedObject,columns\0"
    "setNumColumns(QTextLine*,int)\0"
    "theWrappedObject,columns,alignmentWidth\0"
    "setNumColumns(QTextLine*,int,qreal)\0"
    "theWrappedObject,pos\0"
    "setPosition(QTextLine*,QPointF)\0"
    "textLength(QTextLine*)\0textStart(QTextLine*)\0"
    "width(QTextLine*)\0x(QTextLine*)\0"
    "theWrappedObject,x,arg__2\0"
    "xToCursor(QTextLine*,qreal,QTextLine::CursorPosition)\0"
    "theWrappedObject,x\0xToCursor(QTextLine*,qreal)\0"
    "y(QTextLine*)\0CursorPosition\0Edge\0"
    "CursorBetweenCharacters\0CursorOnCharacter\0"
    "Leading\0Trailing\0"
};

void PythonQtWrapper_QTextLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextLine *_t = static_cast<PythonQtWrapper_QTextLine *>(_o);
        switch (_id) {
        case 0: { QTextLine* _r = _t->new_QTextLine();
            if (_a[0]) *reinterpret_cast< QTextLine**>(_a[0]) = _r; }  break;
        case 1: { QTextLine* _r = _t->new_QTextLine((*reinterpret_cast< const QTextLine(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextLine**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextLine((*reinterpret_cast< QTextLine*(*)>(_a[1]))); break;
        case 3: { qreal _r = _t->ascent((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 4: { qreal _r = _t->cursorToX((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QTextLine::Edge(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: { qreal _r = _t->cursorToX((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 6: { qreal _r = _t->descent((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 7: _t->draw((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< const QTextLayout::FormatRange*(*)>(_a[4]))); break;
        case 8: _t->draw((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3]))); break;
        case 9: { qreal _r = _t->height((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 10: { qreal _r = _t->horizontalAdvance((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isValid((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { qreal _r = _t->leading((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->leadingIncluded((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->lineNumber((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { QRectF _r = _t->naturalTextRect((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 16: { qreal _r = _t->naturalTextWidth((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 17: { QPointF _r = _t->position((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 18: { QRectF _r = _t->rect((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 19: _t->setLeadingIncluded((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->setLineWidth((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 21: _t->setNumColumns((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->setNumColumns((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 23: _t->setPosition((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 24: { int _r = _t->textLength((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->textStart((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { qreal _r = _t->width((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 27: { qreal _r = _t->x((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 28: { int _r = _t->xToCursor((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< QTextLine::CursorPosition(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 29: { int _r = _t->xToCursor((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 30: { qreal _r = _t->y((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextLine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextLine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextLine,
      qt_meta_data_PythonQtWrapper_QTextLine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextLine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextLine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextLine))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextLine*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextList[] = {

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
      42,   38,   27,   26, 0x0a,
      76,   72,   26,   26, 0x0a,
     128,  105,   26,   26, 0x0a,
     176,  159,  155,   26, 0x0a,
     210,  159,  194,   26, 0x0a,
     259,  240,  229,   26, 0x0a,
     304,  280,  155,   26, 0x0a,
     346,  280,  338,   26, 0x0a,
     378,  280,   26,   26, 0x0a,
     408,  240,   26,   26, 0x0a,
     459,  435,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextList[] = {
    "PythonQtWrapper_QTextList\0\0QTextList*\0"
    "doc\0new_QTextList(QTextDocument*)\0obj\0"
    "delete_QTextList(QTextList*)\0"
    "theWrappedObject,block\0"
    "add(QTextList*,QTextBlock)\0int\0"
    "theWrappedObject\0count(QTextList*)\0"
    "QTextListFormat\0format(QTextList*)\0"
    "QTextBlock\0theWrappedObject,i\0"
    "item(QTextList*,int)\0theWrappedObject,arg__1\0"
    "itemNumber(QTextList*,QTextBlock)\0"
    "QString\0itemText(QTextList*,QTextBlock)\0"
    "remove(QTextList*,QTextBlock)\0"
    "removeItem(QTextList*,int)\0"
    "theWrappedObject,format\0"
    "setFormat(QTextList*,QTextListFormat)\0"
};

void PythonQtWrapper_QTextList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextList *_t = static_cast<PythonQtWrapper_QTextList *>(_o);
        switch (_id) {
        case 0: { QTextList* _r = _t->new_QTextList((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextList**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QTextList((*reinterpret_cast< QTextList*(*)>(_a[1]))); break;
        case 2: _t->add((*reinterpret_cast< QTextList*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2]))); break;
        case 3: { int _r = _t->count((*reinterpret_cast< QTextList*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { QTextListFormat _r = _t->format((*reinterpret_cast< QTextList*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextListFormat*>(_a[0]) = _r; }  break;
        case 5: { QTextBlock _r = _t->item((*reinterpret_cast< QTextList*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->itemNumber((*reinterpret_cast< QTextList*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->itemText((*reinterpret_cast< QTextList*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: _t->remove((*reinterpret_cast< QTextList*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2]))); break;
        case 9: _t->removeItem((*reinterpret_cast< QTextList*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->setFormat((*reinterpret_cast< QTextList*(*)>(_a[1])),(*reinterpret_cast< const QTextListFormat(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextList,
      qt_meta_data_PythonQtWrapper_QTextList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextList))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextList*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextListFormat[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       1,   79, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      50,   32,   33,   32, 0x0a,
      76,   72,   33,   32, 0x0a,
     115,  109,   33,   32, 0x0a,
     156,  152,   32,   32, 0x0a,
     218,  201,  197,   32, 0x0a,
     248,  201,  243,   32, 0x0a,
     282,  201,  274,   32, 0x0a,
     313,  201,  274,   32, 0x0a,
     368,  344,   32,   32, 0x0a,
     430,  400,   32,   32, 0x0a,
     502,  472,   32,   32, 0x0a,
     567,  544,   32,   32, 0x0a,
     640,  201,  617,   32, 0x0a,

 // enums: name, flags, count, data
     664, 0x0,    9,   83,

 // enum data: key, value
     670, uint(PythonQtWrapper_QTextListFormat::ListDisc),
     679, uint(PythonQtWrapper_QTextListFormat::ListCircle),
     690, uint(PythonQtWrapper_QTextListFormat::ListSquare),
     701, uint(PythonQtWrapper_QTextListFormat::ListDecimal),
     713, uint(PythonQtWrapper_QTextListFormat::ListLowerAlpha),
     728, uint(PythonQtWrapper_QTextListFormat::ListUpperAlpha),
     743, uint(PythonQtWrapper_QTextListFormat::ListLowerRoman),
     758, uint(PythonQtWrapper_QTextListFormat::ListUpperRoman),
     773, uint(PythonQtWrapper_QTextListFormat::ListStyleUndefined),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextListFormat[] = {
    "PythonQtWrapper_QTextListFormat\0\0"
    "QTextListFormat*\0new_QTextListFormat()\0"
    "fmt\0new_QTextListFormat(QTextFormat)\0"
    "other\0new_QTextListFormat(QTextListFormat)\0"
    "obj\0delete_QTextListFormat(QTextListFormat*)\0"
    "int\0theWrappedObject\0indent(QTextListFormat*)\0"
    "bool\0isValid(QTextListFormat*)\0QString\0"
    "numberPrefix(QTextListFormat*)\0"
    "numberSuffix(QTextListFormat*)\0"
    "theWrappedObject,indent\0"
    "setIndent(QTextListFormat*,int)\0"
    "theWrappedObject,numberPrefix\0"
    "setNumberPrefix(QTextListFormat*,QString)\0"
    "theWrappedObject,numberSuffix\0"
    "setNumberSuffix(QTextListFormat*,QString)\0"
    "theWrappedObject,style\0"
    "setStyle(QTextListFormat*,QTextListFormat::Style)\0"
    "QTextListFormat::Style\0style(QTextListFormat*)\0"
    "Style\0ListDisc\0ListCircle\0ListSquare\0"
    "ListDecimal\0ListLowerAlpha\0ListUpperAlpha\0"
    "ListLowerRoman\0ListUpperRoman\0"
    "ListStyleUndefined\0"
};

void PythonQtWrapper_QTextListFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextListFormat *_t = static_cast<PythonQtWrapper_QTextListFormat *>(_o);
        switch (_id) {
        case 0: { QTextListFormat* _r = _t->new_QTextListFormat();
            if (_a[0]) *reinterpret_cast< QTextListFormat**>(_a[0]) = _r; }  break;
        case 1: { QTextListFormat* _r = _t->new_QTextListFormat((*reinterpret_cast< const QTextFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextListFormat**>(_a[0]) = _r; }  break;
        case 2: { QTextListFormat* _r = _t->new_QTextListFormat((*reinterpret_cast< const QTextListFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextListFormat**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTextListFormat((*reinterpret_cast< QTextListFormat*(*)>(_a[1]))); break;
        case 4: { int _r = _t->indent((*reinterpret_cast< QTextListFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isValid((*reinterpret_cast< QTextListFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->numberPrefix((*reinterpret_cast< QTextListFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->numberSuffix((*reinterpret_cast< QTextListFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: _t->setIndent((*reinterpret_cast< QTextListFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->setNumberPrefix((*reinterpret_cast< QTextListFormat*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->setNumberSuffix((*reinterpret_cast< QTextListFormat*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->setStyle((*reinterpret_cast< QTextListFormat*(*)>(_a[1])),(*reinterpret_cast< QTextListFormat::Style(*)>(_a[2]))); break;
        case 12: { QTextListFormat::Style _r = _t->style((*reinterpret_cast< QTextListFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextListFormat::Style*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextListFormat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextListFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextListFormat,
      qt_meta_data_PythonQtWrapper_QTextListFormat, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextListFormat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextListFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextListFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextListFormat))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextListFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextListFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextObject[] = {

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
      46,   42,   29,   28, 0x0a,
     110,   93,   78,   28, 0x0a,
     145,   93,  133,   28, 0x0a,
     170,   93,  166,   28, 0x0a,
     196,   93,  166,   28, 0x0a,
     246,  222,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextObject[] = {
    "PythonQtWrapper_QTextObject\0\0QTextObject*\0"
    "doc\0new_QTextObject(QTextDocument*)\0"
    "QTextDocument*\0theWrappedObject\0"
    "document(QTextObject*)\0QTextFormat\0"
    "format(QTextObject*)\0int\0"
    "formatIndex(QTextObject*)\0"
    "objectIndex(QTextObject*)\0"
    "theWrappedObject,format\0"
    "setFormat(QTextObject*,QTextFormat)\0"
};

void PythonQtWrapper_QTextObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextObject *_t = static_cast<PythonQtWrapper_QTextObject *>(_o);
        switch (_id) {
        case 0: { QTextObject* _r = _t->new_QTextObject((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextObject**>(_a[0]) = _r; }  break;
        case 1: { QTextDocument* _r = _t->document((*reinterpret_cast< QTextObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 2: { QTextFormat _r = _t->format((*reinterpret_cast< QTextObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFormat*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->formatIndex((*reinterpret_cast< QTextObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->objectIndex((*reinterpret_cast< QTextObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->setFormat((*reinterpret_cast< QTextObject*(*)>(_a[1])),(*reinterpret_cast< const QTextFormat(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextObject,
      qt_meta_data_PythonQtWrapper_QTextObject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextObject))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextObject*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextOption[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       4,  114, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   28,   29,   28, 0x0a,
      70,   60,   29,   28, 0x0a,
     103,  101,   29,   28, 0x0a,
     136,  132,   28,   28, 0x0a,
     200,  183,  169,   28, 0x0a,
     243,  183,  224,   28, 0x0a,
     290,  263,   28,   28, 0x0a,
     354,  331,   28,   28, 0x0a,
     422,  396,   28,   28, 0x0a,
     486,  461,   28,   28, 0x0a,
     517,  396,   28,   28, 0x0a,
     591,  563,   28,   28, 0x0a,
     661,  642,   28,   28, 0x0a,
     722,  700,   28,   28, 0x0a,
     783,  183,  770,   28, 0x0a,
     812,  183,  806,   28, 0x0a,
     858,  183,  834,   28, 0x0a,
     897,  183,  877,   28, 0x0a,
     930,  183,  925,   28, 0x0a,
     983,  183,  961,   28, 0x0a,

 // enums: name, flags, count, data
    1006, 0x0,    5,  130,
    1011, 0x1,    5,  140,
    1017, 0x0,    4,  150,
    1025, 0x0,    5,  158,

 // enum data: key, value
    1034, uint(PythonQtWrapper_QTextOption::ShowTabsAndSpaces),
    1052, uint(PythonQtWrapper_QTextOption::ShowLineAndParagraphSeparators),
    1083, uint(PythonQtWrapper_QTextOption::AddSpaceForLineAndParagraphSeparators),
    1121, uint(PythonQtWrapper_QTextOption::SuppressColors),
    1136, uint(PythonQtWrapper_QTextOption::IncludeTrailingSpaces),
    1034, uint(PythonQtWrapper_QTextOption::ShowTabsAndSpaces),
    1052, uint(PythonQtWrapper_QTextOption::ShowLineAndParagraphSeparators),
    1083, uint(PythonQtWrapper_QTextOption::AddSpaceForLineAndParagraphSeparators),
    1121, uint(PythonQtWrapper_QTextOption::SuppressColors),
    1136, uint(PythonQtWrapper_QTextOption::IncludeTrailingSpaces),
    1158, uint(PythonQtWrapper_QTextOption::LeftTab),
    1166, uint(PythonQtWrapper_QTextOption::RightTab),
    1175, uint(PythonQtWrapper_QTextOption::CenterTab),
    1185, uint(PythonQtWrapper_QTextOption::DelimiterTab),
    1198, uint(PythonQtWrapper_QTextOption::NoWrap),
    1205, uint(PythonQtWrapper_QTextOption::WordWrap),
    1214, uint(PythonQtWrapper_QTextOption::ManualWrap),
    1225, uint(PythonQtWrapper_QTextOption::WrapAnywhere),
    1238, uint(PythonQtWrapper_QTextOption::WrapAtWordBoundaryOrAnywhere),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextOption[] = {
    "PythonQtWrapper_QTextOption\0\0QTextOption*\0"
    "new_QTextOption()\0alignment\0"
    "new_QTextOption(Qt::Alignment)\0o\0"
    "new_QTextOption(QTextOption)\0obj\0"
    "delete_QTextOption(QTextOption*)\0"
    "Qt::Alignment\0theWrappedObject\0"
    "alignment(QTextOption*)\0QTextOption::Flags\0"
    "flags(QTextOption*)\0theWrappedObject,alignment\0"
    "setAlignment(QTextOption*,Qt::Alignment)\0"
    "theWrappedObject,flags\0"
    "setFlags(QTextOption*,QTextOption::Flags)\0"
    "theWrappedObject,tabStops\0"
    "setTabArray(QTextOption*,QList<qreal>)\0"
    "theWrappedObject,tabStop\0"
    "setTabStop(QTextOption*,qreal)\0"
    "setTabs(QTextOption*,QList<QTextOption::Tab>)\0"
    "theWrappedObject,aDirection\0"
    "setTextDirection(QTextOption*,Qt::LayoutDirection)\0"
    "theWrappedObject,b\0"
    "setUseDesignMetrics(QTextOption*,bool)\0"
    "theWrappedObject,wrap\0"
    "setWrapMode(QTextOption*,QTextOption::WrapMode)\0"
    "QList<qreal>\0tabArray(QTextOption*)\0"
    "qreal\0tabStop(QTextOption*)\0"
    "QList<QTextOption::Tab>\0tabs(QTextOption*)\0"
    "Qt::LayoutDirection\0textDirection(QTextOption*)\0"
    "bool\0useDesignMetrics(QTextOption*)\0"
    "QTextOption::WrapMode\0wrapMode(QTextOption*)\0"
    "Flag\0Flags\0TabType\0WrapMode\0"
    "ShowTabsAndSpaces\0ShowLineAndParagraphSeparators\0"
    "AddSpaceForLineAndParagraphSeparators\0"
    "SuppressColors\0IncludeTrailingSpaces\0"
    "LeftTab\0RightTab\0CenterTab\0DelimiterTab\0"
    "NoWrap\0WordWrap\0ManualWrap\0WrapAnywhere\0"
    "WrapAtWordBoundaryOrAnywhere\0"
};

void PythonQtWrapper_QTextOption::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextOption *_t = static_cast<PythonQtWrapper_QTextOption *>(_o);
        switch (_id) {
        case 0: { QTextOption* _r = _t->new_QTextOption();
            if (_a[0]) *reinterpret_cast< QTextOption**>(_a[0]) = _r; }  break;
        case 1: { QTextOption* _r = _t->new_QTextOption((*reinterpret_cast< Qt::Alignment(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption**>(_a[0]) = _r; }  break;
        case 2: { QTextOption* _r = _t->new_QTextOption((*reinterpret_cast< const QTextOption(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTextOption((*reinterpret_cast< QTextOption*(*)>(_a[1]))); break;
        case 4: { Qt::Alignment _r = _t->alignment((*reinterpret_cast< QTextOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 5: { QTextOption::Flags _r = _t->flags((*reinterpret_cast< QTextOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption::Flags*>(_a[0]) = _r; }  break;
        case 6: _t->setAlignment((*reinterpret_cast< QTextOption*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 7: _t->setFlags((*reinterpret_cast< QTextOption*(*)>(_a[1])),(*reinterpret_cast< QTextOption::Flags(*)>(_a[2]))); break;
        case 8: _t->setTabArray((*reinterpret_cast< QTextOption*(*)>(_a[1])),(*reinterpret_cast< QList<qreal>(*)>(_a[2]))); break;
        case 9: _t->setTabStop((*reinterpret_cast< QTextOption*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 10: _t->setTabs((*reinterpret_cast< QTextOption*(*)>(_a[1])),(*reinterpret_cast< QList<QTextOption::Tab>(*)>(_a[2]))); break;
        case 11: _t->setTextDirection((*reinterpret_cast< QTextOption*(*)>(_a[1])),(*reinterpret_cast< Qt::LayoutDirection(*)>(_a[2]))); break;
        case 12: _t->setUseDesignMetrics((*reinterpret_cast< QTextOption*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->setWrapMode((*reinterpret_cast< QTextOption*(*)>(_a[1])),(*reinterpret_cast< QTextOption::WrapMode(*)>(_a[2]))); break;
        case 14: { QList<qreal> _r = _t->tabArray((*reinterpret_cast< QTextOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<qreal>*>(_a[0]) = _r; }  break;
        case 15: { qreal _r = _t->tabStop((*reinterpret_cast< QTextOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 16: { QList<QTextOption::Tab> _r = _t->tabs((*reinterpret_cast< QTextOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QTextOption::Tab>*>(_a[0]) = _r; }  break;
        case 17: { Qt::LayoutDirection _r = _t->textDirection((*reinterpret_cast< QTextOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::LayoutDirection*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->useDesignMetrics((*reinterpret_cast< QTextOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { QTextOption::WrapMode _r = _t->wrapMode((*reinterpret_cast< QTextOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption::WrapMode*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextOption::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextOption::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextOption,
      qt_meta_data_PythonQtWrapper_QTextOption, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextOption::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextOption::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextOption::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextOption))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextOption*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextOption::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextOption__Tab[] = {

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
      52,   33,   34,   33, 0x0a,
      93,   75,   34,   33, 0x0a,
     160,  148,   34,   33, 0x2a,
     215,  209,   34,   33, 0x0a,
     258,  254,   33,   33, 0x0a,
     329,  306,  301,   33, 0x0a,
     372,  306,  301,   33, 0x0a,
     442,  415,   33,   33, 0x0a,
     507,  490,  484,   33, 0x0a,
     569,  543,   33,   33, 0x0a,
     616,  490,  610,   33, 0x0a,
     673,  651,   33,   33, 0x0a,
     746,  490,  725,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextOption__Tab[] = {
    "PythonQtWrapper_QTextOption__Tab\0\0"
    "QTextOption::Tab*\0new_QTextOption__Tab()\0"
    "pos,tabType,delim\0"
    "new_QTextOption__Tab(qreal,QTextOption::TabType,QChar)\0"
    "pos,tabType\0"
    "new_QTextOption__Tab(qreal,QTextOption::TabType)\0"
    "other\0new_QTextOption__Tab(QTextOption::Tab)\0"
    "obj\0delete_QTextOption__Tab(QTextOption::Tab*)\0"
    "bool\0theWrappedObject,other\0"
    "__ne__(QTextOption::Tab*,QTextOption::Tab)\0"
    "__eq__(QTextOption::Tab*,QTextOption::Tab)\0"
    "theWrappedObject,delimiter\0"
    "py_set_delimiter(QTextOption::Tab*,QChar)\0"
    "QChar\0theWrappedObject\0"
    "py_get_delimiter(QTextOption::Tab*)\0"
    "theWrappedObject,position\0"
    "py_set_position(QTextOption::Tab*,qreal)\0"
    "qreal\0py_get_position(QTextOption::Tab*)\0"
    "theWrappedObject,type\0"
    "py_set_type(QTextOption::Tab*,QTextOption::TabType)\0"
    "QTextOption::TabType\0"
    "py_get_type(QTextOption::Tab*)\0"
};

void PythonQtWrapper_QTextOption__Tab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextOption__Tab *_t = static_cast<PythonQtWrapper_QTextOption__Tab *>(_o);
        switch (_id) {
        case 0: { QTextOption::Tab* _r = _t->new_QTextOption__Tab();
            if (_a[0]) *reinterpret_cast< QTextOption::Tab**>(_a[0]) = _r; }  break;
        case 1: { QTextOption::Tab* _r = _t->new_QTextOption__Tab((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< QTextOption::TabType(*)>(_a[2])),(*reinterpret_cast< QChar(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTextOption::Tab**>(_a[0]) = _r; }  break;
        case 2: { QTextOption::Tab* _r = _t->new_QTextOption__Tab((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< QTextOption::TabType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextOption::Tab**>(_a[0]) = _r; }  break;
        case 3: { QTextOption::Tab* _r = _t->new_QTextOption__Tab((*reinterpret_cast< const QTextOption::Tab(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption::Tab**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QTextOption__Tab((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->__ne__((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1])),(*reinterpret_cast< const QTextOption::Tab(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->__eq__((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1])),(*reinterpret_cast< const QTextOption::Tab(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_delimiter((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2]))); break;
        case 8: { QChar _r = _t->py_get_delimiter((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QChar*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_position((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 10: { qreal _r = _t->py_get_position((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 11: _t->py_set_type((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1])),(*reinterpret_cast< QTextOption::TabType(*)>(_a[2]))); break;
        case 12: { QTextOption::TabType _r = _t->py_get_type((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption::TabType*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextOption__Tab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextOption__Tab::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextOption__Tab,
      qt_meta_data_PythonQtWrapper_QTextOption__Tab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextOption__Tab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextOption__Tab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextOption__Tab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextOption__Tab))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextOption__Tab*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextOption__Tab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextTable[] = {

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
      44,   40,   28,   27, 0x0a,
      79,   75,   27,   27, 0x0a,
     133,  110,   27,   27, 0x0a,
     164,  110,   27,   27, 0x0a,
     226,  207,  192,   27, 0x0a,
     284,  258,  192,   27, 0x0a,
     333,  308,  192,   27, 0x0a,
     382,  365,  361,   27, 0x0a,
     420,  365,  403,   27, 0x0a,
     465,  440,   27,   27, 0x0a,
     500,  440,   27,   27, 0x0a,
     556,  532,   27,   27, 0x0a,
     633,  592,   27,   27, 0x0a,
     673,  440,   27,   27, 0x0a,
     708,  440,   27,   27, 0x0a,
     767,  740,   27,   27, 0x0a,
     807,  207,  795,   27, 0x0a,
     839,  207,  795,   27, 0x0a,
     873,  365,  361,   27, 0x0a,
     915,  891,   27,   27, 0x0a,
     955,  592,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextTable[] = {
    "PythonQtWrapper_QTextTable\0\0QTextTable*\0"
    "doc\0new_QTextTable(QTextDocument*)\0"
    "obj\0delete_QTextTable(QTextTable*)\0"
    "theWrappedObject,count\0"
    "appendColumns(QTextTable*,int)\0"
    "appendRows(QTextTable*,int)\0QTextTableCell\0"
    "theWrappedObject,c\0cellAt(QTextTable*,QTextCursor)\0"
    "theWrappedObject,position\0"
    "cellAt(QTextTable*,int)\0"
    "theWrappedObject,row,col\0"
    "cellAt(QTextTable*,int,int)\0int\0"
    "theWrappedObject\0columns(QTextTable*)\0"
    "QTextTableFormat\0format(QTextTable*)\0"
    "theWrappedObject,pos,num\0"
    "insertColumns(QTextTable*,int,int)\0"
    "insertRows(QTextTable*,int,int)\0"
    "theWrappedObject,cursor\0"
    "mergeCells(QTextTable*,QTextCursor)\0"
    "theWrappedObject,row,col,numRows,numCols\0"
    "mergeCells(QTextTable*,int,int,int,int)\0"
    "removeColumns(QTextTable*,int,int)\0"
    "removeRows(QTextTable*,int,int)\0"
    "theWrappedObject,rows,cols\0"
    "resize(QTextTable*,int,int)\0QTextCursor\0"
    "rowEnd(QTextTable*,QTextCursor)\0"
    "rowStart(QTextTable*,QTextCursor)\0"
    "rows(QTextTable*)\0theWrappedObject,format\0"
    "setFormat(QTextTable*,QTextTableFormat)\0"
    "splitCell(QTextTable*,int,int,int,int)\0"
};

void PythonQtWrapper_QTextTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextTable *_t = static_cast<PythonQtWrapper_QTextTable *>(_o);
        switch (_id) {
        case 0: { QTextTable* _r = _t->new_QTextTable((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTable**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QTextTable((*reinterpret_cast< QTextTable*(*)>(_a[1]))); break;
        case 2: _t->appendColumns((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->appendRows((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: { QTextTableCell _r = _t->cellAt((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextTableCell*>(_a[0]) = _r; }  break;
        case 5: { QTextTableCell _r = _t->cellAt((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextTableCell*>(_a[0]) = _r; }  break;
        case 6: { QTextTableCell _r = _t->cellAt((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTextTableCell*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->columns((*reinterpret_cast< QTextTable*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { QTextTableFormat _r = _t->format((*reinterpret_cast< QTextTable*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTableFormat*>(_a[0]) = _r; }  break;
        case 9: _t->insertColumns((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->insertRows((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->mergeCells((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2]))); break;
        case 12: _t->mergeCells((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 13: _t->removeColumns((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->removeRows((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->resize((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: { QTextCursor _r = _t->rowEnd((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 17: { QTextCursor _r = _t->rowStart((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->rows((*reinterpret_cast< QTextTable*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: _t->setFormat((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< const QTextTableFormat(*)>(_a[2]))); break;
        case 20: _t->splitCell((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextTable::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextTable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextTable,
      qt_meta_data_PythonQtWrapper_QTextTable, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextTable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextTable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextTable))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextTable*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextTableCell[] = {

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
      48,   31,   32,   31, 0x0a,
      71,   69,   32,   31, 0x0a,
     110,  106,   31,   31, 0x0a,
     187,  170,  149,   31, 0x0a,
     214,  170,  210,   31, 0x0a,
     238,  170,  210,   31, 0x0a,
     266,  170,  149,   31, 0x0a,
     299,  170,  287,   31, 0x0a,
     336,  170,  210,   31, 0x0a,
     383,  170,  367,   31, 0x0a,
     412,  170,  407,   31, 0x0a,
     437,  170,  287,   31, 0x0a,
     473,  170,  210,   31, 0x0a,
     526,  503,  407,   31, 0x0a,
     565,  503,  407,   31, 0x0a,
     604,  170,  210,   31, 0x0a,
     625,  170,  210,   31, 0x0a,
     674,  650,   31,   31, 0x0a,
     717,  170,  210,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextTableCell[] = {
    "PythonQtWrapper_QTextTableCell\0\0"
    "QTextTableCell*\0new_QTextTableCell()\0"
    "o\0new_QTextTableCell(QTextTableCell)\0"
    "obj\0delete_QTextTableCell(QTextTableCell*)\0"
    "QTextFrame::iterator\0theWrappedObject\0"
    "begin(QTextTableCell*)\0int\0"
    "column(QTextTableCell*)\0"
    "columnSpan(QTextTableCell*)\0"
    "end(QTextTableCell*)\0QTextCursor\0"
    "firstCursorPosition(QTextTableCell*)\0"
    "firstPosition(QTextTableCell*)\0"
    "QTextCharFormat\0format(QTextTableCell*)\0"
    "bool\0isValid(QTextTableCell*)\0"
    "lastCursorPosition(QTextTableCell*)\0"
    "lastPosition(QTextTableCell*)\0"
    "theWrappedObject,other\0"
    "__ne__(QTextTableCell*,QTextTableCell)\0"
    "__eq__(QTextTableCell*,QTextTableCell)\0"
    "row(QTextTableCell*)\0rowSpan(QTextTableCell*)\0"
    "theWrappedObject,format\0"
    "setFormat(QTextTableCell*,QTextCharFormat)\0"
    "tableCellFormatIndex(QTextTableCell*)\0"
};

void PythonQtWrapper_QTextTableCell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextTableCell *_t = static_cast<PythonQtWrapper_QTextTableCell *>(_o);
        switch (_id) {
        case 0: { QTextTableCell* _r = _t->new_QTextTableCell();
            if (_a[0]) *reinterpret_cast< QTextTableCell**>(_a[0]) = _r; }  break;
        case 1: { QTextTableCell* _r = _t->new_QTextTableCell((*reinterpret_cast< const QTextTableCell(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTableCell**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextTableCell((*reinterpret_cast< QTextTableCell*(*)>(_a[1]))); break;
        case 3: { QTextFrame::iterator _r = _t->begin((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrame::iterator*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->column((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->columnSpan((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { QTextFrame::iterator _r = _t->end((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrame::iterator*>(_a[0]) = _r; }  break;
        case 7: { QTextCursor _r = _t->firstCursorPosition((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->firstPosition((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QTextCharFormat _r = _t->format((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isValid((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QTextCursor _r = _t->lastCursorPosition((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->lastPosition((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->__ne__((*reinterpret_cast< QTextTableCell*(*)>(_a[1])),(*reinterpret_cast< const QTextTableCell(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->__eq__((*reinterpret_cast< QTextTableCell*(*)>(_a[1])),(*reinterpret_cast< const QTextTableCell(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->row((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->rowSpan((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: _t->setFormat((*reinterpret_cast< QTextTableCell*(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 18: { int _r = _t->tableCellFormatIndex((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextTableCell::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextTableCell::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextTableCell,
      qt_meta_data_PythonQtWrapper_QTextTableCell, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextTableCell::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextTableCell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextTableCell::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextTableCell))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextTableCell*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextTableCell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextTableCellFormat[] = {

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
      60,   37,   38,   37, 0x0a,
      91,   87,   38,   37, 0x0a,
     135,  129,   38,   37, 0x0a,
     186,  182,   37,   37, 0x0a,
     260,  243,  237,   37, 0x0a,
     302,  243,  297,   37, 0x0a,
     333,  243,  237,   37, 0x0a,
     368,  243,  237,   37, 0x0a,
     429,  404,   37,   37, 0x0a,
     475,  404,   37,   37, 0x0a,
     519,  404,   37,   37, 0x0a,
     559,  404,   37,   37, 0x0a,
     604,  404,   37,   37, 0x0a,
     647,  243,  237,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextTableCellFormat[] = {
    "PythonQtWrapper_QTextTableCellFormat\0"
    "\0QTextTableCellFormat*\0"
    "new_QTextTableCellFormat()\0fmt\0"
    "new_QTextTableCellFormat(QTextFormat)\0"
    "other\0new_QTextTableCellFormat(QTextTableCellFormat)\0"
    "obj\0delete_QTextTableCellFormat(QTextTableCellFormat*)\0"
    "qreal\0theWrappedObject\0"
    "bottomPadding(QTextTableCellFormat*)\0"
    "bool\0isValid(QTextTableCellFormat*)\0"
    "leftPadding(QTextTableCellFormat*)\0"
    "rightPadding(QTextTableCellFormat*)\0"
    "theWrappedObject,padding\0"
    "setBottomPadding(QTextTableCellFormat*,qreal)\0"
    "setLeftPadding(QTextTableCellFormat*,qreal)\0"
    "setPadding(QTextTableCellFormat*,qreal)\0"
    "setRightPadding(QTextTableCellFormat*,qreal)\0"
    "setTopPadding(QTextTableCellFormat*,qreal)\0"
    "topPadding(QTextTableCellFormat*)\0"
};

void PythonQtWrapper_QTextTableCellFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextTableCellFormat *_t = static_cast<PythonQtWrapper_QTextTableCellFormat *>(_o);
        switch (_id) {
        case 0: { QTextTableCellFormat* _r = _t->new_QTextTableCellFormat();
            if (_a[0]) *reinterpret_cast< QTextTableCellFormat**>(_a[0]) = _r; }  break;
        case 1: { QTextTableCellFormat* _r = _t->new_QTextTableCellFormat((*reinterpret_cast< const QTextFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTableCellFormat**>(_a[0]) = _r; }  break;
        case 2: { QTextTableCellFormat* _r = _t->new_QTextTableCellFormat((*reinterpret_cast< const QTextTableCellFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTableCellFormat**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTextTableCellFormat((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1]))); break;
        case 4: { qreal _r = _t->bottomPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isValid((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { qreal _r = _t->leftPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 7: { qreal _r = _t->rightPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 8: _t->setBottomPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 9: _t->setLeftPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 10: _t->setPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 11: _t->setRightPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 12: _t->setTopPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 13: { qreal _r = _t->topPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextTableCellFormat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextTableCellFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextTableCellFormat,
      qt_meta_data_PythonQtWrapper_QTextTableCellFormat, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextTableCellFormat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextTableCellFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextTableCellFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextTableCellFormat))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextTableCellFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextTableCellFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTextTableFormat[] = {

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
      52,   33,   34,   33, 0x0a,
      79,   75,   34,   33, 0x0a,
     119,  113,   34,   33, 0x0a,
     162,  158,   33,   33, 0x0a,
     236,  219,  205,   33, 0x0a,
     271,  219,  265,   33, 0x0a,
     302,  219,  265,   33, 0x0a,
     333,  219,   33,   33, 0x0a,
     401,  219,  380,   33, 0x0a,
     447,  219,  443,   33, 0x0a,
     474,  219,  443,   33, 0x0a,
     513,  219,  508,   33, 0x0a,
     567,  540,   33,   33, 0x0a,
     638,  613,   33,   33, 0x0a,
     703,  678,   33,   33, 0x0a,
     772,  743,   33,   33, 0x0a,
     863,  838,   33,   33, 0x0a,
     920,  897,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTextTableFormat[] = {
    "PythonQtWrapper_QTextTableFormat\0\0"
    "QTextTableFormat*\0new_QTextTableFormat()\0"
    "fmt\0new_QTextTableFormat(QTextFormat)\0"
    "other\0new_QTextTableFormat(QTextTableFormat)\0"
    "obj\0delete_QTextTableFormat(QTextTableFormat*)\0"
    "Qt::Alignment\0theWrappedObject\0"
    "alignment(QTextTableFormat*)\0qreal\0"
    "cellPadding(QTextTableFormat*)\0"
    "cellSpacing(QTextTableFormat*)\0"
    "clearColumnWidthConstraints(QTextTableFormat*)\0"
    "QVector<QTextLength>\0"
    "columnWidthConstraints(QTextTableFormat*)\0"
    "int\0columns(QTextTableFormat*)\0"
    "headerRowCount(QTextTableFormat*)\0"
    "bool\0isValid(QTextTableFormat*)\0"
    "theWrappedObject,alignment\0"
    "setAlignment(QTextTableFormat*,Qt::Alignment)\0"
    "theWrappedObject,padding\0"
    "setCellPadding(QTextTableFormat*,qreal)\0"
    "theWrappedObject,spacing\0"
    "setCellSpacing(QTextTableFormat*,qreal)\0"
    "theWrappedObject,constraints\0"
    "setColumnWidthConstraints(QTextTableFormat*,QVector<QTextLength>)\0"
    "theWrappedObject,columns\0"
    "setColumns(QTextTableFormat*,int)\0"
    "theWrappedObject,count\0"
    "setHeaderRowCount(QTextTableFormat*,int)\0"
};

void PythonQtWrapper_QTextTableFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTextTableFormat *_t = static_cast<PythonQtWrapper_QTextTableFormat *>(_o);
        switch (_id) {
        case 0: { QTextTableFormat* _r = _t->new_QTextTableFormat();
            if (_a[0]) *reinterpret_cast< QTextTableFormat**>(_a[0]) = _r; }  break;
        case 1: { QTextTableFormat* _r = _t->new_QTextTableFormat((*reinterpret_cast< const QTextFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTableFormat**>(_a[0]) = _r; }  break;
        case 2: { QTextTableFormat* _r = _t->new_QTextTableFormat((*reinterpret_cast< const QTextTableFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTableFormat**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTextTableFormat((*reinterpret_cast< QTextTableFormat*(*)>(_a[1]))); break;
        case 4: { Qt::Alignment _r = _t->alignment((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 5: { qreal _r = _t->cellPadding((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 6: { qreal _r = _t->cellSpacing((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 7: _t->clearColumnWidthConstraints((*reinterpret_cast< QTextTableFormat*(*)>(_a[1]))); break;
        case 8: { QVector<QTextLength> _r = _t->columnWidthConstraints((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QTextLength>*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->columns((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->headerRowCount((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isValid((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->setAlignment((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 13: _t->setCellPadding((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 14: _t->setCellSpacing((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 15: _t->setColumnWidthConstraints((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])),(*reinterpret_cast< const QVector<QTextLength>(*)>(_a[2]))); break;
        case 16: _t->setColumns((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->setHeaderRowCount((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTextTableFormat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTextTableFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextTableFormat,
      qt_meta_data_PythonQtWrapper_QTextTableFormat, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTextTableFormat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTextTableFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTextTableFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextTableFormat))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextTableFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextTableFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTileRules[] = {

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
      68,   40,   28,   27, 0x0a,
     115,  110,   28,   27, 0x0a,
     144,   27,   28,   27, 0x2a,
     165,  161,   27,   27, 0x0a,
     224,  196,   27,   27, 0x0a,
     298,  281,  268,   27, 0x0a,
     355,  329,   27,   27, 0x0a,
     397,  281,  268,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTileRules[] = {
    "PythonQtWrapper_QTileRules\0\0QTileRules*\0"
    "horizontalRule,verticalRule\0"
    "new_QTileRules(Qt::TileRule,Qt::TileRule)\0"
    "rule\0new_QTileRules(Qt::TileRule)\0"
    "new_QTileRules()\0obj\0"
    "delete_QTileRules(QTileRules*)\0"
    "theWrappedObject,horizontal\0"
    "py_set_horizontal(QTileRules*,Qt::TileRule)\0"
    "Qt::TileRule\0theWrappedObject\0"
    "py_get_horizontal(QTileRules*)\0"
    "theWrappedObject,vertical\0"
    "py_set_vertical(QTileRules*,Qt::TileRule)\0"
    "py_get_vertical(QTileRules*)\0"
};

void PythonQtWrapper_QTileRules::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTileRules *_t = static_cast<PythonQtWrapper_QTileRules *>(_o);
        switch (_id) {
        case 0: { QTileRules* _r = _t->new_QTileRules((*reinterpret_cast< Qt::TileRule(*)>(_a[1])),(*reinterpret_cast< Qt::TileRule(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTileRules**>(_a[0]) = _r; }  break;
        case 1: { QTileRules* _r = _t->new_QTileRules((*reinterpret_cast< Qt::TileRule(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTileRules**>(_a[0]) = _r; }  break;
        case 2: { QTileRules* _r = _t->new_QTileRules();
            if (_a[0]) *reinterpret_cast< QTileRules**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTileRules((*reinterpret_cast< QTileRules*(*)>(_a[1]))); break;
        case 4: _t->py_set_horizontal((*reinterpret_cast< QTileRules*(*)>(_a[1])),(*reinterpret_cast< Qt::TileRule(*)>(_a[2]))); break;
        case 5: { Qt::TileRule _r = _t->py_get_horizontal((*reinterpret_cast< QTileRules*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TileRule*>(_a[0]) = _r; }  break;
        case 6: _t->py_set_vertical((*reinterpret_cast< QTileRules*(*)>(_a[1])),(*reinterpret_cast< Qt::TileRule(*)>(_a[2]))); break;
        case 7: { Qt::TileRule _r = _t->py_get_vertical((*reinterpret_cast< QTileRules*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TileRule*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTileRules::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTileRules::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTileRules,
      qt_meta_data_PythonQtWrapper_QTileRules, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTileRules::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTileRules::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTileRules::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTileRules))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTileRules*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTileRules::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTimeEdit[] = {

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
      45,   38,   27,   26, 0x0a,
      69,   26,   27,   26, 0x2a,
      97,   85,   27,   26, 0x0a,
     132,  127,   27,   26, 0x2a,
     157,  153,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTimeEdit[] = {
    "PythonQtWrapper_QTimeEdit\0\0QTimeEdit*\0"
    "parent\0new_QTimeEdit(QWidget*)\0"
    "new_QTimeEdit()\0time,parent\0"
    "new_QTimeEdit(QTime,QWidget*)\0time\0"
    "new_QTimeEdit(QTime)\0obj\0"
    "delete_QTimeEdit(QTimeEdit*)\0"
};

void PythonQtWrapper_QTimeEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTimeEdit *_t = static_cast<PythonQtWrapper_QTimeEdit *>(_o);
        switch (_id) {
        case 0: { QTimeEdit* _r = _t->new_QTimeEdit((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTimeEdit**>(_a[0]) = _r; }  break;
        case 1: { QTimeEdit* _r = _t->new_QTimeEdit();
            if (_a[0]) *reinterpret_cast< QTimeEdit**>(_a[0]) = _r; }  break;
        case 2: { QTimeEdit* _r = _t->new_QTimeEdit((*reinterpret_cast< const QTime(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTimeEdit**>(_a[0]) = _r; }  break;
        case 3: { QTimeEdit* _r = _t->new_QTimeEdit((*reinterpret_cast< const QTime(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTimeEdit**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QTimeEdit((*reinterpret_cast< QTimeEdit*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTimeEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTimeEdit::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTimeEdit,
      qt_meta_data_PythonQtWrapper_QTimeEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTimeEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTimeEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTimeEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTimeEdit))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTimeEdit*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTimeEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QToolBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   36,   26,   25, 0x0a,
      66,   25,   26,   25, 0x2a,
      94,   81,   26,   25, 0x0a,
     131,  125,   26,   25, 0x2a,
     157,  153,   25,   25, 0x0a,
     212,  193,  184,   25, 0x0a,
     260,  239,  184,   25, 0x0a,
     311,  288,   25,   25, 0x0a,
     378,  354,  348,   25, 0x0a,
     413,  354,   25,   25, 0x0a,
     470,  443,  184,   25, 0x0a,
     548,  505,  184,   25, 0x0a,
     632,  610,  184,   25, 0x0a,
     699,  661,  184,   25, 0x0a,
     772,  755,  184,   25, 0x0a,
     820,  796,  184,   25, 0x0a,
     867,  755,  850,   25, 0x0a,
     891,  288,   25,   25, 0x0a,
     922,  288,   25,   25, 0x0a,
     957,  755,   25,   25, 0x0a,
     979,  288,  974,   25, 0x0a,
    1010,  755, 1004,   25, 0x0a,
    1054, 1030,   25,   25, 0x0a,
    1126, 1102,  184,   25, 0x0a,
    1193, 1162,  184,   25, 0x0a,
    1257, 1235,  974,   25, 0x0a,
    1298,  755,  974,   25, 0x0a,
    1321,  755,  974,   25, 0x0a,
    1343,  755,  974,   25, 0x0a,
    1380,  755, 1364,   25, 0x0a,
    1403,  288,   25,   25, 0x0a,
    1438,  288,   25,   25, 0x0a,
    1498, 1475,   25,   25, 0x0a,
    1569, 1542,   25,   25, 0x0a,
    1623, 1598,   25,   25, 0x0a,
    1679, 1650,   25,   25, 0x0a,
    1721,  755,  184,   25, 0x0a,
    1769,  755, 1749,   25, 0x0a,
    1805,  354, 1796,   25, 0x0a,
    1860, 1841,  184,   25, 0x0a,
    1923, 1899,  184,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QToolBar[] = {
    "PythonQtWrapper_QToolBar\0\0QToolBar*\0"
    "parent\0new_QToolBar(QWidget*)\0"
    "new_QToolBar()\0title,parent\0"
    "new_QToolBar(QString,QWidget*)\0title\0"
    "new_QToolBar(QString)\0obj\0"
    "delete_QToolBar(QToolBar*)\0QAction*\0"
    "theWrappedObject,p\0actionAt(QToolBar*,QPoint)\0"
    "theWrappedObject,x,y\0actionAt(QToolBar*,int,int)\0"
    "theWrappedObject,event\0"
    "actionEvent(QToolBar*,QActionEvent*)\0"
    "QRect\0theWrappedObject,action\0"
    "actionGeometry(QToolBar*,QAction*)\0"
    "addAction(QToolBar*,QAction*)\0"
    "theWrappedObject,icon,text\0"
    "addAction(QToolBar*,QIcon,QString)\0"
    "theWrappedObject,icon,text,receiver,member\0"
    "addAction(QToolBar*,QIcon,QString,const QObject*,const char*)\0"
    "theWrappedObject,text\0"
    "addAction(QToolBar*,QString)\0"
    "theWrappedObject,text,receiver,member\0"
    "addAction(QToolBar*,QString,const QObject*,const char*)\0"
    "theWrappedObject\0addSeparator(QToolBar*)\0"
    "theWrappedObject,widget\0"
    "addWidget(QToolBar*,QWidget*)\0"
    "Qt::ToolBarAreas\0allowedAreas(QToolBar*)\0"
    "changeEvent(QToolBar*,QEvent*)\0"
    "childEvent(QToolBar*,QChildEvent*)\0"
    "clear(QToolBar*)\0bool\0event(QToolBar*,QEvent*)\0"
    "QSize\0iconSize(QToolBar*)\0"
    "theWrappedObject,option\0"
    "initStyleOption(QToolBar*,QStyleOptionToolBar*)\0"
    "theWrappedObject,before\0"
    "insertSeparator(QToolBar*,QAction*)\0"
    "theWrappedObject,before,widget\0"
    "insertWidget(QToolBar*,QAction*,QWidget*)\0"
    "theWrappedObject,area\0"
    "isAreaAllowed(QToolBar*,Qt::ToolBarArea)\0"
    "isFloatable(QToolBar*)\0isFloating(QToolBar*)\0"
    "isMovable(QToolBar*)\0Qt::Orientation\0"
    "orientation(QToolBar*)\0"
    "paintEvent(QToolBar*,QPaintEvent*)\0"
    "resizeEvent(QToolBar*,QResizeEvent*)\0"
    "theWrappedObject,areas\0"
    "setAllowedAreas(QToolBar*,Qt::ToolBarAreas)\0"
    "theWrappedObject,floatable\0"
    "setFloatable(QToolBar*,bool)\0"
    "theWrappedObject,movable\0"
    "setMovable(QToolBar*,bool)\0"
    "theWrappedObject,orientation\0"
    "setOrientation(QToolBar*,Qt::Orientation)\0"
    "toggleViewAction(QToolBar*)\0"
    "Qt::ToolButtonStyle\0toolButtonStyle(QToolBar*)\0"
    "QWidget*\0widgetForAction(QToolBar*,QAction*)\0"
    "menu,text,callable\0"
    "addAction(QToolBar*,QString,PyObject*)\0"
    "menu,icon,text,callable\0"
    "addAction(QToolBar*,QIcon,QString,PyObject*)\0"
};

void PythonQtWrapper_QToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QToolBar *_t = static_cast<PythonQtWrapper_QToolBar *>(_o);
        switch (_id) {
        case 0: { QToolBar* _r = _t->new_QToolBar((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QToolBar**>(_a[0]) = _r; }  break;
        case 1: { QToolBar* _r = _t->new_QToolBar();
            if (_a[0]) *reinterpret_cast< QToolBar**>(_a[0]) = _r; }  break;
        case 2: { QToolBar* _r = _t->new_QToolBar((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QToolBar**>(_a[0]) = _r; }  break;
        case 3: { QToolBar* _r = _t->new_QToolBar((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QToolBar**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QToolBar((*reinterpret_cast< QToolBar*(*)>(_a[1]))); break;
        case 5: { QAction* _r = _t->actionAt((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 6: { QAction* _r = _t->actionAt((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 7: _t->actionEvent((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< QActionEvent*(*)>(_a[2]))); break;
        case 8: { QRect _r = _t->actionGeometry((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 9: _t->addAction((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 10: { QAction* _r = _t->addAction((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 11: { QAction* _r = _t->addAction((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QObject*(*)>(_a[4])),(*reinterpret_cast< const char*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 12: { QAction* _r = _t->addAction((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 13: { QAction* _r = _t->addAction((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QObject*(*)>(_a[3])),(*reinterpret_cast< const char*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 14: { QAction* _r = _t->addSeparator((*reinterpret_cast< QToolBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 15: { QAction* _r = _t->addWidget((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 16: { Qt::ToolBarAreas _r = _t->allowedAreas((*reinterpret_cast< QToolBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ToolBarAreas*>(_a[0]) = _r; }  break;
        case 17: _t->changeEvent((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 18: _t->childEvent((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< QChildEvent*(*)>(_a[2]))); break;
        case 19: _t->clear((*reinterpret_cast< QToolBar*(*)>(_a[1]))); break;
        case 20: { bool _r = _t->event((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { QSize _r = _t->iconSize((*reinterpret_cast< QToolBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 22: _t->initStyleOption((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionToolBar*(*)>(_a[2]))); break;
        case 23: { QAction* _r = _t->insertSeparator((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 24: { QAction* _r = _t->insertWidget((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->isAreaAllowed((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< Qt::ToolBarArea(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->isFloatable((*reinterpret_cast< QToolBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->isFloating((*reinterpret_cast< QToolBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->isMovable((*reinterpret_cast< QToolBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { Qt::Orientation _r = _t->orientation((*reinterpret_cast< QToolBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientation*>(_a[0]) = _r; }  break;
        case 30: _t->paintEvent((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 31: _t->resizeEvent((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 32: _t->setAllowedAreas((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< Qt::ToolBarAreas(*)>(_a[2]))); break;
        case 33: _t->setFloatable((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 34: _t->setMovable((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: _t->setOrientation((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< Qt::Orientation(*)>(_a[2]))); break;
        case 36: { QAction* _r = _t->toggleViewAction((*reinterpret_cast< QToolBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 37: { Qt::ToolButtonStyle _r = _t->toolButtonStyle((*reinterpret_cast< QToolBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ToolButtonStyle*>(_a[0]) = _r; }  break;
        case 38: { QWidget* _r = _t->widgetForAction((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 39: { QAction* _r = _t->addAction((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< PyObject*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 40: { QAction* _r = _t->addAction((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< PyObject*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QToolBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QToolBar,
      qt_meta_data_PythonQtWrapper_QToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QToolBar))
        return static_cast<void*>(const_cast< PythonQtWrapper_QToolBar*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QToolBarChangeEvent[] = {

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
      60,   58,   37,   36, 0x0a,
      94,   90,   36,   36, 0x0a,
     165,  148,  143,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QToolBarChangeEvent[] = {
    "PythonQtWrapper_QToolBarChangeEvent\0"
    "\0QToolBarChangeEvent*\0t\0"
    "new_QToolBarChangeEvent(bool)\0obj\0"
    "delete_QToolBarChangeEvent(QToolBarChangeEvent*)\0"
    "bool\0theWrappedObject\0"
    "toggle(QToolBarChangeEvent*)\0"
};

void PythonQtWrapper_QToolBarChangeEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QToolBarChangeEvent *_t = static_cast<PythonQtWrapper_QToolBarChangeEvent *>(_o);
        switch (_id) {
        case 0: { QToolBarChangeEvent* _r = _t->new_QToolBarChangeEvent((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QToolBarChangeEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QToolBarChangeEvent((*reinterpret_cast< QToolBarChangeEvent*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->toggle((*reinterpret_cast< QToolBarChangeEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QToolBarChangeEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QToolBarChangeEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QToolBarChangeEvent,
      qt_meta_data_PythonQtWrapper_QToolBarChangeEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QToolBarChangeEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QToolBarChangeEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QToolBarChangeEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QToolBarChangeEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QToolBarChangeEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QToolBarChangeEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QToolBox[] = {

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
      45,   36,   26,   25, 0x0a,
      91,   84,   26,   25, 0x2a,
     114,   25,   26,   25, 0x2a,
     133,  129,   25,   25, 0x0a,
     198,  164,  160,   25, 0x0a,
     297,  268,  160,   25, 0x0a,
     385,  361,   25,   25, 0x0a,
     433,  416,  160,   25, 0x0a,
     450,  416,  160,   25, 0x0a,
     483,  416,  474,   25, 0x0a,
     532,  513,  508,   25, 0x0a,
     581,  557,  160,   25, 0x0a,
     649,  609,  160,   25, 0x0a,
     761,  726,  160,   25, 0x0a,
     855,  832,  508,   25, 0x0a,
     890,  832,  884,   25, 0x0a,
     914,  832,   25,   25, 0x0a,
     942,  832,   25,   25, 0x0a,
     977,  832,  969,   25, 0x0a,
    1001,  832,  969,   25, 0x0a,
    1028,  832,   25,   25, 0x0a,
    1085, 1054,   25,   25, 0x0a,
    1148, 1120,   25,   25, 0x0a,
    1209, 1181,   25,   25, 0x0a,
    1275, 1244,   25,   25, 0x0a,
    1313,  513,   25,   25, 0x0a,
    1346,  832,  474,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QToolBox[] = {
    "PythonQtWrapper_QToolBox\0\0QToolBox*\0"
    "parent,f\0new_QToolBox(QWidget*,Qt::WindowFlags)\0"
    "parent\0new_QToolBox(QWidget*)\0"
    "new_QToolBox()\0obj\0delete_QToolBox(QToolBox*)\0"
    "int\0theWrappedObject,widget,icon,text\0"
    "addItem(QToolBox*,PythonQtPassOwnershipToCPP<QWidget*>,QIcon,QString)\0"
    "theWrappedObject,widget,text\0"
    "addItem(QToolBox*,PythonQtPassOwnershipToCPP<QWidget*>,QString)\0"
    "theWrappedObject,arg__1\0"
    "changeEvent(QToolBox*,QEvent*)\0"
    "theWrappedObject\0count(QToolBox*)\0"
    "currentIndex(QToolBox*)\0QWidget*\0"
    "currentWidget(QToolBox*)\0bool\0"
    "theWrappedObject,e\0event(QToolBox*,QEvent*)\0"
    "theWrappedObject,widget\0"
    "indexOf(QToolBox*,QWidget*)\0"
    "theWrappedObject,index,widget,icon,text\0"
    "insertItem(QToolBox*,int,PythonQtPassOwnershipToCPP<QWidget*>,QIcon,QS"
    "tring)\0"
    "theWrappedObject,index,widget,text\0"
    "insertItem(QToolBox*,int,PythonQtPassOwnershipToCPP<QWidget*>,QString)\0"
    "theWrappedObject,index\0"
    "isItemEnabled(QToolBox*,int)\0QIcon\0"
    "itemIcon(QToolBox*,int)\0"
    "itemInserted(QToolBox*,int)\0"
    "itemRemoved(QToolBox*,int)\0QString\0"
    "itemText(QToolBox*,int)\0"
    "itemToolTip(QToolBox*,int)\0"
    "removeItem(QToolBox*,int)\0"
    "theWrappedObject,index,enabled\0"
    "setItemEnabled(QToolBox*,int,bool)\0"
    "theWrappedObject,index,icon\0"
    "setItemIcon(QToolBox*,int,QIcon)\0"
    "theWrappedObject,index,text\0"
    "setItemText(QToolBox*,int,QString)\0"
    "theWrappedObject,index,toolTip\0"
    "setItemToolTip(QToolBox*,int,QString)\0"
    "showEvent(QToolBox*,QShowEvent*)\0"
    "widget(QToolBox*,int)\0"
};

void PythonQtWrapper_QToolBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QToolBox *_t = static_cast<PythonQtWrapper_QToolBox *>(_o);
        switch (_id) {
        case 0: { QToolBox* _r = _t->new_QToolBox((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QToolBox**>(_a[0]) = _r; }  break;
        case 1: { QToolBox* _r = _t->new_QToolBox((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QToolBox**>(_a[0]) = _r; }  break;
        case 2: { QToolBox* _r = _t->new_QToolBox();
            if (_a[0]) *reinterpret_cast< QToolBox**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QToolBox((*reinterpret_cast< QToolBox*(*)>(_a[1]))); break;
        case 4: { int _r = _t->addItem((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[2])),(*reinterpret_cast< const QIcon(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->addItem((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->changeEvent((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 7: { int _r = _t->count((*reinterpret_cast< QToolBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->currentIndex((*reinterpret_cast< QToolBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QWidget* _r = _t->currentWidget((*reinterpret_cast< QToolBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->event((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->indexOf((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->insertItem((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[3])),(*reinterpret_cast< const QIcon(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->insertItem((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isItemEnabled((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QIcon _r = _t->itemIcon((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 16: _t->itemInserted((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->itemRemoved((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: { QString _r = _t->itemText((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { QString _r = _t->itemToolTip((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 20: _t->removeItem((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->setItemEnabled((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 22: _t->setItemIcon((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QIcon(*)>(_a[3]))); break;
        case 23: _t->setItemText((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 24: _t->setItemToolTip((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 25: _t->showEvent((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< QShowEvent*(*)>(_a[2]))); break;
        case 26: { QWidget* _r = _t->widget((*reinterpret_cast< QToolBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QToolBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QToolBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QToolBox,
      qt_meta_data_PythonQtWrapper_QToolBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QToolBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QToolBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QToolBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QToolBox))
        return static_cast<void*>(const_cast< PythonQtWrapper_QToolBox*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QToolBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QToolButton[] = {

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
      49,   42,   29,   28, 0x0a,
      75,   28,   29,   28, 0x2a,
      97,   93,   28,   28, 0x0a,
     154,  130,   28,   28, 0x0a,
     225,  208,  194,   28, 0x0a,
     254,  208,  249,   28, 0x0a,
     278,  130,   28,   28, 0x0a,
     321,  208,  312,   28, 0x0a,
     349,  130,   28,   28, 0x0a,
     401,  382,  249,   28, 0x0a,
     450,  429,  249,   28, 0x0a,
     505,  481,   28,   28, 0x0a,
     559,  130,   28,   28, 0x0a,
     599,  208,  592,   28, 0x0a,
     624,  208,  618,   28, 0x0a,
     654,  130,   28,   28, 0x0a,
     697,  130,   28,   28, 0x0a,
     742,  208,   28,   28, 0x0a,
     771,  130,   28,   28, 0x0a,
     842,  208,  809,   28, 0x0a,
     888,  866,   28,   28, 0x0a,
     953,  929,   28,   28, 0x0a,
    1007,  985,   28,   28, 0x0a,
    1058, 1036,   28,   28, 0x0a,
    1118,  208,  618,   28, 0x0a,
    1141,  130,   28,   28, 0x0a,
    1199,  208, 1179,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QToolButton[] = {
    "PythonQtWrapper_QToolButton\0\0QToolButton*\0"
    "parent\0new_QToolButton(QWidget*)\0"
    "new_QToolButton()\0obj\0"
    "delete_QToolButton(QToolButton*)\0"
    "theWrappedObject,arg__1\0"
    "actionEvent(QToolButton*,QActionEvent*)\0"
    "Qt::ArrowType\0theWrappedObject\0"
    "arrowType(QToolButton*)\0bool\0"
    "autoRaise(QToolButton*)\0"
    "changeEvent(QToolButton*,QEvent*)\0"
    "QAction*\0defaultAction(QToolButton*)\0"
    "enterEvent(QToolButton*,QEvent*)\0"
    "theWrappedObject,e\0event(QToolButton*,QEvent*)\0"
    "theWrappedObject,pos\0"
    "hitButton(QToolButton*,QPoint)\0"
    "theWrappedObject,option\0"
    "initStyleOption(QToolButton*,QStyleOptionToolButton*)\0"
    "leaveEvent(QToolButton*,QEvent*)\0"
    "QMenu*\0menu(QToolButton*)\0QSize\0"
    "minimumSizeHint(QToolButton*)\0"
    "mousePressEvent(QToolButton*,QMouseEvent*)\0"
    "mouseReleaseEvent(QToolButton*,QMouseEvent*)\0"
    "nextCheckState(QToolButton*)\0"
    "paintEvent(QToolButton*,QPaintEvent*)\0"
    "QToolButton::ToolButtonPopupMode\0"
    "popupMode(QToolButton*)\0theWrappedObject,type\0"
    "setArrowType(QToolButton*,Qt::ArrowType)\0"
    "theWrappedObject,enable\0"
    "setAutoRaise(QToolButton*,bool)\0"
    "theWrappedObject,menu\0"
    "setMenu(QToolButton*,QMenu*)\0"
    "theWrappedObject,mode\0"
    "setPopupMode(QToolButton*,QToolButton::ToolButtonPopupMode)\0"
    "sizeHint(QToolButton*)\0"
    "timerEvent(QToolButton*,QTimerEvent*)\0"
    "Qt::ToolButtonStyle\0toolButtonStyle(QToolButton*)\0"
};

void PythonQtWrapper_QToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QToolButton *_t = static_cast<PythonQtWrapper_QToolButton *>(_o);
        switch (_id) {
        case 0: { QToolButton* _r = _t->new_QToolButton((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QToolButton**>(_a[0]) = _r; }  break;
        case 1: { QToolButton* _r = _t->new_QToolButton();
            if (_a[0]) *reinterpret_cast< QToolButton**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QToolButton((*reinterpret_cast< QToolButton*(*)>(_a[1]))); break;
        case 3: _t->actionEvent((*reinterpret_cast< QToolButton*(*)>(_a[1])),(*reinterpret_cast< QActionEvent*(*)>(_a[2]))); break;
        case 4: { Qt::ArrowType _r = _t->arrowType((*reinterpret_cast< QToolButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ArrowType*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->autoRaise((*reinterpret_cast< QToolButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->changeEvent((*reinterpret_cast< QToolButton*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 7: { QAction* _r = _t->defaultAction((*reinterpret_cast< QToolButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 8: _t->enterEvent((*reinterpret_cast< QToolButton*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 9: { bool _r = _t->event((*reinterpret_cast< QToolButton*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->hitButton((*reinterpret_cast< QToolButton*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->initStyleOption((*reinterpret_cast< QToolButton*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionToolButton*(*)>(_a[2]))); break;
        case 12: _t->leaveEvent((*reinterpret_cast< QToolButton*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 13: { QMenu* _r = _t->menu((*reinterpret_cast< QToolButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = _r; }  break;
        case 14: { QSize _r = _t->minimumSizeHint((*reinterpret_cast< QToolButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 15: _t->mousePressEvent((*reinterpret_cast< QToolButton*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 16: _t->mouseReleaseEvent((*reinterpret_cast< QToolButton*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 17: _t->nextCheckState((*reinterpret_cast< QToolButton*(*)>(_a[1]))); break;
        case 18: _t->paintEvent((*reinterpret_cast< QToolButton*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 19: { QToolButton::ToolButtonPopupMode _r = _t->popupMode((*reinterpret_cast< QToolButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QToolButton::ToolButtonPopupMode*>(_a[0]) = _r; }  break;
        case 20: _t->setArrowType((*reinterpret_cast< QToolButton*(*)>(_a[1])),(*reinterpret_cast< Qt::ArrowType(*)>(_a[2]))); break;
        case 21: _t->setAutoRaise((*reinterpret_cast< QToolButton*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 22: _t->setMenu((*reinterpret_cast< QToolButton*(*)>(_a[1])),(*reinterpret_cast< QMenu*(*)>(_a[2]))); break;
        case 23: _t->setPopupMode((*reinterpret_cast< QToolButton*(*)>(_a[1])),(*reinterpret_cast< QToolButton::ToolButtonPopupMode(*)>(_a[2]))); break;
        case 24: { QSize _r = _t->sizeHint((*reinterpret_cast< QToolButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 25: _t->timerEvent((*reinterpret_cast< QToolButton*(*)>(_a[1])),(*reinterpret_cast< QTimerEvent*(*)>(_a[2]))); break;
        case 26: { Qt::ToolButtonStyle _r = _t->toolButtonStyle((*reinterpret_cast< QToolButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ToolButtonStyle*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QToolButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QToolButton::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QToolButton,
      qt_meta_data_PythonQtWrapper_QToolButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QToolButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QToolButton))
        return static_cast<void*>(const_cast< PythonQtWrapper_QToolButton*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QToolTip[] = {

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
      30,   26,   25,   25, 0x0a,
      63,   25,   57,   25, 0x0a,
      86,   25,   25,   25, 0x0a,
     118,   25,  113,   25, 0x0a,
     155,   25,  146,   25, 0x0a,
     188,  181,   25,   25, 0x0a,
     219,  181,   25,   25, 0x0a,
     267,  256,   25,   25, 0x0a,
     326,  317,   25,   25, 0x2a,
     383,  367,   25,   25, 0x0a,
     447,   25,  439,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QToolTip[] = {
    "PythonQtWrapper_QToolTip\0\0obj\0"
    "delete_QToolTip(QToolTip*)\0QFont\0"
    "static_QToolTip_font()\0"
    "static_QToolTip_hideText()\0bool\0"
    "static_QToolTip_isVisible()\0QPalette\0"
    "static_QToolTip_palette()\0arg__1\0"
    "static_QToolTip_setFont(QFont)\0"
    "static_QToolTip_setPalette(QPalette)\0"
    "pos,text,w\0static_QToolTip_showText(QPoint,QString,QWidget*)\0"
    "pos,text\0static_QToolTip_showText(QPoint,QString)\0"
    "pos,text,w,rect\0"
    "static_QToolTip_showText(QPoint,QString,QWidget*,QRect)\0"
    "QString\0static_QToolTip_text()\0"
};

void PythonQtWrapper_QToolTip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QToolTip *_t = static_cast<PythonQtWrapper_QToolTip *>(_o);
        switch (_id) {
        case 0: _t->delete_QToolTip((*reinterpret_cast< QToolTip*(*)>(_a[1]))); break;
        case 1: { QFont _r = _t->static_QToolTip_font();
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 2: _t->static_QToolTip_hideText(); break;
        case 3: { bool _r = _t->static_QToolTip_isVisible();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { QPalette _r = _t->static_QToolTip_palette();
            if (_a[0]) *reinterpret_cast< QPalette*>(_a[0]) = _r; }  break;
        case 5: _t->static_QToolTip_setFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 6: _t->static_QToolTip_setPalette((*reinterpret_cast< const QPalette(*)>(_a[1]))); break;
        case 7: _t->static_QToolTip_showText((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3]))); break;
        case 8: _t->static_QToolTip_showText((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->static_QToolTip_showText((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])),(*reinterpret_cast< const QRect(*)>(_a[4]))); break;
        case 10: { QString _r = _t->static_QToolTip_text();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QToolTip::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QToolTip::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QToolTip,
      qt_meta_data_PythonQtWrapper_QToolTip, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QToolTip::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QToolTip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QToolTip::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QToolTip))
        return static_cast<void*>(const_cast< PythonQtWrapper_QToolTip*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QToolTip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTouchEvent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       1,   84, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
     102,   42,   29,   28, 0x0a,
     278,  230,   29,   28, 0x2a,
     406,  375,   29,   28, 0x2a,
     503,  482,   29,   28, 0x2a,
     567,  557,   29,   28, 0x2a,
     601,  597,   28,   28, 0x0a,
     675,  658,  634,   28, 0x0a,
     729,  700,   28,   28, 0x0a,
     816,  781,   28,   28, 0x0a,
     901,  871,   28,   28, 0x0a,
     986,  961,   28,   28, 0x0a,
    1040,  658, 1019,   28, 0x0a,
    1109,  658, 1071,   28, 0x0a,
    1144,  658, 1135,   28, 0x0a,

 // enums: name, flags, count, data
    1165, 0x0,    2,   88,

 // enum data: key, value
    1176, uint(PythonQtWrapper_QTouchEvent::TouchScreen),
    1188, uint(PythonQtWrapper_QTouchEvent::TouchPad),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTouchEvent[] = {
    "PythonQtWrapper_QTouchEvent\0\0QTouchEvent*\0"
    "eventType,deviceType,modifiers,touchPointStates,touchPoints\0"
    "new_QTouchEvent(QEvent::Type,QTouchEvent::DeviceType,Qt::KeyboardModif"
    "iers,Qt::TouchPointStates,QList<QTouchEvent::TouchPoint>)\0"
    "eventType,deviceType,modifiers,touchPointStates\0"
    "new_QTouchEvent(QEvent::Type,QTouchEvent::DeviceType,Qt::KeyboardModif"
    "iers,Qt::TouchPointStates)\0"
    "eventType,deviceType,modifiers\0"
    "new_QTouchEvent(QEvent::Type,QTouchEvent::DeviceType,Qt::KeyboardModif"
    "iers)\0"
    "eventType,deviceType\0"
    "new_QTouchEvent(QEvent::Type,QTouchEvent::DeviceType)\0"
    "eventType\0new_QTouchEvent(QEvent::Type)\0"
    "obj\0delete_QTouchEvent(QTouchEvent*)\0"
    "QTouchEvent::DeviceType\0theWrappedObject\0"
    "deviceType(QTouchEvent*)\0"
    "theWrappedObject,adeviceType\0"
    "setDeviceType(QTouchEvent*,QTouchEvent::DeviceType)\0"
    "theWrappedObject,aTouchPointStates\0"
    "setTouchPointStates(QTouchEvent*,Qt::TouchPointStates)\0"
    "theWrappedObject,atouchPoints\0"
    "setTouchPoints(QTouchEvent*,QList<QTouchEvent::TouchPoint>)\0"
    "theWrappedObject,awidget\0"
    "setWidget(QTouchEvent*,QWidget*)\0"
    "Qt::TouchPointStates\0"
    "touchPointStates(QTouchEvent*)\0"
    "const QList<QTouchEvent::TouchPoint>*\0"
    "touchPoints(QTouchEvent*)\0QWidget*\0"
    "widget(QTouchEvent*)\0DeviceType\0"
    "TouchScreen\0TouchPad\0"
};

void PythonQtWrapper_QTouchEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTouchEvent *_t = static_cast<PythonQtWrapper_QTouchEvent *>(_o);
        switch (_id) {
        case 0: { QTouchEvent* _r = _t->new_QTouchEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< QTouchEvent::DeviceType(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3])),(*reinterpret_cast< Qt::TouchPointStates(*)>(_a[4])),(*reinterpret_cast< const QList<QTouchEvent::TouchPoint>(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QTouchEvent**>(_a[0]) = _r; }  break;
        case 1: { QTouchEvent* _r = _t->new_QTouchEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< QTouchEvent::DeviceType(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3])),(*reinterpret_cast< Qt::TouchPointStates(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QTouchEvent**>(_a[0]) = _r; }  break;
        case 2: { QTouchEvent* _r = _t->new_QTouchEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< QTouchEvent::DeviceType(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTouchEvent**>(_a[0]) = _r; }  break;
        case 3: { QTouchEvent* _r = _t->new_QTouchEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< QTouchEvent::DeviceType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTouchEvent**>(_a[0]) = _r; }  break;
        case 4: { QTouchEvent* _r = _t->new_QTouchEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTouchEvent**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QTouchEvent((*reinterpret_cast< QTouchEvent*(*)>(_a[1]))); break;
        case 6: { QTouchEvent::DeviceType _r = _t->deviceType((*reinterpret_cast< QTouchEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTouchEvent::DeviceType*>(_a[0]) = _r; }  break;
        case 7: _t->setDeviceType((*reinterpret_cast< QTouchEvent*(*)>(_a[1])),(*reinterpret_cast< QTouchEvent::DeviceType(*)>(_a[2]))); break;
        case 8: _t->setTouchPointStates((*reinterpret_cast< QTouchEvent*(*)>(_a[1])),(*reinterpret_cast< Qt::TouchPointStates(*)>(_a[2]))); break;
        case 9: _t->setTouchPoints((*reinterpret_cast< QTouchEvent*(*)>(_a[1])),(*reinterpret_cast< const QList<QTouchEvent::TouchPoint>(*)>(_a[2]))); break;
        case 10: _t->setWidget((*reinterpret_cast< QTouchEvent*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 11: { Qt::TouchPointStates _r = _t->touchPointStates((*reinterpret_cast< QTouchEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TouchPointStates*>(_a[0]) = _r; }  break;
        case 12: { const QList<QTouchEvent::TouchPoint>* _r = _t->touchPoints((*reinterpret_cast< QTouchEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QList<QTouchEvent::TouchPoint>**>(_a[0]) = _r; }  break;
        case 13: { QWidget* _r = _t->widget((*reinterpret_cast< QTouchEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTouchEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTouchEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTouchEvent,
      qt_meta_data_PythonQtWrapper_QTouchEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTouchEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTouchEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTouchEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTouchEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTouchEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTouchEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTouchEvent__TouchPoint[] = {

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
      72,   66,   41,   40, 0x0a,
     128,  125,   41,   40, 0x0a,
     161,   40,   41,   40, 0x2a,
     195,  191,   40,   40, 0x0a,
     273,  256,  252,   40, 0x0a,
     307,  256,  302,   40, 0x0a,
     351,  256,  343,   40, 0x0a,
     395,  256,  343,   40, 0x0a,
     429,  256,  343,   40, 0x0a,
     468,  256,  343,   40, 0x0a,
     508,  256,  343,   40, 0x0a,
     571,  548,   41,   40, 0x0a,
     637,  256,  343,   40, 0x0a,
     673,  256,  667,   40, 0x0a,
     715,  256,  708,   40, 0x0a,
     746,  256,  343,   40, 0x0a,
     781,  256,  708,   40, 0x0a,
     817,  256,  343,   40, 0x0a,
     853,  256,  708,   40, 0x0a,
     910,  890,   40,   40, 0x0a,
     981,  946,   40,   40, 0x0a,
    1061, 1036,   40,   40, 0x0a,
    1136, 1106,   40,   40, 0x0a,
    1217, 1186,   40,   40, 0x0a,
    1299, 1268,   40,   40, 0x0a,
    1371, 1350,   40,   40, 0x0a,
    1438, 1412,   40,   40, 0x0a,
    1504, 1482,   40,   40, 0x0a,
    1571, 1545,   40,   40, 0x0a,
    1644, 1617,   40,   40, 0x0a,
    1717, 1690,   40,   40, 0x0a,
    1792, 1764,   40,   40, 0x0a,
    1875, 1839,   40,   40, 0x0a,
    1957, 1931,   40,   40, 0x0a,
    2034, 2003,   40,   40, 0x0a,
    2117, 2085,   40,   40, 0x0a,
    2192, 2169,   40,   40, 0x0a,
    2248,  256,  343,   40, 0x0a,
    2293,  256,  343,   40, 0x0a,
    2328,  256,  343,   40, 0x0a,
    2368,  256,  343,   40, 0x0a,
    2429,  256, 2409,   40, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTouchEvent__TouchPoint[] = {
    "PythonQtWrapper_QTouchEvent__TouchPoint\0"
    "\0QTouchEvent::TouchPoint*\0other\0"
    "new_QTouchEvent__TouchPoint(QTouchEvent::TouchPoint)\0"
    "id\0new_QTouchEvent__TouchPoint(int)\0"
    "new_QTouchEvent__TouchPoint()\0obj\0"
    "delete_QTouchEvent__TouchPoint(QTouchEvent::TouchPoint*)\0"
    "int\0theWrappedObject\0id(QTouchEvent::TouchPoint*)\0"
    "bool\0isPrimary(QTouchEvent::TouchPoint*)\0"
    "QPointF\0lastNormalizedPos(QTouchEvent::TouchPoint*)\0"
    "lastPos(QTouchEvent::TouchPoint*)\0"
    "lastScenePos(QTouchEvent::TouchPoint*)\0"
    "lastScreenPos(QTouchEvent::TouchPoint*)\0"
    "normalizedPos(QTouchEvent::TouchPoint*)\0"
    "theWrappedObject,other\0"
    "operator_assign(QTouchEvent::TouchPoint*,QTouchEvent::TouchPoint)\0"
    "pos(QTouchEvent::TouchPoint*)\0qreal\0"
    "pressure(QTouchEvent::TouchPoint*)\0"
    "QRectF\0rect(QTouchEvent::TouchPoint*)\0"
    "scenePos(QTouchEvent::TouchPoint*)\0"
    "sceneRect(QTouchEvent::TouchPoint*)\0"
    "screenPos(QTouchEvent::TouchPoint*)\0"
    "screenRect(QTouchEvent::TouchPoint*)\0"
    "theWrappedObject,id\0"
    "setId(QTouchEvent::TouchPoint*,int)\0"
    "theWrappedObject,lastNormalizedPos\0"
    "setLastNormalizedPos(QTouchEvent::TouchPoint*,QPointF)\0"
    "theWrappedObject,lastPos\0"
    "setLastPos(QTouchEvent::TouchPoint*,QPointF)\0"
    "theWrappedObject,lastScenePos\0"
    "setLastScenePos(QTouchEvent::TouchPoint*,QPointF)\0"
    "theWrappedObject,lastScreenPos\0"
    "setLastScreenPos(QTouchEvent::TouchPoint*,QPointF)\0"
    "theWrappedObject,normalizedPos\0"
    "setNormalizedPos(QTouchEvent::TouchPoint*,QPointF)\0"
    "theWrappedObject,pos\0"
    "setPos(QTouchEvent::TouchPoint*,QPointF)\0"
    "theWrappedObject,pressure\0"
    "setPressure(QTouchEvent::TouchPoint*,qreal)\0"
    "theWrappedObject,rect\0"
    "setRect(QTouchEvent::TouchPoint*,QRectF)\0"
    "theWrappedObject,scenePos\0"
    "setScenePos(QTouchEvent::TouchPoint*,QPointF)\0"
    "theWrappedObject,sceneRect\0"
    "setSceneRect(QTouchEvent::TouchPoint*,QRectF)\0"
    "theWrappedObject,screenPos\0"
    "setScreenPos(QTouchEvent::TouchPoint*,QPointF)\0"
    "theWrappedObject,screenRect\0"
    "setScreenRect(QTouchEvent::TouchPoint*,QRectF)\0"
    "theWrappedObject,startNormalizedPos\0"
    "setStartNormalizedPos(QTouchEvent::TouchPoint*,QPointF)\0"
    "theWrappedObject,startPos\0"
    "setStartPos(QTouchEvent::TouchPoint*,QPointF)\0"
    "theWrappedObject,startScenePos\0"
    "setStartScenePos(QTouchEvent::TouchPoint*,QPointF)\0"
    "theWrappedObject,startScreenPos\0"
    "setStartScreenPos(QTouchEvent::TouchPoint*,QPointF)\0"
    "theWrappedObject,state\0"
    "setState(QTouchEvent::TouchPoint*,Qt::TouchPointStates)\0"
    "startNormalizedPos(QTouchEvent::TouchPoint*)\0"
    "startPos(QTouchEvent::TouchPoint*)\0"
    "startScenePos(QTouchEvent::TouchPoint*)\0"
    "startScreenPos(QTouchEvent::TouchPoint*)\0"
    "Qt::TouchPointState\0state(QTouchEvent::TouchPoint*)\0"
};

void PythonQtWrapper_QTouchEvent__TouchPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTouchEvent__TouchPoint *_t = static_cast<PythonQtWrapper_QTouchEvent__TouchPoint *>(_o);
        switch (_id) {
        case 0: { QTouchEvent::TouchPoint* _r = _t->new_QTouchEvent__TouchPoint((*reinterpret_cast< const QTouchEvent::TouchPoint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTouchEvent::TouchPoint**>(_a[0]) = _r; }  break;
        case 1: { QTouchEvent::TouchPoint* _r = _t->new_QTouchEvent__TouchPoint((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTouchEvent::TouchPoint**>(_a[0]) = _r; }  break;
        case 2: { QTouchEvent::TouchPoint* _r = _t->new_QTouchEvent__TouchPoint();
            if (_a[0]) *reinterpret_cast< QTouchEvent::TouchPoint**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTouchEvent__TouchPoint((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1]))); break;
        case 4: { int _r = _t->id((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isPrimary((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QPointF _r = _t->lastNormalizedPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 7: { QPointF _r = _t->lastPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 8: { QPointF _r = _t->lastScenePos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 9: { QPointF _r = _t->lastScreenPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 10: { QPointF _r = _t->normalizedPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 11: { QTouchEvent::TouchPoint* _r = _t->operator_assign((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< const QTouchEvent::TouchPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTouchEvent::TouchPoint**>(_a[0]) = _r; }  break;
        case 12: { QPointF _r = _t->pos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->pressure((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: { QRectF _r = _t->rect((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 15: { QPointF _r = _t->scenePos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 16: { QRectF _r = _t->sceneRect((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 17: { QPointF _r = _t->screenPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 18: { QRectF _r = _t->screenRect((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 19: _t->setId((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->setLastNormalizedPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 21: _t->setLastPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 22: _t->setLastScenePos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 23: _t->setLastScreenPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 24: _t->setNormalizedPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 25: _t->setPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 26: _t->setPressure((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 27: _t->setRect((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 28: _t->setScenePos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 29: _t->setSceneRect((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 30: _t->setScreenPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 31: _t->setScreenRect((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 32: _t->setStartNormalizedPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 33: _t->setStartPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 34: _t->setStartScenePos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 35: _t->setStartScreenPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 36: _t->setState((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])),(*reinterpret_cast< Qt::TouchPointStates(*)>(_a[2]))); break;
        case 37: { QPointF _r = _t->startNormalizedPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 38: { QPointF _r = _t->startPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 39: { QPointF _r = _t->startScenePos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 40: { QPointF _r = _t->startScreenPos((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 41: { Qt::TouchPointState _r = _t->state((*reinterpret_cast< QTouchEvent::TouchPoint*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TouchPointState*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTouchEvent__TouchPoint::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTouchEvent__TouchPoint::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTouchEvent__TouchPoint,
      qt_meta_data_PythonQtWrapper_QTouchEvent__TouchPoint, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTouchEvent__TouchPoint::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTouchEvent__TouchPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTouchEvent__TouchPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTouchEvent__TouchPoint))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTouchEvent__TouchPoint*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTouchEvent__TouchPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTransform[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      72,   14, // methods
       0,    0, // properties
       1,  374, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      40,   27,   28,   27, 0x0a,
      61,   57,   28,   27, 0x0a,
     121,   85,   28,   27, 0x0a,
     223,  191,   28,   27, 0x2a,
     309,  287,   28,   27, 0x0a,
     367,  361,   28,   27, 0x0a,
     398,  394,   27,   27, 0x0a,
     457,  440,  429,   27, 0x0a,
     484,  440,  478,   27, 0x0a,
     501,  440,  478,   27, 0x0a,
     526,  440,  478,   27, 0x0a,
     542,  440,  478,   27, 0x0a,
     564,  558,  429,   27, 0x0a,
     605,  558,  429,   27, 0x0a,
     678,  650,  429,   27, 0x0a,
     706,  440,  429,   27, 0x2a,
     733,  440,  728,   27, 0x0a,
     755,  440,  728,   27, 0x0a,
     779,  440,  728,   27, 0x0a,
     805,  440,  728,   27, 0x0a,
     829,  440,  728,   27, 0x0a,
     852,  440,  728,   27, 0x0a,
     879,  440,  478,   27, 0x0a,
     896,  440,  478,   27, 0x0a,
     913,  440,  478,   27, 0x0a,
     930,  440,  478,   27, 0x0a,
     947,  440,  478,   27, 0x0a,
     964,  440,  478,   27, 0x0a,
     981,  440,  478,   27, 0x0a,
     998,  440,  478,   27, 0x0a,
    1015,  440,  478,   27, 0x0a,
    1057, 1038, 1032,   27, 0x0a,
    1087, 1038, 1080,   27, 0x0a,
    1143, 1124, 1111,   27, 0x0a,
    1180, 1124, 1173,   27, 0x0a,
    1212, 1124, 1204,   27, 0x0a,
    1265, 1246, 1237,   27, 0x0a,
    1301, 1246, 1291,   27, 0x0a,
    1355, 1336, 1328,   27, 0x0a,
    1410, 1386, 1380,   27, 0x0a,
    1444, 1386, 1437,   27, 0x0a,
    1472, 1336, 1237,   27, 0x0a,
    1504, 1386,  728,   27, 0x0a,
    1554, 1535,  429,   27, 0x0a,
    1608, 1589,  429,   27, 0x0a,
    1635, 1386,   28,   27, 0x0a,
    1689, 1668,   28,   27, 0x0a,
    1717, 1589,  429,   27, 0x0a,
    1744, 1668,   28,   27, 0x0a,
    1772, 1589,  429,   27, 0x0a,
    1799, 1668,   28,   27, 0x0a,
    1827, 1589,  429,   27, 0x0a,
    1854, 1668,   28,   27, 0x0a,
    1882, 1386,   27,   27, 0x0a,
    1916, 1386,  728,   27, 0x0a,
    1947, 1386,   27,   27, 0x0a,
    1997, 1982,  728,   27, 0x0a,
    2071, 2059,  728,   27, 0x0a,
    2125,  440,   27,   27, 0x0a,
    2168, 2144,   28,   27, 0x0a,
    2203, 1246,   28,   27, 0x2a,
    2229, 2144,   28,   27, 0x0a,
    2271, 1246,   28,   27, 0x2a,
    2327, 2304,   28,   27, 0x0a,
    2411, 2358,   27,   27, 0x0a,
    2511, 2488,   28,   27, 0x0a,
    2556, 2542,  728,   27, 0x0a,
    2625,  440, 2610,   27, 0x0a,
    2670, 2647,   28,   27, 0x0a,
    2705,  440,  429,   27, 0x0a,
    2760,  440, 2729,   27, 0x0a,
    2786,   27, 2778,   27, 0x0a,

 // enums: name, flags, count, data
    2811, 0x0,    6,  378,

 // enum data: key, value
    2830, uint(PythonQtWrapper_QTransform::TxNone),
    2837, uint(PythonQtWrapper_QTransform::TxTranslate),
    2849, uint(PythonQtWrapper_QTransform::TxScale),
    2857, uint(PythonQtWrapper_QTransform::TxRotate),
    2866, uint(PythonQtWrapper_QTransform::TxShear),
    2874, uint(PythonQtWrapper_QTransform::TxProject),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTransform[] = {
    "PythonQtWrapper_QTransform\0\0QTransform*\0"
    "new_QTransform()\0mtx\0new_QTransform(QMatrix)\0"
    "h11,h12,h13,h21,h22,h23,h31,h32,h33\0"
    "new_QTransform(qreal,qreal,qreal,qreal,qreal,qreal,qreal,qreal,qreal)\0"
    "h11,h12,h13,h21,h22,h23,h31,h32\0"
    "new_QTransform(qreal,qreal,qreal,qreal,qreal,qreal,qreal,qreal)\0"
    "h11,h12,h21,h22,dx,dy\0"
    "new_QTransform(qreal,qreal,qreal,qreal,qreal,qreal)\0"
    "other\0new_QTransform(QTransform)\0obj\0"
    "delete_QTransform(QTransform*)\0"
    "QTransform\0theWrappedObject\0"
    "adjoint(QTransform*)\0qreal\0det(QTransform*)\0"
    "determinant(QTransform*)\0dx(QTransform*)\0"
    "dy(QTransform*)\0dx,dy\0"
    "static_QTransform_fromScale(qreal,qreal)\0"
    "static_QTransform_fromTranslate(qreal,qreal)\0"
    "theWrappedObject,invertible\0"
    "inverted(QTransform*,bool*)\0"
    "inverted(QTransform*)\0bool\0"
    "isAffine(QTransform*)\0isIdentity(QTransform*)\0"
    "isInvertible(QTransform*)\0"
    "isRotating(QTransform*)\0isScaling(QTransform*)\0"
    "isTranslating(QTransform*)\0m11(QTransform*)\0"
    "m12(QTransform*)\0m13(QTransform*)\0"
    "m21(QTransform*)\0m22(QTransform*)\0"
    "m23(QTransform*)\0m31(QTransform*)\0"
    "m32(QTransform*)\0m33(QTransform*)\0"
    "QLine\0theWrappedObject,l\0"
    "map(QTransform*,QLine)\0QLineF\0"
    "map(QTransform*,QLineF)\0QPainterPath\0"
    "theWrappedObject,p\0map(QTransform*,QPainterPath)\0"
    "QPoint\0map(QTransform*,QPoint)\0QPointF\0"
    "map(QTransform*,QPointF)\0QPolygon\0"
    "theWrappedObject,a\0map(QTransform*,QPolygon)\0"
    "QPolygonF\0map(QTransform*,QPolygonF)\0"
    "QRegion\0theWrappedObject,r\0"
    "map(QTransform*,QRegion)\0QRect\0"
    "theWrappedObject,arg__1\0"
    "mapRect(QTransform*,QRect)\0QRectF\0"
    "mapRect(QTransform*,QRectF)\0"
    "mapToPolygon(QTransform*,QRect)\0"
    "__ne__(QTransform*,QTransform)\0"
    "theWrappedObject,o\0"
    "multiplied(QTransform*,QTransform)\0"
    "theWrappedObject,n\0__mul__(QTransform*,qreal)\0"
    "__imul__(QTransform*,QTransform)\0"
    "theWrappedObject,div\0__imul__(QTransform*,qreal)\0"
    "__add__(QTransform*,qreal)\0"
    "__iadd__(QTransform*,qreal)\0"
    "__sub__(QTransform*,qreal)\0"
    "__isub__(QTransform*,qreal)\0"
    "__div__(QTransform*,qreal)\0"
    "__idiv__(QTransform*,qreal)\0"
    "writeTo(QTransform*,QDataStream&)\0"
    "__eq__(QTransform*,QTransform)\0"
    "readFrom(QTransform*,QDataStream&)\0"
    "one,two,result\0"
    "static_QTransform_quadToQuad(QPolygonF,QPolygonF,QTransform&)\0"
    "quad,result\0"
    "static_QTransform_quadToSquare(QPolygonF,QTransform&)\0"
    "reset(QTransform*)\0theWrappedObject,a,axis\0"
    "rotate(QTransform*,qreal,Qt::Axis)\0"
    "rotate(QTransform*,qreal)\0"
    "rotateRadians(QTransform*,qreal,Qt::Axis)\0"
    "rotateRadians(QTransform*,qreal)\0"
    "theWrappedObject,sx,sy\0"
    "scale(QTransform*,qreal,qreal)\0"
    "theWrappedObject,m11,m12,m13,m21,m22,m23,m31,m32,m33\0"
    "setMatrix(QTransform*,qreal,qreal,qreal,qreal,qreal,qreal,qreal,qreal,"
    "qreal)\0"
    "theWrappedObject,sh,sv\0"
    "shear(QTransform*,qreal,qreal)\0"
    "square,result\0"
    "static_QTransform_squareToQuad(QPolygonF,QTransform&)\0"
    "const QMatrix*\0toAffine(QTransform*)\0"
    "theWrappedObject,dx,dy\0"
    "translate(QTransform*,qreal,qreal)\0"
    "transposed(QTransform*)\0"
    "QTransform::TransformationType\0"
    "type(QTransform*)\0QString\0"
    "py_toString(QTransform*)\0TransformationType\0"
    "TxNone\0TxTranslate\0TxScale\0TxRotate\0"
    "TxShear\0TxProject\0"
};

void PythonQtWrapper_QTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTransform *_t = static_cast<PythonQtWrapper_QTransform *>(_o);
        switch (_id) {
        case 0: { QTransform* _r = _t->new_QTransform();
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 1: { QTransform* _r = _t->new_QTransform((*reinterpret_cast< const QMatrix(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 2: { QTransform* _r = _t->new_QTransform((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])),(*reinterpret_cast< qreal(*)>(_a[7])),(*reinterpret_cast< qreal(*)>(_a[8])),(*reinterpret_cast< qreal(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 3: { QTransform* _r = _t->new_QTransform((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])),(*reinterpret_cast< qreal(*)>(_a[7])),(*reinterpret_cast< qreal(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 4: { QTransform* _r = _t->new_QTransform((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 5: { QTransform* _r = _t->new_QTransform((*reinterpret_cast< const QTransform(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QTransform((*reinterpret_cast< QTransform*(*)>(_a[1]))); break;
        case 7: { QTransform _r = _t->adjoint((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 8: { qreal _r = _t->det((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 9: { qreal _r = _t->determinant((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 10: { qreal _r = _t->dx((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 11: { qreal _r = _t->dy((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 12: { QTransform _r = _t->static_QTransform_fromScale((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 13: { QTransform _r = _t->static_QTransform_fromTranslate((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 14: { QTransform _r = _t->inverted((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 15: { QTransform _r = _t->inverted((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isAffine((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isIdentity((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->isInvertible((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->isRotating((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->isScaling((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isTranslating((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { qreal _r = _t->m11((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 23: { qreal _r = _t->m12((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 24: { qreal _r = _t->m13((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 25: { qreal _r = _t->m21((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 26: { qreal _r = _t->m22((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 27: { qreal _r = _t->m23((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 28: { qreal _r = _t->m31((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 29: { qreal _r = _t->m32((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 30: { qreal _r = _t->m33((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 31: { QLine _r = _t->map((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< const QLine(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLine*>(_a[0]) = _r; }  break;
        case 32: { QLineF _r = _t->map((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< const QLineF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLineF*>(_a[0]) = _r; }  break;
        case 33: { QPainterPath _r = _t->map((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< const QPainterPath(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 34: { QPoint _r = _t->map((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 35: { QPointF _r = _t->map((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 36: { QPolygon _r = _t->map((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< const QPolygon(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygon*>(_a[0]) = _r; }  break;
        case 37: { QPolygonF _r = _t->map((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< const QPolygonF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 38: { QRegion _r = _t->map((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< const QRegion(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 39: { QRect _r = _t->mapRect((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 40: { QRectF _r = _t->mapRect((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 41: { QPolygon _r = _t->mapToPolygon((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygon*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->__ne__((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { QTransform _r = _t->multiplied((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 44: { QTransform _r = _t->__mul__((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 45: { QTransform* _r = _t->__imul__((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 46: { QTransform* _r = _t->__imul__((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 47: { QTransform _r = _t->__add__((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 48: { QTransform* _r = _t->__iadd__((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 49: { QTransform _r = _t->__sub__((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 50: { QTransform* _r = _t->__isub__((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 51: { QTransform _r = _t->__div__((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 52: { QTransform* _r = _t->__idiv__((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 53: _t->writeTo((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 54: { bool _r = _t->__eq__((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 55: _t->readFrom((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 56: { bool _r = _t->static_QTransform_quadToQuad((*reinterpret_cast< const QPolygonF(*)>(_a[1])),(*reinterpret_cast< const QPolygonF(*)>(_a[2])),(*reinterpret_cast< QTransform(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 57: { bool _r = _t->static_QTransform_quadToSquare((*reinterpret_cast< const QPolygonF(*)>(_a[1])),(*reinterpret_cast< QTransform(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 58: _t->reset((*reinterpret_cast< QTransform*(*)>(_a[1]))); break;
        case 59: { QTransform* _r = _t->rotate((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< Qt::Axis(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 60: { QTransform* _r = _t->rotate((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 61: { QTransform* _r = _t->rotateRadians((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< Qt::Axis(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 62: { QTransform* _r = _t->rotateRadians((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 63: { QTransform* _r = _t->scale((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 64: _t->setMatrix((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])),(*reinterpret_cast< qreal(*)>(_a[7])),(*reinterpret_cast< qreal(*)>(_a[8])),(*reinterpret_cast< qreal(*)>(_a[9])),(*reinterpret_cast< qreal(*)>(_a[10]))); break;
        case 65: { QTransform* _r = _t->shear((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 66: { bool _r = _t->static_QTransform_squareToQuad((*reinterpret_cast< const QPolygonF(*)>(_a[1])),(*reinterpret_cast< QTransform(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 67: { const QMatrix* _r = _t->toAffine((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QMatrix**>(_a[0]) = _r; }  break;
        case 68: { QTransform* _r = _t->translate((*reinterpret_cast< QTransform*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTransform**>(_a[0]) = _r; }  break;
        case 69: { QTransform _r = _t->transposed((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 70: { QTransform::TransformationType _r = _t->type((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTransform::TransformationType*>(_a[0]) = _r; }  break;
        case 71: { QString _r = _t->py_toString((*reinterpret_cast< QTransform*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTransform::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTransform::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTransform,
      qt_meta_data_PythonQtWrapper_QTransform, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTransform::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTransform))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTransform*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 72)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 72;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTreeView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      83,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   38,   27,   26, 0x0a,
      69,   26,   27,   26, 0x2a,
      89,   85,   26,   26, 0x0a,
     140,  123,  118,   26, 0x0a,
     176,  123,  172,   26, 0x0a,
     223,  204,  172,   26, 0x0a,
     272,  248,  172,   26, 0x0a,
     311,  248,  172,   26, 0x0a,
     373,  339,   26,   26, 0x0a,
     461,  424,   26,   26, 0x0a,
     509,  123,   26,   26, 0x0a,
     558,  535,   26,   26, 0x0a,
     636,  600,   26,   26, 0x0a,
     728,  689,   26,   26, 0x0a,
     823,  791,   26,   26, 0x0a,
     862,  123,  118,   26, 0x0a,
     908,  123,  895,   26, 0x0a,
     927,  123,  172,   26, 0x0a,
     980,  956,   26,   26, 0x0a,
    1022,  123,  172,   26, 0x0a,
    1081, 1058, 1046,   26, 0x0a,
    1135, 1116, 1046,   26, 0x0a,
    1162, 1058, 1046,   26, 0x0a,
    1197, 1058,  172,   26, 0x0a,
    1238,  123,  118,   26, 0x0a,
    1261,  248,  118,   26, 0x0a,
    1292, 1058,  118,   26, 0x0a,
    1355, 1327,  118,   26, 0x0a,
    1404,  123,  118,   26, 0x0a,
    1431, 1058,  118,   26, 0x0a,
    1469, 1327,  118,   26, 0x0a,
    1509,  123,  118,   26, 0x0a,
    1538,  123,  118,   26, 0x0a,
    1566,  535,   26,   26, 0x0a,
    1627, 1603,   26,   26, 0x0a,
    1662,  535,   26,   26, 0x0a,
    1709,  535,   26,   26, 0x0a,
    1749,  535,   26,   26, 0x0a,
    1790,  535,   26,   26, 0x0a,
    1873, 1833, 1046,   26, 0x0a,
    1922,  535,   26,   26, 0x0a,
    1958,  123,   26,   26, 0x0a,
    1976,  123,  118,   26, 0x0a,
    2004, 1058,  172,   26, 0x0a,
    2072, 2038,   26,   26, 0x0a,
    2125, 2038,   26,   26, 0x0a,
    2193, 2170,   26,   26, 0x0a,
    2258, 2230,   26,   26, 0x0a,
    2321, 1058,   26,   26, 0x2a,
    2354,  123,   26,   26, 0x0a,
    2395,  123, 2376,   26, 0x0a,
    2460, 2423,   26,   26, 0x0a,
    2543, 2519,   26,   26, 0x0a,
    2583, 2519,   26,   26, 0x0a,
    2635, 2612,   26,   26, 0x0a,
    2699, 2670,   26,   26, 0x0a,
    2766, 2736,   26,   26, 0x0a,
    2831, 2801,   26,   26, 0x0a,
    2872, 2519,   26,   26, 0x0a,
    2946, 2913,   26,   26, 0x0a,
    3025, 3001,   26,   26, 0x0a,
    3082, 3060,   26,   26, 0x0a,
    3134, 3115,   26,   26, 0x0a,
    3165, 2519,   26,   26, 0x0a,
    3224, 3201,   26,   26, 0x0a,
    3265, 1058,   26,   26, 0x0a,
    3324, 3302,   26,   26, 0x0a,
    3393, 3360,   26,   26, 0x0a,
    3469, 3439,   26,   26, 0x0a,
    3568, 3536,   26,   26, 0x0a,
    3619, 2519,   26,   26, 0x0a,
    3679, 3654,   26,   26, 0x0a,
    3737, 3717,   26,   26, 0x0a,
    3766,  248,  172,   26, 0x0a,
    3830, 3800,   26,   26, 0x0a,
    3873,  535,   26,   26, 0x0a,
    3909,  123,  118,   26, 0x0a,
    3939,  123,   26,   26, 0x0a,
    3968,  123,  172,   26, 0x0a,
    3995,  535,  118,   26, 0x0a,
    4035, 1058, 4029,   26, 0x0a,
    4105, 4078, 4070,   26, 0x0a,
    4157,  123,  118,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTreeView[] = {
    "PythonQtWrapper_QTreeView\0\0QTreeView*\0"
    "parent\0new_QTreeView(QWidget*)\0"
    "new_QTreeView()\0obj\0delete_QTreeView(QTreeView*)\0"
    "bool\0theWrappedObject\0"
    "allColumnsShowFocus(QTreeView*)\0int\0"
    "autoExpandDelay(QTreeView*)\0"
    "theWrappedObject,x\0columnAt(QTreeView*,int)\0"
    "theWrappedObject,column\0"
    "columnViewportPosition(QTreeView*,int)\0"
    "columnWidth(QTreeView*,int)\0"
    "theWrappedObject,current,previous\0"
    "currentChanged(QTreeView*,QModelIndex,QModelIndex)\0"
    "theWrappedObject,topLeft,bottomRight\0"
    "dataChanged(QTreeView*,QModelIndex,QModelIndex)\0"
    "doItemsLayout(QTreeView*)\0"
    "theWrappedObject,event\0"
    "dragMoveEvent(QTreeView*,QDragMoveEvent*)\0"
    "theWrappedObject,painter,rect,index\0"
    "drawBranches(QTreeView*,QPainter*,QRect,QModelIndex)\0"
    "theWrappedObject,painter,options,index\0"
    "drawRow(QTreeView*,QPainter*,QStyleOptionViewItem,QModelIndex)\0"
    "theWrappedObject,painter,region\0"
    "drawTree(QTreeView*,QPainter*,QRegion)\0"
    "expandsOnDoubleClick(QTreeView*)\0"
    "QHeaderView*\0header(QTreeView*)\0"
    "horizontalOffset(QTreeView*)\0"
    "theWrappedObject,action\0"
    "horizontalScrollbarAction(QTreeView*,int)\0"
    "indentation(QTreeView*)\0QModelIndex\0"
    "theWrappedObject,index\0"
    "indexAbove(QTreeView*,QModelIndex)\0"
    "theWrappedObject,p\0indexAt(QTreeView*,QPoint)\0"
    "indexBelow(QTreeView*,QModelIndex)\0"
    "indexRowSizeHint(QTreeView*,QModelIndex)\0"
    "isAnimated(QTreeView*)\0"
    "isColumnHidden(QTreeView*,int)\0"
    "isExpanded(QTreeView*,QModelIndex)\0"
    "theWrappedObject,row,parent\0"
    "isFirstColumnSpanned(QTreeView*,int,QModelIndex)\0"
    "isHeaderHidden(QTreeView*)\0"
    "isIndexHidden(QTreeView*,QModelIndex)\0"
    "isRowHidden(QTreeView*,int,QModelIndex)\0"
    "isSortingEnabled(QTreeView*)\0"
    "itemsExpandable(QTreeView*)\0"
    "keyPressEvent(QTreeView*,QKeyEvent*)\0"
    "theWrappedObject,search\0"
    "keyboardSearch(QTreeView*,QString)\0"
    "mouseDoubleClickEvent(QTreeView*,QMouseEvent*)\0"
    "mouseMoveEvent(QTreeView*,QMouseEvent*)\0"
    "mousePressEvent(QTreeView*,QMouseEvent*)\0"
    "mouseReleaseEvent(QTreeView*,QMouseEvent*)\0"
    "theWrappedObject,cursorAction,modifiers\0"
    "moveCursor(QTreeView*,int,Qt::KeyboardModifiers)\0"
    "paintEvent(QTreeView*,QPaintEvent*)\0"
    "reset(QTreeView*)\0rootIsDecorated(QTreeView*)\0"
    "rowHeight(QTreeView*,QModelIndex)\0"
    "theWrappedObject,parent,start,end\0"
    "rowsAboutToBeRemoved(QTreeView*,QModelIndex,int,int)\0"
    "rowsInserted(QTreeView*,QModelIndex,int,int)\0"
    "theWrappedObject,dx,dy\0"
    "scrollContentsBy(QTreeView*,int,int)\0"
    "theWrappedObject,index,hint\0"
    "scrollTo(QTreeView*,QModelIndex,QAbstractItemView::ScrollHint)\0"
    "scrollTo(QTreeView*,QModelIndex)\0"
    "selectAll(QTreeView*)\0QList<QModelIndex>\0"
    "selectedIndexes(QTreeView*)\0"
    "theWrappedObject,selected,deselected\0"
    "selectionChanged(QTreeView*,QItemSelection,QItemSelection)\0"
    "theWrappedObject,enable\0"
    "setAllColumnsShowFocus(QTreeView*,bool)\0"
    "setAnimated(QTreeView*,bool)\0"
    "theWrappedObject,delay\0"
    "setAutoExpandDelay(QTreeView*,int)\0"
    "theWrappedObject,column,hide\0"
    "setColumnHidden(QTreeView*,int,bool)\0"
    "theWrappedObject,column,width\0"
    "setColumnWidth(QTreeView*,int,int)\0"
    "theWrappedObject,index,expand\0"
    "setExpanded(QTreeView*,QModelIndex,bool)\0"
    "setExpandsOnDoubleClick(QTreeView*,bool)\0"
    "theWrappedObject,row,parent,span\0"
    "setFirstColumnSpanned(QTreeView*,int,QModelIndex,bool)\0"
    "theWrappedObject,header\0"
    "setHeader(QTreeView*,QHeaderView*)\0"
    "theWrappedObject,hide\0"
    "setHeaderHidden(QTreeView*,bool)\0"
    "theWrappedObject,i\0setIndentation(QTreeView*,int)\0"
    "setItemsExpandable(QTreeView*,bool)\0"
    "theWrappedObject,model\0"
    "setModel(QTreeView*,QAbstractItemModel*)\0"
    "setRootIndex(QTreeView*,QModelIndex)\0"
    "theWrappedObject,show\0"
    "setRootIsDecorated(QTreeView*,bool)\0"
    "theWrappedObject,row,parent,hide\0"
    "setRowHidden(QTreeView*,int,QModelIndex,bool)\0"
    "theWrappedObject,rect,command\0"
    "setSelection(QTreeView*,QRect,QItemSelectionModel::SelectionFlags)\0"
    "theWrappedObject,selectionModel\0"
    "setSelectionModel(QTreeView*,QItemSelectionModel*)\0"
    "setSortingEnabled(QTreeView*,bool)\0"
    "theWrappedObject,uniform\0"
    "setUniformRowHeights(QTreeView*,bool)\0"
    "theWrappedObject,on\0setWordWrap(QTreeView*,bool)\0"
    "sizeHintForColumn(QTreeView*,int)\0"
    "theWrappedObject,column,order\0"
    "sortByColumn(QTreeView*,int,Qt::SortOrder)\0"
    "timerEvent(QTreeView*,QTimerEvent*)\0"
    "uniformRowHeights(QTreeView*)\0"
    "updateGeometries(QTreeView*)\0"
    "verticalOffset(QTreeView*)\0"
    "viewportEvent(QTreeView*,QEvent*)\0"
    "QRect\0visualRect(QTreeView*,QModelIndex)\0"
    "QRegion\0theWrappedObject,selection\0"
    "visualRegionForSelection(QTreeView*,QItemSelection)\0"
    "wordWrap(QTreeView*)\0"
};

void PythonQtWrapper_QTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTreeView *_t = static_cast<PythonQtWrapper_QTreeView *>(_o);
        switch (_id) {
        case 0: { QTreeView* _r = _t->new_QTreeView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTreeView**>(_a[0]) = _r; }  break;
        case 1: { QTreeView* _r = _t->new_QTreeView();
            if (_a[0]) *reinterpret_cast< QTreeView**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTreeView((*reinterpret_cast< QTreeView*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->allColumnsShowFocus((*reinterpret_cast< QTreeView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->autoExpandDelay((*reinterpret_cast< QTreeView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->columnAt((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->columnViewportPosition((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->columnWidth((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: _t->currentChanged((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3]))); break;
        case 9: _t->dataChanged((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3]))); break;
        case 10: _t->doItemsLayout((*reinterpret_cast< QTreeView*(*)>(_a[1]))); break;
        case 11: _t->dragMoveEvent((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< QDragMoveEvent*(*)>(_a[2]))); break;
        case 12: _t->drawBranches((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4]))); break;
        case 13: _t->drawRow((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4]))); break;
        case 14: _t->drawTree((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QRegion(*)>(_a[3]))); break;
        case 15: { bool _r = _t->expandsOnDoubleClick((*reinterpret_cast< QTreeView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { QHeaderView* _r = _t->header((*reinterpret_cast< QTreeView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHeaderView**>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->horizontalOffset((*reinterpret_cast< QTreeView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: _t->horizontalScrollbarAction((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: { int _r = _t->indentation((*reinterpret_cast< QTreeView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { QModelIndex _r = _t->indexAbove((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 21: { QModelIndex _r = _t->indexAt((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 22: { QModelIndex _r = _t->indexBelow((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->indexRowSizeHint((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->isAnimated((*reinterpret_cast< QTreeView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->isColumnHidden((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->isExpanded((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->isFirstColumnSpanned((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->isHeaderHidden((*reinterpret_cast< QTreeView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->isIndexHidden((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->isRowHidden((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->isSortingEnabled((*reinterpret_cast< QTreeView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->itemsExpandable((*reinterpret_cast< QTreeView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: _t->keyPressEvent((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 34: _t->keyboardSearch((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 35: _t->mouseDoubleClickEvent((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 36: _t->mouseMoveEvent((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 37: _t->mousePressEvent((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 38: _t->mouseReleaseEvent((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 39: { QModelIndex _r = _t->moveCursor((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 40: _t->paintEvent((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 41: _t->reset((*reinterpret_cast< QTreeView*(*)>(_a[1]))); break;
        case 42: { bool _r = _t->rootIsDecorated((*reinterpret_cast< QTreeView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { int _r = _t->rowHeight((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 44: _t->rowsAboutToBeRemoved((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 45: _t->rowsInserted((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 46: _t->scrollContentsBy((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 47: _t->scrollTo((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< QAbstractItemView::ScrollHint(*)>(_a[3]))); break;
        case 48: _t->scrollTo((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 49: _t->selectAll((*reinterpret_cast< QTreeView*(*)>(_a[1]))); break;
        case 50: { QList<QModelIndex> _r = _t->selectedIndexes((*reinterpret_cast< QTreeView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 51: _t->selectionChanged((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2])),(*reinterpret_cast< const QItemSelection(*)>(_a[3]))); break;
        case 52: _t->setAllColumnsShowFocus((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 53: _t->setAnimated((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 54: _t->setAutoExpandDelay((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 55: _t->setColumnHidden((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 56: _t->setColumnWidth((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 57: _t->setExpanded((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 58: _t->setExpandsOnDoubleClick((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 59: _t->setFirstColumnSpanned((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 60: _t->setHeader((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< QHeaderView*(*)>(_a[2]))); break;
        case 61: _t->setHeaderHidden((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 62: _t->setIndentation((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 63: _t->setItemsExpandable((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 64: _t->setModel((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemModel*(*)>(_a[2]))); break;
        case 65: _t->setRootIndex((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 66: _t->setRootIsDecorated((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 67: _t->setRowHidden((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 68: _t->setSelection((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[3]))); break;
        case 69: _t->setSelectionModel((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel*(*)>(_a[2]))); break;
        case 70: _t->setSortingEnabled((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 71: _t->setUniformRowHeights((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 72: _t->setWordWrap((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 73: { int _r = _t->sizeHintForColumn((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 74: _t->sortByColumn((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 75: _t->timerEvent((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< QTimerEvent*(*)>(_a[2]))); break;
        case 76: { bool _r = _t->uniformRowHeights((*reinterpret_cast< QTreeView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 77: _t->updateGeometries((*reinterpret_cast< QTreeView*(*)>(_a[1]))); break;
        case 78: { int _r = _t->verticalOffset((*reinterpret_cast< QTreeView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 79: { bool _r = _t->viewportEvent((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 80: { QRect _r = _t->visualRect((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 81: { QRegion _r = _t->visualRegionForSelection((*reinterpret_cast< QTreeView*(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 82: { bool _r = _t->wordWrap((*reinterpret_cast< QTreeView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTreeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTreeView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTreeView,
      qt_meta_data_PythonQtWrapper_QTreeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTreeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTreeView))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTreeView*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 83)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 83;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTreeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      53,   14, // methods
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
     250,  227,   28,   28, 0x0a,
     363,  334,   28,   28, 0x0a,
     420,  130,   28,   28, 0x2a,
     494,  477,  473,   28, 0x0a,
     520,  477,  473,   28, 0x0a,
     565,  477,  548,   28, 0x0a,
     614,  591,   28,   28, 0x0a,
     697,  655,  650,   28, 0x0a,
     777,  334,   28,   28, 0x0a,
     821,  130,   28,   28, 0x2a,
     880,  861,  650,   28, 0x0a,
     967,  932,  908,   28, 0x0a,
    1046, 1018,  908,   28, 0x2a,
    1093,  477,  548,   28, 0x0a,
    1130,  334, 1118,   28, 0x0a,
    1179,  130, 1118,   28, 0x2a,
    1224,  130,  473,   28, 0x0a,
    1303, 1275,   28,   28, 0x0a,
    1414, 1385,   28,   28, 0x0a,
    1505,  477,  548,   28, 0x0a,
    1537,  130,  650,   28, 0x0a,
    1599,  130,  548,   28, 0x0a,
    1665, 1646,  548,   28, 0x0a,
    1714, 1693,  548,   28, 0x0a,
    1743,  130,  548,   28, 0x0a,
    1813, 1790,  548,   28, 0x0a,
    1862,  334, 1853,   28, 0x0a,
    1920,  477, 1908,   28, 0x0a,
    1944,  334,   28,   28, 0x0a,
    2000,  130,   28,   28, 0x2a,
    2052,  334,   28,   28, 0x0a,
    2104,  477,  908,   28, 0x0a,
    2157, 2132,   28,   28, 0x0a,
    2190,  130,   28,   28, 0x0a,
    2236,  334,   28,   28, 0x0a,
    2323, 2286,   28,   28, 0x0a,
    2436, 2409,   28,   28, 0x0a,
    2504,  130,   28,   28, 0x0a,
    2600, 2577,   28,   28, 0x0a,
    2661, 2637,   28,   28, 0x0a,
    2739, 2703,   28,   28, 0x0a,
    2829, 2797,   28,   28, 0x0a,
    2882,  477,  473,   28, 0x0a,
    2937, 2907,   28,   28, 0x0a,
    2995,  477, 2979,   28, 0x0a,
    3078, 1790, 3030,   28, 0x0a,
    3113, 1790,  548,   28, 0x0a,
    3144,  477,  473,   28, 0x0a,
    3182,  130, 3176,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTreeWidget[] = {
    "PythonQtWrapper_QTreeWidget\0\0QTreeWidget*\0"
    "parent\0new_QTreeWidget(QWidget*)\0"
    "new_QTreeWidget()\0obj\0"
    "delete_QTreeWidget(QTreeWidget*)\0"
    "theWrappedObject,item\0"
    "addTopLevelItem(QTreeWidget*,PythonQtPassOwnershipToCPP<QTreeWidgetIte"
    "m*>)\0"
    "theWrappedObject,items\0"
    "addTopLevelItems(QTreeWidget*,PythonQtPassOwnershipToCPP<QList<QTreeWi"
    "dgetItem*> >)\0"
    "theWrappedObject,item,column\0"
    "closePersistentEditor(QTreeWidget*,QTreeWidgetItem*,int)\0"
    "closePersistentEditor(QTreeWidget*,QTreeWidgetItem*)\0"
    "int\0theWrappedObject\0columnCount(QTreeWidget*)\0"
    "currentColumn(QTreeWidget*)\0"
    "QTreeWidgetItem*\0currentItem(QTreeWidget*)\0"
    "theWrappedObject,event\0"
    "dropEvent(QTreeWidget*,QDropEvent*)\0"
    "bool\0theWrappedObject,parent,index,data,action\0"
    "dropMimeData(QTreeWidget*,QTreeWidgetItem*,int,const QMimeData*,Qt::Dr"
    "opAction)\0"
    "editItem(QTreeWidget*,QTreeWidgetItem*,int)\0"
    "editItem(QTreeWidget*,QTreeWidgetItem*)\0"
    "theWrappedObject,e\0event(QTreeWidget*,QEvent*)\0"
    "QList<QTreeWidgetItem*>\0"
    "theWrappedObject,text,flags,column\0"
    "findItems(QTreeWidget*,QString,Qt::MatchFlags,int)\0"
    "theWrappedObject,text,flags\0"
    "findItems(QTreeWidget*,QString,Qt::MatchFlags)\0"
    "headerItem(QTreeWidget*)\0QModelIndex\0"
    "indexFromItem(QTreeWidget*,QTreeWidgetItem*,int)\0"
    "indexFromItem(QTreeWidget*,QTreeWidgetItem*)\0"
    "indexOfTopLevelItem(QTreeWidget*,QTreeWidgetItem*)\0"
    "theWrappedObject,index,item\0"
    "insertTopLevelItem(QTreeWidget*,int,PythonQtPassOwnershipToCPP<QTreeWi"
    "dgetItem*>)\0"
    "theWrappedObject,index,items\0"
    "insertTopLevelItems(QTreeWidget*,int,PythonQtPassOwnershipToCPP<QList<"
    "QTreeWidgetItem*> >)\0"
    "invisibleRootItem(QTreeWidget*)\0"
    "isFirstItemColumnSpanned(QTreeWidget*,const QTreeWidgetItem*)\0"
    "itemAbove(QTreeWidget*,const QTreeWidgetItem*)\0"
    "theWrappedObject,p\0itemAt(QTreeWidget*,QPoint)\0"
    "theWrappedObject,x,y\0itemAt(QTreeWidget*,int,int)\0"
    "itemBelow(QTreeWidget*,const QTreeWidgetItem*)\0"
    "theWrappedObject,index\0"
    "itemFromIndex(QTreeWidget*,QModelIndex)\0"
    "QWidget*\0itemWidget(QTreeWidget*,QTreeWidgetItem*,int)\0"
    "QStringList\0mimeTypes(QTreeWidget*)\0"
    "openPersistentEditor(QTreeWidget*,QTreeWidgetItem*,int)\0"
    "openPersistentEditor(QTreeWidget*,QTreeWidgetItem*)\0"
    "removeItemWidget(QTreeWidget*,QTreeWidgetItem*,int)\0"
    "selectedItems(QTreeWidget*)\0"
    "theWrappedObject,columns\0"
    "setColumnCount(QTreeWidget*,int)\0"
    "setCurrentItem(QTreeWidget*,QTreeWidgetItem*)\0"
    "setCurrentItem(QTreeWidget*,QTreeWidgetItem*,int)\0"
    "theWrappedObject,item,column,command\0"
    "setCurrentItem(QTreeWidget*,QTreeWidgetItem*,int,QItemSelectionModel::"
    "SelectionFlags)\0"
    "theWrappedObject,item,span\0"
    "setFirstItemColumnSpanned(QTreeWidget*,const QTreeWidgetItem*,bool)\0"
    "setHeaderItem(QTreeWidget*,PythonQtPassOwnershipToCPP<QTreeWidgetItem*"
    ">)\0"
    "theWrappedObject,label\0"
    "setHeaderLabel(QTreeWidget*,QString)\0"
    "theWrappedObject,labels\0"
    "setHeaderLabels(QTreeWidget*,QStringList)\0"
    "theWrappedObject,item,column,widget\0"
    "setItemWidget(QTreeWidget*,QTreeWidgetItem*,int,QWidget*)\0"
    "theWrappedObject,selectionModel\0"
    "setSelectionModel(QTreeWidget*,QItemSelectionModel*)\0"
    "sortColumn(QTreeWidget*)\0"
    "theWrappedObject,column,order\0"
    "sortItems(QTreeWidget*,int,Qt::SortOrder)\0"
    "Qt::DropActions\0supportedDropActions(QTreeWidget*)\0"
    "PythonQtPassOwnershipToPython<QTreeWidgetItem*>\0"
    "takeTopLevelItem(QTreeWidget*,int)\0"
    "topLevelItem(QTreeWidget*,int)\0"
    "topLevelItemCount(QTreeWidget*)\0QRect\0"
    "visualItemRect(QTreeWidget*,const QTreeWidgetItem*)\0"
};

void PythonQtWrapper_QTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTreeWidget *_t = static_cast<PythonQtWrapper_QTreeWidget *>(_o);
        switch (_id) {
        case 0: { QTreeWidget* _r = _t->new_QTreeWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTreeWidget**>(_a[0]) = _r; }  break;
        case 1: { QTreeWidget* _r = _t->new_QTreeWidget();
            if (_a[0]) *reinterpret_cast< QTreeWidget**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTreeWidget((*reinterpret_cast< QTreeWidget*(*)>(_a[1]))); break;
        case 3: _t->addTopLevelItem((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QTreeWidgetItem*>(*)>(_a[2]))); break;
        case 4: _t->addTopLevelItems((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem*> >(*)>(_a[2]))); break;
        case 5: _t->closePersistentEditor((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->closePersistentEditor((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 7: { int _r = _t->columnCount((*reinterpret_cast< QTreeWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->currentColumn((*reinterpret_cast< QTreeWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QTreeWidgetItem* _r = _t->currentItem((*reinterpret_cast< QTreeWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 10: _t->dropEvent((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2]))); break;
        case 11: { bool _r = _t->dropMimeData((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QMimeData*(*)>(_a[4])),(*reinterpret_cast< Qt::DropAction(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->editItem((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->editItem((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 14: { bool _r = _t->event((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QList<QTreeWidgetItem*> _r = _t->findItems((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::MatchFlags(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QList<QTreeWidgetItem*>*>(_a[0]) = _r; }  break;
        case 16: { QList<QTreeWidgetItem*> _r = _t->findItems((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::MatchFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QTreeWidgetItem*>*>(_a[0]) = _r; }  break;
        case 17: { QTreeWidgetItem* _r = _t->headerItem((*reinterpret_cast< QTreeWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 18: { QModelIndex _r = _t->indexFromItem((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 19: { QModelIndex _r = _t->indexFromItem((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->indexOfTopLevelItem((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: _t->insertTopLevelItem((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QTreeWidgetItem*>(*)>(_a[3]))); break;
        case 22: _t->insertTopLevelItems((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem*> >(*)>(_a[3]))); break;
        case 23: { QTreeWidgetItem* _r = _t->invisibleRootItem((*reinterpret_cast< QTreeWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->isFirstItemColumnSpanned((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< const QTreeWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { QTreeWidgetItem* _r = _t->itemAbove((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< const QTreeWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 26: { QTreeWidgetItem* _r = _t->itemAt((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 27: { QTreeWidgetItem* _r = _t->itemAt((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 28: { QTreeWidgetItem* _r = _t->itemBelow((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< const QTreeWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 29: { QTreeWidgetItem* _r = _t->itemFromIndex((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 30: { QWidget* _r = _t->itemWidget((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 31: { QStringList _r = _t->mimeTypes((*reinterpret_cast< QTreeWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 32: _t->openPersistentEditor((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 33: _t->openPersistentEditor((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 34: _t->removeItemWidget((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 35: { QList<QTreeWidgetItem*> _r = _t->selectedItems((*reinterpret_cast< QTreeWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QTreeWidgetItem*>*>(_a[0]) = _r; }  break;
        case 36: _t->setColumnCount((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 37: _t->setCurrentItem((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 38: _t->setCurrentItem((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 39: _t->setCurrentItem((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[4]))); break;
        case 40: _t->setFirstItemColumnSpanned((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< const QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 41: _t->setHeaderItem((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QTreeWidgetItem*>(*)>(_a[2]))); break;
        case 42: _t->setHeaderLabel((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 43: _t->setHeaderLabels((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 44: _t->setItemWidget((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4]))); break;
        case 45: _t->setSelectionModel((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel*(*)>(_a[2]))); break;
        case 46: { int _r = _t->sortColumn((*reinterpret_cast< QTreeWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 47: _t->sortItems((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 48: { Qt::DropActions _r = _t->supportedDropActions((*reinterpret_cast< QTreeWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::DropActions*>(_a[0]) = _r; }  break;
        case 49: { PythonQtPassOwnershipToPython<QTreeWidgetItem*> _r = _t->takeTopLevelItem((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< PythonQtPassOwnershipToPython<QTreeWidgetItem*>*>(_a[0]) = _r; }  break;
        case 50: { QTreeWidgetItem* _r = _t->topLevelItem((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 51: { int _r = _t->topLevelItemCount((*reinterpret_cast< QTreeWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 52: { QRect _r = _t->visualItemRect((*reinterpret_cast< QTreeWidget*(*)>(_a[1])),(*reinterpret_cast< const QTreeWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTreeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTreeWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTreeWidget,
      qt_meta_data_PythonQtWrapper_QTreeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTreeWidget))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTreeWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 53)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 53;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QTreeWidgetItem[] = {

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
      66,   50,   33,   32, 0x0a,
     156,  145,   33,   32, 0x2a,
     249,  231,   33,   32, 0x0a,
     336,  323,   33,   32, 0x2a,
     416,  406,   33,   32, 0x0a,
     483,  478,   33,   32, 0x2a,
     559,  541,   33,   32, 0x0a,
     655,  642,   33,   32, 0x2a,
     754,  734,   33,   32, 0x0a,
     847,  832,   33,   32, 0x2a,
     933,  921,   33,   32, 0x0a,
    1006,  999,   33,   32, 0x2a,
    1081, 1068,   33,   32, 0x0a,
    1126, 1118,   33,   32, 0x2a,
    1164, 1159,   33,   32, 0x0a,
    1189,   32,   33,   32, 0x2a,
    1215, 1211,   32,   32, 0x0a,
    1279, 1256,   32,   32, 0x0a,
    1377, 1351,   32,   32, 0x0a,
    1491, 1467, 1460,   32, 0x0a,
    1539, 1467, 1524,   32, 0x0a,
    1595, 1572,   33,   32, 0x0a,
    1644, 1627, 1623,   32, 0x0a,
    1711, 1627, 1673,   32, 0x0a,
    1750, 1627,   33,   32, 0x0a,
    1774, 1627, 1623,   32, 0x0a,
    1842, 1813, 1804,   32, 0x0a,
    1873, 1627,   32,   32, 0x0a,
    1921, 1627, 1907,   32, 0x0a,
    1951, 1467, 1945,   32, 0x0a,
    1978, 1467, 1460,   32, 0x0a,
    2017, 1467, 2011,   32, 0x0a,
    2044, 1256, 1623,   32, 0x0a,
    2121, 2092,   32,   32, 0x0a,
    2232, 2200,   32,   32, 0x0a,
    2327, 1627, 2322,   32, 0x0a,
    2356, 1627, 2322,   32, 0x0a,
    2385, 1627, 2322,   32, 0x0a,
    2424, 1627, 2322,   32, 0x0a,
    2451, 1627, 2322,   32, 0x0a,
    2501, 2480,   32,   32, 0x0a,
    2560, 2540,   32,   32, 0x0a,
    2600, 1627,   33,   32, 0x0a,
    2625, 1256,   32,   32, 0x0a,
    2733, 2703,   32,   32, 0x0a,
    2806, 2776,   32,   32, 0x0a,
    2881, 2857,   32,   32, 0x0a,
    2996, 2961,   32,   32, 0x0a,
    3065, 3039,   32,   32, 0x0a,
    3124, 3100,   32,   32, 0x0a,
    3181, 3159,   32,   32, 0x0a,
    3249, 3226,   32,   32, 0x0a,
    3319, 3290,   32,   32, 0x0a,
    3355, 2703,   32,   32, 0x0a,
    3420, 3398,   32,   32, 0x0a,
    3482, 3453,   32,   32, 0x0a,
    3542, 3518,   32,   32, 0x0a,
    3606, 3577,   32,   32, 0x0a,
    3680, 3646,   32,   32, 0x0a,
    3752, 3723,   32,   32, 0x0a,
    3824, 3790,   32,   32, 0x0a,
    3899, 3867,   32,   32, 0x0a,
    3974, 3940,   32,   32, 0x0a,
    4023, 1467, 4017,   32, 0x0a,
    4084, 4054,   32,   32, 0x0a,
    4141, 1467, 4133,   32, 0x0a,
    4221, 1572, 4173,   32, 0x0a,
    4306, 1627, 4253,   32, 0x0a,
    4337, 1467, 4133,   32, 0x0a,
    4364, 1467, 1623,   32, 0x0a,
    4400, 1467, 4133,   32, 0x0a,
    4443, 1627, 4430,   32, 0x0a,
    4472, 1627, 1623,   32, 0x0a,
    4495, 1467, 4133,   32, 0x0a,

 // enums: name, flags, count, data
    4527, 0x0,    3,  392,
    4548, 0x0,    2,  398,

 // enum data: key, value
    4557, uint(PythonQtWrapper_QTreeWidgetItem::ShowIndicator),
    4571, uint(PythonQtWrapper_QTreeWidgetItem::DontShowIndicator),
    4589, uint(PythonQtWrapper_QTreeWidgetItem::DontShowIndicatorWhenChildless),
    4620, uint(PythonQtWrapper_QTreeWidgetItem::Type),
    4625, uint(PythonQtWrapper_QTreeWidgetItem::UserType),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTreeWidgetItem[] = {
    "PythonQtWrapper_QTreeWidgetItem\0\0"
    "QTreeWidgetItem*\0view,after,type\0"
    "new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget*>,QTreeWidgetIt"
    "em*,int)\0"
    "view,after\0"
    "new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget*>,QTreeWidgetIt"
    "em*)\0"
    "view,strings,type\0"
    "new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget*>,QStringList,i"
    "nt)\0"
    "view,strings\0"
    "new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget*>,QStringList)\0"
    "view,type\0"
    "new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget*>,int)\0"
    "view\0new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget*>)\0"
    "parent,after,type\0"
    "new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem*>,QTreeWidg"
    "etItem*,int)\0"
    "parent,after\0"
    "new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem*>,QTreeWidg"
    "etItem*)\0"
    "parent,strings,type\0"
    "new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem*>,QStringLi"
    "st,int)\0"
    "parent,strings\0"
    "new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem*>,QStringLi"
    "st)\0"
    "parent,type\0"
    "new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem*>,int)\0"
    "parent\0"
    "new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem*>)\0"
    "strings,type\0new_QTreeWidgetItem(QStringList,int)\0"
    "strings\0new_QTreeWidgetItem(QStringList)\0"
    "type\0new_QTreeWidgetItem(int)\0"
    "new_QTreeWidgetItem()\0obj\0"
    "delete_QTreeWidgetItem(QTreeWidgetItem*)\0"
    "theWrappedObject,child\0"
    "addChild(QTreeWidgetItem*,PythonQtPassOwnershipToCPP<QTreeWidgetItem*>"
    ")\0"
    "theWrappedObject,children\0"
    "addChildren(QTreeWidgetItem*,PythonQtPassOwnershipToCPP<QList<QTreeWid"
    "getItem*> >)\0"
    "QBrush\0theWrappedObject,column\0"
    "background(QTreeWidgetItem*,int)\0"
    "Qt::CheckState\0checkState(QTreeWidgetItem*,int)\0"
    "theWrappedObject,index\0"
    "child(QTreeWidgetItem*,int)\0int\0"
    "theWrappedObject\0childCount(QTreeWidgetItem*)\0"
    "QTreeWidgetItem::ChildIndicatorPolicy\0"
    "childIndicatorPolicy(QTreeWidgetItem*)\0"
    "clone(QTreeWidgetItem*)\0"
    "columnCount(QTreeWidgetItem*)\0QVariant\0"
    "theWrappedObject,column,role\0"
    "data(QTreeWidgetItem*,int,int)\0"
    "emitDataChanged(QTreeWidgetItem*)\0"
    "Qt::ItemFlags\0flags(QTreeWidgetItem*)\0"
    "QFont\0font(QTreeWidgetItem*,int)\0"
    "foreground(QTreeWidgetItem*,int)\0QIcon\0"
    "icon(QTreeWidgetItem*,int)\0"
    "indexOfChild(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "theWrappedObject,index,child\0"
    "insertChild(QTreeWidgetItem*,int,PythonQtPassOwnershipToCPP<QTreeWidge"
    "tItem*>)\0"
    "theWrappedObject,index,children\0"
    "insertChildren(QTreeWidgetItem*,int,PythonQtPassOwnershipToCPP<QList<Q"
    "TreeWidgetItem*> >)\0"
    "bool\0isDisabled(QTreeWidgetItem*)\0"
    "isExpanded(QTreeWidgetItem*)\0"
    "isFirstColumnSpanned(QTreeWidgetItem*)\0"
    "isHidden(QTreeWidgetItem*)\0"
    "isSelected(QTreeWidgetItem*)\0"
    "theWrappedObject,out\0"
    "writeTo(QTreeWidgetItem*,QDataStream&)\0"
    "theWrappedObject,in\0"
    "readFrom(QTreeWidgetItem*,QDataStream&)\0"
    "parent(QTreeWidgetItem*)\0"
    "removeChild(QTreeWidgetItem*,PythonQtPassOwnershipToPython<QTreeWidget"
    "Item*>)\0"
    "theWrappedObject,column,brush\0"
    "setBackground(QTreeWidgetItem*,int,QBrush)\0"
    "theWrappedObject,column,state\0"
    "setCheckState(QTreeWidgetItem*,int,Qt::CheckState)\0"
    "theWrappedObject,policy\0"
    "setChildIndicatorPolicy(QTreeWidgetItem*,QTreeWidgetItem::ChildIndicat"
    "orPolicy)\0"
    "theWrappedObject,column,role,value\0"
    "setData(QTreeWidgetItem*,int,int,QVariant)\0"
    "theWrappedObject,disabled\0"
    "setDisabled(QTreeWidgetItem*,bool)\0"
    "theWrappedObject,expand\0"
    "setExpanded(QTreeWidgetItem*,bool)\0"
    "theWrappedObject,span\0"
    "setFirstColumnSpanned(QTreeWidgetItem*,bool)\0"
    "theWrappedObject,flags\0"
    "setFlags(QTreeWidgetItem*,Qt::ItemFlags)\0"
    "theWrappedObject,column,font\0"
    "setFont(QTreeWidgetItem*,int,QFont)\0"
    "setForeground(QTreeWidgetItem*,int,QBrush)\0"
    "theWrappedObject,hide\0"
    "setHidden(QTreeWidgetItem*,bool)\0"
    "theWrappedObject,column,icon\0"
    "setIcon(QTreeWidgetItem*,int,QIcon)\0"
    "theWrappedObject,select\0"
    "setSelected(QTreeWidgetItem*,bool)\0"
    "theWrappedObject,column,size\0"
    "setSizeHint(QTreeWidgetItem*,int,QSize)\0"
    "theWrappedObject,column,statusTip\0"
    "setStatusTip(QTreeWidgetItem*,int,QString)\0"
    "theWrappedObject,column,text\0"
    "setText(QTreeWidgetItem*,int,QString)\0"
    "theWrappedObject,column,alignment\0"
    "setTextAlignment(QTreeWidgetItem*,int,int)\0"
    "theWrappedObject,column,toolTip\0"
    "setToolTip(QTreeWidgetItem*,int,QString)\0"
    "theWrappedObject,column,whatsThis\0"
    "setWhatsThis(QTreeWidgetItem*,int,QString)\0"
    "QSize\0sizeHint(QTreeWidgetItem*,int)\0"
    "theWrappedObject,column,order\0"
    "sortChildren(QTreeWidgetItem*,int,Qt::SortOrder)\0"
    "QString\0statusTip(QTreeWidgetItem*,int)\0"
    "PythonQtPassOwnershipToPython<QTreeWidgetItem*>\0"
    "takeChild(QTreeWidgetItem*,int)\0"
    "PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem*> >\0"
    "takeChildren(QTreeWidgetItem*)\0"
    "text(QTreeWidgetItem*,int)\0"
    "textAlignment(QTreeWidgetItem*,int)\0"
    "toolTip(QTreeWidgetItem*,int)\0"
    "QTreeWidget*\0treeWidget(QTreeWidgetItem*)\0"
    "type(QTreeWidgetItem*)\0"
    "whatsThis(QTreeWidgetItem*,int)\0"
    "ChildIndicatorPolicy\0ItemType\0"
    "ShowIndicator\0DontShowIndicator\0"
    "DontShowIndicatorWhenChildless\0Type\0"
    "UserType\0"
};

void PythonQtWrapper_QTreeWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTreeWidgetItem *_t = static_cast<PythonQtWrapper_QTreeWidgetItem *>(_o);
        switch (_id) {
        case 0: { QTreeWidgetItem* _r = _t->new_QTreeWidgetItem((*reinterpret_cast< PythonQtNewOwnerOfThis<QTreeWidget*>(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 1: { QTreeWidgetItem* _r = _t->new_QTreeWidgetItem((*reinterpret_cast< PythonQtNewOwnerOfThis<QTreeWidget*>(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 2: { QTreeWidgetItem* _r = _t->new_QTreeWidgetItem((*reinterpret_cast< PythonQtNewOwnerOfThis<QTreeWidget*>(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 3: { QTreeWidgetItem* _r = _t->new_QTreeWidgetItem((*reinterpret_cast< PythonQtNewOwnerOfThis<QTreeWidget*>(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 4: { QTreeWidgetItem* _r = _t->new_QTreeWidgetItem((*reinterpret_cast< PythonQtNewOwnerOfThis<QTreeWidget*>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 5: { QTreeWidgetItem* _r = _t->new_QTreeWidgetItem((*reinterpret_cast< PythonQtNewOwnerOfThis<QTreeWidget*>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 6: { QTreeWidgetItem* _r = _t->new_QTreeWidgetItem((*reinterpret_cast< PythonQtNewOwnerOfThis<QTreeWidgetItem*>(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 7: { QTreeWidgetItem* _r = _t->new_QTreeWidgetItem((*reinterpret_cast< PythonQtNewOwnerOfThis<QTreeWidgetItem*>(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 8: { QTreeWidgetItem* _r = _t->new_QTreeWidgetItem((*reinterpret_cast< PythonQtNewOwnerOfThis<QTreeWidgetItem*>(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 9: { QTreeWidgetItem* _r = _t->new_QTreeWidgetItem((*reinterpret_cast< PythonQtNewOwnerOfThis<QTreeWidgetItem*>(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 10: { QTreeWidgetItem* _r = _t->new_QTreeWidgetItem((*reinterpret_cast< PythonQtNewOwnerOfThis<QTreeWidgetItem*>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 11: { QTreeWidgetItem* _r = _t->new_QTreeWidgetItem((*reinterpret_cast< PythonQtNewOwnerOfThis<QTreeWidgetItem*>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 12: { QTreeWidgetItem* _r = _t->new_QTreeWidgetItem((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 13: { QTreeWidgetItem* _r = _t->new_QTreeWidgetItem((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 14: { QTreeWidgetItem* _r = _t->new_QTreeWidgetItem((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 15: { QTreeWidgetItem* _r = _t->new_QTreeWidgetItem();
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 16: _t->delete_QTreeWidgetItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 17: _t->addChild((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QTreeWidgetItem*>(*)>(_a[2]))); break;
        case 18: _t->addChildren((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem*> >(*)>(_a[2]))); break;
        case 19: { QBrush _r = _t->background((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 20: { Qt::CheckState _r = _t->checkState((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::CheckState*>(_a[0]) = _r; }  break;
        case 21: { QTreeWidgetItem* _r = _t->child((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->childCount((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: { QTreeWidgetItem::ChildIndicatorPolicy _r = _t->childIndicatorPolicy((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem::ChildIndicatorPolicy*>(_a[0]) = _r; }  break;
        case 24: { QTreeWidgetItem* _r = _t->clone((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->columnCount((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { QVariant _r = _t->data((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 27: _t->emitDataChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 28: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 29: { QFont _r = _t->font((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 30: { QBrush _r = _t->foreground((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 31: { QIcon _r = _t->icon((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 32: { int _r = _t->indexOfChild((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 33: _t->insertChild((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QTreeWidgetItem*>(*)>(_a[3]))); break;
        case 34: _t->insertChildren((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem*> >(*)>(_a[3]))); break;
        case 35: { bool _r = _t->isDisabled((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->isExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->isFirstColumnSpanned((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { bool _r = _t->isHidden((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->isSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: _t->writeTo((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 41: _t->readFrom((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 42: { QTreeWidgetItem* _r = _t->parent((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 43: _t->removeChild((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToPython<QTreeWidgetItem*>(*)>(_a[2]))); break;
        case 44: _t->setBackground((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QBrush(*)>(_a[3]))); break;
        case 45: _t->setCheckState((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::CheckState(*)>(_a[3]))); break;
        case 46: _t->setChildIndicatorPolicy((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem::ChildIndicatorPolicy(*)>(_a[2]))); break;
        case 47: _t->setData((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 48: _t->setDisabled((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 49: _t->setExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 50: _t->setFirstColumnSpanned((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 51: _t->setFlags((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< Qt::ItemFlags(*)>(_a[2]))); break;
        case 52: _t->setFont((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QFont(*)>(_a[3]))); break;
        case 53: _t->setForeground((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QBrush(*)>(_a[3]))); break;
        case 54: _t->setHidden((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 55: _t->setIcon((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QIcon(*)>(_a[3]))); break;
        case 56: _t->setSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 57: _t->setSizeHint((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSize(*)>(_a[3]))); break;
        case 58: _t->setStatusTip((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 59: _t->setText((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 60: _t->setTextAlignment((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 61: _t->setToolTip((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 62: _t->setWhatsThis((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 63: { QSize _r = _t->sizeHint((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 64: _t->sortChildren((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 65: { QString _r = _t->statusTip((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 66: { PythonQtPassOwnershipToPython<QTreeWidgetItem*> _r = _t->takeChild((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< PythonQtPassOwnershipToPython<QTreeWidgetItem*>*>(_a[0]) = _r; }  break;
        case 67: { PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem*> > _r = _t->takeChildren((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem*> >*>(_a[0]) = _r; }  break;
        case 68: { QString _r = _t->text((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 69: { int _r = _t->textAlignment((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 70: { QString _r = _t->toolTip((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 71: { QTreeWidget* _r = _t->treeWidget((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTreeWidget**>(_a[0]) = _r; }  break;
        case 72: { int _r = _t->type((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 73: { QString _r = _t->whatsThis((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTreeWidgetItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTreeWidgetItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTreeWidgetItem,
      qt_meta_data_PythonQtWrapper_QTreeWidgetItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTreeWidgetItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTreeWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTreeWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTreeWidgetItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTreeWidgetItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTreeWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QUndoCommand[] = {

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
      51,   44,   30,   29, 0x0a,
      83,   29,   30,   29, 0x2a,
     114,  102,   30,   29, 0x0a,
     159,  154,   30,   29, 0x2a,
     189,  185,   29,   29, 0x0a,
     249,  232,  224,   29, 0x0a,
     318,  295,  275,   29, 0x0a,
     347,  232,  343,   29, 0x0a,
     373,  232,  343,   29, 0x0a,
     419,  396,  391,   29, 0x0a,
     464,  232,   29,   29, 0x0a,
     506,  484,   29,   29, 0x0a,
     537,  232,  224,   29, 0x0a,
     557,  232,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QUndoCommand[] = {
    "PythonQtWrapper_QUndoCommand\0\0"
    "QUndoCommand*\0parent\0"
    "new_QUndoCommand(QUndoCommand*)\0"
    "new_QUndoCommand()\0text,parent\0"
    "new_QUndoCommand(QString,QUndoCommand*)\0"
    "text\0new_QUndoCommand(QString)\0obj\0"
    "delete_QUndoCommand(QUndoCommand*)\0"
    "QString\0theWrappedObject\0"
    "actionText(QUndoCommand*)\0const QUndoCommand*\0"
    "theWrappedObject,index\0child(QUndoCommand*,int)\0"
    "int\0childCount(QUndoCommand*)\0"
    "id(QUndoCommand*)\0bool\0theWrappedObject,other\0"
    "mergeWith(QUndoCommand*,const QUndoCommand*)\0"
    "redo(QUndoCommand*)\0theWrappedObject,text\0"
    "setText(QUndoCommand*,QString)\0"
    "text(QUndoCommand*)\0undo(QUndoCommand*)\0"
};

void PythonQtWrapper_QUndoCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QUndoCommand *_t = static_cast<PythonQtWrapper_QUndoCommand *>(_o);
        switch (_id) {
        case 0: { QUndoCommand* _r = _t->new_QUndoCommand((*reinterpret_cast< QUndoCommand*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUndoCommand**>(_a[0]) = _r; }  break;
        case 1: { QUndoCommand* _r = _t->new_QUndoCommand();
            if (_a[0]) *reinterpret_cast< QUndoCommand**>(_a[0]) = _r; }  break;
        case 2: { QUndoCommand* _r = _t->new_QUndoCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QUndoCommand*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUndoCommand**>(_a[0]) = _r; }  break;
        case 3: { QUndoCommand* _r = _t->new_QUndoCommand((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUndoCommand**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QUndoCommand((*reinterpret_cast< QUndoCommand*(*)>(_a[1]))); break;
        case 5: { QString _r = _t->actionText((*reinterpret_cast< QUndoCommand*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { const QUndoCommand* _r = _t->child((*reinterpret_cast< QUndoCommand*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< const QUndoCommand**>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->childCount((*reinterpret_cast< QUndoCommand*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->id((*reinterpret_cast< QUndoCommand*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->mergeWith((*reinterpret_cast< QUndoCommand*(*)>(_a[1])),(*reinterpret_cast< const QUndoCommand*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->redo((*reinterpret_cast< QUndoCommand*(*)>(_a[1]))); break;
        case 11: _t->setText((*reinterpret_cast< QUndoCommand*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: { QString _r = _t->text((*reinterpret_cast< QUndoCommand*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: _t->undo((*reinterpret_cast< QUndoCommand*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QUndoCommand::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QUndoCommand::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QUndoCommand,
      qt_meta_data_PythonQtWrapper_QUndoCommand, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QUndoCommand::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QUndoCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QUndoCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QUndoCommand))
        return static_cast<void*>(const_cast< PythonQtWrapper_QUndoCommand*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QUndoCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QUndoGroup[] = {

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
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
      93,   89,   27,   27, 0x0a,
     153,  136,  124,   27, 0x0a,
     201,  178,   27,   27, 0x0a,
     240,  136,  235,   27, 0x0a,
     261,  136,  235,   27, 0x0a,
     322,  291,  282,   27, 0x0a,
     393,  369,  282,   27, 0x2a,
     432,  291,  282,   27, 0x0a,
     479,  369,  282,   27, 0x2a,
     518,  136,  235,   27, 0x0a,
     547,  136,  539,   27, 0x0a,
     569,  178,   27,   27, 0x0a,
     625,  136,  606,   27, 0x0a,
     645,  136,  539,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QUndoGroup[] = {
    "PythonQtWrapper_QUndoGroup\0\0QUndoGroup*\0"
    "parent\0new_QUndoGroup(QObject*)\0"
    "new_QUndoGroup()\0obj\0"
    "delete_QUndoGroup(QUndoGroup*)\0"
    "QUndoStack*\0theWrappedObject\0"
    "activeStack(QUndoGroup*)\0"
    "theWrappedObject,stack\0"
    "addStack(QUndoGroup*,QUndoStack*)\0"
    "bool\0canRedo(QUndoGroup*)\0"
    "canUndo(QUndoGroup*)\0QAction*\0"
    "theWrappedObject,parent,prefix\0"
    "createRedoAction(QUndoGroup*,QObject*,QString)\0"
    "theWrappedObject,parent\0"
    "createRedoAction(QUndoGroup*,QObject*)\0"
    "createUndoAction(QUndoGroup*,QObject*,QString)\0"
    "createUndoAction(QUndoGroup*,QObject*)\0"
    "isClean(QUndoGroup*)\0QString\0"
    "redoText(QUndoGroup*)\0"
    "removeStack(QUndoGroup*,QUndoStack*)\0"
    "QList<QUndoStack*>\0stacks(QUndoGroup*)\0"
    "undoText(QUndoGroup*)\0"
};

void PythonQtWrapper_QUndoGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QUndoGroup *_t = static_cast<PythonQtWrapper_QUndoGroup *>(_o);
        switch (_id) {
        case 0: { QUndoGroup* _r = _t->new_QUndoGroup((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUndoGroup**>(_a[0]) = _r; }  break;
        case 1: { QUndoGroup* _r = _t->new_QUndoGroup();
            if (_a[0]) *reinterpret_cast< QUndoGroup**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QUndoGroup((*reinterpret_cast< QUndoGroup*(*)>(_a[1]))); break;
        case 3: { QUndoStack* _r = _t->activeStack((*reinterpret_cast< QUndoGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUndoStack**>(_a[0]) = _r; }  break;
        case 4: _t->addStack((*reinterpret_cast< QUndoGroup*(*)>(_a[1])),(*reinterpret_cast< QUndoStack*(*)>(_a[2]))); break;
        case 5: { bool _r = _t->canRedo((*reinterpret_cast< QUndoGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->canUndo((*reinterpret_cast< QUndoGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QAction* _r = _t->createRedoAction((*reinterpret_cast< QUndoGroup*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 8: { QAction* _r = _t->createRedoAction((*reinterpret_cast< QUndoGroup*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 9: { QAction* _r = _t->createUndoAction((*reinterpret_cast< QUndoGroup*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 10: { QAction* _r = _t->createUndoAction((*reinterpret_cast< QUndoGroup*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isClean((*reinterpret_cast< QUndoGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->redoText((*reinterpret_cast< QUndoGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: _t->removeStack((*reinterpret_cast< QUndoGroup*(*)>(_a[1])),(*reinterpret_cast< QUndoStack*(*)>(_a[2]))); break;
        case 14: { QList<QUndoStack*> _r = _t->stacks((*reinterpret_cast< QUndoGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QUndoStack*>*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->undoText((*reinterpret_cast< QUndoGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QUndoGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QUndoGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QUndoGroup,
      qt_meta_data_PythonQtWrapper_QUndoGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QUndoGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QUndoGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QUndoGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QUndoGroup))
        return static_cast<void*>(const_cast< PythonQtWrapper_QUndoGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QUndoGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QUndoStack[] = {

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
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
      93,   89,   27,   27, 0x0a,
     146,  124,   27,   27, 0x0a,
     200,  183,  178,   27, 0x0a,
     221,  183,  178,   27, 0x0a,
     246,  183,  242,   27, 0x0a,
     270,  183,   27,   27, 0x0a,
     332,  309,  289,   27, 0x0a,
     357,  183,  242,   27, 0x0a,
     416,  385,  376,   27, 0x0a,
     487,  463,  376,   27, 0x2a,
     526,  385,  376,   27, 0x0a,
     573,  463,  376,   27, 0x2a,
     612,  183,   27,   27, 0x0a,
     634,  183,  242,   27, 0x0a,
     653,  183,  178,   27, 0x0a,
     675,  183,  178,   27, 0x0a,
     717,  696,   27,   27, 0x0a,
     757,  183,  749,   27, 0x0a,
     802,  779,   27,   27, 0x0a,
     853,  832,  749,   27, 0x0a,
     875,  183,  242,   27, 0x0a,
     898,  183,  749,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QUndoStack[] = {
    "PythonQtWrapper_QUndoStack\0\0QUndoStack*\0"
    "parent\0new_QUndoStack(QObject*)\0"
    "new_QUndoStack()\0obj\0"
    "delete_QUndoStack(QUndoStack*)\0"
    "theWrappedObject,text\0"
    "beginMacro(QUndoStack*,QString)\0bool\0"
    "theWrappedObject\0canRedo(QUndoStack*)\0"
    "canUndo(QUndoStack*)\0int\0"
    "cleanIndex(QUndoStack*)\0clear(QUndoStack*)\0"
    "const QUndoCommand*\0theWrappedObject,index\0"
    "command(QUndoStack*,int)\0count(QUndoStack*)\0"
    "QAction*\0theWrappedObject,parent,prefix\0"
    "createRedoAction(QUndoStack*,QObject*,QString)\0"
    "theWrappedObject,parent\0"
    "createRedoAction(QUndoStack*,QObject*)\0"
    "createUndoAction(QUndoStack*,QObject*,QString)\0"
    "createUndoAction(QUndoStack*,QObject*)\0"
    "endMacro(QUndoStack*)\0index(QUndoStack*)\0"
    "isActive(QUndoStack*)\0isClean(QUndoStack*)\0"
    "theWrappedObject,cmd\0"
    "push(QUndoStack*,QUndoCommand*)\0QString\0"
    "redoText(QUndoStack*)\0theWrappedObject,limit\0"
    "setUndoLimit(QUndoStack*,int)\0"
    "theWrappedObject,idx\0text(QUndoStack*,int)\0"
    "undoLimit(QUndoStack*)\0undoText(QUndoStack*)\0"
};

void PythonQtWrapper_QUndoStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QUndoStack *_t = static_cast<PythonQtWrapper_QUndoStack *>(_o);
        switch (_id) {
        case 0: { QUndoStack* _r = _t->new_QUndoStack((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUndoStack**>(_a[0]) = _r; }  break;
        case 1: { QUndoStack* _r = _t->new_QUndoStack();
            if (_a[0]) *reinterpret_cast< QUndoStack**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QUndoStack((*reinterpret_cast< QUndoStack*(*)>(_a[1]))); break;
        case 3: _t->beginMacro((*reinterpret_cast< QUndoStack*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: { bool _r = _t->canRedo((*reinterpret_cast< QUndoStack*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->canUndo((*reinterpret_cast< QUndoStack*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->cleanIndex((*reinterpret_cast< QUndoStack*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: _t->clear((*reinterpret_cast< QUndoStack*(*)>(_a[1]))); break;
        case 8: { const QUndoCommand* _r = _t->command((*reinterpret_cast< QUndoStack*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< const QUndoCommand**>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->count((*reinterpret_cast< QUndoStack*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QAction* _r = _t->createRedoAction((*reinterpret_cast< QUndoStack*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 11: { QAction* _r = _t->createRedoAction((*reinterpret_cast< QUndoStack*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 12: { QAction* _r = _t->createUndoAction((*reinterpret_cast< QUndoStack*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 13: { QAction* _r = _t->createUndoAction((*reinterpret_cast< QUndoStack*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = _r; }  break;
        case 14: _t->endMacro((*reinterpret_cast< QUndoStack*(*)>(_a[1]))); break;
        case 15: { int _r = _t->index((*reinterpret_cast< QUndoStack*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isActive((*reinterpret_cast< QUndoStack*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isClean((*reinterpret_cast< QUndoStack*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->push((*reinterpret_cast< QUndoStack*(*)>(_a[1])),(*reinterpret_cast< QUndoCommand*(*)>(_a[2]))); break;
        case 19: { QString _r = _t->redoText((*reinterpret_cast< QUndoStack*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 20: _t->setUndoLimit((*reinterpret_cast< QUndoStack*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: { QString _r = _t->text((*reinterpret_cast< QUndoStack*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->undoLimit((*reinterpret_cast< QUndoStack*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: { QString _r = _t->undoText((*reinterpret_cast< QUndoStack*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QUndoStack::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QUndoStack::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QUndoStack,
      qt_meta_data_PythonQtWrapper_QUndoStack, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QUndoStack::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QUndoStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QUndoStack::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QUndoStack))
        return static_cast<void*>(const_cast< PythonQtWrapper_QUndoStack*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QUndoStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QUndoView[] = {

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
      51,   38,   27,   26, 0x0a,
      93,   87,   27,   26, 0x2a,
     133,  120,   27,   26, 0x0a,
     175,  169,   27,   26, 0x2a,
     209,  202,   27,   26, 0x0a,
     233,   26,   27,   26, 0x2a,
     253,  249,   26,   26, 0x0a,
     305,  288,  282,   26, 0x0a,
     335,  288,  327,   26, 0x0a,
     370,  288,  358,   26, 0x0a,
     410,  388,   26,   26, 0x0a,
     464,  441,   26,   26, 0x0a,
     510,  288,  498,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QUndoView[] = {
    "PythonQtWrapper_QUndoView\0\0QUndoView*\0"
    "group,parent\0new_QUndoView(QUndoGroup*,QWidget*)\0"
    "group\0new_QUndoView(QUndoGroup*)\0"
    "stack,parent\0new_QUndoView(QUndoStack*,QWidget*)\0"
    "stack\0new_QUndoView(QUndoStack*)\0"
    "parent\0new_QUndoView(QWidget*)\0"
    "new_QUndoView()\0obj\0delete_QUndoView(QUndoView*)\0"
    "QIcon\0theWrappedObject\0cleanIcon(QUndoView*)\0"
    "QString\0emptyLabel(QUndoView*)\0"
    "QUndoGroup*\0group(QUndoView*)\0"
    "theWrappedObject,icon\0"
    "setCleanIcon(QUndoView*,QIcon)\0"
    "theWrappedObject,label\0"
    "setEmptyLabel(QUndoView*,QString)\0"
    "QUndoStack*\0stack(QUndoView*)\0"
};

void PythonQtWrapper_QUndoView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QUndoView *_t = static_cast<PythonQtWrapper_QUndoView *>(_o);
        switch (_id) {
        case 0: { QUndoView* _r = _t->new_QUndoView((*reinterpret_cast< QUndoGroup*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUndoView**>(_a[0]) = _r; }  break;
        case 1: { QUndoView* _r = _t->new_QUndoView((*reinterpret_cast< QUndoGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUndoView**>(_a[0]) = _r; }  break;
        case 2: { QUndoView* _r = _t->new_QUndoView((*reinterpret_cast< QUndoStack*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUndoView**>(_a[0]) = _r; }  break;
        case 3: { QUndoView* _r = _t->new_QUndoView((*reinterpret_cast< QUndoStack*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUndoView**>(_a[0]) = _r; }  break;
        case 4: { QUndoView* _r = _t->new_QUndoView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUndoView**>(_a[0]) = _r; }  break;
        case 5: { QUndoView* _r = _t->new_QUndoView();
            if (_a[0]) *reinterpret_cast< QUndoView**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QUndoView((*reinterpret_cast< QUndoView*(*)>(_a[1]))); break;
        case 7: { QIcon _r = _t->cleanIcon((*reinterpret_cast< QUndoView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->emptyLabel((*reinterpret_cast< QUndoView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { QUndoGroup* _r = _t->group((*reinterpret_cast< QUndoView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUndoGroup**>(_a[0]) = _r; }  break;
        case 10: _t->setCleanIcon((*reinterpret_cast< QUndoView*(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2]))); break;
        case 11: _t->setEmptyLabel((*reinterpret_cast< QUndoView*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: { QUndoStack* _r = _t->stack((*reinterpret_cast< QUndoView*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUndoStack**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QUndoView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QUndoView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QUndoView,
      qt_meta_data_PythonQtWrapper_QUndoView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QUndoView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QUndoView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QUndoView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QUndoView))
        return static_cast<void*>(const_cast< PythonQtWrapper_QUndoView*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QUndoView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QVBoxLayout[] = {

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
      42,   28,   29,   28, 0x0a,
      67,   60,   29,   28, 0x0a,
      97,   93,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QVBoxLayout[] = {
    "PythonQtWrapper_QVBoxLayout\0\0QVBoxLayout*\0"
    "new_QVBoxLayout()\0parent\0"
    "new_QVBoxLayout(QWidget*)\0obj\0"
    "delete_QVBoxLayout(QVBoxLayout*)\0"
};

void PythonQtWrapper_QVBoxLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QVBoxLayout *_t = static_cast<PythonQtWrapper_QVBoxLayout *>(_o);
        switch (_id) {
        case 0: { QVBoxLayout* _r = _t->new_QVBoxLayout();
            if (_a[0]) *reinterpret_cast< QVBoxLayout**>(_a[0]) = _r; }  break;
        case 1: { QVBoxLayout* _r = _t->new_QVBoxLayout((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVBoxLayout**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QVBoxLayout((*reinterpret_cast< QVBoxLayout*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QVBoxLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QVBoxLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QVBoxLayout,
      qt_meta_data_PythonQtWrapper_QVBoxLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QVBoxLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QVBoxLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QVBoxLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QVBoxLayout))
        return static_cast<void*>(const_cast< PythonQtWrapper_QVBoxLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QVBoxLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QValidator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       1,   49, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
      93,   89,   27,   27, 0x0a,
     148,  124,   27,   27, 0x0a,
     201,  184,  176,   27, 0x0a,
     245,  221,   27,   27, 0x0a,
     325,  294,  276,   27, 0x0a,

 // enums: name, flags, count, data
     361, 0x0,    3,   53,

 // enum data: key, value
     367, uint(PythonQtWrapper_QValidator::Invalid),
     375, uint(PythonQtWrapper_QValidator::Intermediate),
     388, uint(PythonQtWrapper_QValidator::Acceptable),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QValidator[] = {
    "PythonQtWrapper_QValidator\0\0QValidator*\0"
    "parent\0new_QValidator(QObject*)\0"
    "new_QValidator()\0obj\0"
    "delete_QValidator(QValidator*)\0"
    "theWrappedObject,arg__1\0"
    "fixup(QValidator*,QString&)\0QLocale\0"
    "theWrappedObject\0locale(QValidator*)\0"
    "theWrappedObject,locale\0"
    "setLocale(QValidator*,QLocale)\0"
    "QValidator::State\0theWrappedObject,arg__1,arg__2\0"
    "validate(QValidator*,QString&,int&)\0"
    "State\0Invalid\0Intermediate\0Acceptable\0"
};

void PythonQtWrapper_QValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QValidator *_t = static_cast<PythonQtWrapper_QValidator *>(_o);
        switch (_id) {
        case 0: { QValidator* _r = _t->new_QValidator((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QValidator**>(_a[0]) = _r; }  break;
        case 1: { QValidator* _r = _t->new_QValidator();
            if (_a[0]) *reinterpret_cast< QValidator**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QValidator((*reinterpret_cast< QValidator*(*)>(_a[1]))); break;
        case 3: _t->fixup((*reinterpret_cast< QValidator*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: { QLocale _r = _t->locale((*reinterpret_cast< QValidator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocale*>(_a[0]) = _r; }  break;
        case 5: _t->setLocale((*reinterpret_cast< QValidator*(*)>(_a[1])),(*reinterpret_cast< const QLocale(*)>(_a[2]))); break;
        case 6: { QValidator::State _r = _t->validate((*reinterpret_cast< QValidator*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QValidator::State*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QValidator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QValidator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QValidator,
      qt_meta_data_PythonQtWrapper_QValidator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QValidator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QValidator))
        return static_cast<void*>(const_cast< PythonQtWrapper_QValidator*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE

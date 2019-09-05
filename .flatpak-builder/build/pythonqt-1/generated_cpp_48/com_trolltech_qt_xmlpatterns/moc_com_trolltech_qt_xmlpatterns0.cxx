/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_xmlpatterns0.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "com_trolltech_qt_xmlpatterns0.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_xmlpatterns0.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QAbstractMessageHandler[] = {

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
      73,   66,   41,   40, 0x0a,
     111,   40,   41,   40, 0x2a,
     145,  141,   40,   40, 0x0a,
     262,  202,   40,   40, 0x0a,
     341,  202,   40,   40, 0x0a,
     459,  414,   40,   40, 0x2a,
     550,  516,   40,   40, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QAbstractMessageHandler[] = {
    "PythonQtWrapper_QAbstractMessageHandler\0"
    "\0QAbstractMessageHandler*\0parent\0"
    "new_QAbstractMessageHandler(QObject*)\0"
    "new_QAbstractMessageHandler()\0obj\0"
    "delete_QAbstractMessageHandler(QAbstractMessageHandler*)\0"
    "theWrappedObject,type,description,identifier,sourceLocation\0"
    "handleMessage(QAbstractMessageHandler*,QtMsgType,QString,QUrl,QSourceL"
    "ocation)\0"
    "message(QAbstractMessageHandler*,QtMsgType,QString,QUrl,QSourceLocatio"
    "n)\0"
    "theWrappedObject,type,description,identifier\0"
    "message(QAbstractMessageHandler*,QtMsgType,QString,QUrl)\0"
    "theWrappedObject,type,description\0"
    "message(QAbstractMessageHandler*,QtMsgType,QString)\0"
};

void PythonQtWrapper_QAbstractMessageHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QAbstractMessageHandler *_t = static_cast<PythonQtWrapper_QAbstractMessageHandler *>(_o);
        switch (_id) {
        case 0: { QAbstractMessageHandler* _r = _t->new_QAbstractMessageHandler((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractMessageHandler**>(_a[0]) = _r; }  break;
        case 1: { QAbstractMessageHandler* _r = _t->new_QAbstractMessageHandler();
            if (_a[0]) *reinterpret_cast< QAbstractMessageHandler**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QAbstractMessageHandler((*reinterpret_cast< QAbstractMessageHandler*(*)>(_a[1]))); break;
        case 3: _t->handleMessage((*reinterpret_cast< QAbstractMessageHandler*(*)>(_a[1])),(*reinterpret_cast< QtMsgType(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QUrl(*)>(_a[4])),(*reinterpret_cast< const QSourceLocation(*)>(_a[5]))); break;
        case 4: _t->message((*reinterpret_cast< QAbstractMessageHandler*(*)>(_a[1])),(*reinterpret_cast< QtMsgType(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QUrl(*)>(_a[4])),(*reinterpret_cast< const QSourceLocation(*)>(_a[5]))); break;
        case 5: _t->message((*reinterpret_cast< QAbstractMessageHandler*(*)>(_a[1])),(*reinterpret_cast< QtMsgType(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QUrl(*)>(_a[4]))); break;
        case 6: _t->message((*reinterpret_cast< QAbstractMessageHandler*(*)>(_a[1])),(*reinterpret_cast< QtMsgType(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QAbstractMessageHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QAbstractMessageHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractMessageHandler,
      qt_meta_data_PythonQtWrapper_QAbstractMessageHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QAbstractMessageHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QAbstractMessageHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractMessageHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractMessageHandler))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractMessageHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractMessageHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QAbstractUriResolver[] = {

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
      67,   60,   38,   37, 0x0a,
     102,   37,   38,   37, 0x2a,
     133,  129,   37,   37, 0x0a,
     223,  189,  184,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QAbstractUriResolver[] = {
    "PythonQtWrapper_QAbstractUriResolver\0"
    "\0QAbstractUriResolver*\0parent\0"
    "new_QAbstractUriResolver(QObject*)\0"
    "new_QAbstractUriResolver()\0obj\0"
    "delete_QAbstractUriResolver(QAbstractUriResolver*)\0"
    "QUrl\0theWrappedObject,relative,baseURI\0"
    "resolve(QAbstractUriResolver*,QUrl,QUrl)\0"
};

void PythonQtWrapper_QAbstractUriResolver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QAbstractUriResolver *_t = static_cast<PythonQtWrapper_QAbstractUriResolver *>(_o);
        switch (_id) {
        case 0: { QAbstractUriResolver* _r = _t->new_QAbstractUriResolver((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractUriResolver**>(_a[0]) = _r; }  break;
        case 1: { QAbstractUriResolver* _r = _t->new_QAbstractUriResolver();
            if (_a[0]) *reinterpret_cast< QAbstractUriResolver**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QAbstractUriResolver((*reinterpret_cast< QAbstractUriResolver*(*)>(_a[1]))); break;
        case 3: { QUrl _r = _t->resolve((*reinterpret_cast< QAbstractUriResolver*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QAbstractUriResolver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QAbstractUriResolver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractUriResolver,
      qt_meta_data_PythonQtWrapper_QAbstractUriResolver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QAbstractUriResolver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QAbstractUriResolver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractUriResolver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractUriResolver))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractUriResolver*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractUriResolver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QAbstractXmlNodeModel[] = {

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
      62,   38,   39,   38, 0x0a,
      94,   90,   38,   38, 0x0a,
     200,  175,  147,   38, 0x0a,
     279,  259,  254,   38, 0x0a,
     389,  364,  330,   38, 0x0a,
     505,  483,  464,   38, 0x0a,
     585,  548,  464,   38, 0x0a,
     675,  635,  464,   38, 0x0a,
     749,  724,  464,   38, 0x2a,
     791,  259,  254,   38, 0x0a,
     870,  846,  464,   38, 0x0a,
     944,  259,  915,   38, 0x0a,
    1001,  259,  992,   38, 0x0a,
    1086, 1067, 1049,   38, 0x0a,
    1176, 1147,  464,   38, 0x0a,
    1272,  846,  147,   38, 0x0a,
    1318, 1067,  464,   38, 0x0a,
    1405, 1382, 1366,   38, 0x0a,
    1471, 1067, 1463,   38, 0x0a,
    1535, 1067, 1526,   38, 0x0a,

 // enums: name, flags, count, data
    1589, 0x0,    2,  122,
    1605, 0x0,    4,  126,

 // enum data: key, value
    1616, uint(PythonQtWrapper_QAbstractXmlNodeModel::InheritNamespaces),
    1634, uint(PythonQtWrapper_QAbstractXmlNodeModel::PreserveNamespaces),
    1653, uint(PythonQtWrapper_QAbstractXmlNodeModel::Parent),
    1660, uint(PythonQtWrapper_QAbstractXmlNodeModel::FirstChild),
    1671, uint(PythonQtWrapper_QAbstractXmlNodeModel::PreviousSibling),
    1687, uint(PythonQtWrapper_QAbstractXmlNodeModel::NextSibling),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QAbstractXmlNodeModel[] = {
    "PythonQtWrapper_QAbstractXmlNodeModel\0"
    "\0QAbstractXmlNodeModel*\0"
    "new_QAbstractXmlNodeModel()\0obj\0"
    "delete_QAbstractXmlNodeModel(QAbstractXmlNodeModel*)\0"
    "QVector<QXmlNodeModelIndex>\0"
    "theWrappedObject,element\0"
    "attributes(QAbstractXmlNodeModel*,QXmlNodeModelIndex)\0"
    "QUrl\0theWrappedObject,ni\0"
    "baseUri(QAbstractXmlNodeModel*,QXmlNodeModelIndex)\0"
    "QXmlNodeModelIndex::DocumentOrder\0"
    "theWrappedObject,ni1,ni2\0"
    "compareOrder(QAbstractXmlNodeModel*,QXmlNodeModelIndex,QXmlNodeModelIn"
    "dex)\0"
    "QXmlNodeModelIndex\0theWrappedObject,data\0"
    "createIndex(QAbstractXmlNodeModel*,qint64)\0"
    "theWrappedObject,data,additionalData\0"
    "createIndex(QAbstractXmlNodeModel*,qint64,qint64)\0"
    "theWrappedObject,pointer,additionalData\0"
    "createIndex(QAbstractXmlNodeModel*,void*,qint64)\0"
    "theWrappedObject,pointer\0"
    "createIndex(QAbstractXmlNodeModel*,void*)\0"
    "documentUri(QAbstractXmlNodeModel*,QXmlNodeModelIndex)\0"
    "theWrappedObject,NCName\0"
    "elementById(QAbstractXmlNodeModel*,QXmlName)\0"
    "QXmlNodeModelIndex::NodeKind\0"
    "kind(QAbstractXmlNodeModel*,QXmlNodeModelIndex)\0"
    "QXmlName\0name(QAbstractXmlNodeModel*,QXmlNodeModelIndex)\0"
    "QVector<QXmlName>\0theWrappedObject,n\0"
    "namespaceBindings(QAbstractXmlNodeModel*,QXmlNodeModelIndex)\0"
    "theWrappedObject,axis,origin\0"
    "nextFromSimpleAxis(QAbstractXmlNodeModel*,QAbstractXmlNodeModel::Simpl"
    "eAxis,QXmlNodeModelIndex)\0"
    "nodesByIdref(QAbstractXmlNodeModel*,QXmlName)\0"
    "root(QAbstractXmlNodeModel*,QXmlNodeModelIndex)\0"
    "QSourceLocation\0theWrappedObject,index\0"
    "sourceLocation(QAbstractXmlNodeModel*,QXmlNodeModelIndex)\0"
    "QString\0stringValue(QAbstractXmlNodeModel*,QXmlNodeModelIndex)\0"
    "QVariant\0typedValue(QAbstractXmlNodeModel*,QXmlNodeModelIndex)\0"
    "NodeCopySetting\0SimpleAxis\0InheritNamespaces\0"
    "PreserveNamespaces\0Parent\0FirstChild\0"
    "PreviousSibling\0NextSibling\0"
};

void PythonQtWrapper_QAbstractXmlNodeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QAbstractXmlNodeModel *_t = static_cast<PythonQtWrapper_QAbstractXmlNodeModel *>(_o);
        switch (_id) {
        case 0: { QAbstractXmlNodeModel* _r = _t->new_QAbstractXmlNodeModel();
            if (_a[0]) *reinterpret_cast< QAbstractXmlNodeModel**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QAbstractXmlNodeModel((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1]))); break;
        case 2: { QVector<QXmlNodeModelIndex> _r = _t->attributes((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QXmlNodeModelIndex>*>(_a[0]) = _r; }  break;
        case 3: { QUrl _r = _t->baseUri((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 4: { QXmlNodeModelIndex::DocumentOrder _r = _t->compareOrder((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex::DocumentOrder*>(_a[0]) = _r; }  break;
        case 5: { QXmlNodeModelIndex _r = _t->createIndex((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 6: { QXmlNodeModelIndex _r = _t->createIndex((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 7: { QXmlNodeModelIndex _r = _t->createIndex((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 8: { QXmlNodeModelIndex _r = _t->createIndex((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 9: { QUrl _r = _t->documentUri((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 10: { QXmlNodeModelIndex _r = _t->elementById((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 11: { QXmlNodeModelIndex::NodeKind _r = _t->kind((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex::NodeKind*>(_a[0]) = _r; }  break;
        case 12: { QXmlName _r = _t->name((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlName*>(_a[0]) = _r; }  break;
        case 13: { QVector<QXmlName> _r = _t->namespaceBindings((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QXmlName>*>(_a[0]) = _r; }  break;
        case 14: { QXmlNodeModelIndex _r = _t->nextFromSimpleAxis((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< QAbstractXmlNodeModel::SimpleAxis(*)>(_a[2])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 15: { QVector<QXmlNodeModelIndex> _r = _t->nodesByIdref((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QXmlNodeModelIndex>*>(_a[0]) = _r; }  break;
        case 16: { QXmlNodeModelIndex _r = _t->root((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 17: { QSourceLocation _r = _t->sourceLocation((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSourceLocation*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->stringValue((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { QVariant _r = _t->typedValue((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QAbstractXmlNodeModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QAbstractXmlNodeModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractXmlNodeModel,
      qt_meta_data_PythonQtWrapper_QAbstractXmlNodeModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QAbstractXmlNodeModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QAbstractXmlNodeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractXmlNodeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractXmlNodeModel))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractXmlNodeModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractXmlNodeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QAbstractXmlReceiver[] = {

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
      60,   37,   38,   37, 0x0a,
      91,   87,   37,   37, 0x0a,
     165,  142,   37,   37, 0x0a,
     237,  209,   37,   37, 0x0a,
     290,  142,   37,   37, 0x0a,
     335,  142,   37,   37, 0x0a,
     391,  374,   37,   37, 0x0a,
     426,  374,   37,   37, 0x0a,
     460,  374,   37,   37, 0x0a,
     519,  497,   37,   37, 0x0a,
     598,  568,   37,   37, 0x0a,
     660,  374,   37,   37, 0x0a,
     697,  497,   37,   37, 0x0a,
     742,  374,   37,   37, 0x0a,
     781,  142,   37,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QAbstractXmlReceiver[] = {
    "PythonQtWrapper_QAbstractXmlReceiver\0"
    "\0QAbstractXmlReceiver*\0"
    "new_QAbstractXmlReceiver()\0obj\0"
    "delete_QAbstractXmlReceiver(QAbstractXmlReceiver*)\0"
    "theWrappedObject,value\0"
    "atomicValue(QAbstractXmlReceiver*,QVariant)\0"
    "theWrappedObject,name,value\0"
    "attribute(QAbstractXmlReceiver*,QXmlName,QStringRef)\0"
    "characters(QAbstractXmlReceiver*,QStringRef)\0"
    "comment(QAbstractXmlReceiver*,QString)\0"
    "theWrappedObject\0endDocument(QAbstractXmlReceiver*)\0"
    "endElement(QAbstractXmlReceiver*)\0"
    "endOfSequence(QAbstractXmlReceiver*)\0"
    "theWrappedObject,name\0"
    "namespaceBinding(QAbstractXmlReceiver*,QXmlName)\0"
    "theWrappedObject,target,value\0"
    "processingInstruction(QAbstractXmlReceiver*,QXmlName,QString)\0"
    "startDocument(QAbstractXmlReceiver*)\0"
    "startElement(QAbstractXmlReceiver*,QXmlName)\0"
    "startOfSequence(QAbstractXmlReceiver*)\0"
    "whitespaceOnly(QAbstractXmlReceiver*,QStringRef)\0"
};

void PythonQtWrapper_QAbstractXmlReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QAbstractXmlReceiver *_t = static_cast<PythonQtWrapper_QAbstractXmlReceiver *>(_o);
        switch (_id) {
        case 0: { QAbstractXmlReceiver* _r = _t->new_QAbstractXmlReceiver();
            if (_a[0]) *reinterpret_cast< QAbstractXmlReceiver**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QAbstractXmlReceiver((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1]))); break;
        case 2: _t->atomicValue((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->attribute((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< const QStringRef(*)>(_a[3]))); break;
        case 4: _t->characters((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1])),(*reinterpret_cast< const QStringRef(*)>(_a[2]))); break;
        case 5: _t->comment((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->endDocument((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1]))); break;
        case 7: _t->endElement((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1]))); break;
        case 8: _t->endOfSequence((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1]))); break;
        case 9: _t->namespaceBinding((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2]))); break;
        case 10: _t->processingInstruction((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 11: _t->startDocument((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1]))); break;
        case 12: _t->startElement((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2]))); break;
        case 13: _t->startOfSequence((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1]))); break;
        case 14: _t->whitespaceOnly((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1])),(*reinterpret_cast< const QStringRef(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QAbstractXmlReceiver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QAbstractXmlReceiver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractXmlReceiver,
      qt_meta_data_PythonQtWrapper_QAbstractXmlReceiver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QAbstractXmlReceiver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QAbstractXmlReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractXmlReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractXmlReceiver))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractXmlReceiver*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractXmlReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QPatternist[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPatternist[] = {
    "PythonQtWrapper_QPatternist\0"
};

void PythonQtWrapper_QPatternist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PythonQtWrapper_QPatternist::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPatternist::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPatternist,
      qt_meta_data_PythonQtWrapper_QPatternist, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPatternist::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPatternist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPatternist::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPatternist))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPatternist*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPatternist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QPatternistSDK[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QPatternistSDK[] = {
    "PythonQtWrapper_QPatternistSDK\0"
};

void PythonQtWrapper_QPatternistSDK::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PythonQtWrapper_QPatternistSDK::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QPatternistSDK::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPatternistSDK,
      qt_meta_data_PythonQtWrapper_QPatternistSDK, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QPatternistSDK::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QPatternistSDK::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QPatternistSDK::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPatternistSDK))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPatternistSDK*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPatternistSDK::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSimpleXmlNodeModel[] = {

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
      67,   58,   37,   36, 0x0a,
     109,  105,   36,   36, 0x0a,
     185,  163,  158,   36, 0x0a,
     273,  253,  234,   36, 0x0a,
     347,  330,  316,   36, 0x0a,
     420,  396,  378,   36, 0x0a,
     530,  507,  479,   36, 0x0a,
     582,  163,  574,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSimpleXmlNodeModel[] = {
    "PythonQtWrapper_QSimpleXmlNodeModel\0"
    "\0QSimpleXmlNodeModel*\0namePool\0"
    "new_QSimpleXmlNodeModel(QXmlNamePool)\0"
    "obj\0delete_QSimpleXmlNodeModel(QSimpleXmlNodeModel*)\0"
    "QUrl\0theWrappedObject,node\0"
    "baseUri(QSimpleXmlNodeModel*,QXmlNodeModelIndex)\0"
    "QXmlNodeModelIndex\0theWrappedObject,id\0"
    "elementById(QSimpleXmlNodeModel*,QXmlName)\0"
    "QXmlNamePool*\0theWrappedObject\0"
    "namePool(QSimpleXmlNodeModel*)\0"
    "QVector<QXmlName>\0theWrappedObject,arg__1\0"
    "namespaceBindings(QSimpleXmlNodeModel*,QXmlNodeModelIndex)\0"
    "QVector<QXmlNodeModelIndex>\0"
    "theWrappedObject,idref\0"
    "nodesByIdref(QSimpleXmlNodeModel*,QXmlName)\0"
    "QString\0stringValue(QSimpleXmlNodeModel*,QXmlNodeModelIndex)\0"
};

void PythonQtWrapper_QSimpleXmlNodeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSimpleXmlNodeModel *_t = static_cast<PythonQtWrapper_QSimpleXmlNodeModel *>(_o);
        switch (_id) {
        case 0: { QSimpleXmlNodeModel* _r = _t->new_QSimpleXmlNodeModel((*reinterpret_cast< const QXmlNamePool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSimpleXmlNodeModel**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QSimpleXmlNodeModel((*reinterpret_cast< QSimpleXmlNodeModel*(*)>(_a[1]))); break;
        case 2: { QUrl _r = _t->baseUri((*reinterpret_cast< QSimpleXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 3: { QXmlNodeModelIndex _r = _t->elementById((*reinterpret_cast< QSimpleXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 4: { QXmlNamePool* _r = _t->namePool((*reinterpret_cast< QSimpleXmlNodeModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlNamePool**>(_a[0]) = _r; }  break;
        case 5: { QVector<QXmlName> _r = _t->namespaceBindings((*reinterpret_cast< QSimpleXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QXmlName>*>(_a[0]) = _r; }  break;
        case 6: { QVector<QXmlNodeModelIndex> _r = _t->nodesByIdref((*reinterpret_cast< QSimpleXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QXmlNodeModelIndex>*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->stringValue((*reinterpret_cast< QSimpleXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSimpleXmlNodeModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSimpleXmlNodeModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSimpleXmlNodeModel,
      qt_meta_data_PythonQtWrapper_QSimpleXmlNodeModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSimpleXmlNodeModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSimpleXmlNodeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSimpleXmlNodeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSimpleXmlNodeModel))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSimpleXmlNodeModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSimpleXmlNodeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSourceLocation[] = {

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
      50,   32,   33,   32, 0x0a,
      78,   72,   33,   32, 0x0a,
     131,  115,   33,   32, 0x0a,
     174,  165,   33,   32, 0x2a,
     208,  204,   33,   32, 0x2a,
     238,  234,   32,   32, 0x0a,
     303,  286,  279,   32, 0x0a,
     333,  286,  328,   32, 0x0a,
     358,  286,  279,   32, 0x0a,
     404,  381,  328,   32, 0x0a,
     445,  381,  328,   32, 0x0a,
     513,  486,   32,   32, 0x0a,
     573,  548,   32,   32, 0x0a,
     630,  606,   32,   32, 0x0a,
     665,  286,  660,   32, 0x0a,
     695,   32,  687,   32, 0x0a,
     725,  234,  328,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSourceLocation[] = {
    "PythonQtWrapper_QSourceLocation\0\0"
    "QSourceLocation*\0new_QSourceLocation()\0"
    "other\0new_QSourceLocation(QSourceLocation)\0"
    "uri,line,column\0new_QSourceLocation(QUrl,int,int)\0"
    "uri,line\0new_QSourceLocation(QUrl,int)\0"
    "uri\0new_QSourceLocation(QUrl)\0obj\0"
    "delete_QSourceLocation(QSourceLocation*)\0"
    "qint64\0theWrappedObject\0"
    "column(QSourceLocation*)\0bool\0"
    "isNull(QSourceLocation*)\0"
    "line(QSourceLocation*)\0theWrappedObject,other\0"
    "__ne__(QSourceLocation*,QSourceLocation)\0"
    "__eq__(QSourceLocation*,QSourceLocation)\0"
    "theWrappedObject,newColumn\0"
    "setColumn(QSourceLocation*,qint64)\0"
    "theWrappedObject,newLine\0"
    "setLine(QSourceLocation*,qint64)\0"
    "theWrappedObject,newUri\0"
    "setUri(QSourceLocation*,QUrl)\0QUrl\0"
    "uri(QSourceLocation*)\0QString\0"
    "py_toString(QSourceLocation*)\0"
    "__nonzero__(QSourceLocation*)\0"
};

void PythonQtWrapper_QSourceLocation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSourceLocation *_t = static_cast<PythonQtWrapper_QSourceLocation *>(_o);
        switch (_id) {
        case 0: { QSourceLocation* _r = _t->new_QSourceLocation();
            if (_a[0]) *reinterpret_cast< QSourceLocation**>(_a[0]) = _r; }  break;
        case 1: { QSourceLocation* _r = _t->new_QSourceLocation((*reinterpret_cast< const QSourceLocation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSourceLocation**>(_a[0]) = _r; }  break;
        case 2: { QSourceLocation* _r = _t->new_QSourceLocation((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSourceLocation**>(_a[0]) = _r; }  break;
        case 3: { QSourceLocation* _r = _t->new_QSourceLocation((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSourceLocation**>(_a[0]) = _r; }  break;
        case 4: { QSourceLocation* _r = _t->new_QSourceLocation((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSourceLocation**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QSourceLocation((*reinterpret_cast< QSourceLocation*(*)>(_a[1]))); break;
        case 6: { qint64 _r = _t->column((*reinterpret_cast< QSourceLocation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isNull((*reinterpret_cast< QSourceLocation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { qint64 _r = _t->line((*reinterpret_cast< QSourceLocation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->__ne__((*reinterpret_cast< QSourceLocation*(*)>(_a[1])),(*reinterpret_cast< const QSourceLocation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->__eq__((*reinterpret_cast< QSourceLocation*(*)>(_a[1])),(*reinterpret_cast< const QSourceLocation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->setColumn((*reinterpret_cast< QSourceLocation*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 12: _t->setLine((*reinterpret_cast< QSourceLocation*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 13: _t->setUri((*reinterpret_cast< QSourceLocation*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 14: { QUrl _r = _t->uri((*reinterpret_cast< QSourceLocation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->py_toString((*reinterpret_cast< QSourceLocation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->__nonzero__((*reinterpret_cast< QSourceLocation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSourceLocation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSourceLocation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSourceLocation,
      qt_meta_data_PythonQtWrapper_QSourceLocation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSourceLocation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSourceLocation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSourceLocation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSourceLocation))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSourceLocation*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSourceLocation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlFormatter[] = {

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
      65,   46,   31,   30, 0x0a,
     109,  105,   30,   30, 0x0a,
     169,  146,   30,   30, 0x0a,
     234,  206,   30,   30, 0x0a,
     280,  146,   30,   30, 0x0a,
     318,  146,   30,   30, 0x0a,
     367,  350,   30,   30, 0x0a,
     395,  350,   30,   30, 0x0a,
     422,  350,   30,   30, 0x0a,
     456,  350,  452,   30, 0x0a,
     489,  206,   30,   30, 0x0a,
     567,  544,   30,   30, 0x0a,
     607,  350,   30,   30, 0x0a,
     659,  637,   30,   30, 0x0a,
     697,  350,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlFormatter[] = {
    "PythonQtWrapper_QXmlFormatter\0\0"
    "QXmlFormatter*\0query,outputDevice\0"
    "new_QXmlFormatter(QXmlQuery,QIODevice*)\0"
    "obj\0delete_QXmlFormatter(QXmlFormatter*)\0"
    "theWrappedObject,value\0"
    "atomicValue(QXmlFormatter*,QVariant)\0"
    "theWrappedObject,name,value\0"
    "attribute(QXmlFormatter*,QXmlName,QStringRef)\0"
    "characters(QXmlFormatter*,QStringRef)\0"
    "comment(QXmlFormatter*,QString)\0"
    "theWrappedObject\0endDocument(QXmlFormatter*)\0"
    "endElement(QXmlFormatter*)\0"
    "endOfSequence(QXmlFormatter*)\0int\0"
    "indentationDepth(QXmlFormatter*)\0"
    "processingInstruction(QXmlFormatter*,QXmlName,QString)\0"
    "theWrappedObject,depth\0"
    "setIndentationDepth(QXmlFormatter*,int)\0"
    "startDocument(QXmlFormatter*)\0"
    "theWrappedObject,name\0"
    "startElement(QXmlFormatter*,QXmlName)\0"
    "startOfSequence(QXmlFormatter*)\0"
};

void PythonQtWrapper_QXmlFormatter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlFormatter *_t = static_cast<PythonQtWrapper_QXmlFormatter *>(_o);
        switch (_id) {
        case 0: { QXmlFormatter* _r = _t->new_QXmlFormatter((*reinterpret_cast< const QXmlQuery(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlFormatter**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlFormatter((*reinterpret_cast< QXmlFormatter*(*)>(_a[1]))); break;
        case 2: _t->atomicValue((*reinterpret_cast< QXmlFormatter*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->attribute((*reinterpret_cast< QXmlFormatter*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< const QStringRef(*)>(_a[3]))); break;
        case 4: _t->characters((*reinterpret_cast< QXmlFormatter*(*)>(_a[1])),(*reinterpret_cast< const QStringRef(*)>(_a[2]))); break;
        case 5: _t->comment((*reinterpret_cast< QXmlFormatter*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->endDocument((*reinterpret_cast< QXmlFormatter*(*)>(_a[1]))); break;
        case 7: _t->endElement((*reinterpret_cast< QXmlFormatter*(*)>(_a[1]))); break;
        case 8: _t->endOfSequence((*reinterpret_cast< QXmlFormatter*(*)>(_a[1]))); break;
        case 9: { int _r = _t->indentationDepth((*reinterpret_cast< QXmlFormatter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->processingInstruction((*reinterpret_cast< QXmlFormatter*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 11: _t->setIndentationDepth((*reinterpret_cast< QXmlFormatter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->startDocument((*reinterpret_cast< QXmlFormatter*(*)>(_a[1]))); break;
        case 13: _t->startElement((*reinterpret_cast< QXmlFormatter*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2]))); break;
        case 14: _t->startOfSequence((*reinterpret_cast< QXmlFormatter*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlFormatter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlFormatter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlFormatter,
      qt_meta_data_PythonQtWrapper_QXmlFormatter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlFormatter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlFormatter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlFormatter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlFormatter))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlFormatter*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlFormatter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlItem[] = {

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
      36,   25,   26,   25, 0x0a,
      63,   51,   26,   25, 0x0a,
      92,   86,   26,   25, 0x0a,
     120,  115,   26,   25, 0x0a,
     157,  153,   25,   25, 0x0a,
     206,  189,  184,   25, 0x0a,
     231,  189,  184,   25, 0x0a,
     249,  189,  184,   25, 0x0a,
     276,  189,  267,   25, 0x0a,
     320,  189,  301,   25, 0x0a,
     348,  153,  184,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlItem[] = {
    "PythonQtWrapper_QXmlItem\0\0QXmlItem*\0"
    "new_QXmlItem()\0atomicValue\0"
    "new_QXmlItem(QVariant)\0other\0"
    "new_QXmlItem(QXmlItem)\0node\0"
    "new_QXmlItem(QXmlNodeModelIndex)\0obj\0"
    "delete_QXmlItem(QXmlItem*)\0bool\0"
    "theWrappedObject\0isAtomicValue(QXmlItem*)\0"
    "isNode(QXmlItem*)\0isNull(QXmlItem*)\0"
    "QVariant\0toAtomicValue(QXmlItem*)\0"
    "QXmlNodeModelIndex\0toNodeModelIndex(QXmlItem*)\0"
    "__nonzero__(QXmlItem*)\0"
};

void PythonQtWrapper_QXmlItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlItem *_t = static_cast<PythonQtWrapper_QXmlItem *>(_o);
        switch (_id) {
        case 0: { QXmlItem* _r = _t->new_QXmlItem();
            if (_a[0]) *reinterpret_cast< QXmlItem**>(_a[0]) = _r; }  break;
        case 1: { QXmlItem* _r = _t->new_QXmlItem((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlItem**>(_a[0]) = _r; }  break;
        case 2: { QXmlItem* _r = _t->new_QXmlItem((*reinterpret_cast< const QXmlItem(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlItem**>(_a[0]) = _r; }  break;
        case 3: { QXmlItem* _r = _t->new_QXmlItem((*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlItem**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QXmlItem((*reinterpret_cast< QXmlItem*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->isAtomicValue((*reinterpret_cast< QXmlItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isNode((*reinterpret_cast< QXmlItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isNull((*reinterpret_cast< QXmlItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QVariant _r = _t->toAtomicValue((*reinterpret_cast< QXmlItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 9: { QXmlNodeModelIndex _r = _t->toNodeModelIndex((*reinterpret_cast< QXmlItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->__nonzero__((*reinterpret_cast< QXmlItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlItem,
      qt_meta_data_PythonQtWrapper_QXmlItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlName[] = {

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
      36,   25,   26,   25, 0x0a,
      90,   51,   26,   25, 0x0a,
     174,  142,   26,   25, 0x2a,
     237,  218,   26,   25, 0x2a,
     279,  273,   26,   25, 0x0a,
     306,  302,   25,   25, 0x0a,
     361,  342,  333,   25, 0x0a,
     428,  418,  413,   25, 0x0a,
     479,  462,  413,   25, 0x0a,
     528,  505,  497,   25, 0x0a,
     562,  505,  497,   25, 0x0a,
     622,  599,  413,   25, 0x0a,
     649,  599,  413,   25, 0x0a,
     676,  505,  497,   25, 0x0a,
     707,  505,  497,   25, 0x0a,
     743,  302,  413,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlName[] = {
    "PythonQtWrapper_QXmlName\0\0QXmlName*\0"
    "new_QXmlName()\0namePool,localName,namespaceURI,prefix\0"
    "new_QXmlName(QXmlNamePool&,QString,QString,QString)\0"
    "namePool,localName,namespaceURI\0"
    "new_QXmlName(QXmlNamePool&,QString,QString)\0"
    "namePool,localName\0"
    "new_QXmlName(QXmlNamePool&,QString)\0"
    "other\0new_QXmlName(QXmlName)\0obj\0"
    "delete_QXmlName(QXmlName*)\0QXmlName\0"
    "clarkName,namePool\0"
    "static_QXmlName_fromClarkName(QString,QXmlNamePool)\0"
    "bool\0candidate\0static_QXmlName_isNCName(QString)\0"
    "theWrappedObject\0isNull(QXmlName*)\0"
    "QString\0theWrappedObject,query\0"
    "localName(QXmlName*,QXmlNamePool)\0"
    "namespaceUri(QXmlName*,QXmlNamePool)\0"
    "theWrappedObject,other\0"
    "__ne__(QXmlName*,QXmlName)\0"
    "__eq__(QXmlName*,QXmlName)\0"
    "prefix(QXmlName*,QXmlNamePool)\0"
    "toClarkName(QXmlName*,QXmlNamePool)\0"
    "__nonzero__(QXmlName*)\0"
};

void PythonQtWrapper_QXmlName::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlName *_t = static_cast<PythonQtWrapper_QXmlName *>(_o);
        switch (_id) {
        case 0: { QXmlName* _r = _t->new_QXmlName();
            if (_a[0]) *reinterpret_cast< QXmlName**>(_a[0]) = _r; }  break;
        case 1: { QXmlName* _r = _t->new_QXmlName((*reinterpret_cast< QXmlNamePool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QXmlName**>(_a[0]) = _r; }  break;
        case 2: { QXmlName* _r = _t->new_QXmlName((*reinterpret_cast< QXmlNamePool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QXmlName**>(_a[0]) = _r; }  break;
        case 3: { QXmlName* _r = _t->new_QXmlName((*reinterpret_cast< QXmlNamePool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlName**>(_a[0]) = _r; }  break;
        case 4: { QXmlName* _r = _t->new_QXmlName((*reinterpret_cast< const QXmlName(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlName**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QXmlName((*reinterpret_cast< QXmlName*(*)>(_a[1]))); break;
        case 6: { QXmlName _r = _t->static_QXmlName_fromClarkName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QXmlNamePool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlName*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->static_QXmlName_isNCName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isNull((*reinterpret_cast< QXmlName*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->localName((*reinterpret_cast< QXmlName*(*)>(_a[1])),(*reinterpret_cast< const QXmlNamePool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->namespaceUri((*reinterpret_cast< QXmlName*(*)>(_a[1])),(*reinterpret_cast< const QXmlNamePool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__ne__((*reinterpret_cast< QXmlName*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->__eq__((*reinterpret_cast< QXmlName*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->prefix((*reinterpret_cast< QXmlName*(*)>(_a[1])),(*reinterpret_cast< const QXmlNamePool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->toClarkName((*reinterpret_cast< QXmlName*(*)>(_a[1])),(*reinterpret_cast< const QXmlNamePool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->__nonzero__((*reinterpret_cast< QXmlName*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlName::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlName::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlName,
      qt_meta_data_PythonQtWrapper_QXmlName, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlName::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlName::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlName::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlName))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlName*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlName::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlNamePool[] = {

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

static const char qt_meta_stringdata_PythonQtWrapper_QXmlNamePool[] = {
    "PythonQtWrapper_QXmlNamePool\0\0"
    "QXmlNamePool*\0new_QXmlNamePool()\0other\0"
    "new_QXmlNamePool(QXmlNamePool)\0obj\0"
    "delete_QXmlNamePool(QXmlNamePool*)\0"
};

void PythonQtWrapper_QXmlNamePool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlNamePool *_t = static_cast<PythonQtWrapper_QXmlNamePool *>(_o);
        switch (_id) {
        case 0: { QXmlNamePool* _r = _t->new_QXmlNamePool();
            if (_a[0]) *reinterpret_cast< QXmlNamePool**>(_a[0]) = _r; }  break;
        case 1: { QXmlNamePool* _r = _t->new_QXmlNamePool((*reinterpret_cast< const QXmlNamePool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlNamePool**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QXmlNamePool((*reinterpret_cast< QXmlNamePool*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlNamePool::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlNamePool::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlNamePool,
      qt_meta_data_PythonQtWrapper_QXmlNamePool, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlNamePool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlNamePool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlNamePool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlNamePool))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlNamePool*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlNamePool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlNodeModelIndex[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       2,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      56,   35,   36,   35, 0x0a,
      87,   81,   36,   35, 0x0a,
     134,  130,   35,   35, 0x0a,
     205,  188,  181,   35, 0x0a,
     241,  188,  181,   35, 0x0a,
     272,  188,  267,   35, 0x0a,
     329,  188,  300,   35, 0x0a,
     379,  356,  267,   35, 0x0a,
     426,  356,  267,   35, 0x0a,
     473,  130,  267,   35, 0x0a,

 // enums: name, flags, count, data
     506, 0x0,    3,   72,
     520, 0x0,    7,   78,

 // enum data: key, value
     529, uint(PythonQtWrapper_QXmlNodeModelIndex::Precedes),
     538, uint(PythonQtWrapper_QXmlNodeModelIndex::Is),
     541, uint(PythonQtWrapper_QXmlNodeModelIndex::Follows),
     549, uint(PythonQtWrapper_QXmlNodeModelIndex::Attribute),
     559, uint(PythonQtWrapper_QXmlNodeModelIndex::Comment),
     567, uint(PythonQtWrapper_QXmlNodeModelIndex::Document),
     576, uint(PythonQtWrapper_QXmlNodeModelIndex::Element),
     584, uint(PythonQtWrapper_QXmlNodeModelIndex::Namespace),
     594, uint(PythonQtWrapper_QXmlNodeModelIndex::ProcessingInstruction),
     616, uint(PythonQtWrapper_QXmlNodeModelIndex::Text),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlNodeModelIndex[] = {
    "PythonQtWrapper_QXmlNodeModelIndex\0\0"
    "QXmlNodeModelIndex*\0new_QXmlNodeModelIndex()\0"
    "other\0new_QXmlNodeModelIndex(QXmlNodeModelIndex)\0"
    "obj\0delete_QXmlNodeModelIndex(QXmlNodeModelIndex*)\0"
    "qint64\0theWrappedObject\0"
    "additionalData(QXmlNodeModelIndex*)\0"
    "data(QXmlNodeModelIndex*)\0bool\0"
    "isNull(QXmlNodeModelIndex*)\0"
    "const QAbstractXmlNodeModel*\0"
    "model(QXmlNodeModelIndex*)\0"
    "theWrappedObject,other\0"
    "__ne__(QXmlNodeModelIndex*,QXmlNodeModelIndex)\0"
    "__eq__(QXmlNodeModelIndex*,QXmlNodeModelIndex)\0"
    "__nonzero__(QXmlNodeModelIndex*)\0"
    "DocumentOrder\0NodeKind\0Precedes\0Is\0"
    "Follows\0Attribute\0Comment\0Document\0"
    "Element\0Namespace\0ProcessingInstruction\0"
    "Text\0"
};

void PythonQtWrapper_QXmlNodeModelIndex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlNodeModelIndex *_t = static_cast<PythonQtWrapper_QXmlNodeModelIndex *>(_o);
        switch (_id) {
        case 0: { QXmlNodeModelIndex* _r = _t->new_QXmlNodeModelIndex();
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex**>(_a[0]) = _r; }  break;
        case 1: { QXmlNodeModelIndex* _r = _t->new_QXmlNodeModelIndex((*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QXmlNodeModelIndex((*reinterpret_cast< QXmlNodeModelIndex*(*)>(_a[1]))); break;
        case 3: { qint64 _r = _t->additionalData((*reinterpret_cast< QXmlNodeModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 4: { qint64 _r = _t->data((*reinterpret_cast< QXmlNodeModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isNull((*reinterpret_cast< QXmlNodeModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { const QAbstractXmlNodeModel* _r = _t->model((*reinterpret_cast< QXmlNodeModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QAbstractXmlNodeModel**>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->__ne__((*reinterpret_cast< QXmlNodeModelIndex*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__eq__((*reinterpret_cast< QXmlNodeModelIndex*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->__nonzero__((*reinterpret_cast< QXmlNodeModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlNodeModelIndex::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlNodeModelIndex::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlNodeModelIndex,
      qt_meta_data_PythonQtWrapper_QXmlNodeModelIndex, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlNodeModelIndex::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlNodeModelIndex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlNodeModelIndex::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlNodeModelIndex))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlNodeModelIndex*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlNodeModelIndex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlQuery[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       1,  204, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   26,   27,   26, 0x0a,
      71,   54,   27,   26, 0x0a,
     138,  124,   27,   26, 0x2a,
     181,  178,   27,   26, 0x0a,
     215,  209,   27,   26, 0x0a,
     244,  240,   26,   26, 0x0a,
     307,  273,   26,   26, 0x0a,
     384,  351,   26,   26, 0x0a,
     459,  426,   26,   26, 0x0a,
     531,  502,   26,   26, 0x0a,
     604,  576,   26,   26, 0x0a,
     675,  647,   26,   26, 0x0a,
     748,  724,  719,   26, 0x0a,
     806,  782,  719,   26, 0x0a,
     862,  838,   26,   26, 0x0a,
     928,  911,  902,   26, 0x0a,
     960,  911,  719,   26, 0x0a,
    1005,  911,  980,   26, 0x0a,
    1045,  911, 1032,   26, 0x0a,
    1089,  911, 1066,   26, 0x0a,
    1145, 1122,   27,   26, 0x0a,
    1208,  911, 1183,   26, 0x0a,
    1260, 1234,  719,   26, 0x0a,
    1315, 1292,  719,   26, 0x0a,
    1373, 1344,  719,   26, 0x0a,
    1421, 1399,   26,   26, 0x0a,
    1473, 1451,   26,   26, 0x0a,
    1516, 1451,   26,   26, 0x0a,
    1592, 1560,   26,   26, 0x0a,
    1675, 1647,   26,   26, 0x0a,
    1774, 1734,   26,   26, 0x0a,
    1839, 1811,   26,   26, 0x2a,
    1871, 1734,   26,   26, 0x0a,
    1905, 1811,   26,   26, 0x2a,
    1968, 1934,   26,   26, 0x0a,
    2025, 1999,   26,   26, 0x2a,
    2077, 2051,   26,   26, 0x0a,
    2160,  911, 2132,   26, 0x0a,

 // enums: name, flags, count, data
    2184, 0x0,    5,  208,

 // enum data: key, value
    2198, uint(PythonQtWrapper_QXmlQuery::XQuery10),
    2207, uint(PythonQtWrapper_QXmlQuery::XSLT20),
    2214, uint(PythonQtWrapper_QXmlQuery::XmlSchema11IdentityConstraintSelector),
    2252, uint(PythonQtWrapper_QXmlQuery::XmlSchema11IdentityConstraintField),
    2287, uint(PythonQtWrapper_QXmlQuery::XPath20),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlQuery[] = {
    "PythonQtWrapper_QXmlQuery\0\0QXmlQuery*\0"
    "new_QXmlQuery()\0queryLanguage,np\0"
    "new_QXmlQuery(QXmlQuery::QueryLanguage,QXmlNamePool)\0"
    "queryLanguage\0new_QXmlQuery(QXmlQuery::QueryLanguage)\0"
    "np\0new_QXmlQuery(QXmlNamePool)\0other\0"
    "new_QXmlQuery(QXmlQuery)\0obj\0"
    "delete_QXmlQuery(QXmlQuery*)\0"
    "theWrappedObject,localName,arg__2\0"
    "bindVariable(QXmlQuery*,QString,QIODevice*)\0"
    "theWrappedObject,localName,value\0"
    "bindVariable(QXmlQuery*,QString,QXmlItem)\0"
    "theWrappedObject,localName,query\0"
    "bindVariable(QXmlQuery*,QString,QXmlQuery)\0"
    "theWrappedObject,name,arg__2\0"
    "bindVariable(QXmlQuery*,QXmlName,QIODevice*)\0"
    "theWrappedObject,name,value\0"
    "bindVariable(QXmlQuery*,QXmlName,QXmlItem)\0"
    "theWrappedObject,name,query\0"
    "bindVariable(QXmlQuery*,QXmlName,QXmlQuery)\0"
    "bool\0theWrappedObject,target\0"
    "evaluateTo(QXmlQuery*,QIODevice*)\0"
    "theWrappedObject,output\0"
    "evaluateTo(QXmlQuery*,QString*)\0"
    "theWrappedObject,result\0"
    "evaluateTo(QXmlQuery*,QXmlResultItems*)\0"
    "QXmlName\0theWrappedObject\0"
    "initialTemplateName(QXmlQuery*)\0"
    "isValid(QXmlQuery*)\0QAbstractMessageHandler*\0"
    "messageHandler(QXmlQuery*)\0QXmlNamePool\0"
    "namePool(QXmlQuery*)\0QNetworkAccessManager*\0"
    "networkAccessManager(QXmlQuery*)\0"
    "theWrappedObject,other\0"
    "operator_assign(QXmlQuery*,QXmlQuery)\0"
    "QXmlQuery::QueryLanguage\0"
    "queryLanguage(QXmlQuery*)\0"
    "theWrappedObject,document\0"
    "setFocus(QXmlQuery*,QIODevice*)\0"
    "theWrappedObject,focus\0"
    "setFocus(QXmlQuery*,QString)\0"
    "theWrappedObject,documentURI\0"
    "setFocus(QXmlQuery*,QUrl)\0"
    "theWrappedObject,item\0"
    "setFocus(QXmlQuery*,QXmlItem)\0"
    "theWrappedObject,name\0"
    "setInitialTemplateName(QXmlQuery*,QString)\0"
    "setInitialTemplateName(QXmlQuery*,QXmlName)\0"
    "theWrappedObject,messageHandler\0"
    "setMessageHandler(QXmlQuery*,QAbstractMessageHandler*)\0"
    "theWrappedObject,newManager\0"
    "setNetworkAccessManager(QXmlQuery*,QNetworkAccessManager*)\0"
    "theWrappedObject,sourceCode,documentURI\0"
    "setQuery(QXmlQuery*,QIODevice*,QUrl)\0"
    "theWrappedObject,sourceCode\0"
    "setQuery(QXmlQuery*,QIODevice*)\0"
    "setQuery(QXmlQuery*,QString,QUrl)\0"
    "setQuery(QXmlQuery*,QString)\0"
    "theWrappedObject,queryURI,baseURI\0"
    "setQuery(QXmlQuery*,QUrl,QUrl)\0"
    "theWrappedObject,queryURI\0"
    "setQuery(QXmlQuery*,QUrl)\0"
    "theWrappedObject,resolver\0"
    "setUriResolver(QXmlQuery*,const QAbstractUriResolver*)\0"
    "const QAbstractUriResolver*\0"
    "uriResolver(QXmlQuery*)\0QueryLanguage\0"
    "XQuery10\0XSLT20\0XmlSchema11IdentityConstraintSelector\0"
    "XmlSchema11IdentityConstraintField\0"
    "XPath20\0"
};

void PythonQtWrapper_QXmlQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlQuery *_t = static_cast<PythonQtWrapper_QXmlQuery *>(_o);
        switch (_id) {
        case 0: { QXmlQuery* _r = _t->new_QXmlQuery();
            if (_a[0]) *reinterpret_cast< QXmlQuery**>(_a[0]) = _r; }  break;
        case 1: { QXmlQuery* _r = _t->new_QXmlQuery((*reinterpret_cast< QXmlQuery::QueryLanguage(*)>(_a[1])),(*reinterpret_cast< const QXmlNamePool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlQuery**>(_a[0]) = _r; }  break;
        case 2: { QXmlQuery* _r = _t->new_QXmlQuery((*reinterpret_cast< QXmlQuery::QueryLanguage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlQuery**>(_a[0]) = _r; }  break;
        case 3: { QXmlQuery* _r = _t->new_QXmlQuery((*reinterpret_cast< const QXmlNamePool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlQuery**>(_a[0]) = _r; }  break;
        case 4: { QXmlQuery* _r = _t->new_QXmlQuery((*reinterpret_cast< const QXmlQuery(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlQuery**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QXmlQuery((*reinterpret_cast< QXmlQuery*(*)>(_a[1]))); break;
        case 6: _t->bindVariable((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3]))); break;
        case 7: _t->bindVariable((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QXmlItem(*)>(_a[3]))); break;
        case 8: _t->bindVariable((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QXmlQuery(*)>(_a[3]))); break;
        case 9: _t->bindVariable((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3]))); break;
        case 10: _t->bindVariable((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< const QXmlItem(*)>(_a[3]))); break;
        case 11: _t->bindVariable((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< const QXmlQuery(*)>(_a[3]))); break;
        case 12: { bool _r = _t->evaluateTo((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->evaluateTo((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->evaluateTo((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< QXmlResultItems*(*)>(_a[2]))); break;
        case 15: { QXmlName _r = _t->initialTemplateName((*reinterpret_cast< QXmlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlName*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isValid((*reinterpret_cast< QXmlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { QAbstractMessageHandler* _r = _t->messageHandler((*reinterpret_cast< QXmlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractMessageHandler**>(_a[0]) = _r; }  break;
        case 18: { QXmlNamePool _r = _t->namePool((*reinterpret_cast< QXmlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlNamePool*>(_a[0]) = _r; }  break;
        case 19: { QNetworkAccessManager* _r = _t->networkAccessManager((*reinterpret_cast< QXmlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkAccessManager**>(_a[0]) = _r; }  break;
        case 20: { QXmlQuery* _r = _t->operator_assign((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QXmlQuery(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlQuery**>(_a[0]) = _r; }  break;
        case 21: { QXmlQuery::QueryLanguage _r = _t->queryLanguage((*reinterpret_cast< QXmlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlQuery::QueryLanguage*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->setFocus((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->setFocus((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->setFocus((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: _t->setFocus((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QXmlItem(*)>(_a[2]))); break;
        case 26: _t->setInitialTemplateName((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 27: _t->setInitialTemplateName((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2]))); break;
        case 28: _t->setMessageHandler((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< QAbstractMessageHandler*(*)>(_a[2]))); break;
        case 29: _t->setNetworkAccessManager((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< QNetworkAccessManager*(*)>(_a[2]))); break;
        case 30: _t->setQuery((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 31: _t->setQuery((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 32: _t->setQuery((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 33: _t->setQuery((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 34: _t->setQuery((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 35: _t->setQuery((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 36: _t->setUriResolver((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QAbstractUriResolver*(*)>(_a[2]))); break;
        case 37: { const QAbstractUriResolver* _r = _t->uriResolver((*reinterpret_cast< QXmlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QAbstractUriResolver**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlQuery::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlQuery::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlQuery,
      qt_meta_data_PythonQtWrapper_QXmlQuery, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlQuery::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlQuery))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlQuery*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QXmlResultItems[] = {

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
      50,   32,   33,   32, 0x0a,
      76,   72,   32,   32, 0x0a,
     143,  126,  117,   32, 0x0a,
     174,  126,  169,   32, 0x0a,
     201,  126,  117,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlResultItems[] = {
    "PythonQtWrapper_QXmlResultItems\0\0"
    "QXmlResultItems*\0new_QXmlResultItems()\0"
    "obj\0delete_QXmlResultItems(QXmlResultItems*)\0"
    "QXmlItem\0theWrappedObject\0"
    "current(QXmlResultItems*)\0bool\0"
    "hasError(QXmlResultItems*)\0"
    "next(QXmlResultItems*)\0"
};

void PythonQtWrapper_QXmlResultItems::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlResultItems *_t = static_cast<PythonQtWrapper_QXmlResultItems *>(_o);
        switch (_id) {
        case 0: { QXmlResultItems* _r = _t->new_QXmlResultItems();
            if (_a[0]) *reinterpret_cast< QXmlResultItems**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlResultItems((*reinterpret_cast< QXmlResultItems*(*)>(_a[1]))); break;
        case 2: { QXmlItem _r = _t->current((*reinterpret_cast< QXmlResultItems*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlItem*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->hasError((*reinterpret_cast< QXmlResultItems*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { QXmlItem _r = _t->next((*reinterpret_cast< QXmlResultItems*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlItem*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlResultItems::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlResultItems::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlResultItems,
      qt_meta_data_PythonQtWrapper_QXmlResultItems, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlResultItems::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlResultItems::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlResultItems::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlResultItems))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlResultItems*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlResultItems::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlSchema[] = {

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
      40,   27,   28,   27, 0x0a,
      63,   57,   28,   27, 0x0a,
      94,   90,   27,   27, 0x0a,
     147,  130,  125,   27, 0x0a,
     177,  130,  172,   27, 0x0a,
     234,  198,  172,   27, 0x0a,
     292,  268,  172,   27, 0x2a,
     355,  321,  172,   27, 0x0a,
     411,  389,  172,   27, 0x2a,
     440,  268,  172,   27, 0x0a,
     488,  130,  463,   27, 0x0a,
     529,  130,  516,   27, 0x0a,
     574,  130,  551,   27, 0x0a,
     633,  608,   27,   27, 0x0a,
     721,  689,   27,   27, 0x0a,
     807,  781,   27,   27, 0x0a,
     891,  130,  863,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlSchema[] = {
    "PythonQtWrapper_QXmlSchema\0\0QXmlSchema*\0"
    "new_QXmlSchema()\0other\0"
    "new_QXmlSchema(QXmlSchema)\0obj\0"
    "delete_QXmlSchema(QXmlSchema*)\0QUrl\0"
    "theWrappedObject\0documentUri(QXmlSchema*)\0"
    "bool\0isValid(QXmlSchema*)\0"
    "theWrappedObject,source,documentUri\0"
    "load(QXmlSchema*,QIODevice*,QUrl)\0"
    "theWrappedObject,source\0"
    "load(QXmlSchema*,QIODevice*)\0"
    "theWrappedObject,data,documentUri\0"
    "load(QXmlSchema*,QByteArray,QUrl)\0"
    "theWrappedObject,data\0"
    "load(QXmlSchema*,QByteArray)\0"
    "load(QXmlSchema*,QUrl)\0QAbstractMessageHandler*\0"
    "messageHandler(QXmlSchema*)\0QXmlNamePool\0"
    "namePool(QXmlSchema*)\0QNetworkAccessManager*\0"
    "networkAccessManager(QXmlSchema*)\0"
    "theWrappedObject,handler\0"
    "setMessageHandler(QXmlSchema*,QAbstractMessageHandler*)\0"
    "theWrappedObject,networkmanager\0"
    "setNetworkAccessManager(QXmlSchema*,QNetworkAccessManager*)\0"
    "theWrappedObject,resolver\0"
    "setUriResolver(QXmlSchema*,const QAbstractUriResolver*)\0"
    "const QAbstractUriResolver*\0"
    "uriResolver(QXmlSchema*)\0"
};

void PythonQtWrapper_QXmlSchema::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlSchema *_t = static_cast<PythonQtWrapper_QXmlSchema *>(_o);
        switch (_id) {
        case 0: { QXmlSchema* _r = _t->new_QXmlSchema();
            if (_a[0]) *reinterpret_cast< QXmlSchema**>(_a[0]) = _r; }  break;
        case 1: { QXmlSchema* _r = _t->new_QXmlSchema((*reinterpret_cast< const QXmlSchema(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlSchema**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QXmlSchema((*reinterpret_cast< QXmlSchema*(*)>(_a[1]))); break;
        case 3: { QUrl _r = _t->documentUri((*reinterpret_cast< QXmlSchema*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isValid((*reinterpret_cast< QXmlSchema*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->load((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->load((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->load((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->load((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->load((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QAbstractMessageHandler* _r = _t->messageHandler((*reinterpret_cast< QXmlSchema*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractMessageHandler**>(_a[0]) = _r; }  break;
        case 11: { QXmlNamePool _r = _t->namePool((*reinterpret_cast< QXmlSchema*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlNamePool*>(_a[0]) = _r; }  break;
        case 12: { QNetworkAccessManager* _r = _t->networkAccessManager((*reinterpret_cast< QXmlSchema*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkAccessManager**>(_a[0]) = _r; }  break;
        case 13: _t->setMessageHandler((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< QAbstractMessageHandler*(*)>(_a[2]))); break;
        case 14: _t->setNetworkAccessManager((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< QNetworkAccessManager*(*)>(_a[2]))); break;
        case 15: _t->setUriResolver((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< const QAbstractUriResolver*(*)>(_a[2]))); break;
        case 16: { const QAbstractUriResolver* _r = _t->uriResolver((*reinterpret_cast< QXmlSchema*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QAbstractUriResolver**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlSchema::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlSchema::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlSchema,
      qt_meta_data_PythonQtWrapper_QXmlSchema, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlSchema::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlSchema::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlSchema::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlSchema))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlSchema*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlSchema::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlSchemaValidator[] = {

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
      58,   36,   37,   36, 0x0a,
      91,   84,   37,   36, 0x0a,
     131,  127,   36,   36, 0x0a,
     222,  205,  180,   36, 0x0a,
     272,  205,  259,   36, 0x0a,
     326,  205,  303,   36, 0x0a,
     394,  369,   36,   36, 0x0a,
     491,  459,   36,   36, 0x0a,
     584,  560,   36,   36, 0x0a,
     653,  627,   36,   36, 0x0a,
     746,  205,  718,   36, 0x0a,
     821,  785,  780,   36, 0x0a,
     892,  868,  780,   36, 0x2a,
     968,  934,  780,   36, 0x0a,
    1037, 1015,  780,   36, 0x2a,
    1079,  868,  780,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlSchemaValidator[] = {
    "PythonQtWrapper_QXmlSchemaValidator\0"
    "\0QXmlSchemaValidator*\0new_QXmlSchemaValidator()\0"
    "schema\0new_QXmlSchemaValidator(QXmlSchema)\0"
    "obj\0delete_QXmlSchemaValidator(QXmlSchemaValidator*)\0"
    "QAbstractMessageHandler*\0theWrappedObject\0"
    "messageHandler(QXmlSchemaValidator*)\0"
    "QXmlNamePool\0namePool(QXmlSchemaValidator*)\0"
    "QNetworkAccessManager*\0"
    "networkAccessManager(QXmlSchemaValidator*)\0"
    "theWrappedObject,handler\0"
    "setMessageHandler(QXmlSchemaValidator*,QAbstractMessageHandler*)\0"
    "theWrappedObject,networkmanager\0"
    "setNetworkAccessManager(QXmlSchemaValidator*,QNetworkAccessManager*)\0"
    "theWrappedObject,schema\0"
    "setSchema(QXmlSchemaValidator*,QXmlSchema)\0"
    "theWrappedObject,resolver\0"
    "setUriResolver(QXmlSchemaValidator*,const QAbstractUriResolver*)\0"
    "const QAbstractUriResolver*\0"
    "uriResolver(QXmlSchemaValidator*)\0"
    "bool\0theWrappedObject,source,documentUri\0"
    "validate(QXmlSchemaValidator*,QIODevice*,QUrl)\0"
    "theWrappedObject,source\0"
    "validate(QXmlSchemaValidator*,QIODevice*)\0"
    "theWrappedObject,data,documentUri\0"
    "validate(QXmlSchemaValidator*,QByteArray,QUrl)\0"
    "theWrappedObject,data\0"
    "validate(QXmlSchemaValidator*,QByteArray)\0"
    "validate(QXmlSchemaValidator*,QUrl)\0"
};

void PythonQtWrapper_QXmlSchemaValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlSchemaValidator *_t = static_cast<PythonQtWrapper_QXmlSchemaValidator *>(_o);
        switch (_id) {
        case 0: { QXmlSchemaValidator* _r = _t->new_QXmlSchemaValidator();
            if (_a[0]) *reinterpret_cast< QXmlSchemaValidator**>(_a[0]) = _r; }  break;
        case 1: { QXmlSchemaValidator* _r = _t->new_QXmlSchemaValidator((*reinterpret_cast< const QXmlSchema(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlSchemaValidator**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QXmlSchemaValidator((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1]))); break;
        case 3: { QAbstractMessageHandler* _r = _t->messageHandler((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractMessageHandler**>(_a[0]) = _r; }  break;
        case 4: { QXmlNamePool _r = _t->namePool((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlNamePool*>(_a[0]) = _r; }  break;
        case 5: { QNetworkAccessManager* _r = _t->networkAccessManager((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkAccessManager**>(_a[0]) = _r; }  break;
        case 6: _t->setMessageHandler((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< QAbstractMessageHandler*(*)>(_a[2]))); break;
        case 7: _t->setNetworkAccessManager((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< QNetworkAccessManager*(*)>(_a[2]))); break;
        case 8: _t->setSchema((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< const QXmlSchema(*)>(_a[2]))); break;
        case 9: _t->setUriResolver((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< const QAbstractUriResolver*(*)>(_a[2]))); break;
        case 10: { const QAbstractUriResolver* _r = _t->uriResolver((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QAbstractUriResolver**>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->validate((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->validate((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->validate((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->validate((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->validate((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlSchemaValidator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlSchemaValidator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlSchemaValidator,
      qt_meta_data_PythonQtWrapper_QXmlSchemaValidator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlSchemaValidator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlSchemaValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlSchemaValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlSchemaValidator))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlSchemaValidator*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlSchemaValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QXmlSerializer[] = {

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
      67,   48,   32,   31, 0x0a,
     112,  108,   31,   31, 0x0a,
     174,  151,   31,   31, 0x0a,
     240,  212,   31,   31, 0x0a,
     287,  151,   31,   31, 0x0a,
     361,  344,  326,   31, 0x0a,
     384,  151,   31,   31, 0x0a,
     417,  344,   31,   31, 0x0a,
     446,  344,   31,   31, 0x0a,
     474,  344,   31,   31, 0x0a,
     525,  505,   31,   31, 0x0a,
     579,  344,  568,   31, 0x0a,
     609,  212,   31,   31, 0x0a,
     688,  665,   31,   31, 0x0a,
     732,  344,   31,   31, 0x0a,
     785,  763,   31,   31, 0x0a,
     824,  344,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QXmlSerializer[] = {
    "PythonQtWrapper_QXmlSerializer\0\0"
    "QXmlSerializer*\0query,outputDevice\0"
    "new_QXmlSerializer(QXmlQuery,QIODevice*)\0"
    "obj\0delete_QXmlSerializer(QXmlSerializer*)\0"
    "theWrappedObject,value\0"
    "atomicValue(QXmlSerializer*,QVariant)\0"
    "theWrappedObject,name,value\0"
    "attribute(QXmlSerializer*,QXmlName,QStringRef)\0"
    "characters(QXmlSerializer*,QStringRef)\0"
    "const QTextCodec*\0theWrappedObject\0"
    "codec(QXmlSerializer*)\0"
    "comment(QXmlSerializer*,QString)\0"
    "endDocument(QXmlSerializer*)\0"
    "endElement(QXmlSerializer*)\0"
    "endOfSequence(QXmlSerializer*)\0"
    "theWrappedObject,nb\0"
    "namespaceBinding(QXmlSerializer*,QXmlName)\0"
    "QIODevice*\0outputDevice(QXmlSerializer*)\0"
    "processingInstruction(QXmlSerializer*,QXmlName,QString)\0"
    "theWrappedObject,codec\0"
    "setCodec(QXmlSerializer*,const QTextCodec*)\0"
    "startDocument(QXmlSerializer*)\0"
    "theWrappedObject,name\0"
    "startElement(QXmlSerializer*,QXmlName)\0"
    "startOfSequence(QXmlSerializer*)\0"
};

void PythonQtWrapper_QXmlSerializer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QXmlSerializer *_t = static_cast<PythonQtWrapper_QXmlSerializer *>(_o);
        switch (_id) {
        case 0: { QXmlSerializer* _r = _t->new_QXmlSerializer((*reinterpret_cast< const QXmlQuery(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlSerializer**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlSerializer((*reinterpret_cast< QXmlSerializer*(*)>(_a[1]))); break;
        case 2: _t->atomicValue((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->attribute((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< const QStringRef(*)>(_a[3]))); break;
        case 4: _t->characters((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])),(*reinterpret_cast< const QStringRef(*)>(_a[2]))); break;
        case 5: { const QTextCodec* _r = _t->codec((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QTextCodec**>(_a[0]) = _r; }  break;
        case 6: _t->comment((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->endDocument((*reinterpret_cast< QXmlSerializer*(*)>(_a[1]))); break;
        case 8: _t->endElement((*reinterpret_cast< QXmlSerializer*(*)>(_a[1]))); break;
        case 9: _t->endOfSequence((*reinterpret_cast< QXmlSerializer*(*)>(_a[1]))); break;
        case 10: _t->namespaceBinding((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2]))); break;
        case 11: { QIODevice* _r = _t->outputDevice((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 12: _t->processingInstruction((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 13: _t->setCodec((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])),(*reinterpret_cast< const QTextCodec*(*)>(_a[2]))); break;
        case 14: _t->startDocument((*reinterpret_cast< QXmlSerializer*(*)>(_a[1]))); break;
        case 15: _t->startElement((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2]))); break;
        case 16: _t->startOfSequence((*reinterpret_cast< QXmlSerializer*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QXmlSerializer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QXmlSerializer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlSerializer,
      qt_meta_data_PythonQtWrapper_QXmlSerializer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QXmlSerializer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QXmlSerializer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QXmlSerializer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlSerializer))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlSerializer*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlSerializer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_sql0.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "com_trolltech_qt_sql0.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_sql0.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QSql[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       5,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      21, 0x0,    2,   34,
      30, 0x0,    4,   38,
      55, 0x0,    4,   46,
      69, 0x1,    4,   54,
      79, 0x0,    4,   62,

 // enum data: key, value
      89, uint(PythonQtWrapper_QSql::BeforeFirstRow),
     104, uint(PythonQtWrapper_QSql::AfterLastRow),
     117, uint(PythonQtWrapper_QSql::LowPrecisionInt32),
     135, uint(PythonQtWrapper_QSql::LowPrecisionInt64),
     153, uint(PythonQtWrapper_QSql::LowPrecisionDouble),
     172, uint(PythonQtWrapper_QSql::HighPrecision),
     186, uint(PythonQtWrapper_QSql::In),
     189, uint(PythonQtWrapper_QSql::Out),
     193, uint(PythonQtWrapper_QSql::InOut),
     199, uint(PythonQtWrapper_QSql::Binary),
     186, uint(PythonQtWrapper_QSql::In),
     189, uint(PythonQtWrapper_QSql::Out),
     193, uint(PythonQtWrapper_QSql::InOut),
     199, uint(PythonQtWrapper_QSql::Binary),
     206, uint(PythonQtWrapper_QSql::Tables),
     213, uint(PythonQtWrapper_QSql::SystemTables),
     226, uint(PythonQtWrapper_QSql::Views),
     232, uint(PythonQtWrapper_QSql::AllTables),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSql[] = {
    "PythonQtWrapper_QSql\0Location\0"
    "NumericalPrecisionPolicy\0ParamTypeFlag\0"
    "ParamType\0TableType\0BeforeFirstRow\0"
    "AfterLastRow\0LowPrecisionInt32\0"
    "LowPrecisionInt64\0LowPrecisionDouble\0"
    "HighPrecision\0In\0Out\0InOut\0Binary\0"
    "Tables\0SystemTables\0Views\0AllTables\0"
};

void PythonQtWrapper_QSql::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PythonQtWrapper_QSql::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSql::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSql,
      qt_meta_data_PythonQtWrapper_QSql, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSql::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSql::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSql::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSql))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSql*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSql::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSqlDatabase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   29,   30,   29, 0x0a,
      70,   63,   30,   29, 0x0a,
     106,  100,   30,   29, 0x0a,
     142,  137,   30,   29, 0x0a,
     172,  168,   29,   29, 0x0a,
     242,  220,  207,   29, 0x0a,
     295,   63,  207,   29, 0x2a,
     360,  340,  207,   29, 0x0a,
     409,  137,  207,   29, 0x2a,
     471,  450,  207,   29, 0x0a,
     544,  527,   29,   29, 0x0a,
     570,  527,  565,   29, 0x0a,
     600,  527,  592,   29, 0x0a,
     630,  527,  592,   29, 0x0a,
     672,   29,  660,   29, 0x0a,
     725,  710,  565,   29, 0x0a,
     763,   29,  565,   29, 0x2a,
     814,  794,  207,   29, 0x0a,
     857,  710,  207,   29, 0x2a,
     895,   29,  207,   29, 0x2a,
     926,  527,  592,   29, 0x0a,
     966,  527,  954,   29, 0x0a,
     988,  527,  592,   29, 0x0a,
    1014,   29,  660,   29, 0x0a,
    1077, 1054, 1044,   29, 0x0a,
    1105,  527, 1044,   29, 0x2a,
    1125,  527,  592,   29, 0x0a,
    1154, 1149,  565,   29, 0x0a,
    1201,  527,  565,   29, 0x0a,
    1223,  527,  565,   29, 0x0a,
    1250,  527,  565,   29, 0x0a,
    1283,  527, 1273,   29, 0x0a,
    1339,  527, 1308,   29, 0x0a,
    1379,  527,  565,   29, 0x0a,
    1430, 1399,  565,   29, 0x0a,
    1466,  527,  592,   29, 0x0a,
    1494,  527, 1490,   29, 0x0a,
    1551, 1524, 1514,   29, 0x0a,
    1598, 1524, 1587,   29, 0x0a,
    1641, 1628,   29,   29, 0x0a,
    1711,  710,   29,   29, 0x0a,
    1755,  527,  565,   29, 0x0a,
    1804, 1779,   29,   29, 0x0a,
    1845,  527,   29,   29, 0x2a,
    1900, 1878,   29,   29, 0x0a,
    1961, 1939,   29,   29, 0x0a,
    2029, 1996,   29,   29, 0x0a,
    2129, 2103,   29,   29, 0x0a,
    2183, 2164,   29,   29, 0x0a,
    2210, 1878,   29,   29, 0x0a,
    2267, 2245,  660,   29, 0x0a,
    2305,  527,  660,   29, 0x2a,
    2327,  527,  565,   29, 0x0a,
    2354,  527,  592,   29, 0x0a,
    2378,   29,  592,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSqlDatabase[] = {
    "PythonQtWrapper_QSqlDatabase\0\0"
    "QSqlDatabase*\0new_QSqlDatabase()\0"
    "driver\0new_QSqlDatabase(QSqlDriver*)\0"
    "other\0new_QSqlDatabase(QSqlDatabase)\0"
    "type\0new_QSqlDatabase(QString)\0obj\0"
    "delete_QSqlDatabase(QSqlDatabase*)\0"
    "QSqlDatabase\0driver,connectionName\0"
    "static_QSqlDatabase_addDatabase(QSqlDriver*,QString)\0"
    "static_QSqlDatabase_addDatabase(QSqlDriver*)\0"
    "type,connectionName\0"
    "static_QSqlDatabase_addDatabase(QString,QString)\0"
    "static_QSqlDatabase_addDatabase(QString)\0"
    "other,connectionName\0"
    "static_QSqlDatabase_cloneDatabase(QSqlDatabase,QString)\0"
    "theWrappedObject\0close(QSqlDatabase*)\0"
    "bool\0commit(QSqlDatabase*)\0QString\0"
    "connectOptions(QSqlDatabase*)\0"
    "connectionName(QSqlDatabase*)\0QStringList\0"
    "static_QSqlDatabase_connectionNames()\0"
    "connectionName\0static_QSqlDatabase_contains(QString)\0"
    "static_QSqlDatabase_contains()\0"
    "connectionName,open\0"
    "static_QSqlDatabase_database(QString,bool)\0"
    "static_QSqlDatabase_database(QString)\0"
    "static_QSqlDatabase_database()\0"
    "databaseName(QSqlDatabase*)\0QSqlDriver*\0"
    "driver(QSqlDatabase*)\0driverName(QSqlDatabase*)\0"
    "static_QSqlDatabase_drivers()\0QSqlQuery\0"
    "theWrappedObject,query\0"
    "exec(QSqlDatabase*,QString)\0"
    "exec(QSqlDatabase*)\0hostName(QSqlDatabase*)\0"
    "name\0static_QSqlDatabase_isDriverAvailable(QString)\0"
    "isOpen(QSqlDatabase*)\0isOpenError(QSqlDatabase*)\0"
    "isValid(QSqlDatabase*)\0QSqlError\0"
    "lastError(QSqlDatabase*)\0"
    "QSql::NumericalPrecisionPolicy\0"
    "numericalPrecisionPolicy(QSqlDatabase*)\0"
    "open(QSqlDatabase*)\0theWrappedObject,user,password\0"
    "open(QSqlDatabase*,QString,QString)\0"
    "password(QSqlDatabase*)\0int\0"
    "port(QSqlDatabase*)\0QSqlIndex\0"
    "theWrappedObject,tablename\0"
    "primaryIndex(QSqlDatabase*,QString)\0"
    "QSqlRecord\0record(QSqlDatabase*,QString)\0"
    "name,creator\0"
    "static_QSqlDatabase_registerSqlDriver(QString,QSqlDriverCreatorBase*)\0"
    "static_QSqlDatabase_removeDatabase(QString)\0"
    "rollback(QSqlDatabase*)\0"
    "theWrappedObject,options\0"
    "setConnectOptions(QSqlDatabase*,QString)\0"
    "setConnectOptions(QSqlDatabase*)\0"
    "theWrappedObject,name\0"
    "setDatabaseName(QSqlDatabase*,QString)\0"
    "theWrappedObject,host\0"
    "setHostName(QSqlDatabase*,QString)\0"
    "theWrappedObject,precisionPolicy\0"
    "setNumericalPrecisionPolicy(QSqlDatabase*,QSql::NumericalPrecisionPoli"
    "cy)\0"
    "theWrappedObject,password\0"
    "setPassword(QSqlDatabase*,QString)\0"
    "theWrappedObject,p\0setPort(QSqlDatabase*,int)\0"
    "setUserName(QSqlDatabase*,QString)\0"
    "theWrappedObject,type\0"
    "tables(QSqlDatabase*,QSql::TableType)\0"
    "tables(QSqlDatabase*)\0transaction(QSqlDatabase*)\0"
    "userName(QSqlDatabase*)\0"
    "py_toString(QSqlDatabase*)\0"
};

void PythonQtWrapper_QSqlDatabase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSqlDatabase *_t = static_cast<PythonQtWrapper_QSqlDatabase *>(_o);
        switch (_id) {
        case 0: { QSqlDatabase* _r = _t->new_QSqlDatabase();
            if (_a[0]) *reinterpret_cast< QSqlDatabase**>(_a[0]) = _r; }  break;
        case 1: { QSqlDatabase* _r = _t->new_QSqlDatabase((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase**>(_a[0]) = _r; }  break;
        case 2: { QSqlDatabase* _r = _t->new_QSqlDatabase((*reinterpret_cast< const QSqlDatabase(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase**>(_a[0]) = _r; }  break;
        case 3: { QSqlDatabase* _r = _t->new_QSqlDatabase((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSqlDatabase((*reinterpret_cast< QSqlDatabase*(*)>(_a[1]))); break;
        case 5: { QSqlDatabase _r = _t->static_QSqlDatabase_addDatabase((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 6: { QSqlDatabase _r = _t->static_QSqlDatabase_addDatabase((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 7: { QSqlDatabase _r = _t->static_QSqlDatabase_addDatabase((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 8: { QSqlDatabase _r = _t->static_QSqlDatabase_addDatabase((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 9: { QSqlDatabase _r = _t->static_QSqlDatabase_cloneDatabase((*reinterpret_cast< const QSqlDatabase(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 10: _t->close((*reinterpret_cast< QSqlDatabase*(*)>(_a[1]))); break;
        case 11: { bool _r = _t->commit((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->connectOptions((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->connectionName((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { QStringList _r = _t->static_QSqlDatabase_connectionNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->static_QSqlDatabase_contains((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->static_QSqlDatabase_contains();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { QSqlDatabase _r = _t->static_QSqlDatabase_database((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 18: { QSqlDatabase _r = _t->static_QSqlDatabase_database((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 19: { QSqlDatabase _r = _t->static_QSqlDatabase_database();
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 20: { QString _r = _t->databaseName((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 21: { QSqlDriver* _r = _t->driver((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDriver**>(_a[0]) = _r; }  break;
        case 22: { QString _r = _t->driverName((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: { QStringList _r = _t->static_QSqlDatabase_drivers();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 24: { QSqlQuery _r = _t->exec((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlQuery*>(_a[0]) = _r; }  break;
        case 25: { QSqlQuery _r = _t->exec((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlQuery*>(_a[0]) = _r; }  break;
        case 26: { QString _r = _t->hostName((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->static_QSqlDatabase_isDriverAvailable((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->isOpen((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->isOpenError((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->isValid((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { QSqlError _r = _t->lastError((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlError*>(_a[0]) = _r; }  break;
        case 32: { QSql::NumericalPrecisionPolicy _r = _t->numericalPrecisionPolicy((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSql::NumericalPrecisionPolicy*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->open((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->open((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { QString _r = _t->password((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 36: { int _r = _t->port((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 37: { QSqlIndex _r = _t->primaryIndex((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlIndex*>(_a[0]) = _r; }  break;
        case 38: { QSqlRecord _r = _t->record((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlRecord*>(_a[0]) = _r; }  break;
        case 39: _t->static_QSqlDatabase_registerSqlDriver((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QSqlDriverCreatorBase*(*)>(_a[2]))); break;
        case 40: _t->static_QSqlDatabase_removeDatabase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: { bool _r = _t->rollback((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: _t->setConnectOptions((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 43: _t->setConnectOptions((*reinterpret_cast< QSqlDatabase*(*)>(_a[1]))); break;
        case 44: _t->setDatabaseName((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 45: _t->setHostName((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 46: _t->setNumericalPrecisionPolicy((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< QSql::NumericalPrecisionPolicy(*)>(_a[2]))); break;
        case 47: _t->setPassword((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 48: _t->setPort((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 49: _t->setUserName((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 50: { QStringList _r = _t->tables((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< QSql::TableType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 51: { QStringList _r = _t->tables((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 52: { bool _r = _t->transaction((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 53: { QString _r = _t->userName((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 54: { QString _r = _t->py_toString((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSqlDatabase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSqlDatabase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlDatabase,
      qt_meta_data_PythonQtWrapper_QSqlDatabase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSqlDatabase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSqlDatabase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSqlDatabase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlDatabase))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlDatabase*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlDatabase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSqlDriver[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       3,  194, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
      93,   89,   27,   27, 0x0a,
     146,  129,  124,   27, 0x0a,
     176,  129,   27,   27, 0x0a,
     195,  129,  124,   27, 0x0a,
     238,  129,  226,   27, 0x0a,
     305,  272,  264,   27, 0x0a,
     405,  370,  264,   27, 0x0a,
     468,  445,  264,   27, 0x2a,
     512,  129,  503,   27, 0x0a,
     551,  532,  124,   27, 0x0a,
     601,  272,  124,   27, 0x0a,
     669,  129,  124,   27, 0x0a,
     689,  129,  124,   27, 0x0a,
     724,  129,  714,   27, 0x0a,
     778,  129,  747,   27, 0x0a,
     869,  816,  124,   27, 0x0a,
     975,  931,  124,   27, 0x2a,
    1068, 1029,  124,   27, 0x2a,
    1152, 1118,  124,   27, 0x2a,
    1219, 1194,  124,   27, 0x2a,
    1273, 1253,  124,   27, 0x2a,
    1336, 1309, 1299,   27, 0x0a,
    1381, 1309, 1370,   27, 0x0a,
    1409,  129,  124,   27, 0x0a,
    1461, 1442,   27,   27, 0x0a,
    1530, 1497,   27,   27, 0x0a,
    1621, 1602,   27,   27, 0x0a,
    1647, 1442,   27,   27, 0x0a,
    1732, 1678,  264,   27, 0x0a,
    1808,  272,  264,   27, 0x0a,
    1894, 1872,  124,   27, 0x0a,
    1951,  129, 1939,   27, 0x0a,
    2017, 1990, 1939,   27, 0x0a,
    2053, 1872,  124,   27, 0x0a,

 // enums: name, flags, count, data
    2102, 0x0,   14,  206,
    2116, 0x0,    2,  234,
    2131, 0x0,    5,  238,

 // enum data: key, value
    2145, uint(PythonQtWrapper_QSqlDriver::Transactions),
    2158, uint(PythonQtWrapper_QSqlDriver::QuerySize),
    2168, uint(PythonQtWrapper_QSqlDriver::BLOB),
    2173, uint(PythonQtWrapper_QSqlDriver::Unicode),
    2181, uint(PythonQtWrapper_QSqlDriver::PreparedQueries),
    2197, uint(PythonQtWrapper_QSqlDriver::NamedPlaceholders),
    2215, uint(PythonQtWrapper_QSqlDriver::PositionalPlaceholders),
    2238, uint(PythonQtWrapper_QSqlDriver::LastInsertId),
    2251, uint(PythonQtWrapper_QSqlDriver::BatchOperations),
    2267, uint(PythonQtWrapper_QSqlDriver::SimpleLocking),
    2281, uint(PythonQtWrapper_QSqlDriver::LowPrecisionNumbers),
    2301, uint(PythonQtWrapper_QSqlDriver::EventNotifications),
    2320, uint(PythonQtWrapper_QSqlDriver::FinishQuery),
    2332, uint(PythonQtWrapper_QSqlDriver::MultipleResultSets),
    2351, uint(PythonQtWrapper_QSqlDriver::FieldName),
    2361, uint(PythonQtWrapper_QSqlDriver::TableName),
    2371, uint(PythonQtWrapper_QSqlDriver::WhereStatement),
    2386, uint(PythonQtWrapper_QSqlDriver::SelectStatement),
    2402, uint(PythonQtWrapper_QSqlDriver::UpdateStatement),
    2418, uint(PythonQtWrapper_QSqlDriver::InsertStatement),
    2434, uint(PythonQtWrapper_QSqlDriver::DeleteStatement),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSqlDriver[] = {
    "PythonQtWrapper_QSqlDriver\0\0QSqlDriver*\0"
    "parent\0new_QSqlDriver(QObject*)\0"
    "new_QSqlDriver()\0obj\0"
    "delete_QSqlDriver(QSqlDriver*)\0bool\0"
    "theWrappedObject\0beginTransaction(QSqlDriver*)\0"
    "close(QSqlDriver*)\0commitTransaction(QSqlDriver*)\0"
    "QSqlResult*\0createResult(QSqlDriver*)\0"
    "QString\0theWrappedObject,identifier,type\0"
    "escapeIdentifier(QSqlDriver*,QString,QSqlDriver::IdentifierType)\0"
    "theWrappedObject,field,trimStrings\0"
    "formatValue(QSqlDriver*,QSqlField,bool)\0"
    "theWrappedObject,field\0"
    "formatValue(QSqlDriver*,QSqlField)\0"
    "QVariant\0handle(QSqlDriver*)\0"
    "theWrappedObject,f\0"
    "hasFeature(QSqlDriver*,QSqlDriver::DriverFeature)\0"
    "isIdentifierEscaped(QSqlDriver*,QString,QSqlDriver::IdentifierType)\0"
    "isOpen(QSqlDriver*)\0isOpenError(QSqlDriver*)\0"
    "QSqlError\0lastError(QSqlDriver*)\0"
    "QSql::NumericalPrecisionPolicy\0"
    "numericalPrecisionPolicy(QSqlDriver*)\0"
    "theWrappedObject,db,user,password,host,port,connOpts\0"
    "open(QSqlDriver*,QString,QString,QString,QString,int,QString)\0"
    "theWrappedObject,db,user,password,host,port\0"
    "open(QSqlDriver*,QString,QString,QString,QString,int)\0"
    "theWrappedObject,db,user,password,host\0"
    "open(QSqlDriver*,QString,QString,QString,QString)\0"
    "theWrappedObject,db,user,password\0"
    "open(QSqlDriver*,QString,QString,QString)\0"
    "theWrappedObject,db,user\0"
    "open(QSqlDriver*,QString,QString)\0"
    "theWrappedObject,db\0open(QSqlDriver*,QString)\0"
    "QSqlIndex\0theWrappedObject,tableName\0"
    "primaryIndex(QSqlDriver*,QString)\0"
    "QSqlRecord\0record(QSqlDriver*,QString)\0"
    "rollbackTransaction(QSqlDriver*)\0"
    "theWrappedObject,e\0"
    "setLastError(QSqlDriver*,QSqlError)\0"
    "theWrappedObject,precisionPolicy\0"
    "setNumericalPrecisionPolicy(QSqlDriver*,QSql::NumericalPrecisionPolicy"
    ")\0"
    "theWrappedObject,o\0setOpen(QSqlDriver*,bool)\0"
    "setOpenError(QSqlDriver*,bool)\0"
    "theWrappedObject,type,tableName,rec,preparedStatement\0"
    "sqlStatement(QSqlDriver*,QSqlDriver::StatementType,QString,QSqlRecord,"
    "bool)\0"
    "stripDelimiters(QSqlDriver*,QString,QSqlDriver::IdentifierType)\0"
    "theWrappedObject,name\0"
    "subscribeToNotification(QSqlDriver*,QString)\0"
    "QStringList\0subscribedToNotifications(QSqlDriver*)\0"
    "theWrappedObject,tableType\0"
    "tables(QSqlDriver*,QSql::TableType)\0"
    "unsubscribeFromNotification(QSqlDriver*,QString)\0"
    "DriverFeature\0IdentifierType\0StatementType\0"
    "Transactions\0QuerySize\0BLOB\0Unicode\0"
    "PreparedQueries\0NamedPlaceholders\0"
    "PositionalPlaceholders\0LastInsertId\0"
    "BatchOperations\0SimpleLocking\0"
    "LowPrecisionNumbers\0EventNotifications\0"
    "FinishQuery\0MultipleResultSets\0FieldName\0"
    "TableName\0WhereStatement\0SelectStatement\0"
    "UpdateStatement\0InsertStatement\0"
    "DeleteStatement\0"
};

void PythonQtWrapper_QSqlDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSqlDriver *_t = static_cast<PythonQtWrapper_QSqlDriver *>(_o);
        switch (_id) {
        case 0: { QSqlDriver* _r = _t->new_QSqlDriver((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDriver**>(_a[0]) = _r; }  break;
        case 1: { QSqlDriver* _r = _t->new_QSqlDriver();
            if (_a[0]) *reinterpret_cast< QSqlDriver**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSqlDriver((*reinterpret_cast< QSqlDriver*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->beginTransaction((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->close((*reinterpret_cast< QSqlDriver*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->commitTransaction((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QSqlResult* _r = _t->createResult((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlResult**>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->escapeIdentifier((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSqlDriver::IdentifierType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->formatValue((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QSqlField(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->formatValue((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QSqlField(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QVariant _r = _t->handle((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->hasFeature((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< QSqlDriver::DriverFeature(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isIdentifierEscaped((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSqlDriver::IdentifierType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isOpen((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isOpenError((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QSqlError _r = _t->lastError((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlError*>(_a[0]) = _r; }  break;
        case 16: { QSql::NumericalPrecisionPolicy _r = _t->numericalPrecisionPolicy((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSql::NumericalPrecisionPolicy*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->open((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->open((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->open((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->open((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->open((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->open((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { QSqlIndex _r = _t->primaryIndex((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlIndex*>(_a[0]) = _r; }  break;
        case 24: { QSqlRecord _r = _t->record((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlRecord*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->rollbackTransaction((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: _t->setLastError((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QSqlError(*)>(_a[2]))); break;
        case 27: _t->setNumericalPrecisionPolicy((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< QSql::NumericalPrecisionPolicy(*)>(_a[2]))); break;
        case 28: _t->setOpen((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 29: _t->setOpenError((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: { QString _r = _t->sqlStatement((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< QSqlDriver::StatementType(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QSqlRecord(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 31: { QString _r = _t->stripDelimiters((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSqlDriver::IdentifierType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->subscribeToNotification((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { QStringList _r = _t->subscribedToNotifications((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 34: { QStringList _r = _t->tables((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< QSql::TableType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 35: { bool _r = _t->unsubscribeFromNotification((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSqlDriver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSqlDriver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlDriver,
      qt_meta_data_PythonQtWrapper_QSqlDriver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSqlDriver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSqlDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSqlDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlDriver))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlDriver*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSqlDriverCreatorBase[] = {

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
      62,   38,   39,   38, 0x0a,
      94,   90,   38,   38, 0x0a,
     176,  159,  147,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSqlDriverCreatorBase[] = {
    "PythonQtWrapper_QSqlDriverCreatorBase\0"
    "\0QSqlDriverCreatorBase*\0"
    "new_QSqlDriverCreatorBase()\0obj\0"
    "delete_QSqlDriverCreatorBase(QSqlDriverCreatorBase*)\0"
    "QSqlDriver*\0theWrappedObject\0"
    "createObject(QSqlDriverCreatorBase*)\0"
};

void PythonQtWrapper_QSqlDriverCreatorBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSqlDriverCreatorBase *_t = static_cast<PythonQtWrapper_QSqlDriverCreatorBase *>(_o);
        switch (_id) {
        case 0: { QSqlDriverCreatorBase* _r = _t->new_QSqlDriverCreatorBase();
            if (_a[0]) *reinterpret_cast< QSqlDriverCreatorBase**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QSqlDriverCreatorBase((*reinterpret_cast< QSqlDriverCreatorBase*(*)>(_a[1]))); break;
        case 2: { QSqlDriver* _r = _t->createObject((*reinterpret_cast< QSqlDriverCreatorBase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDriver**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSqlDriverCreatorBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSqlDriverCreatorBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlDriverCreatorBase,
      qt_meta_data_PythonQtWrapper_QSqlDriverCreatorBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSqlDriverCreatorBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSqlDriverCreatorBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSqlDriverCreatorBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlDriverCreatorBase))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlDriverCreatorBase*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlDriverCreatorBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSqlError[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       1,  104, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   38,   27,   26, 0x0a,
     105,   69,   27,   26, 0x0a,
     190,  161,   27,   26, 0x2a,
     266,  242,   27,   26, 0x2a,
     308,  297,   27,   26, 0x2a,
     331,   26,   27,   26, 0x2a,
     351,  347,   26,   26, 0x0a,
     405,  388,  380,   26, 0x0a,
     430,  388,  380,   26, 0x0a,
     458,  388,  453,   26, 0x0a,
     482,  388,  478,   26, 0x0a,
     531,  501,   26,   26, 0x0a,
     595,  567,   26,   26, 0x0a,
     653,  629,   26,   26, 0x0a,
     701,  679,   26,   26, 0x0a,
     742,  388,  380,   26, 0x0a,
     780,  388,  759,   26, 0x0a,
     797,   26,  380,   26, 0x0a,

 // enums: name, flags, count, data
     821, 0x0,    5,  108,

 // enum data: key, value
     831, uint(PythonQtWrapper_QSqlError::NoError),
     839, uint(PythonQtWrapper_QSqlError::ConnectionError),
     855, uint(PythonQtWrapper_QSqlError::StatementError),
     870, uint(PythonQtWrapper_QSqlError::TransactionError),
     887, uint(PythonQtWrapper_QSqlError::UnknownError),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSqlError[] = {
    "PythonQtWrapper_QSqlError\0\0QSqlError*\0"
    "other\0new_QSqlError(QSqlError)\0"
    "driverText,databaseText,type,number\0"
    "new_QSqlError(QString,QString,QSqlError::ErrorType,int)\0"
    "driverText,databaseText,type\0"
    "new_QSqlError(QString,QString,QSqlError::ErrorType)\0"
    "driverText,databaseText\0"
    "new_QSqlError(QString,QString)\0"
    "driverText\0new_QSqlError(QString)\0"
    "new_QSqlError()\0obj\0delete_QSqlError(QSqlError*)\0"
    "QString\0theWrappedObject\0"
    "databaseText(QSqlError*)\0"
    "driverText(QSqlError*)\0bool\0"
    "isValid(QSqlError*)\0int\0number(QSqlError*)\0"
    "theWrappedObject,databaseText\0"
    "setDatabaseText(QSqlError*,QString)\0"
    "theWrappedObject,driverText\0"
    "setDriverText(QSqlError*,QString)\0"
    "theWrappedObject,number\0"
    "setNumber(QSqlError*,int)\0"
    "theWrappedObject,type\0"
    "setType(QSqlError*,QSqlError::ErrorType)\0"
    "text(QSqlError*)\0QSqlError::ErrorType\0"
    "type(QSqlError*)\0py_toString(QSqlError*)\0"
    "ErrorType\0NoError\0ConnectionError\0"
    "StatementError\0TransactionError\0"
    "UnknownError\0"
};

void PythonQtWrapper_QSqlError::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSqlError *_t = static_cast<PythonQtWrapper_QSqlError *>(_o);
        switch (_id) {
        case 0: { QSqlError* _r = _t->new_QSqlError((*reinterpret_cast< const QSqlError(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlError**>(_a[0]) = _r; }  break;
        case 1: { QSqlError* _r = _t->new_QSqlError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSqlError::ErrorType(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSqlError**>(_a[0]) = _r; }  break;
        case 2: { QSqlError* _r = _t->new_QSqlError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSqlError::ErrorType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSqlError**>(_a[0]) = _r; }  break;
        case 3: { QSqlError* _r = _t->new_QSqlError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlError**>(_a[0]) = _r; }  break;
        case 4: { QSqlError* _r = _t->new_QSqlError((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlError**>(_a[0]) = _r; }  break;
        case 5: { QSqlError* _r = _t->new_QSqlError();
            if (_a[0]) *reinterpret_cast< QSqlError**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QSqlError((*reinterpret_cast< QSqlError*(*)>(_a[1]))); break;
        case 7: { QString _r = _t->databaseText((*reinterpret_cast< QSqlError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->driverText((*reinterpret_cast< QSqlError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isValid((*reinterpret_cast< QSqlError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->number((*reinterpret_cast< QSqlError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: _t->setDatabaseText((*reinterpret_cast< QSqlError*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->setDriverText((*reinterpret_cast< QSqlError*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->setNumber((*reinterpret_cast< QSqlError*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->setType((*reinterpret_cast< QSqlError*(*)>(_a[1])),(*reinterpret_cast< QSqlError::ErrorType(*)>(_a[2]))); break;
        case 15: { QString _r = _t->text((*reinterpret_cast< QSqlError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { QSqlError::ErrorType _r = _t->type((*reinterpret_cast< QSqlError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlError::ErrorType*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->py_toString((*reinterpret_cast< QSqlError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSqlError::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSqlError::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlError,
      qt_meta_data_PythonQtWrapper_QSqlError, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSqlError::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSqlError::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSqlError::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlError))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlError*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlError::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSqlField[] = {

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
      44,   38,   27,   26, 0x0a,
      84,   69,   27,   26, 0x0a,
     132,  122,   27,   26, 0x2a,
     155,   26,   27,   26, 0x2a,
     175,  171,   26,   26, 0x0a,
     221,  204,   26,   26, 0x0a,
     248,  204,  239,   26, 0x0a,
     278,  204,  273,   26, 0x0a,
     302,  204,  273,   26, 0x0a,
     326,  204,  273,   26, 0x0a,
     345,  204,  273,   26, 0x0a,
     368,  204,  273,   26, 0x0a,
     392,  204,  388,   26, 0x0a,
     419,  204,  411,   26, 0x0a,
     459,  436,  273,   26, 0x0a,
     488,  436,  273,   26, 0x0a,
     517,  204,  388,   26, 0x0a,
     565,  204,  539,   26, 0x0a,
     617,  592,   26,   26, 0x0a,
     670,  647,   26,   26, 0x0a,
     728,  707,   26,   26, 0x0a,
     787,  758,   26,   26, 0x0a,
     835,  813,   26,   26, 0x0a,
     890,  863,   26,   26, 0x0a,
     945,  919,   26,   26, 0x0a,
    1000,  974,   26,   26, 0x0a,
    1053, 1029,   26,   26, 0x0a,
    1131, 1109,   26,   26, 0x0a,
    1158, 1109,   26,   26, 0x0a,
    1193,  647,   26,   26, 0x0a,
    1238,  204, 1223,   26, 0x0a,
    1255,  204,  388,   26, 0x0a,
    1274,  204,  239,   26, 0x0a,
    1292,   26,  411,   26, 0x0a,
    1316,  171,  273,   26, 0x0a,

 // enums: name, flags, count, data
    1340, 0x0,    3,  193,

 // enum data: key, value
    1355, uint(PythonQtWrapper_QSqlField::Unknown),
    1363, uint(PythonQtWrapper_QSqlField::Optional),
    1372, uint(PythonQtWrapper_QSqlField::Required),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSqlField[] = {
    "PythonQtWrapper_QSqlField\0\0QSqlField*\0"
    "other\0new_QSqlField(QSqlField)\0"
    "fieldName,type\0new_QSqlField(QString,QVariant::Type)\0"
    "fieldName\0new_QSqlField(QString)\0"
    "new_QSqlField()\0obj\0delete_QSqlField(QSqlField*)\0"
    "theWrappedObject\0clear(QSqlField*)\0"
    "QVariant\0defaultValue(QSqlField*)\0"
    "bool\0isAutoValue(QSqlField*)\0"
    "isGenerated(QSqlField*)\0isNull(QSqlField*)\0"
    "isReadOnly(QSqlField*)\0isValid(QSqlField*)\0"
    "int\0length(QSqlField*)\0QString\0"
    "name(QSqlField*)\0theWrappedObject,other\0"
    "__ne__(QSqlField*,QSqlField)\0"
    "__eq__(QSqlField*,QSqlField)\0"
    "precision(QSqlField*)\0QSqlField::RequiredStatus\0"
    "requiredStatus(QSqlField*)\0"
    "theWrappedObject,autoVal\0"
    "setAutoValue(QSqlField*,bool)\0"
    "theWrappedObject,value\0"
    "setDefaultValue(QSqlField*,QVariant)\0"
    "theWrappedObject,gen\0setGenerated(QSqlField*,bool)\0"
    "theWrappedObject,fieldLength\0"
    "setLength(QSqlField*,int)\0"
    "theWrappedObject,name\0setName(QSqlField*,QString)\0"
    "theWrappedObject,precision\0"
    "setPrecision(QSqlField*,int)\0"
    "theWrappedObject,readOnly\0"
    "setReadOnly(QSqlField*,bool)\0"
    "theWrappedObject,required\0"
    "setRequired(QSqlField*,bool)\0"
    "theWrappedObject,status\0"
    "setRequiredStatus(QSqlField*,QSqlField::RequiredStatus)\0"
    "theWrappedObject,type\0setSqlType(QSqlField*,int)\0"
    "setType(QSqlField*,QVariant::Type)\0"
    "setValue(QSqlField*,QVariant)\0"
    "QVariant::Type\0type(QSqlField*)\0"
    "typeID(QSqlField*)\0value(QSqlField*)\0"
    "py_toString(QSqlField*)\0__nonzero__(QSqlField*)\0"
    "RequiredStatus\0Unknown\0Optional\0"
    "Required\0"
};

void PythonQtWrapper_QSqlField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSqlField *_t = static_cast<PythonQtWrapper_QSqlField *>(_o);
        switch (_id) {
        case 0: { QSqlField* _r = _t->new_QSqlField((*reinterpret_cast< const QSqlField(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlField**>(_a[0]) = _r; }  break;
        case 1: { QSqlField* _r = _t->new_QSqlField((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QVariant::Type(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlField**>(_a[0]) = _r; }  break;
        case 2: { QSqlField* _r = _t->new_QSqlField((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlField**>(_a[0]) = _r; }  break;
        case 3: { QSqlField* _r = _t->new_QSqlField();
            if (_a[0]) *reinterpret_cast< QSqlField**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSqlField((*reinterpret_cast< QSqlField*(*)>(_a[1]))); break;
        case 5: _t->clear((*reinterpret_cast< QSqlField*(*)>(_a[1]))); break;
        case 6: { QVariant _r = _t->defaultValue((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isAutoValue((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isGenerated((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isNull((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isReadOnly((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isValid((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->length((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->name((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->__ne__((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< const QSqlField(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->__eq__((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< const QSqlField(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->precision((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { QSqlField::RequiredStatus _r = _t->requiredStatus((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlField::RequiredStatus*>(_a[0]) = _r; }  break;
        case 18: _t->setAutoValue((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->setDefaultValue((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 20: _t->setGenerated((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->setLength((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->setName((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 23: _t->setPrecision((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->setReadOnly((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 25: _t->setRequired((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 26: _t->setRequiredStatus((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< QSqlField::RequiredStatus(*)>(_a[2]))); break;
        case 27: _t->setSqlType((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->setType((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< QVariant::Type(*)>(_a[2]))); break;
        case 29: _t->setValue((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 30: { QVariant::Type _r = _t->type((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant::Type*>(_a[0]) = _r; }  break;
        case 31: { int _r = _t->typeID((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 32: { QVariant _r = _t->value((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 33: { QString _r = _t->py_toString((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->__nonzero__((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSqlField::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSqlField::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlField,
      qt_meta_data_PythonQtWrapper_QSqlField, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSqlField::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSqlField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSqlField::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlField))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlField*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSqlIndex[] = {

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
      44,   38,   27,   26, 0x0a,
      85,   69,   27,   26, 0x0a,
     127,  116,   27,   26, 0x2a,
     150,   26,   27,   26, 0x2a,
     170,  166,   26,   26, 0x0a,
     222,  199,   26,   26, 0x0a,
     279,  251,   26,   26, 0x0a,
     338,  321,  313,   26, 0x0a,
     385,  366,  361,   26, 0x0a,
     414,  321,  313,   26, 0x0a,
     459,  431,   26,   26, 0x0a,
     517,  493,   26,   26, 0x0a,
     574,  552,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSqlIndex[] = {
    "PythonQtWrapper_QSqlIndex\0\0QSqlIndex*\0"
    "other\0new_QSqlIndex(QSqlIndex)\0"
    "cursorName,name\0new_QSqlIndex(QString,QString)\0"
    "cursorName\0new_QSqlIndex(QString)\0"
    "new_QSqlIndex()\0obj\0delete_QSqlIndex(QSqlIndex*)\0"
    "theWrappedObject,field\0"
    "append(QSqlIndex*,QSqlField)\0"
    "theWrappedObject,field,desc\0"
    "append(QSqlIndex*,QSqlField,bool)\0"
    "QString\0theWrappedObject\0"
    "cursorName(QSqlIndex*)\0bool\0"
    "theWrappedObject,i\0isDescending(QSqlIndex*,int)\0"
    "name(QSqlIndex*)\0theWrappedObject,cursorName\0"
    "setCursorName(QSqlIndex*,QString)\0"
    "theWrappedObject,i,desc\0"
    "setDescending(QSqlIndex*,int,bool)\0"
    "theWrappedObject,name\0setName(QSqlIndex*,QString)\0"
};

void PythonQtWrapper_QSqlIndex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSqlIndex *_t = static_cast<PythonQtWrapper_QSqlIndex *>(_o);
        switch (_id) {
        case 0: { QSqlIndex* _r = _t->new_QSqlIndex((*reinterpret_cast< const QSqlIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlIndex**>(_a[0]) = _r; }  break;
        case 1: { QSqlIndex* _r = _t->new_QSqlIndex((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlIndex**>(_a[0]) = _r; }  break;
        case 2: { QSqlIndex* _r = _t->new_QSqlIndex((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlIndex**>(_a[0]) = _r; }  break;
        case 3: { QSqlIndex* _r = _t->new_QSqlIndex();
            if (_a[0]) *reinterpret_cast< QSqlIndex**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSqlIndex((*reinterpret_cast< QSqlIndex*(*)>(_a[1]))); break;
        case 5: _t->append((*reinterpret_cast< QSqlIndex*(*)>(_a[1])),(*reinterpret_cast< const QSqlField(*)>(_a[2]))); break;
        case 6: _t->append((*reinterpret_cast< QSqlIndex*(*)>(_a[1])),(*reinterpret_cast< const QSqlField(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: { QString _r = _t->cursorName((*reinterpret_cast< QSqlIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isDescending((*reinterpret_cast< QSqlIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->name((*reinterpret_cast< QSqlIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: _t->setCursorName((*reinterpret_cast< QSqlIndex*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->setDescending((*reinterpret_cast< QSqlIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->setName((*reinterpret_cast< QSqlIndex*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSqlIndex::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSqlIndex::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlIndex,
      qt_meta_data_PythonQtWrapper_QSqlIndex, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSqlIndex::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSqlIndex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSqlIndex::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlIndex))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlIndex*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlIndex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSqlQuery[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       1,  259, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      41,   38,   27,   26, 0x0a,
      71,   69,   27,   26, 0x0a,
     104,   98,   27,   26, 0x0a,
     138,  129,   27,   26, 0x0a,
     180,  174,   27,   26, 0x2a,
     203,   26,   27,   26, 0x2a,
     223,  219,   26,   26, 0x0a,
     278,  252,   26,   26, 0x0a,
     349,  328,   26,   26, 0x2a,
     404,  387,  383,   26, 0x0a,
     457,  419,   26,   26, 0x0a,
     545,  512,   26,   26, 0x2a,
     614,  584,   26,   26, 0x0a,
     690,  665,   26,   26, 0x2a,
     763,  734,  725,   26, 0x0a,
     815,  794,  725,   26, 0x0a,
     865,  387,  842,   26, 0x0a,
     889,  387,   26,   26, 0x0a,
     925,  387,  907,   26, 0x0a,
     949,  387,  944,   26, 0x0a,
     989,  966,  944,   26, 0x0a,
    1036, 1014,  944,   26, 0x0a,
    1088,  387,  944,   26, 0x2a,
    1118,  387, 1110,   26, 0x0a,
    1144,  387,   26,   26, 0x0a,
    1163,  387,  944,   26, 0x0a,
    1181,  387,  944,   26, 0x0a,
    1202,  387,  944,   26, 0x0a,
    1251, 1228,  944,   26, 0x0a,
    1274,  387,  944,   26, 0x0a,
    1295,  387,  944,   26, 0x0a,
    1315,  387,  944,   26, 0x0a,
    1342,  387, 1332,   26, 0x0a,
    1364,  387,  725,   26, 0x0a,
    1389,  387, 1110,   26, 0x0a,
    1411,  387,  944,   26, 0x0a,
    1428,  387,  944,   26, 0x0a,
    1451,  387,  383,   26, 0x0a,
    1510,  387, 1479,   26, 0x0a,
    1547,  966,  944,   26, 0x0a,
    1575,  387,  944,   26, 0x0a,
    1607,  387, 1596,   26, 0x0a,
    1644,  387, 1626,   26, 0x0a,
    1691, 1663,  944,   26, 0x0a,
    1736, 1717,  944,   26, 0x2a,
    1782, 1757,   26,   26, 0x0a,
    1847, 1814,   26,   26, 0x0a,
    1918,  387,  383,   26, 0x0a,
    1935, 1717,  725,   26, 0x0a,

 // enums: name, flags, count, data
    1957, 0x0,    2,  263,

 // enum data: key, value
    1976, uint(PythonQtWrapper_QSqlQuery::ValuesAsRows),
    1989, uint(PythonQtWrapper_QSqlQuery::ValuesAsColumns),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSqlQuery[] = {
    "PythonQtWrapper_QSqlQuery\0\0QSqlQuery*\0"
    "db\0new_QSqlQuery(QSqlDatabase)\0r\0"
    "new_QSqlQuery(QSqlResult*)\0other\0"
    "new_QSqlQuery(QSqlQuery)\0query,db\0"
    "new_QSqlQuery(QString,QSqlDatabase)\0"
    "query\0new_QSqlQuery(QString)\0"
    "new_QSqlQuery()\0obj\0delete_QSqlQuery(QSqlQuery*)\0"
    "theWrappedObject,val,type\0"
    "addBindValue(QSqlQuery*,QVariant,QSql::ParamType)\0"
    "theWrappedObject,val\0"
    "addBindValue(QSqlQuery*,QVariant)\0int\0"
    "theWrappedObject\0at(QSqlQuery*)\0"
    "theWrappedObject,placeholder,val,type\0"
    "bindValue(QSqlQuery*,QString,QVariant,QSql::ParamType)\0"
    "theWrappedObject,placeholder,val\0"
    "bindValue(QSqlQuery*,QString,QVariant)\0"
    "theWrappedObject,pos,val,type\0"
    "bindValue(QSqlQuery*,int,QVariant,QSql::ParamType)\0"
    "theWrappedObject,pos,val\0"
    "bindValue(QSqlQuery*,int,QVariant)\0"
    "QVariant\0theWrappedObject,placeholder\0"
    "boundValue(QSqlQuery*,QString)\0"
    "theWrappedObject,pos\0boundValue(QSqlQuery*,int)\0"
    "QMap<QString,QVariant>\0boundValues(QSqlQuery*)\0"
    "clear(QSqlQuery*)\0const QSqlDriver*\0"
    "driver(QSqlQuery*)\0bool\0exec(QSqlQuery*)\0"
    "theWrappedObject,query\0exec(QSqlQuery*,QString)\0"
    "theWrappedObject,mode\0"
    "execBatch(QSqlQuery*,QSqlQuery::BatchExecutionMode)\0"
    "execBatch(QSqlQuery*)\0QString\0"
    "executedQuery(QSqlQuery*)\0finish(QSqlQuery*)\0"
    "first(QSqlQuery*)\0isActive(QSqlQuery*)\0"
    "isForwardOnly(QSqlQuery*)\0"
    "theWrappedObject,field\0isNull(QSqlQuery*,int)\0"
    "isSelect(QSqlQuery*)\0isValid(QSqlQuery*)\0"
    "last(QSqlQuery*)\0QSqlError\0"
    "lastError(QSqlQuery*)\0lastInsertId(QSqlQuery*)\0"
    "lastQuery(QSqlQuery*)\0next(QSqlQuery*)\0"
    "nextResult(QSqlQuery*)\0"
    "numRowsAffected(QSqlQuery*)\0"
    "QSql::NumericalPrecisionPolicy\0"
    "numericalPrecisionPolicy(QSqlQuery*)\0"
    "prepare(QSqlQuery*,QString)\0"
    "previous(QSqlQuery*)\0QSqlRecord\0"
    "record(QSqlQuery*)\0const QSqlResult*\0"
    "result(QSqlQuery*)\0theWrappedObject,i,relative\0"
    "seek(QSqlQuery*,int,bool)\0theWrappedObject,i\0"
    "seek(QSqlQuery*,int)\0theWrappedObject,forward\0"
    "setForwardOnly(QSqlQuery*,bool)\0"
    "theWrappedObject,precisionPolicy\0"
    "setNumericalPrecisionPolicy(QSqlQuery*,QSql::NumericalPrecisionPolicy)\0"
    "size(QSqlQuery*)\0value(QSqlQuery*,int)\0"
    "BatchExecutionMode\0ValuesAsRows\0"
    "ValuesAsColumns\0"
};

void PythonQtWrapper_QSqlQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSqlQuery *_t = static_cast<PythonQtWrapper_QSqlQuery *>(_o);
        switch (_id) {
        case 0: { QSqlQuery* _r = _t->new_QSqlQuery((*reinterpret_cast< QSqlDatabase(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlQuery**>(_a[0]) = _r; }  break;
        case 1: { QSqlQuery* _r = _t->new_QSqlQuery((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlQuery**>(_a[0]) = _r; }  break;
        case 2: { QSqlQuery* _r = _t->new_QSqlQuery((*reinterpret_cast< const QSqlQuery(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlQuery**>(_a[0]) = _r; }  break;
        case 3: { QSqlQuery* _r = _t->new_QSqlQuery((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QSqlDatabase(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlQuery**>(_a[0]) = _r; }  break;
        case 4: { QSqlQuery* _r = _t->new_QSqlQuery((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlQuery**>(_a[0]) = _r; }  break;
        case 5: { QSqlQuery* _r = _t->new_QSqlQuery();
            if (_a[0]) *reinterpret_cast< QSqlQuery**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QSqlQuery((*reinterpret_cast< QSqlQuery*(*)>(_a[1]))); break;
        case 7: _t->addBindValue((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< QSql::ParamType(*)>(_a[3]))); break;
        case 8: _t->addBindValue((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 9: { int _r = _t->at((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->bindValue((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< QSql::ParamType(*)>(_a[4]))); break;
        case 11: _t->bindValue((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 12: _t->bindValue((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< QSql::ParamType(*)>(_a[4]))); break;
        case 13: _t->bindValue((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 14: { QVariant _r = _t->boundValue((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 15: { QVariant _r = _t->boundValue((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 16: { QMap<QString,QVariant> _r = _t->boundValues((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMap<QString,QVariant>*>(_a[0]) = _r; }  break;
        case 17: _t->clear((*reinterpret_cast< QSqlQuery*(*)>(_a[1]))); break;
        case 18: { const QSqlDriver* _r = _t->driver((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QSqlDriver**>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->exec((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->exec((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->execBatch((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< QSqlQuery::BatchExecutionMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->execBatch((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { QString _r = _t->executedQuery((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: _t->finish((*reinterpret_cast< QSqlQuery*(*)>(_a[1]))); break;
        case 25: { bool _r = _t->first((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->isActive((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->isForwardOnly((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->isNull((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->isSelect((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->isValid((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->last((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { QSqlError _r = _t->lastError((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlError*>(_a[0]) = _r; }  break;
        case 33: { QVariant _r = _t->lastInsertId((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 34: { QString _r = _t->lastQuery((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 35: { bool _r = _t->next((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->nextResult((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { int _r = _t->numRowsAffected((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 38: { QSql::NumericalPrecisionPolicy _r = _t->numericalPrecisionPolicy((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSql::NumericalPrecisionPolicy*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->prepare((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->previous((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { QSqlRecord _r = _t->record((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlRecord*>(_a[0]) = _r; }  break;
        case 42: { const QSqlResult* _r = _t->result((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QSqlResult**>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->seek((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->seek((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: _t->setForwardOnly((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 46: _t->setNumericalPrecisionPolicy((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< QSql::NumericalPrecisionPolicy(*)>(_a[2]))); break;
        case 47: { int _r = _t->size((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 48: { QVariant _r = _t->value((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSqlQuery::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSqlQuery::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlQuery,
      qt_meta_data_PythonQtWrapper_QSqlQuery, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSqlQuery::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSqlQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSqlQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlQuery))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlQuery*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSqlQueryModel[] = {

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
      55,   48,   32,   31, 0x0a,
      84,   31,   32,   31, 0x2a,
     109,  105,   31,   31, 0x0a,
     177,  153,  148,   31, 0x0a,
     236,  219,  148,   31, 0x2a,
     266,  219,   31,   31, 0x0a,
     293,  153,  289,   31, 0x0a,
     334,  219,  289,   31, 0x2a,
     399,  372,  363,   31, 0x0a,
     459,  437,  363,   31, 0x2a,
     493,  153,   31,   31, 0x0a,
     532,  219,   31,   31, 0x2a,
     601,  559,  363,   31, 0x0a,
     690,  653,  363,   31, 0x2a,
     750,  437,  738,   31, 0x0a,
     829,  792,  148,   31, 0x0a,
     910,  880,  148,   31, 0x2a,
     959,  219,  949,   31, 0x0a,
     996,  219,  986,   31, 0x0a,
    1019,  219,   31,   31, 0x0a,
    1059,  219, 1048,   31, 0x0a,
    1104, 1083, 1048,   31, 0x0a,
    1132,  792,  148,   31, 0x0a,
    1183,  880,  148,   31, 0x2a,
    1222,  153,  289,   31, 0x0a,
    1260,  219,  289,   31, 0x2a,
    1334, 1286,  148,   31, 0x0a,
    1441, 1398,  148,   31, 0x2a,
    1524, 1501,   31,   31, 0x0a,
    1587, 1564,   31,   31, 0x0a,
    1649, 1623,   31,   31, 0x0a,
    1696, 1564,   31,   31, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSqlQueryModel[] = {
    "PythonQtWrapper_QSqlQueryModel\0\0"
    "QSqlQueryModel*\0parent\0"
    "new_QSqlQueryModel(QObject*)\0"
    "new_QSqlQueryModel()\0obj\0"
    "delete_QSqlQueryModel(QSqlQueryModel*)\0"
    "bool\0theWrappedObject,parent\0"
    "canFetchMore(QSqlQueryModel*,QModelIndex)\0"
    "theWrappedObject\0canFetchMore(QSqlQueryModel*)\0"
    "clear(QSqlQueryModel*)\0int\0"
    "columnCount(QSqlQueryModel*,QModelIndex)\0"
    "columnCount(QSqlQueryModel*)\0QVariant\0"
    "theWrappedObject,item,role\0"
    "data(QSqlQueryModel*,QModelIndex,int)\0"
    "theWrappedObject,item\0"
    "data(QSqlQueryModel*,QModelIndex)\0"
    "fetchMore(QSqlQueryModel*,QModelIndex)\0"
    "fetchMore(QSqlQueryModel*)\0"
    "theWrappedObject,section,orientation,role\0"
    "headerData(QSqlQueryModel*,int,Qt::Orientation,int)\0"
    "theWrappedObject,section,orientation\0"
    "headerData(QSqlQueryModel*,int,Qt::Orientation)\0"
    "QModelIndex\0indexInQuery(QSqlQueryModel*,QModelIndex)\0"
    "theWrappedObject,column,count,parent\0"
    "insertColumns(QSqlQueryModel*,int,int,QModelIndex)\0"
    "theWrappedObject,column,count\0"
    "insertColumns(QSqlQueryModel*,int,int)\0"
    "QSqlError\0lastError(QSqlQueryModel*)\0"
    "QSqlQuery\0query(QSqlQueryModel*)\0"
    "queryChange(QSqlQueryModel*)\0QSqlRecord\0"
    "record(QSqlQueryModel*)\0theWrappedObject,row\0"
    "record(QSqlQueryModel*,int)\0"
    "removeColumns(QSqlQueryModel*,int,int,QModelIndex)\0"
    "removeColumns(QSqlQueryModel*,int,int)\0"
    "rowCount(QSqlQueryModel*,QModelIndex)\0"
    "rowCount(QSqlQueryModel*)\0"
    "theWrappedObject,section,orientation,value,role\0"
    "setHeaderData(QSqlQueryModel*,int,Qt::Orientation,QVariant,int)\0"
    "theWrappedObject,section,orientation,value\0"
    "setHeaderData(QSqlQueryModel*,int,Qt::Orientation,QVariant)\0"
    "theWrappedObject,error\0"
    "setLastError(QSqlQueryModel*,QSqlError)\0"
    "theWrappedObject,query\0"
    "setQuery(QSqlQueryModel*,QSqlQuery)\0"
    "theWrappedObject,query,db\0"
    "setQuery(QSqlQueryModel*,QString,QSqlDatabase)\0"
    "setQuery(QSqlQueryModel*,QString)\0"
};

void PythonQtWrapper_QSqlQueryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSqlQueryModel *_t = static_cast<PythonQtWrapper_QSqlQueryModel *>(_o);
        switch (_id) {
        case 0: { QSqlQueryModel* _r = _t->new_QSqlQueryModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlQueryModel**>(_a[0]) = _r; }  break;
        case 1: { QSqlQueryModel* _r = _t->new_QSqlQueryModel();
            if (_a[0]) *reinterpret_cast< QSqlQueryModel**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSqlQueryModel((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->canFetchMore((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->canFetchMore((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->clear((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1]))); break;
        case 6: { int _r = _t->columnCount((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->columnCount((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { QVariant _r = _t->data((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 9: { QVariant _r = _t->data((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 10: _t->fetchMore((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 11: _t->fetchMore((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1]))); break;
        case 12: { QVariant _r = _t->headerData((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 13: { QVariant _r = _t->headerData((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 14: { QModelIndex _r = _t->indexInQuery((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->insertColumns((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->insertColumns((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { QSqlError _r = _t->lastError((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlError*>(_a[0]) = _r; }  break;
        case 18: { QSqlQuery _r = _t->query((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlQuery*>(_a[0]) = _r; }  break;
        case 19: _t->queryChange((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1]))); break;
        case 20: { QSqlRecord _r = _t->record((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlRecord*>(_a[0]) = _r; }  break;
        case 21: { QSqlRecord _r = _t->record((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlRecord*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->removeColumns((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->removeColumns((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->rowCount((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->rowCount((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->setHeaderData((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->setHeaderData((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: _t->setLastError((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QSqlError(*)>(_a[2]))); break;
        case 29: _t->setQuery((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QSqlQuery(*)>(_a[2]))); break;
        case 30: _t->setQuery((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QSqlDatabase(*)>(_a[3]))); break;
        case 31: _t->setQuery((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSqlQueryModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSqlQueryModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlQueryModel,
      qt_meta_data_PythonQtWrapper_QSqlQueryModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSqlQueryModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSqlQueryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSqlQueryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlQueryModel))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlQueryModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlQueryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSqlRecord[] = {

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
      40,   27,   28,   27, 0x0a,
      63,   57,   28,   27, 0x0a,
      94,   90,   27,   27, 0x0a,
     148,  125,   27,   27, 0x0a,
     195,  178,   27,   27, 0x0a,
     214,  178,   27,   27, 0x0a,
     266,  244,  239,   27, 0x0a,
     300,  178,  296,   27, 0x0a,
     329,  244,  319,   27, 0x0a,
     375,  356,  319,   27, 0x0a,
     406,  356,  398,   27, 0x0a,
     433,  244,  296,   27, 0x0a,
     489,  462,   27,   27, 0x0a,
     523,  178,  239,   27, 0x0a,
     544,  244,  239,   27, 0x0a,
     577,  356,  239,   27, 0x0a,
     606,  244,  239,   27, 0x0a,
     634,  356,  239,   27, 0x0a,
     681,  658,  239,   27, 0x0a,
     712,  658,  239,   27, 0x0a,
     764,  743,   27,   27, 0x0a,
     788,  462,   27,   27, 0x0a,
     855,  823,   27,   27, 0x0a,
     923,  894,   27,   27, 0x0a,
     958,  244,   27,   27, 0x0a,
     987,  356,   27,   27, 0x0a,
    1038, 1012,   27,   27, 0x0a,
    1100, 1077,   27,   27, 0x0a,
    1144,  244, 1135,   27, 0x0a,
    1171,  356, 1135,   27, 0x0a,
    1194,   27,  398,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSqlRecord[] = {
    "PythonQtWrapper_QSqlRecord\0\0QSqlRecord*\0"
    "new_QSqlRecord()\0other\0"
    "new_QSqlRecord(QSqlRecord)\0obj\0"
    "delete_QSqlRecord(QSqlRecord*)\0"
    "theWrappedObject,field\0"
    "append(QSqlRecord*,QSqlField)\0"
    "theWrappedObject\0clear(QSqlRecord*)\0"
    "clearValues(QSqlRecord*)\0bool\0"
    "theWrappedObject,name\0"
    "contains(QSqlRecord*,QString)\0int\0"
    "count(QSqlRecord*)\0QSqlField\0"
    "field(QSqlRecord*,QString)\0"
    "theWrappedObject,i\0field(QSqlRecord*,int)\0"
    "QString\0fieldName(QSqlRecord*,int)\0"
    "indexOf(QSqlRecord*,QString)\0"
    "theWrappedObject,pos,field\0"
    "insert(QSqlRecord*,int,QSqlField)\0"
    "isEmpty(QSqlRecord*)\0"
    "isGenerated(QSqlRecord*,QString)\0"
    "isGenerated(QSqlRecord*,int)\0"
    "isNull(QSqlRecord*,QString)\0"
    "isNull(QSqlRecord*,int)\0theWrappedObject,other\0"
    "__ne__(QSqlRecord*,QSqlRecord)\0"
    "__eq__(QSqlRecord*,QSqlRecord)\0"
    "theWrappedObject,pos\0remove(QSqlRecord*,int)\0"
    "replace(QSqlRecord*,int,QSqlField)\0"
    "theWrappedObject,name,generated\0"
    "setGenerated(QSqlRecord*,QString,bool)\0"
    "theWrappedObject,i,generated\0"
    "setGenerated(QSqlRecord*,int,bool)\0"
    "setNull(QSqlRecord*,QString)\0"
    "setNull(QSqlRecord*,int)\0"
    "theWrappedObject,name,val\0"
    "setValue(QSqlRecord*,QString,QVariant)\0"
    "theWrappedObject,i,val\0"
    "setValue(QSqlRecord*,int,QVariant)\0"
    "QVariant\0value(QSqlRecord*,QString)\0"
    "value(QSqlRecord*,int)\0py_toString(QSqlRecord*)\0"
};

void PythonQtWrapper_QSqlRecord::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSqlRecord *_t = static_cast<PythonQtWrapper_QSqlRecord *>(_o);
        switch (_id) {
        case 0: { QSqlRecord* _r = _t->new_QSqlRecord();
            if (_a[0]) *reinterpret_cast< QSqlRecord**>(_a[0]) = _r; }  break;
        case 1: { QSqlRecord* _r = _t->new_QSqlRecord((*reinterpret_cast< const QSqlRecord(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlRecord**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSqlRecord((*reinterpret_cast< QSqlRecord*(*)>(_a[1]))); break;
        case 3: _t->append((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QSqlField(*)>(_a[2]))); break;
        case 4: _t->clear((*reinterpret_cast< QSqlRecord*(*)>(_a[1]))); break;
        case 5: _t->clearValues((*reinterpret_cast< QSqlRecord*(*)>(_a[1]))); break;
        case 6: { bool _r = _t->contains((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->count((*reinterpret_cast< QSqlRecord*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { QSqlField _r = _t->field((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlField*>(_a[0]) = _r; }  break;
        case 9: { QSqlField _r = _t->field((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlField*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->fieldName((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->indexOf((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: _t->insert((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSqlField(*)>(_a[3]))); break;
        case 13: { bool _r = _t->isEmpty((*reinterpret_cast< QSqlRecord*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isGenerated((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isGenerated((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isNull((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isNull((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->__ne__((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QSqlRecord(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->__eq__((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QSqlRecord(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: _t->remove((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->replace((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSqlField(*)>(_a[3]))); break;
        case 22: _t->setGenerated((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 23: _t->setGenerated((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 24: _t->setNull((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 25: _t->setNull((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->setValue((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 27: _t->setValue((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 28: { QVariant _r = _t->value((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 29: { QVariant _r = _t->value((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 30: { QString _r = _t->py_toString((*reinterpret_cast< QSqlRecord*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSqlRecord::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSqlRecord::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlRecord,
      qt_meta_data_PythonQtWrapper_QSqlRecord, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSqlRecord::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSqlRecord::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSqlRecord::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlRecord))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlRecord*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlRecord::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSqlRelation[] = {

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
      44,   29,   30,   29, 0x0a,
      94,   63,   30,   29, 0x0a,
     142,  136,   30,   29, 0x0a,
     177,  173,   29,   29, 0x0a,
     237,  220,  212,   29, 0x0a,
     266,  220,  212,   29, 0x0a,
     298,  220,  293,   29, 0x0a,
     321,  220,  212,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSqlRelation[] = {
    "PythonQtWrapper_QSqlRelation\0\0"
    "QSqlRelation*\0new_QSqlRelation()\0"
    "aTableName,indexCol,displayCol\0"
    "new_QSqlRelation(QString,QString,QString)\0"
    "other\0new_QSqlRelation(QSqlRelation)\0"
    "obj\0delete_QSqlRelation(QSqlRelation*)\0"
    "QString\0theWrappedObject\0"
    "displayColumn(QSqlRelation*)\0"
    "indexColumn(QSqlRelation*)\0bool\0"
    "isValid(QSqlRelation*)\0tableName(QSqlRelation*)\0"
};

void PythonQtWrapper_QSqlRelation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSqlRelation *_t = static_cast<PythonQtWrapper_QSqlRelation *>(_o);
        switch (_id) {
        case 0: { QSqlRelation* _r = _t->new_QSqlRelation();
            if (_a[0]) *reinterpret_cast< QSqlRelation**>(_a[0]) = _r; }  break;
        case 1: { QSqlRelation* _r = _t->new_QSqlRelation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSqlRelation**>(_a[0]) = _r; }  break;
        case 2: { QSqlRelation* _r = _t->new_QSqlRelation((*reinterpret_cast< const QSqlRelation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlRelation**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QSqlRelation((*reinterpret_cast< QSqlRelation*(*)>(_a[1]))); break;
        case 4: { QString _r = _t->displayColumn((*reinterpret_cast< QSqlRelation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->indexColumn((*reinterpret_cast< QSqlRelation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isValid((*reinterpret_cast< QSqlRelation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->tableName((*reinterpret_cast< QSqlRelation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSqlRelation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSqlRelation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlRelation,
      qt_meta_data_PythonQtWrapper_QSqlRelation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSqlRelation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSqlRelation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSqlRelation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlRelation))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlRelation*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlRelation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSqlRelationalTableModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       1,  124, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      78,   68,   42,   41, 0x0a,
     137,  130,   42,   41, 0x2a,
     176,   41,   42,   41, 0x2a,
     211,  207,   41,   41, 0x0a,
     287,  270,   41,   41, 0x0a,
     356,  329,  320,   41, 0x0a,
     426,  404,  320,   41, 0x2a,
     499,  475,  470,   41, 0x0a,
     564,  270,  556,   41, 0x0a,
     642,  618,  605,   41, 0x0a,
     698,  618,  682,   41, 0x0a,
     780,  743,  470,   41, 0x0a,
     871,  841,  470,   41, 0x2a,
     941,  920,   41,   41, 0x0a,
     982,  270,  470,   41, 0x0a,
    1016,  270,  556,   41, 0x0a,
    1092, 1059,  470,   41, 0x0a,
    1180, 1152,  470,   41, 0x2a,
    1262, 1236,   41,   41, 0x0a,
    1369, 1336,   41,   41, 0x0a,
    1452, 1425,   41,   41, 0x0a,
    1524, 1496,  470,   41, 0x0a,

 // enums: name, flags, count, data
    1583, 0x0,    2,  128,

 // enum data: key, value
    1592, uint(PythonQtWrapper_QSqlRelationalTableModel::InnerJoin),
    1602, uint(PythonQtWrapper_QSqlRelationalTableModel::LeftJoin),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSqlRelationalTableModel[] = {
    "PythonQtWrapper_QSqlRelationalTableModel\0"
    "\0QSqlRelationalTableModel*\0parent,db\0"
    "new_QSqlRelationalTableModel(QObject*,QSqlDatabase)\0"
    "parent\0new_QSqlRelationalTableModel(QObject*)\0"
    "new_QSqlRelationalTableModel()\0obj\0"
    "delete_QSqlRelationalTableModel(QSqlRelationalTableModel*)\0"
    "theWrappedObject\0clear(QSqlRelationalTableModel*)\0"
    "QVariant\0theWrappedObject,item,role\0"
    "data(QSqlRelationalTableModel*,QModelIndex,int)\0"
    "theWrappedObject,item\0"
    "data(QSqlRelationalTableModel*,QModelIndex)\0"
    "bool\0theWrappedObject,values\0"
    "insertRowIntoTable(QSqlRelationalTableModel*,QSqlRecord)\0"
    "QString\0orderByClause(QSqlRelationalTableModel*)\0"
    "QSqlRelation\0theWrappedObject,column\0"
    "relation(QSqlRelationalTableModel*,int)\0"
    "QSqlTableModel*\0"
    "relationModel(QSqlRelationalTableModel*,int)\0"
    "theWrappedObject,column,count,parent\0"
    "removeColumns(QSqlRelationalTableModel*,int,int,QModelIndex)\0"
    "theWrappedObject,column,count\0"
    "removeColumns(QSqlRelationalTableModel*,int,int)\0"
    "theWrappedObject,row\0"
    "revertRow(QSqlRelationalTableModel*,int)\0"
    "select(QSqlRelationalTableModel*)\0"
    "selectStatement(QSqlRelationalTableModel*)\0"
    "theWrappedObject,item,value,role\0"
    "setData(QSqlRelationalTableModel*,QModelIndex,QVariant,int)\0"
    "theWrappedObject,item,value\0"
    "setData(QSqlRelationalTableModel*,QModelIndex,QVariant)\0"
    "theWrappedObject,joinMode\0"
    "setJoinMode(QSqlRelationalTableModel*,QSqlRelationalTableModel::JoinMo"
    "de)\0"
    "theWrappedObject,column,relation\0"
    "setRelation(QSqlRelationalTableModel*,int,QSqlRelation)\0"
    "theWrappedObject,tableName\0"
    "setTable(QSqlRelationalTableModel*,QString)\0"
    "theWrappedObject,row,values\0"
    "updateRowInTable(QSqlRelationalTableModel*,int,QSqlRecord)\0"
    "JoinMode\0InnerJoin\0LeftJoin\0"
};

void PythonQtWrapper_QSqlRelationalTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSqlRelationalTableModel *_t = static_cast<PythonQtWrapper_QSqlRelationalTableModel *>(_o);
        switch (_id) {
        case 0: { QSqlRelationalTableModel* _r = _t->new_QSqlRelationalTableModel((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QSqlDatabase(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlRelationalTableModel**>(_a[0]) = _r; }  break;
        case 1: { QSqlRelationalTableModel* _r = _t->new_QSqlRelationalTableModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlRelationalTableModel**>(_a[0]) = _r; }  break;
        case 2: { QSqlRelationalTableModel* _r = _t->new_QSqlRelationalTableModel();
            if (_a[0]) *reinterpret_cast< QSqlRelationalTableModel**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QSqlRelationalTableModel((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1]))); break;
        case 4: _t->clear((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1]))); break;
        case 5: { QVariant _r = _t->data((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 6: { QVariant _r = _t->data((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->insertRowIntoTable((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< const QSqlRecord(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->orderByClause((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { QSqlRelation _r = _t->relation((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlRelation*>(_a[0]) = _r; }  break;
        case 10: { QSqlTableModel* _r = _t->relationModel((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlTableModel**>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->removeColumns((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->removeColumns((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->revertRow((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: { bool _r = _t->select((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->selectStatement((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->setData((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->setData((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->setJoinMode((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< QSqlRelationalTableModel::JoinMode(*)>(_a[2]))); break;
        case 19: _t->setRelation((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSqlRelation(*)>(_a[3]))); break;
        case 20: _t->setTable((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 21: { bool _r = _t->updateRowInTable((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSqlRecord(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSqlRelationalTableModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSqlRelationalTableModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlRelationalTableModel,
      qt_meta_data_PythonQtWrapper_QSqlRelationalTableModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSqlRelationalTableModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSqlRelationalTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSqlRelationalTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlRelationalTableModel))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlRelationalTableModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlRelationalTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSqlResult[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       2,  274, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   40,   28,   27, 0x0a,
      81,   77,   27,   27, 0x0a,
     138,  112,   27,   27, 0x0a,
     210,  193,  189,   27, 0x0a,
     264,  226,   27,   27, 0x0a,
     350,  320,   27,   27, 0x0a,
     447,  418,  402,   27, 0x0a,
     503,  482,  402,   27, 0x0a,
     534,  193,  189,   27, 0x0a,
     570,  418,  561,   27, 0x0a,
     602,  482,  561,   27, 0x0a,
     630,  193,  189,   27, 0x0a,
     667,  482,  659,   27, 0x0a,
     718,  193,  699,   27, 0x0a,
     743,  193,   27,   27, 0x0a,
     781,  762,  561,   27, 0x0a,
     803,  193,   27,   27, 0x0a,
     854,  193,  836,   27, 0x0a,
     879,  193,  874,   27, 0x0a,
     924,  897,  874,   27, 0x0a,
     952,  193,  874,   27, 0x2a,
     975,  193,  659,   27, 0x0a,
    1002,  762,  874,   27, 0x0a,
    1025,  193,  874,   27, 0x0a,
    1049,  193,  874,   27, 0x0a,
    1072,  193,  874,   27, 0x0a,
    1095,  193,  874,   27, 0x0a,
    1122,  193,  561,   27, 0x0a,
    1142,  193,  874,   27, 0x0a,
    1168,  193,  874,   27, 0x0a,
    1190,  193,  874,   27, 0x0a,
    1217,  762,  874,   27, 0x0a,
    1241,  193,  874,   27, 0x0a,
    1263,  193,  874,   27, 0x0a,
    1294,  193, 1284,   27, 0x0a,
    1317,  193,  561,   27, 0x0a,
    1343,  193,  659,   27, 0x0a,
    1366,  193,  874,   27, 0x0a,
    1390,  193,  189,   27, 0x0a,
    1450,  193, 1419,   27, 0x0a,
    1511, 1488,  874,   27, 0x0a,
    1551,  193, 1540,   27, 0x0a,
    1597, 1571,  874,   27, 0x0a,
    1624, 1571,  874,   27, 0x0a,
    1676, 1657,   27,   27, 0x0a,
    1724, 1704,   27,   27, 0x0a,
    1772, 1747,   27,   27, 0x0a,
    1824, 1805,   27,   27, 0x0a,
    1884, 1860,   27,   27, 0x0a,
    1956, 1488,   27,   27, 0x0a,
    2005, 1986,   27,   27, 0x0a,
    2033,  193,  189,   27, 0x0a,

 // enums: name, flags, count, data
    2051, 0x0,    2,  282,
    2065, 0x0,    4,  286,

 // enum data: key, value
    2086, uint(PythonQtWrapper_QSqlResult::PositionalBinding),
    2104, uint(PythonQtWrapper_QSqlResult::NamedBinding),
    2117, uint(PythonQtWrapper_QSqlResult::BatchOperation),
    2132, uint(PythonQtWrapper_QSqlResult::DetachFromResultSet),
    2152, uint(PythonQtWrapper_QSqlResult::SetNumericalPrecision),
    2174, uint(PythonQtWrapper_QSqlResult::NextResult),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSqlResult[] = {
    "PythonQtWrapper_QSqlResult\0\0QSqlResult*\0"
    "db\0new_QSqlResult(const QSqlDriver*)\0"
    "obj\0delete_QSqlResult(QSqlResult*)\0"
    "theWrappedObject,val,type\0"
    "addBindValue(QSqlResult*,QVariant,QSql::ParamType)\0"
    "int\0theWrappedObject\0at(QSqlResult*)\0"
    "theWrappedObject,placeholder,val,type\0"
    "bindValue(QSqlResult*,QString,QVariant,QSql::ParamType)\0"
    "theWrappedObject,pos,val,type\0"
    "bindValue(QSqlResult*,int,QVariant,QSql::ParamType)\0"
    "QSql::ParamType\0theWrappedObject,placeholder\0"
    "bindValueType(QSqlResult*,QString)\0"
    "theWrappedObject,pos\0"
    "bindValueType(QSqlResult*,int)\0"
    "bindingSyntax(QSqlResult*)\0QVariant\0"
    "boundValue(QSqlResult*,QString)\0"
    "boundValue(QSqlResult*,int)\0"
    "boundValueCount(QSqlResult*)\0QString\0"
    "boundValueName(QSqlResult*,int)\0"
    "QVector<QVariant>*\0boundValues(QSqlResult*)\0"
    "clear(QSqlResult*)\0theWrappedObject,i\0"
    "data(QSqlResult*,int)\0"
    "detachFromResultSet(QSqlResult*)\0"
    "const QSqlDriver*\0driver(QSqlResult*)\0"
    "bool\0exec(QSqlResult*)\0"
    "theWrappedObject,arrayBind\0"
    "execBatch(QSqlResult*,bool)\0"
    "execBatch(QSqlResult*)\0"
    "executedQuery(QSqlResult*)\0"
    "fetch(QSqlResult*,int)\0fetchFirst(QSqlResult*)\0"
    "fetchLast(QSqlResult*)\0fetchNext(QSqlResult*)\0"
    "fetchPrevious(QSqlResult*)\0"
    "handle(QSqlResult*)\0hasOutValues(QSqlResult*)\0"
    "isActive(QSqlResult*)\0isForwardOnly(QSqlResult*)\0"
    "isNull(QSqlResult*,int)\0isSelect(QSqlResult*)\0"
    "isValid(QSqlResult*)\0QSqlError\0"
    "lastError(QSqlResult*)\0lastInsertId(QSqlResult*)\0"
    "lastQuery(QSqlResult*)\0nextResult(QSqlResult*)\0"
    "numRowsAffected(QSqlResult*)\0"
    "QSql::NumericalPrecisionPolicy\0"
    "numericalPrecisionPolicy(QSqlResult*)\0"
    "theWrappedObject,query\0"
    "prepare(QSqlResult*,QString)\0QSqlRecord\0"
    "record(QSqlResult*)\0theWrappedObject,sqlquery\0"
    "reset(QSqlResult*,QString)\0"
    "savePrepare(QSqlResult*,QString)\0"
    "theWrappedObject,a\0setActive(QSqlResult*,bool)\0"
    "theWrappedObject,at\0setAt(QSqlResult*,int)\0"
    "theWrappedObject,forward\0"
    "setForwardOnly(QSqlResult*,bool)\0"
    "theWrappedObject,e\0"
    "setLastError(QSqlResult*,QSqlError)\0"
    "theWrappedObject,policy\0"
    "setNumericalPrecisionPolicy(QSqlResult*,QSql::NumericalPrecisionPolicy"
    ")\0"
    "setQuery(QSqlResult*,QString)\0"
    "theWrappedObject,s\0setSelect(QSqlResult*,bool)\0"
    "size(QSqlResult*)\0BindingSyntax\0"
    "VirtualHookOperation\0PositionalBinding\0"
    "NamedBinding\0BatchOperation\0"
    "DetachFromResultSet\0SetNumericalPrecision\0"
    "NextResult\0"
};

void PythonQtWrapper_QSqlResult::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSqlResult *_t = static_cast<PythonQtWrapper_QSqlResult *>(_o);
        switch (_id) {
        case 0: { QSqlResult* _r = _t->new_QSqlResult((*reinterpret_cast< const QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlResult**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QSqlResult((*reinterpret_cast< QSqlResult*(*)>(_a[1]))); break;
        case 2: _t->addBindValue((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< QSql::ParamType(*)>(_a[3]))); break;
        case 3: { int _r = _t->at((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: _t->bindValue((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< QSql::ParamType(*)>(_a[4]))); break;
        case 5: _t->bindValue((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< QSql::ParamType(*)>(_a[4]))); break;
        case 6: { QSql::ParamType _r = _t->bindValueType((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSql::ParamType*>(_a[0]) = _r; }  break;
        case 7: { QSql::ParamType _r = _t->bindValueType((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSql::ParamType*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->bindingSyntax((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QVariant _r = _t->boundValue((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 10: { QVariant _r = _t->boundValue((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->boundValueCount((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->boundValueName((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QVector<QVariant>* _r = _t->boundValues((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QVariant>**>(_a[0]) = _r; }  break;
        case 14: _t->clear((*reinterpret_cast< QSqlResult*(*)>(_a[1]))); break;
        case 15: { QVariant _r = _t->data((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 16: _t->detachFromResultSet((*reinterpret_cast< QSqlResult*(*)>(_a[1]))); break;
        case 17: { const QSqlDriver* _r = _t->driver((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QSqlDriver**>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->exec((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->execBatch((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->execBatch((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { QString _r = _t->executedQuery((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->fetch((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->fetchFirst((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->fetchLast((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->fetchNext((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->fetchPrevious((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { QVariant _r = _t->handle((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->hasOutValues((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->isActive((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->isForwardOnly((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->isNull((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->isSelect((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->isValid((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { QSqlError _r = _t->lastError((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlError*>(_a[0]) = _r; }  break;
        case 35: { QVariant _r = _t->lastInsertId((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 36: { QString _r = _t->lastQuery((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->nextResult((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { int _r = _t->numRowsAffected((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 39: { QSql::NumericalPrecisionPolicy _r = _t->numericalPrecisionPolicy((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSql::NumericalPrecisionPolicy*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->prepare((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { QSqlRecord _r = _t->record((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlRecord*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->reset((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->savePrepare((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: _t->setActive((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 45: _t->setAt((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 46: _t->setForwardOnly((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 47: _t->setLastError((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QSqlError(*)>(_a[2]))); break;
        case 48: _t->setNumericalPrecisionPolicy((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< QSql::NumericalPrecisionPolicy(*)>(_a[2]))); break;
        case 49: _t->setQuery((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 50: _t->setSelect((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 51: { int _r = _t->size((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSqlResult::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSqlResult::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlResult,
      qt_meta_data_PythonQtWrapper_QSqlResult, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSqlResult::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSqlResult::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSqlResult::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlResult))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlResult*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlResult::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSqlTableModel[] = {

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
      58,   48,   32,   31, 0x0a,
     107,  100,   32,   31, 0x2a,
     136,   31,   32,   31, 0x2a,
     161,  157,   31,   31, 0x0a,
     217,  200,   31,   31, 0x0a,
     275,  249,  240,   31, 0x0a,
     334,  313,  240,   31, 0x2a,
     381,  200,  368,   31, 0x0a,
     433,  412,  407,   31, 0x0a,
     502,  200,  473,   31, 0x0a,
     563,  536,  532,   31, 0x0a,
     607,  200,  599,   31, 0x0a,
     668,  645,  631,   31, 0x0a,
     745,  703,  240,   31, 0x0a,
     834,  797,  240,   31, 0x2a,
     916,  894,  882,   31, 0x0a,
     986,  958,  407,   31, 0x0a,
    1055, 1031,  407,   31, 0x0a,
    1136, 1102,  407,   31, 0x0a,
    1211, 1184,  407,   31, 0x2a,
    1247,  645,  407,   31, 0x0a,
    1284,  200,  599,   31, 0x0a,
    1325,  200, 1315,   31, 0x0a,
    1390, 1353,  407,   31, 0x0a,
    1471, 1441,  407,   31, 0x2a,
    1510, 1102,  407,   31, 0x0a,
    1558, 1184,  407,   31, 0x2a,
    1594,  200,   31,   31, 0x0a,
    1618,  412,   31,   31, 0x0a,
    1673, 1649,  532,   31, 0x0a,
    1711,  200,  532,   31, 0x2a,
    1737,  200,  407,   31, 0x0a,
    1761,  200,  599,   31, 0x0a,
    1828, 1794,  407,   31, 0x0a,
    1907, 1878,  407,   31, 0x2a,
    1979, 1953,   31,   31, 0x0a,
    2065, 2041,   31,   31, 0x0a,
    2121, 2100,   31,   31, 0x0a,
    2185, 2162,   31,   31, 0x0a,
    2221,  958,  407,   31, 0x0a,
    2293, 2263,   31,   31, 0x0a,
    2363, 2336,   31,   31, 0x0a,
    2397, 2263,   31,   31, 0x0a,
    2437,  200,  407,   31, 0x0a,
    2461,  200,  599,   31, 0x0a,
    2516, 2488,  407,   31, 0x0a,

 // enums: name, flags, count, data
    2565, 0x0,    3,  248,

 // enum data: key, value
    2578, uint(PythonQtWrapper_QSqlTableModel::OnFieldChange),
    2592, uint(PythonQtWrapper_QSqlTableModel::OnRowChange),
    2604, uint(PythonQtWrapper_QSqlTableModel::OnManualSubmit),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSqlTableModel[] = {
    "PythonQtWrapper_QSqlTableModel\0\0"
    "QSqlTableModel*\0parent,db\0"
    "new_QSqlTableModel(QObject*,QSqlDatabase)\0"
    "parent\0new_QSqlTableModel(QObject*)\0"
    "new_QSqlTableModel()\0obj\0"
    "delete_QSqlTableModel(QSqlTableModel*)\0"
    "theWrappedObject\0clear(QSqlTableModel*)\0"
    "QVariant\0theWrappedObject,idx,role\0"
    "data(QSqlTableModel*,QModelIndex,int)\0"
    "theWrappedObject,idx\0"
    "data(QSqlTableModel*,QModelIndex)\0"
    "QSqlDatabase\0database(QSqlTableModel*)\0"
    "bool\0theWrappedObject,row\0"
    "deleteRowFromTable(QSqlTableModel*,int)\0"
    "QSqlTableModel::EditStrategy\0"
    "editStrategy(QSqlTableModel*)\0int\0"
    "theWrappedObject,fieldName\0"
    "fieldIndex(QSqlTableModel*,QString)\0"
    "QString\0filter(QSqlTableModel*)\0"
    "Qt::ItemFlags\0theWrappedObject,index\0"
    "flags(QSqlTableModel*,QModelIndex)\0"
    "theWrappedObject,section,orientation,role\0"
    "headerData(QSqlTableModel*,int,Qt::Orientation,int)\0"
    "theWrappedObject,section,orientation\0"
    "headerData(QSqlTableModel*,int,Qt::Orientation)\0"
    "QModelIndex\0theWrappedObject,item\0"
    "indexInQuery(QSqlTableModel*,QModelIndex)\0"
    "theWrappedObject,row,record\0"
    "insertRecord(QSqlTableModel*,int,QSqlRecord)\0"
    "theWrappedObject,values\0"
    "insertRowIntoTable(QSqlTableModel*,QSqlRecord)\0"
    "theWrappedObject,row,count,parent\0"
    "insertRows(QSqlTableModel*,int,int,QModelIndex)\0"
    "theWrappedObject,row,count\0"
    "insertRows(QSqlTableModel*,int,int)\0"
    "isDirty(QSqlTableModel*,QModelIndex)\0"
    "orderByClause(QSqlTableModel*)\0QSqlIndex\0"
    "primaryKey(QSqlTableModel*)\0"
    "theWrappedObject,column,count,parent\0"
    "removeColumns(QSqlTableModel*,int,int,QModelIndex)\0"
    "theWrappedObject,column,count\0"
    "removeColumns(QSqlTableModel*,int,int)\0"
    "removeRows(QSqlTableModel*,int,int,QModelIndex)\0"
    "removeRows(QSqlTableModel*,int,int)\0"
    "revert(QSqlTableModel*)\0"
    "revertRow(QSqlTableModel*,int)\0"
    "theWrappedObject,parent\0"
    "rowCount(QSqlTableModel*,QModelIndex)\0"
    "rowCount(QSqlTableModel*)\0"
    "select(QSqlTableModel*)\0"
    "selectStatement(QSqlTableModel*)\0"
    "theWrappedObject,index,value,role\0"
    "setData(QSqlTableModel*,QModelIndex,QVariant,int)\0"
    "theWrappedObject,index,value\0"
    "setData(QSqlTableModel*,QModelIndex,QVariant)\0"
    "theWrappedObject,strategy\0"
    "setEditStrategy(QSqlTableModel*,QSqlTableModel::EditStrategy)\0"
    "theWrappedObject,filter\0"
    "setFilter(QSqlTableModel*,QString)\0"
    "theWrappedObject,key\0"
    "setPrimaryKey(QSqlTableModel*,QSqlIndex)\0"
    "theWrappedObject,query\0"
    "setQuery(QSqlTableModel*,QSqlQuery)\0"
    "setRecord(QSqlTableModel*,int,QSqlRecord)\0"
    "theWrappedObject,column,order\0"
    "setSort(QSqlTableModel*,int,Qt::SortOrder)\0"
    "theWrappedObject,tableName\0"
    "setTable(QSqlTableModel*,QString)\0"
    "sort(QSqlTableModel*,int,Qt::SortOrder)\0"
    "submit(QSqlTableModel*)\0"
    "tableName(QSqlTableModel*)\0"
    "theWrappedObject,row,values\0"
    "updateRowInTable(QSqlTableModel*,int,QSqlRecord)\0"
    "EditStrategy\0OnFieldChange\0OnRowChange\0"
    "OnManualSubmit\0"
};

void PythonQtWrapper_QSqlTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSqlTableModel *_t = static_cast<PythonQtWrapper_QSqlTableModel *>(_o);
        switch (_id) {
        case 0: { QSqlTableModel* _r = _t->new_QSqlTableModel((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QSqlDatabase(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlTableModel**>(_a[0]) = _r; }  break;
        case 1: { QSqlTableModel* _r = _t->new_QSqlTableModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlTableModel**>(_a[0]) = _r; }  break;
        case 2: { QSqlTableModel* _r = _t->new_QSqlTableModel();
            if (_a[0]) *reinterpret_cast< QSqlTableModel**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QSqlTableModel((*reinterpret_cast< QSqlTableModel*(*)>(_a[1]))); break;
        case 4: _t->clear((*reinterpret_cast< QSqlTableModel*(*)>(_a[1]))); break;
        case 5: { QVariant _r = _t->data((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 6: { QVariant _r = _t->data((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { QSqlDatabase _r = _t->database((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->deleteRowFromTable((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QSqlTableModel::EditStrategy _r = _t->editStrategy((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlTableModel::EditStrategy*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->fieldIndex((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->filter((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 13: { QVariant _r = _t->headerData((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 14: { QVariant _r = _t->headerData((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 15: { QModelIndex _r = _t->indexInQuery((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->insertRecord((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSqlRecord(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->insertRowIntoTable((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QSqlRecord(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->insertRows((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->insertRows((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->isDirty((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { QString _r = _t->orderByClause((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 22: { QSqlIndex _r = _t->primaryKey((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlIndex*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->removeColumns((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->removeColumns((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->removeRows((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->removeRows((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->revert((*reinterpret_cast< QSqlTableModel*(*)>(_a[1]))); break;
        case 28: _t->revertRow((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 29: { int _r = _t->rowCount((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->rowCount((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->select((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { QString _r = _t->selectStatement((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->setData((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->setData((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: _t->setEditStrategy((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< QSqlTableModel::EditStrategy(*)>(_a[2]))); break;
        case 36: _t->setFilter((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 37: _t->setPrimaryKey((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QSqlIndex(*)>(_a[2]))); break;
        case 38: _t->setQuery((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QSqlQuery(*)>(_a[2]))); break;
        case 39: { bool _r = _t->setRecord((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSqlRecord(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: _t->setSort((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 41: _t->setTable((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 42: _t->sort((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 43: { bool _r = _t->submit((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: { QString _r = _t->tableName((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->updateRowInTable((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSqlRecord(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSqlTableModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSqlTableModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlTableModel,
      qt_meta_data_PythonQtWrapper_QSqlTableModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSqlTableModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSqlTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSqlTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlTableModel))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlTableModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE

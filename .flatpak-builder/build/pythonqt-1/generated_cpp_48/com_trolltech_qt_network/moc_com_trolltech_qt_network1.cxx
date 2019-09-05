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
static const uint qt_meta_data_PythonQtWrapper_QSsl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       7,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      21, 0x0,    2,   42,
      44, 0x0,    2,   46,
      59, 0x0,    2,   50,
      72, 0x0,    2,   54,
      80, 0x0,    5,   58,
      90, 0x1,    5,   68,
     101, 0x0,    7,   78,

 // enum data: key, value
     113, uint(PythonQtWrapper_QSsl::EmailEntry),
     124, uint(PythonQtWrapper_QSsl::DnsEntry),
     133, uint(PythonQtWrapper_QSsl::Pem),
     137, uint(PythonQtWrapper_QSsl::Der),
     141, uint(PythonQtWrapper_QSsl::Rsa),
     145, uint(PythonQtWrapper_QSsl::Dsa),
     149, uint(PythonQtWrapper_QSsl::PrivateKey),
     160, uint(PythonQtWrapper_QSsl::PublicKey),
     170, uint(PythonQtWrapper_QSsl::SslOptionDisableEmptyFragments),
     201, uint(PythonQtWrapper_QSsl::SslOptionDisableSessionTickets),
     232, uint(PythonQtWrapper_QSsl::SslOptionDisableCompression),
     260, uint(PythonQtWrapper_QSsl::SslOptionDisableServerNameIndication),
     297, uint(PythonQtWrapper_QSsl::SslOptionDisableLegacyRenegotiation),
     170, uint(PythonQtWrapper_QSsl::SslOptionDisableEmptyFragments),
     201, uint(PythonQtWrapper_QSsl::SslOptionDisableSessionTickets),
     232, uint(PythonQtWrapper_QSsl::SslOptionDisableCompression),
     260, uint(PythonQtWrapper_QSsl::SslOptionDisableServerNameIndication),
     297, uint(PythonQtWrapper_QSsl::SslOptionDisableLegacyRenegotiation),
     333, uint(PythonQtWrapper_QSsl::SslV3),
     339, uint(PythonQtWrapper_QSsl::SslV2),
     345, uint(PythonQtWrapper_QSsl::TlsV1),
     351, uint(PythonQtWrapper_QSsl::AnyProtocol),
     363, uint(PythonQtWrapper_QSsl::TlsV1SslV3),
     374, uint(PythonQtWrapper_QSsl::SecureProtocols),
     390, uint(PythonQtWrapper_QSsl::UnknownProtocol),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSsl[] = {
    "PythonQtWrapper_QSsl\0AlternateNameEntryType\0"
    "EncodingFormat\0KeyAlgorithm\0KeyType\0"
    "SslOption\0SslOptions\0SslProtocol\0"
    "EmailEntry\0DnsEntry\0Pem\0Der\0Rsa\0Dsa\0"
    "PrivateKey\0PublicKey\0"
    "SslOptionDisableEmptyFragments\0"
    "SslOptionDisableSessionTickets\0"
    "SslOptionDisableCompression\0"
    "SslOptionDisableServerNameIndication\0"
    "SslOptionDisableLegacyRenegotiation\0"
    "SslV3\0SslV2\0TlsV1\0AnyProtocol\0TlsV1SslV3\0"
    "SecureProtocols\0UnknownProtocol\0"
};

void PythonQtWrapper_QSsl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PythonQtWrapper_QSsl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSsl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSsl,
      qt_meta_data_PythonQtWrapper_QSsl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSsl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSsl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSsl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSsl))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSsl*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSsl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QSslCertificate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       1,  199, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      64,   50,   33,   32, 0x0a,
     124,  117,   33,   32, 0x2a,
     171,  156,   33,   32, 0x0a,
     232,  224,   33,   32, 0x2a,
     264,   32,   33,   32, 0x2a,
     292,  286,   33,   32, 0x0a,
     333,  329,   32,   32, 0x0a,
     439,  422,  374,   32, 0x0a,
     479,  422,   32,   32, 0x0a,
     541,  514,  503,   32, 0x0a,
     596,  422,  503,   32, 0x2a,
     631,  422,  621,   32, 0x0a,
     663,  422,  621,   32, 0x0a,
     727,  715,  692,   32, 0x0a,
     797,  792,  692,   32, 0x2a,
     841,   50,  692,   32, 0x0a,
     908,  117,  692,   32, 0x2a,
     973,  954,  692,   32, 0x0a,
    1070, 1058,  692,   32, 0x2a,
    1137, 1132,  692,   32, 0x2a,
    1189,  422, 1178,   32, 0x0a,
    1219,  422, 1214,   32, 0x0a,
    1244,  422, 1214,   32, 0x0a,
    1300, 1278, 1270,   32, 0x0a,
    1379, 1358, 1270,   32, 0x0a,
    1442, 1419, 1214,   32, 0x0a,
    1483, 1419,   33,   32, 0x0a,
    1533, 1419, 1214,   32, 0x0a,
    1582,  422, 1574,   32, 0x0a,
    1610,  422,  503,   32, 0x0a,
    1641, 1278, 1270,   32, 0x0a,
    1700, 1358, 1270,   32, 0x0a,
    1741,  422,  503,   32, 0x0a,
    1765,  422,  503,   32, 0x0a,
    1789,  422,  503,   32, 0x0a,
    1815,   32, 1270,   32, 0x0a,
    1845,  329, 1214,   32, 0x0a,

 // enums: name, flags, count, data
    1875, 0x0,    6,  203,

 // enum data: key, value
    1887, uint(PythonQtWrapper_QSslCertificate::Organization),
    1900, uint(PythonQtWrapper_QSslCertificate::CommonName),
    1911, uint(PythonQtWrapper_QSslCertificate::LocalityName),
    1924, uint(PythonQtWrapper_QSslCertificate::OrganizationalUnitName),
    1947, uint(PythonQtWrapper_QSslCertificate::CountryName),
    1959, uint(PythonQtWrapper_QSslCertificate::StateOrProvinceName),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSslCertificate[] = {
    "PythonQtWrapper_QSslCertificate\0\0"
    "QSslCertificate*\0device,format\0"
    "new_QSslCertificate(QIODevice*,QSsl::EncodingFormat)\0"
    "device\0new_QSslCertificate(QIODevice*)\0"
    "encoded,format\0"
    "new_QSslCertificate(QByteArray,QSsl::EncodingFormat)\0"
    "encoded\0new_QSslCertificate(QByteArray)\0"
    "new_QSslCertificate()\0other\0"
    "new_QSslCertificate(QSslCertificate)\0"
    "obj\0delete_QSslCertificate(QSslCertificate*)\0"
    "QMultiMap<QSsl::AlternateNameEntryType,QString>\0"
    "theWrappedObject\0"
    "alternateSubjectNames(QSslCertificate*)\0"
    "clear(QSslCertificate*)\0QByteArray\0"
    "theWrappedObject,algorithm\0"
    "digest(QSslCertificate*,QCryptographicHash::Algorithm)\0"
    "digest(QSslCertificate*)\0QDateTime\0"
    "effectiveDate(QSslCertificate*)\0"
    "expiryDate(QSslCertificate*)\0"
    "QList<QSslCertificate>\0data,format\0"
    "static_QSslCertificate_fromData(QByteArray,QSsl::EncodingFormat)\0"
    "data\0static_QSslCertificate_fromData(QByteArray)\0"
    "static_QSslCertificate_fromDevice(QIODevice*,QSsl::EncodingFormat)\0"
    "static_QSslCertificate_fromDevice(QIODevice*)\0"
    "path,format,syntax\0"
    "static_QSslCertificate_fromPath(QString,QSsl::EncodingFormat,QRegExp::"
    "PatternSyntax)\0"
    "path,format\0"
    "static_QSslCertificate_fromPath(QString,QSsl::EncodingFormat)\0"
    "path\0static_QSslCertificate_fromPath(QString)\0"
    "Qt::HANDLE\0handle(QSslCertificate*)\0"
    "bool\0isNull(QSslCertificate*)\0"
    "isValid(QSslCertificate*)\0QString\0"
    "theWrappedObject,info\0"
    "issuerInfo(QSslCertificate*,QSslCertificate::SubjectInfo)\0"
    "theWrappedObject,tag\0"
    "issuerInfo(QSslCertificate*,QByteArray)\0"
    "theWrappedObject,other\0"
    "__ne__(QSslCertificate*,QSslCertificate)\0"
    "operator_assign(QSslCertificate*,QSslCertificate)\0"
    "__eq__(QSslCertificate*,QSslCertificate)\0"
    "QSslKey\0publicKey(QSslCertificate*)\0"
    "serialNumber(QSslCertificate*)\0"
    "subjectInfo(QSslCertificate*,QSslCertificate::SubjectInfo)\0"
    "subjectInfo(QSslCertificate*,QByteArray)\0"
    "toDer(QSslCertificate*)\0toPem(QSslCertificate*)\0"
    "version(QSslCertificate*)\0"
    "py_toString(QSslCertificate*)\0"
    "__nonzero__(QSslCertificate*)\0SubjectInfo\0"
    "Organization\0CommonName\0LocalityName\0"
    "OrganizationalUnitName\0CountryName\0"
    "StateOrProvinceName\0"
};

void PythonQtWrapper_QSslCertificate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSslCertificate *_t = static_cast<PythonQtWrapper_QSslCertificate *>(_o);
        switch (_id) {
        case 0: { QSslCertificate* _r = _t->new_QSslCertificate((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslCertificate**>(_a[0]) = _r; }  break;
        case 1: { QSslCertificate* _r = _t->new_QSslCertificate((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCertificate**>(_a[0]) = _r; }  break;
        case 2: { QSslCertificate* _r = _t->new_QSslCertificate((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslCertificate**>(_a[0]) = _r; }  break;
        case 3: { QSslCertificate* _r = _t->new_QSslCertificate((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCertificate**>(_a[0]) = _r; }  break;
        case 4: { QSslCertificate* _r = _t->new_QSslCertificate();
            if (_a[0]) *reinterpret_cast< QSslCertificate**>(_a[0]) = _r; }  break;
        case 5: { QSslCertificate* _r = _t->new_QSslCertificate((*reinterpret_cast< const QSslCertificate(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCertificate**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QSslCertificate((*reinterpret_cast< QSslCertificate*(*)>(_a[1]))); break;
        case 7: { QMultiMap<QSsl::AlternateNameEntryType,QString> _r = _t->alternateSubjectNames((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMultiMap<QSsl::AlternateNameEntryType,QString>*>(_a[0]) = _r; }  break;
        case 8: _t->clear((*reinterpret_cast< QSslCertificate*(*)>(_a[1]))); break;
        case 9: { QByteArray _r = _t->digest((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< QCryptographicHash::Algorithm(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 10: { QByteArray _r = _t->digest((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 11: { QDateTime _r = _t->effectiveDate((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 12: { QDateTime _r = _t->expiryDate((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 13: { QList<QSslCertificate> _r = _t->static_QSslCertificate_fromData((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 14: { QList<QSslCertificate> _r = _t->static_QSslCertificate_fromData((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 15: { QList<QSslCertificate> _r = _t->static_QSslCertificate_fromDevice((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 16: { QList<QSslCertificate> _r = _t->static_QSslCertificate_fromDevice((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 17: { QList<QSslCertificate> _r = _t->static_QSslCertificate_fromPath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[2])),(*reinterpret_cast< QRegExp::PatternSyntax(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 18: { QList<QSslCertificate> _r = _t->static_QSslCertificate_fromPath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 19: { QList<QSslCertificate> _r = _t->static_QSslCertificate_fromPath((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 20: { Qt::HANDLE _r = _t->handle((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::HANDLE*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isNull((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->isValid((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { QString _r = _t->issuerInfo((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< QSslCertificate::SubjectInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: { QString _r = _t->issuerInfo((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->__ne__((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< const QSslCertificate(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { QSslCertificate* _r = _t->operator_assign((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< const QSslCertificate(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslCertificate**>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->__eq__((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< const QSslCertificate(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { QSslKey _r = _t->publicKey((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslKey*>(_a[0]) = _r; }  break;
        case 29: { QByteArray _r = _t->serialNumber((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 30: { QString _r = _t->subjectInfo((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< QSslCertificate::SubjectInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 31: { QString _r = _t->subjectInfo((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 32: { QByteArray _r = _t->toDer((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 33: { QByteArray _r = _t->toPem((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 34: { QByteArray _r = _t->version((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 35: { QString _r = _t->py_toString((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->__nonzero__((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSslCertificate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSslCertificate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSslCertificate,
      qt_meta_data_PythonQtWrapper_QSslCertificate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSslCertificate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSslCertificate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSslCertificate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSslCertificate))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSslCertificate*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSslCertificate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSslCipher[] = {

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
      40,   27,   28,   27, 0x0a,
      63,   57,   28,   27, 0x0a,
     104,   90,   28,   27, 0x0a,
     150,  146,   27,   27, 0x0a,
     206,  189,  181,   27, 0x0a,
     240,  189,  181,   27, 0x0a,
     275,  189,  270,   27, 0x0a,
     295,  189,  181,   27, 0x0a,
     326,  189,  181,   27, 0x0a,
     367,  344,  270,   27, 0x0a,
     398,  344,   28,   27, 0x0a,
     438,  344,  270,   27, 0x0a,
     487,  189,  469,   27, 0x0a,
     509,  189,  181,   27, 0x0a,
     541,  189,  537,   27, 0x0a,
     568,  189,  537,   27, 0x0a,
     590,   27,  181,   27, 0x0a,
     615,  146,  270,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSslCipher[] = {
    "PythonQtWrapper_QSslCipher\0\0QSslCipher*\0"
    "new_QSslCipher()\0other\0"
    "new_QSslCipher(QSslCipher)\0name,protocol\0"
    "new_QSslCipher(QString,QSsl::SslProtocol)\0"
    "obj\0delete_QSslCipher(QSslCipher*)\0"
    "QString\0theWrappedObject\0"
    "authenticationMethod(QSslCipher*)\0"
    "encryptionMethod(QSslCipher*)\0bool\0"
    "isNull(QSslCipher*)\0keyExchangeMethod(QSslCipher*)\0"
    "name(QSslCipher*)\0theWrappedObject,other\0"
    "__ne__(QSslCipher*,QSslCipher)\0"
    "operator_assign(QSslCipher*,QSslCipher)\0"
    "__eq__(QSslCipher*,QSslCipher)\0"
    "QSsl::SslProtocol\0protocol(QSslCipher*)\0"
    "protocolString(QSslCipher*)\0int\0"
    "supportedBits(QSslCipher*)\0"
    "usedBits(QSslCipher*)\0py_toString(QSslCipher*)\0"
    "__nonzero__(QSslCipher*)\0"
};

void PythonQtWrapper_QSslCipher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSslCipher *_t = static_cast<PythonQtWrapper_QSslCipher *>(_o);
        switch (_id) {
        case 0: { QSslCipher* _r = _t->new_QSslCipher();
            if (_a[0]) *reinterpret_cast< QSslCipher**>(_a[0]) = _r; }  break;
        case 1: { QSslCipher* _r = _t->new_QSslCipher((*reinterpret_cast< const QSslCipher(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCipher**>(_a[0]) = _r; }  break;
        case 2: { QSslCipher* _r = _t->new_QSslCipher((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QSsl::SslProtocol(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslCipher**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QSslCipher((*reinterpret_cast< QSslCipher*(*)>(_a[1]))); break;
        case 4: { QString _r = _t->authenticationMethod((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->encryptionMethod((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isNull((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->keyExchangeMethod((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->name((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->__ne__((*reinterpret_cast< QSslCipher*(*)>(_a[1])),(*reinterpret_cast< const QSslCipher(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QSslCipher* _r = _t->operator_assign((*reinterpret_cast< QSslCipher*(*)>(_a[1])),(*reinterpret_cast< const QSslCipher(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslCipher**>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__eq__((*reinterpret_cast< QSslCipher*(*)>(_a[1])),(*reinterpret_cast< const QSslCipher(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QSsl::SslProtocol _r = _t->protocol((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSsl::SslProtocol*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->protocolString((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->supportedBits((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->usedBits((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->py_toString((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->__nonzero__((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSslCipher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSslCipher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSslCipher,
      qt_meta_data_PythonQtWrapper_QSslCipher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSslCipher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSslCipher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSslCipher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSslCipher))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSslCipher*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSslCipher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSslConfiguration[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      54,   34,   35,   34, 0x0a,
      84,   78,   35,   34, 0x0a,
     129,  125,   34,   34, 0x0a,
     214,  197,  174,   34, 0x0a,
     267,  197,  249,   34, 0x0a,
     313,   34,  295,   34, 0x0a,
     366,  197,  361,   34, 0x0a,
     409,  197,  393,   34, 0x0a,
     469,  446,  361,   34, 0x0a,
     514,  446,   35,   34, 0x0a,
     568,  446,  361,   34, 0x0a,
     613,  197,  393,   34, 0x0a,
     649,  197,  174,   34, 0x0a,
     694,  197,  690,   34, 0x0a,
     757,  197,  730,   34, 0x0a,
     800,  197,  792,   34, 0x0a,
     849,  197,  831,   34, 0x0a,
     889,  197,  878,   34, 0x0a,
     953,  923,   34,   34, 0x0a,
    1039, 1014,   34,   34, 0x0a,
    1102, 1088,   34,   34, 0x0a,
    1199, 1170,   34,   34, 0x0a,
    1278, 1255,   34,   34, 0x0a,
    1343, 1321,   34,   34, 0x0a,
    1429, 1408,   34,   34, 0x0a,
    1497, 1471,   34,   34, 0x0a,
    1574, 1547,   34,   34, 0x0a,
    1652, 1628,  361,   34, 0x0a,
    1702,  125,  361,   34, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSslConfiguration[] = {
    "PythonQtWrapper_QSslConfiguration\0\0"
    "QSslConfiguration*\0new_QSslConfiguration()\0"
    "other\0new_QSslConfiguration(QSslConfiguration)\0"
    "obj\0delete_QSslConfiguration(QSslConfiguration*)\0"
    "QList<QSslCertificate>\0theWrappedObject\0"
    "caCertificates(QSslConfiguration*)\0"
    "QList<QSslCipher>\0ciphers(QSslConfiguration*)\0"
    "QSslConfiguration\0"
    "static_QSslConfiguration_defaultConfiguration()\0"
    "bool\0isNull(QSslConfiguration*)\0"
    "QSslCertificate\0localCertificate(QSslConfiguration*)\0"
    "theWrappedObject,other\0"
    "__ne__(QSslConfiguration*,QSslConfiguration)\0"
    "operator_assign(QSslConfiguration*,QSslConfiguration)\0"
    "__eq__(QSslConfiguration*,QSslConfiguration)\0"
    "peerCertificate(QSslConfiguration*)\0"
    "peerCertificateChain(QSslConfiguration*)\0"
    "int\0peerVerifyDepth(QSslConfiguration*)\0"
    "QSslSocket::PeerVerifyMode\0"
    "peerVerifyMode(QSslConfiguration*)\0"
    "QSslKey\0privateKey(QSslConfiguration*)\0"
    "QSsl::SslProtocol\0protocol(QSslConfiguration*)\0"
    "QSslCipher\0sessionCipher(QSslConfiguration*)\0"
    "theWrappedObject,certificates\0"
    "setCaCertificates(QSslConfiguration*,QList<QSslCertificate>)\0"
    "theWrappedObject,ciphers\0"
    "setCiphers(QSslConfiguration*,QList<QSslCipher>)\0"
    "configuration\0"
    "static_QSslConfiguration_setDefaultConfiguration(QSslConfiguration)\0"
    "theWrappedObject,certificate\0"
    "setLocalCertificate(QSslConfiguration*,QSslCertificate)\0"
    "theWrappedObject,depth\0"
    "setPeerVerifyDepth(QSslConfiguration*,int)\0"
    "theWrappedObject,mode\0"
    "setPeerVerifyMode(QSslConfiguration*,QSslSocket::PeerVerifyMode)\0"
    "theWrappedObject,key\0"
    "setPrivateKey(QSslConfiguration*,QSslKey)\0"
    "theWrappedObject,protocol\0"
    "setProtocol(QSslConfiguration*,QSsl::SslProtocol)\0"
    "theWrappedObject,option,on\0"
    "setSslOption(QSslConfiguration*,QSsl::SslOption,bool)\0"
    "theWrappedObject,option\0"
    "testSslOption(QSslConfiguration*,QSsl::SslOption)\0"
    "__nonzero__(QSslConfiguration*)\0"
};

void PythonQtWrapper_QSslConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSslConfiguration *_t = static_cast<PythonQtWrapper_QSslConfiguration *>(_o);
        switch (_id) {
        case 0: { QSslConfiguration* _r = _t->new_QSslConfiguration();
            if (_a[0]) *reinterpret_cast< QSslConfiguration**>(_a[0]) = _r; }  break;
        case 1: { QSslConfiguration* _r = _t->new_QSslConfiguration((*reinterpret_cast< const QSslConfiguration(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslConfiguration**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSslConfiguration((*reinterpret_cast< QSslConfiguration*(*)>(_a[1]))); break;
        case 3: { QList<QSslCertificate> _r = _t->caCertificates((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 4: { QList<QSslCipher> _r = _t->ciphers((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslCipher>*>(_a[0]) = _r; }  break;
        case 5: { QSslConfiguration _r = _t->static_QSslConfiguration_defaultConfiguration();
            if (_a[0]) *reinterpret_cast< QSslConfiguration*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isNull((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QSslCertificate _r = _t->localCertificate((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCertificate*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__ne__((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QSslConfiguration(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QSslConfiguration* _r = _t->operator_assign((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QSslConfiguration(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslConfiguration**>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->__eq__((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QSslConfiguration(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QSslCertificate _r = _t->peerCertificate((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCertificate*>(_a[0]) = _r; }  break;
        case 12: { QList<QSslCertificate> _r = _t->peerCertificateChain((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->peerVerifyDepth((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { QSslSocket::PeerVerifyMode _r = _t->peerVerifyMode((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslSocket::PeerVerifyMode*>(_a[0]) = _r; }  break;
        case 15: { QSslKey _r = _t->privateKey((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslKey*>(_a[0]) = _r; }  break;
        case 16: { QSsl::SslProtocol _r = _t->protocol((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSsl::SslProtocol*>(_a[0]) = _r; }  break;
        case 17: { QSslCipher _r = _t->sessionCipher((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCipher*>(_a[0]) = _r; }  break;
        case 18: _t->setCaCertificates((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslCertificate>(*)>(_a[2]))); break;
        case 19: _t->setCiphers((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslCipher>(*)>(_a[2]))); break;
        case 20: _t->static_QSslConfiguration_setDefaultConfiguration((*reinterpret_cast< const QSslConfiguration(*)>(_a[1]))); break;
        case 21: _t->setLocalCertificate((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QSslCertificate(*)>(_a[2]))); break;
        case 22: _t->setPeerVerifyDepth((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->setPeerVerifyMode((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< QSslSocket::PeerVerifyMode(*)>(_a[2]))); break;
        case 24: _t->setPrivateKey((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QSslKey(*)>(_a[2]))); break;
        case 25: _t->setProtocol((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< QSsl::SslProtocol(*)>(_a[2]))); break;
        case 26: _t->setSslOption((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< QSsl::SslOption(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 27: { bool _r = _t->testSslOption((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< QSsl::SslOption(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->__nonzero__((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSslConfiguration::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSslConfiguration::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSslConfiguration,
      qt_meta_data_PythonQtWrapper_QSslConfiguration, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSslConfiguration::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSslConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSslConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSslConfiguration))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSslConfiguration*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSslConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSslError[] = {

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
      38,   26,   27,   26, 0x0a,
      60,   54,   27,   26, 0x0a,
     113,   95,   27,   26, 0x0a,
     170,  164,   27,   26, 0x0a,
     199,  195,   26,   26, 0x0a,
     261,  244,  228,   26, 0x0a,
     305,  244,  285,   26, 0x0a,
     331,  244,  323,   26, 0x0a,
     383,  360,  355,   26, 0x0a,
     412,  360,   27,   26, 0x0a,
     450,  360,  355,   26, 0x0a,
     479,   26,  323,   26, 0x0a,

 // enums: name, flags, count, data
     503, 0x0,   26,   78,

 // enum data: key, value
     512, uint(PythonQtWrapper_QSslError::NoError),
     520, uint(PythonQtWrapper_QSslError::UnableToGetIssuerCertificate),
     549, uint(PythonQtWrapper_QSslError::UnableToDecryptCertificateSignature),
     585, uint(PythonQtWrapper_QSslError::UnableToDecodeIssuerPublicKey),
     615, uint(PythonQtWrapper_QSslError::CertificateSignatureFailed),
     642, uint(PythonQtWrapper_QSslError::CertificateNotYetValid),
     665, uint(PythonQtWrapper_QSslError::CertificateExpired),
     684, uint(PythonQtWrapper_QSslError::InvalidNotBeforeField),
     706, uint(PythonQtWrapper_QSslError::InvalidNotAfterField),
     727, uint(PythonQtWrapper_QSslError::SelfSignedCertificate),
     749, uint(PythonQtWrapper_QSslError::SelfSignedCertificateInChain),
     778, uint(PythonQtWrapper_QSslError::UnableToGetLocalIssuerCertificate),
     812, uint(PythonQtWrapper_QSslError::UnableToVerifyFirstCertificate),
     843, uint(PythonQtWrapper_QSslError::CertificateRevoked),
     862, uint(PythonQtWrapper_QSslError::InvalidCaCertificate),
     883, uint(PythonQtWrapper_QSslError::PathLengthExceeded),
     902, uint(PythonQtWrapper_QSslError::InvalidPurpose),
     917, uint(PythonQtWrapper_QSslError::CertificateUntrusted),
     938, uint(PythonQtWrapper_QSslError::CertificateRejected),
     958, uint(PythonQtWrapper_QSslError::SubjectIssuerMismatch),
     980, uint(PythonQtWrapper_QSslError::AuthorityIssuerSerialNumberMismatch),
    1016, uint(PythonQtWrapper_QSslError::NoPeerCertificate),
    1034, uint(PythonQtWrapper_QSslError::HostNameMismatch),
    1051, uint(PythonQtWrapper_QSslError::NoSslSupport),
    1064, uint(PythonQtWrapper_QSslError::CertificateBlacklisted),
    1087, uint(PythonQtWrapper_QSslError::UnspecifiedError),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSslError[] = {
    "PythonQtWrapper_QSslError\0\0QSslError*\0"
    "new_QSslError()\0error\0"
    "new_QSslError(QSslError::SslError)\0"
    "error,certificate\0"
    "new_QSslError(QSslError::SslError,QSslCertificate)\0"
    "other\0new_QSslError(QSslError)\0obj\0"
    "delete_QSslError(QSslError*)\0"
    "QSslCertificate\0theWrappedObject\0"
    "certificate(QSslError*)\0QSslError::SslError\0"
    "error(QSslError*)\0QString\0"
    "errorString(QSslError*)\0bool\0"
    "theWrappedObject,other\0"
    "__ne__(QSslError*,QSslError)\0"
    "operator_assign(QSslError*,QSslError)\0"
    "__eq__(QSslError*,QSslError)\0"
    "py_toString(QSslError*)\0SslError\0"
    "NoError\0UnableToGetIssuerCertificate\0"
    "UnableToDecryptCertificateSignature\0"
    "UnableToDecodeIssuerPublicKey\0"
    "CertificateSignatureFailed\0"
    "CertificateNotYetValid\0CertificateExpired\0"
    "InvalidNotBeforeField\0InvalidNotAfterField\0"
    "SelfSignedCertificate\0"
    "SelfSignedCertificateInChain\0"
    "UnableToGetLocalIssuerCertificate\0"
    "UnableToVerifyFirstCertificate\0"
    "CertificateRevoked\0InvalidCaCertificate\0"
    "PathLengthExceeded\0InvalidPurpose\0"
    "CertificateUntrusted\0CertificateRejected\0"
    "SubjectIssuerMismatch\0"
    "AuthorityIssuerSerialNumberMismatch\0"
    "NoPeerCertificate\0HostNameMismatch\0"
    "NoSslSupport\0CertificateBlacklisted\0"
    "UnspecifiedError\0"
};

void PythonQtWrapper_QSslError::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSslError *_t = static_cast<PythonQtWrapper_QSslError *>(_o);
        switch (_id) {
        case 0: { QSslError* _r = _t->new_QSslError();
            if (_a[0]) *reinterpret_cast< QSslError**>(_a[0]) = _r; }  break;
        case 1: { QSslError* _r = _t->new_QSslError((*reinterpret_cast< QSslError::SslError(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslError**>(_a[0]) = _r; }  break;
        case 2: { QSslError* _r = _t->new_QSslError((*reinterpret_cast< QSslError::SslError(*)>(_a[1])),(*reinterpret_cast< const QSslCertificate(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslError**>(_a[0]) = _r; }  break;
        case 3: { QSslError* _r = _t->new_QSslError((*reinterpret_cast< const QSslError(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslError**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSslError((*reinterpret_cast< QSslError*(*)>(_a[1]))); break;
        case 5: { QSslCertificate _r = _t->certificate((*reinterpret_cast< QSslError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCertificate*>(_a[0]) = _r; }  break;
        case 6: { QSslError::SslError _r = _t->error((*reinterpret_cast< QSslError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslError::SslError*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->errorString((*reinterpret_cast< QSslError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__ne__((*reinterpret_cast< QSslError*(*)>(_a[1])),(*reinterpret_cast< const QSslError(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QSslError* _r = _t->operator_assign((*reinterpret_cast< QSslError*(*)>(_a[1])),(*reinterpret_cast< const QSslError(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslError**>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->__eq__((*reinterpret_cast< QSslError*(*)>(_a[1])),(*reinterpret_cast< const QSslError(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->py_toString((*reinterpret_cast< QSslError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSslError::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSslError::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSslError,
      qt_meta_data_PythonQtWrapper_QSslError, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSslError::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSslError::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSslError::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSslError))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSslError*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSslError::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSslKey[] = {

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
      34,   24,   25,   24, 0x0a,
      88,   48,   25,   24, 0x0a,
     206,  177,   25,   24, 0x2a,
     308,  284,   25,   24, 0x2a,
     389,  372,   25,   24, 0x2a,
     473,  432,   25,   24, 0x0a,
     592,  562,   25,   24, 0x2a,
     695,  670,   25,   24, 0x2a,
     777,  759,   25,   24, 0x2a,
     826,  820,   25,   24, 0x0a,
     851,  847,   24,   24, 0x0a,
     912,  895,  876,   24, 0x0a,
     932,  895,   24,   24, 0x0a,
     959,  895,  948,   24, 0x0a,
     981,  895,  976,   24, 0x0a,
    1002,  895,  998,   24, 0x0a,
    1040, 1019,  976,   24, 0x0a,
    1088, 1065,   25,   24, 0x0a,
    1122, 1019,  976,   24, 0x0a,
    1186, 1158, 1147,   24, 0x0a,
    1213,  895, 1147,   24, 0x2a,
    1229, 1158, 1147,   24, 0x0a,
    1256,  895, 1147,   24, 0x2a,
    1286,  895, 1272,   24, 0x0a,
    1309,   24, 1301,   24, 0x0a,
    1331,  847,  976,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSslKey[] = {
    "PythonQtWrapper_QSslKey\0\0QSslKey*\0"
    "new_QSslKey()\0device,algorithm,format,type,passPhrase\0"
    "new_QSslKey(QIODevice*,QSsl::KeyAlgorithm,QSsl::EncodingFormat,QSsl::K"
    "eyType,QByteArray)\0"
    "device,algorithm,format,type\0"
    "new_QSslKey(QIODevice*,QSsl::KeyAlgorithm,QSsl::EncodingFormat,QSsl::K"
    "eyType)\0"
    "device,algorithm,format\0"
    "new_QSslKey(QIODevice*,QSsl::KeyAlgorithm,QSsl::EncodingFormat)\0"
    "device,algorithm\0"
    "new_QSslKey(QIODevice*,QSsl::KeyAlgorithm)\0"
    "encoded,algorithm,format,type,passPhrase\0"
    "new_QSslKey(QByteArray,QSsl::KeyAlgorithm,QSsl::EncodingFormat,QSsl::K"
    "eyType,QByteArray)\0"
    "encoded,algorithm,format,type\0"
    "new_QSslKey(QByteArray,QSsl::KeyAlgorithm,QSsl::EncodingFormat,QSsl::K"
    "eyType)\0"
    "encoded,algorithm,format\0"
    "new_QSslKey(QByteArray,QSsl::KeyAlgorithm,QSsl::EncodingFormat)\0"
    "encoded,algorithm\0"
    "new_QSslKey(QByteArray,QSsl::KeyAlgorithm)\0"
    "other\0new_QSslKey(QSslKey)\0obj\0"
    "delete_QSslKey(QSslKey*)\0QSsl::KeyAlgorithm\0"
    "theWrappedObject\0algorithm(QSslKey*)\0"
    "clear(QSslKey*)\0Qt::HANDLE\0handle(QSslKey*)\0"
    "bool\0isNull(QSslKey*)\0int\0length(QSslKey*)\0"
    "theWrappedObject,key\0__ne__(QSslKey*,QSslKey)\0"
    "theWrappedObject,other\0"
    "operator_assign(QSslKey*,QSslKey)\0"
    "__eq__(QSslKey*,QSslKey)\0QByteArray\0"
    "theWrappedObject,passPhrase\0"
    "toDer(QSslKey*,QByteArray)\0toDer(QSslKey*)\0"
    "toPem(QSslKey*,QByteArray)\0toPem(QSslKey*)\0"
    "QSsl::KeyType\0type(QSslKey*)\0QString\0"
    "py_toString(QSslKey*)\0__nonzero__(QSslKey*)\0"
};

void PythonQtWrapper_QSslKey::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSslKey *_t = static_cast<PythonQtWrapper_QSslKey *>(_o);
        switch (_id) {
        case 0: { QSslKey* _r = _t->new_QSslKey();
            if (_a[0]) *reinterpret_cast< QSslKey**>(_a[0]) = _r; }  break;
        case 1: { QSslKey* _r = _t->new_QSslKey((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< QSsl::KeyAlgorithm(*)>(_a[2])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[3])),(*reinterpret_cast< QSsl::KeyType(*)>(_a[4])),(*reinterpret_cast< const QByteArray(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QSslKey**>(_a[0]) = _r; }  break;
        case 2: { QSslKey* _r = _t->new_QSslKey((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< QSsl::KeyAlgorithm(*)>(_a[2])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[3])),(*reinterpret_cast< QSsl::KeyType(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSslKey**>(_a[0]) = _r; }  break;
        case 3: { QSslKey* _r = _t->new_QSslKey((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< QSsl::KeyAlgorithm(*)>(_a[2])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSslKey**>(_a[0]) = _r; }  break;
        case 4: { QSslKey* _r = _t->new_QSslKey((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< QSsl::KeyAlgorithm(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslKey**>(_a[0]) = _r; }  break;
        case 5: { QSslKey* _r = _t->new_QSslKey((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QSsl::KeyAlgorithm(*)>(_a[2])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[3])),(*reinterpret_cast< QSsl::KeyType(*)>(_a[4])),(*reinterpret_cast< const QByteArray(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QSslKey**>(_a[0]) = _r; }  break;
        case 6: { QSslKey* _r = _t->new_QSslKey((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QSsl::KeyAlgorithm(*)>(_a[2])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[3])),(*reinterpret_cast< QSsl::KeyType(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSslKey**>(_a[0]) = _r; }  break;
        case 7: { QSslKey* _r = _t->new_QSslKey((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QSsl::KeyAlgorithm(*)>(_a[2])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSslKey**>(_a[0]) = _r; }  break;
        case 8: { QSslKey* _r = _t->new_QSslKey((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QSsl::KeyAlgorithm(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslKey**>(_a[0]) = _r; }  break;
        case 9: { QSslKey* _r = _t->new_QSslKey((*reinterpret_cast< const QSslKey(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslKey**>(_a[0]) = _r; }  break;
        case 10: _t->delete_QSslKey((*reinterpret_cast< QSslKey*(*)>(_a[1]))); break;
        case 11: { QSsl::KeyAlgorithm _r = _t->algorithm((*reinterpret_cast< QSslKey*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSsl::KeyAlgorithm*>(_a[0]) = _r; }  break;
        case 12: _t->clear((*reinterpret_cast< QSslKey*(*)>(_a[1]))); break;
        case 13: { Qt::HANDLE _r = _t->handle((*reinterpret_cast< QSslKey*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::HANDLE*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isNull((*reinterpret_cast< QSslKey*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->length((*reinterpret_cast< QSslKey*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->__ne__((*reinterpret_cast< QSslKey*(*)>(_a[1])),(*reinterpret_cast< const QSslKey(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { QSslKey* _r = _t->operator_assign((*reinterpret_cast< QSslKey*(*)>(_a[1])),(*reinterpret_cast< const QSslKey(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslKey**>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->__eq__((*reinterpret_cast< QSslKey*(*)>(_a[1])),(*reinterpret_cast< const QSslKey(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { QByteArray _r = _t->toDer((*reinterpret_cast< QSslKey*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 20: { QByteArray _r = _t->toDer((*reinterpret_cast< QSslKey*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 21: { QByteArray _r = _t->toPem((*reinterpret_cast< QSslKey*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 22: { QByteArray _r = _t->toPem((*reinterpret_cast< QSslKey*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 23: { QSsl::KeyType _r = _t->type((*reinterpret_cast< QSslKey*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSsl::KeyType*>(_a[0]) = _r; }  break;
        case 24: { QString _r = _t->py_toString((*reinterpret_cast< QSslKey*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->__nonzero__((*reinterpret_cast< QSslKey*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSslKey::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSslKey::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSslKey,
      qt_meta_data_PythonQtWrapper_QSslKey, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSslKey::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSslKey::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSslKey::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSslKey))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSslKey*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSslKey::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QSslSocket[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      83,   14, // methods
       0,    0, // properties
       2,  429, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
      93,   89,   27,   27, 0x0a,
     141,  124,   27,   27, 0x0a,
     189,  160,   27,   27, 0x0a,
     265,  235,   27,   27, 0x0a,
     360,  324,  319,   27, 0x0a,
     472,  443,  319,   27, 0x2a,
     554,  532,  319,   27, 0x2a,
     605,  593,   27,   27, 0x0a,
     677,  664,   27,   27, 0x0a,
     763,  744,  319,   27, 0x0a,
     871,  859,  319,   27, 0x2a,
     949,  944,  319,   27, 0x2a,
    1001,  124,  319,   27, 0x0a,
    1027,  124, 1020,   27, 0x0a,
    1055,  124, 1020,   27, 0x0a,
    1104,  124, 1081,   27, 0x0a,
    1132,  124,  319,   27, 0x0a,
    1175,  124, 1157,   27, 0x0a,
    1196,  124,   27,   27, 0x0a,
    1251, 1215,   27,   27, 0x0a,
    1361, 1330,   27,   27, 0x2a,
    1468, 1420,   27,   27, 0x0a,
    1598, 1555,   27,   27, 0x2a,
    1665,   27, 1081,   27, 0x0a,
    1707,   27, 1157,   27, 0x0a,
    1742,  124, 1020,   27, 0x0a,
    1779,  124, 1020,   27, 0x0a,
    1814,  124,  319,   27, 0x0a,
    1857, 1833,   27,   27, 0x0a,
    1903,  124,  319,   27, 0x0a,
    1944,  124, 1928,   27, 0x0a,
    1994,  124, 1974,   27, 0x0a,
    2012,  124, 1928,   27, 0x0a,
    2041,  124, 1081,   27, 0x0a,
    2079,  124, 2075,   27, 0x0a,
    2135,  124, 2108,   27, 0x0a,
    2171,  124, 2163,   27, 0x0a,
    2207,  124, 2199,   27, 0x0a,
    2249,  124, 2231,   27, 0x0a,
    2300, 2271, 1020,   27, 0x0a,
    2346,  124, 2335,   27, 0x0a,
    2373,  235,   27,   27, 0x0a,
    2452, 2427,   27,   27, 0x0a,
    2494, 2427,   27,   27, 0x0a,
    2526,  664,   27,   27, 0x0a,
    2601, 2593,   27,   27, 0x0a,
    2656,  160,   27,   27, 0x0a,
    2738, 2705,   27,   27, 0x0a,
    2826, 2800,   27,   27, 0x2a,
    2890, 2867,   27,   27, 0x0a,
    2948, 2926,   27,   27, 0x0a,
    3032, 3006,   27,   27, 0x0a,
    3092, 3071,   27,   27, 0x0a,
    3181, 3127,   27,   27, 0x0a,
    3310, 3267,   27,   27, 0x2a,
    3421, 3385,   27,   27, 0x2a,
    3475, 2800,   27,   27, 0x2a,
    3536, 3510,   27,   27, 0x0a,
    3601, 3579,   27,   27, 0x0a,
    3688, 3639,  319,   27, 0x0a,
    3814, 3774,  319,   27, 0x2a,
    3914, 3880,  319,   27, 0x2a,
    3981, 3951,   27,   27, 0x0a,
    4073, 4049,   27,   27, 0x0a,
    4157, 4133, 4124,   27, 0x0a,
    4231,  124, 4213,   27, 0x0a,
    4278,  124, 4261,   27, 0x0a,
    4301,   27, 1157,   27, 0x0a,
    4338,   27,  319,   27, 0x0a,
    4370,   27, 1081,   27, 0x0a,
    4434, 4411,  319,   27, 0x0a,
    4471,  124,  319,   27, 0x2a,
    4504, 4411,  319,   27, 0x0a,
    4538,  124,  319,   27, 0x2a,
    4568, 4411,  319,   27, 0x0a,
    4605,  124,  319,   27, 0x2a,
    4638, 4411,  319,   27, 0x0a,
    4672,  124,  319,   27, 0x2a,
    4702, 4411,  319,   27, 0x0a,
    4736,  124,  319,   27, 0x2a,
    4792, 4766, 1020,   27, 0x0a,

 // enums: name, flags, count, data
    4834, 0x0,    4,  437,
    4849, 0x0,    3,  445,

 // enum data: key, value
    4857, uint(PythonQtWrapper_QSslSocket::VerifyNone),
    4868, uint(PythonQtWrapper_QSslSocket::QueryPeer),
    4878, uint(PythonQtWrapper_QSslSocket::VerifyPeer),
    4889, uint(PythonQtWrapper_QSslSocket::AutoVerifyPeer),
    4904, uint(PythonQtWrapper_QSslSocket::UnencryptedMode),
    4920, uint(PythonQtWrapper_QSslSocket::SslClientMode),
    4934, uint(PythonQtWrapper_QSslSocket::SslServerMode),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QSslSocket[] = {
    "PythonQtWrapper_QSslSocket\0\0QSslSocket*\0"
    "parent\0new_QSslSocket(QObject*)\0"
    "new_QSslSocket()\0obj\0"
    "delete_QSslSocket(QSslSocket*)\0"
    "theWrappedObject\0abort(QSslSocket*)\0"
    "theWrappedObject,certificate\0"
    "addCaCertificate(QSslSocket*,QSslCertificate)\0"
    "theWrappedObject,certificates\0"
    "addCaCertificates(QSslSocket*,QList<QSslCertificate>)\0"
    "bool\0theWrappedObject,path,format,syntax\0"
    "addCaCertificates(QSslSocket*,QString,QSsl::EncodingFormat,QRegExp::Pa"
    "tternSyntax)\0"
    "theWrappedObject,path,format\0"
    "addCaCertificates(QSslSocket*,QString,QSsl::EncodingFormat)\0"
    "theWrappedObject,path\0"
    "addCaCertificates(QSslSocket*,QString)\0"
    "certificate\0"
    "static_QSslSocket_addDefaultCaCertificate(QSslCertificate)\0"
    "certificates\0"
    "static_QSslSocket_addDefaultCaCertificates(QList<QSslCertificate>)\0"
    "path,format,syntax\0"
    "static_QSslSocket_addDefaultCaCertificates(QString,QSsl::EncodingForma"
    "t,QRegExp::PatternSyntax)\0"
    "path,format\0"
    "static_QSslSocket_addDefaultCaCertificates(QString,QSsl::EncodingForma"
    "t)\0"
    "path\0static_QSslSocket_addDefaultCaCertificates(QString)\0"
    "atEnd(QSslSocket*)\0qint64\0"
    "bytesAvailable(QSslSocket*)\0"
    "bytesToWrite(QSslSocket*)\0"
    "QList<QSslCertificate>\0"
    "caCertificates(QSslSocket*)\0"
    "canReadLine(QSslSocket*)\0QList<QSslCipher>\0"
    "ciphers(QSslSocket*)\0close(QSslSocket*)\0"
    "theWrappedObject,hostName,port,mode\0"
    "connectToHostEncrypted(QSslSocket*,QString,unsigned short,QIODevice::O"
    "penMode)\0"
    "theWrappedObject,hostName,port\0"
    "connectToHostEncrypted(QSslSocket*,QString,unsigned short)\0"
    "theWrappedObject,hostName,port,sslPeerName,mode\0"
    "connectToHostEncrypted(QSslSocket*,QString,unsigned short,QString,QIOD"
    "evice::OpenMode)\0"
    "theWrappedObject,hostName,port,sslPeerName\0"
    "connectToHostEncrypted(QSslSocket*,QString,unsigned short,QString)\0"
    "static_QSslSocket_defaultCaCertificates()\0"
    "static_QSslSocket_defaultCiphers()\0"
    "encryptedBytesAvailable(QSslSocket*)\0"
    "encryptedBytesToWrite(QSslSocket*)\0"
    "flush(QSslSocket*)\0theWrappedObject,errors\0"
    "ignoreSslErrors(QSslSocket*,QList<QSslError>)\0"
    "isEncrypted(QSslSocket*)\0QSslCertificate\0"
    "localCertificate(QSslSocket*)\0"
    "QSslSocket::SslMode\0mode(QSslSocket*)\0"
    "peerCertificate(QSslSocket*)\0"
    "peerCertificateChain(QSslSocket*)\0int\0"
    "peerVerifyDepth(QSslSocket*)\0"
    "QSslSocket::PeerVerifyMode\0"
    "peerVerifyMode(QSslSocket*)\0QString\0"
    "peerVerifyName(QSslSocket*)\0QSslKey\0"
    "privateKey(QSslSocket*)\0QSsl::SslProtocol\0"
    "protocol(QSslSocket*)\0"
    "theWrappedObject,data,maxlen\0"
    "readData(QSslSocket*,char*,qint64)\0"
    "QSslCipher\0sessionCipher(QSslSocket*)\0"
    "setCaCertificates(QSslSocket*,QList<QSslCertificate>)\0"
    "theWrappedObject,ciphers\0"
    "setCiphers(QSslSocket*,QList<QSslCipher>)\0"
    "setCiphers(QSslSocket*,QString)\0"
    "static_QSslSocket_setDefaultCaCertificates(QList<QSslCertificate>)\0"
    "ciphers\0static_QSslSocket_setDefaultCiphers(QList<QSslCipher>)\0"
    "setLocalCertificate(QSslSocket*,QSslCertificate)\0"
    "theWrappedObject,fileName,format\0"
    "setLocalCertificate(QSslSocket*,QString,QSsl::EncodingFormat)\0"
    "theWrappedObject,fileName\0"
    "setLocalCertificate(QSslSocket*,QString)\0"
    "theWrappedObject,depth\0"
    "setPeerVerifyDepth(QSslSocket*,int)\0"
    "theWrappedObject,mode\0"
    "setPeerVerifyMode(QSslSocket*,QSslSocket::PeerVerifyMode)\0"
    "theWrappedObject,hostName\0"
    "setPeerVerifyName(QSslSocket*,QString)\0"
    "theWrappedObject,key\0"
    "setPrivateKey(QSslSocket*,QSslKey)\0"
    "theWrappedObject,fileName,algorithm,format,passPhrase\0"
    "setPrivateKey(QSslSocket*,QString,QSsl::KeyAlgorithm,QSsl::EncodingFor"
    "mat,QByteArray)\0"
    "theWrappedObject,fileName,algorithm,format\0"
    "setPrivateKey(QSslSocket*,QString,QSsl::KeyAlgorithm,QSsl::EncodingFor"
    "mat)\0"
    "theWrappedObject,fileName,algorithm\0"
    "setPrivateKey(QSslSocket*,QString,QSsl::KeyAlgorithm)\0"
    "setPrivateKey(QSslSocket*,QString)\0"
    "theWrappedObject,protocol\0"
    "setProtocol(QSslSocket*,QSsl::SslProtocol)\0"
    "theWrappedObject,size\0"
    "setReadBufferSize(QSslSocket*,qint64)\0"
    "theWrappedObject,socketDescriptor,state,openMode\0"
    "setSocketDescriptor(QSslSocket*,int,QAbstractSocket::SocketState,QIODe"
    "vice::OpenMode)\0"
    "theWrappedObject,socketDescriptor,state\0"
    "setSocketDescriptor(QSslSocket*,int,QAbstractSocket::SocketState)\0"
    "theWrappedObject,socketDescriptor\0"
    "setSocketDescriptor(QSslSocket*,int)\0"
    "theWrappedObject,option,value\0"
    "setSocketOption(QSslSocket*,QAbstractSocket::SocketOption,QVariant)\0"
    "theWrappedObject,config\0"
    "setSslConfiguration(QSslSocket*,QSslConfiguration)\0"
    "QVariant\0theWrappedObject,option\0"
    "socketOption(QSslSocket*,QAbstractSocket::SocketOption)\0"
    "QSslConfiguration\0sslConfiguration(QSslSocket*)\0"
    "QList<QSslError>\0sslErrors(QSslSocket*)\0"
    "static_QSslSocket_supportedCiphers()\0"
    "static_QSslSocket_supportsSsl()\0"
    "static_QSslSocket_systemCaCertificates()\0"
    "theWrappedObject,msecs\0"
    "waitForBytesWritten(QSslSocket*,int)\0"
    "waitForBytesWritten(QSslSocket*)\0"
    "waitForConnected(QSslSocket*,int)\0"
    "waitForConnected(QSslSocket*)\0"
    "waitForDisconnected(QSslSocket*,int)\0"
    "waitForDisconnected(QSslSocket*)\0"
    "waitForEncrypted(QSslSocket*,int)\0"
    "waitForEncrypted(QSslSocket*)\0"
    "waitForReadyRead(QSslSocket*,int)\0"
    "waitForReadyRead(QSslSocket*)\0"
    "theWrappedObject,data,len\0"
    "writeData(QSslSocket*,const char*,qint64)\0"
    "PeerVerifyMode\0SslMode\0VerifyNone\0"
    "QueryPeer\0VerifyPeer\0AutoVerifyPeer\0"
    "UnencryptedMode\0SslClientMode\0"
    "SslServerMode\0"
};

void PythonQtWrapper_QSslSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QSslSocket *_t = static_cast<PythonQtWrapper_QSslSocket *>(_o);
        switch (_id) {
        case 0: { QSslSocket* _r = _t->new_QSslSocket((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslSocket**>(_a[0]) = _r; }  break;
        case 1: { QSslSocket* _r = _t->new_QSslSocket();
            if (_a[0]) *reinterpret_cast< QSslSocket**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSslSocket((*reinterpret_cast< QSslSocket*(*)>(_a[1]))); break;
        case 3: _t->abort((*reinterpret_cast< QSslSocket*(*)>(_a[1]))); break;
        case 4: _t->addCaCertificate((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QSslCertificate(*)>(_a[2]))); break;
        case 5: _t->addCaCertificates((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslCertificate>(*)>(_a[2]))); break;
        case 6: { bool _r = _t->addCaCertificates((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[3])),(*reinterpret_cast< QRegExp::PatternSyntax(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->addCaCertificates((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->addCaCertificates((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->static_QSslSocket_addDefaultCaCertificate((*reinterpret_cast< const QSslCertificate(*)>(_a[1]))); break;
        case 10: _t->static_QSslSocket_addDefaultCaCertificates((*reinterpret_cast< const QList<QSslCertificate>(*)>(_a[1]))); break;
        case 11: { bool _r = _t->static_QSslSocket_addDefaultCaCertificates((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[2])),(*reinterpret_cast< QRegExp::PatternSyntax(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->static_QSslSocket_addDefaultCaCertificates((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->static_QSslSocket_addDefaultCaCertificates((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->atEnd((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { qint64 _r = _t->bytesAvailable((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 16: { qint64 _r = _t->bytesToWrite((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 17: { QList<QSslCertificate> _r = _t->caCertificates((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->canReadLine((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { QList<QSslCipher> _r = _t->ciphers((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslCipher>*>(_a[0]) = _r; }  break;
        case 20: _t->close((*reinterpret_cast< QSslSocket*(*)>(_a[1]))); break;
        case 21: _t->connectToHostEncrypted((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[4]))); break;
        case 22: _t->connectToHostEncrypted((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3]))); break;
        case 23: _t->connectToHostEncrypted((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[5]))); break;
        case 24: _t->connectToHostEncrypted((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 25: { QList<QSslCertificate> _r = _t->static_QSslSocket_defaultCaCertificates();
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 26: { QList<QSslCipher> _r = _t->static_QSslSocket_defaultCiphers();
            if (_a[0]) *reinterpret_cast< QList<QSslCipher>*>(_a[0]) = _r; }  break;
        case 27: { qint64 _r = _t->encryptedBytesAvailable((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 28: { qint64 _r = _t->encryptedBytesToWrite((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->flush((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: _t->ignoreSslErrors((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        case 31: { bool _r = _t->isEncrypted((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { QSslCertificate _r = _t->localCertificate((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCertificate*>(_a[0]) = _r; }  break;
        case 33: { QSslSocket::SslMode _r = _t->mode((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslSocket::SslMode*>(_a[0]) = _r; }  break;
        case 34: { QSslCertificate _r = _t->peerCertificate((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCertificate*>(_a[0]) = _r; }  break;
        case 35: { QList<QSslCertificate> _r = _t->peerCertificateChain((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 36: { int _r = _t->peerVerifyDepth((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 37: { QSslSocket::PeerVerifyMode _r = _t->peerVerifyMode((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslSocket::PeerVerifyMode*>(_a[0]) = _r; }  break;
        case 38: { QString _r = _t->peerVerifyName((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 39: { QSslKey _r = _t->privateKey((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslKey*>(_a[0]) = _r; }  break;
        case 40: { QSsl::SslProtocol _r = _t->protocol((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSsl::SslProtocol*>(_a[0]) = _r; }  break;
        case 41: { qint64 _r = _t->readData((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 42: { QSslCipher _r = _t->sessionCipher((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCipher*>(_a[0]) = _r; }  break;
        case 43: _t->setCaCertificates((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslCertificate>(*)>(_a[2]))); break;
        case 44: _t->setCiphers((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslCipher>(*)>(_a[2]))); break;
        case 45: _t->setCiphers((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 46: _t->static_QSslSocket_setDefaultCaCertificates((*reinterpret_cast< const QList<QSslCertificate>(*)>(_a[1]))); break;
        case 47: _t->static_QSslSocket_setDefaultCiphers((*reinterpret_cast< const QList<QSslCipher>(*)>(_a[1]))); break;
        case 48: _t->setLocalCertificate((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QSslCertificate(*)>(_a[2]))); break;
        case 49: _t->setLocalCertificate((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[3]))); break;
        case 50: _t->setLocalCertificate((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 51: _t->setPeerVerifyDepth((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 52: _t->setPeerVerifyMode((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< QSslSocket::PeerVerifyMode(*)>(_a[2]))); break;
        case 53: _t->setPeerVerifyName((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 54: _t->setPrivateKey((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QSslKey(*)>(_a[2]))); break;
        case 55: _t->setPrivateKey((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSsl::KeyAlgorithm(*)>(_a[3])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[4])),(*reinterpret_cast< const QByteArray(*)>(_a[5]))); break;
        case 56: _t->setPrivateKey((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSsl::KeyAlgorithm(*)>(_a[3])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[4]))); break;
        case 57: _t->setPrivateKey((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSsl::KeyAlgorithm(*)>(_a[3]))); break;
        case 58: _t->setPrivateKey((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 59: _t->setProtocol((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< QSsl::SslProtocol(*)>(_a[2]))); break;
        case 60: _t->setReadBufferSize((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 61: { bool _r = _t->setSocketDescriptor((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[3])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 62: { bool _r = _t->setSocketDescriptor((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 63: { bool _r = _t->setSocketDescriptor((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 64: _t->setSocketOption((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< QAbstractSocket::SocketOption(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 65: _t->setSslConfiguration((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const QSslConfiguration(*)>(_a[2]))); break;
        case 66: { QVariant _r = _t->socketOption((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< QAbstractSocket::SocketOption(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 67: { QSslConfiguration _r = _t->sslConfiguration((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslConfiguration*>(_a[0]) = _r; }  break;
        case 68: { QList<QSslError> _r = _t->sslErrors((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslError>*>(_a[0]) = _r; }  break;
        case 69: { QList<QSslCipher> _r = _t->static_QSslSocket_supportedCiphers();
            if (_a[0]) *reinterpret_cast< QList<QSslCipher>*>(_a[0]) = _r; }  break;
        case 70: { bool _r = _t->static_QSslSocket_supportsSsl();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 71: { QList<QSslCertificate> _r = _t->static_QSslSocket_systemCaCertificates();
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 72: { bool _r = _t->waitForBytesWritten((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 73: { bool _r = _t->waitForBytesWritten((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 74: { bool _r = _t->waitForConnected((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 75: { bool _r = _t->waitForConnected((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 76: { bool _r = _t->waitForDisconnected((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 77: { bool _r = _t->waitForDisconnected((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 78: { bool _r = _t->waitForEncrypted((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 79: { bool _r = _t->waitForEncrypted((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 80: { bool _r = _t->waitForReadyRead((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 81: { bool _r = _t->waitForReadyRead((*reinterpret_cast< QSslSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 82: { qint64 _r = _t->writeData((*reinterpret_cast< QSslSocket*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QSslSocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QSslSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSslSocket,
      qt_meta_data_PythonQtWrapper_QSslSocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QSslSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QSslSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QSslSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSslSocket))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSslSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSslSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTcpServer[] = {

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
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
      93,   89,   27,   27, 0x0a,
     148,  124,   27,   27, 0x0a,
     211,  194,   27,   27, 0x0a,
     238,  194,  230,   27, 0x0a,
     268,  194,  263,   27, 0x0a,
     327,  303,   27,   27, 0x0a,
     363,  194,  263,   27, 0x0a,
     418,  388,  263,   27, 0x0a,
     491,  466,  263,   27, 0x2a,
     524,  194,  263,   27, 0x2a,
     548,  194,  544,   27, 0x0a,
     595,  194,  583,   27, 0x0a,
     644,  194,  630,   27, 0x0a,
     676,  194,  663,   27, 0x0a,
     732,  194,  703,   27, 0x0a,
     772,  194,  757,   27, 0x0a,
     828,  796,   27,   27, 0x0a,
     900,  870,   27,   27, 0x0a,
     970,  936,  263,   27, 0x0a,
    1007,  194,  544,   27, 0x0a,
    1068, 1037,  263,   27, 0x0a,
    1134, 1112,  263,   27, 0x2a,
    1172,  194,  263,   27, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTcpServer[] = {
    "PythonQtWrapper_QTcpServer\0\0QTcpServer*\0"
    "parent\0new_QTcpServer(QObject*)\0"
    "new_QTcpServer()\0obj\0"
    "delete_QTcpServer(QTcpServer*)\0"
    "theWrappedObject,socket\0"
    "addPendingConnection(QTcpServer*,QTcpSocket*)\0"
    "theWrappedObject\0close(QTcpServer*)\0"
    "QString\0errorString(QTcpServer*)\0bool\0"
    "hasPendingConnections(QTcpServer*)\0"
    "theWrappedObject,handle\0"
    "incomingConnection(QTcpServer*,int)\0"
    "isListening(QTcpServer*)\0"
    "theWrappedObject,address,port\0"
    "listen(QTcpServer*,QHostAddress,unsigned short)\0"
    "theWrappedObject,address\0"
    "listen(QTcpServer*,QHostAddress)\0"
    "listen(QTcpServer*)\0int\0"
    "maxPendingConnections(QTcpServer*)\0"
    "QTcpSocket*\0nextPendingConnection(QTcpServer*)\0"
    "QNetworkProxy\0proxy(QTcpServer*)\0"
    "QHostAddress\0serverAddress(QTcpServer*)\0"
    "QAbstractSocket::SocketError\0"
    "serverError(QTcpServer*)\0unsigned short\0"
    "serverPort(QTcpServer*)\0"
    "theWrappedObject,numConnections\0"
    "setMaxPendingConnections(QTcpServer*,int)\0"
    "theWrappedObject,networkProxy\0"
    "setProxy(QTcpServer*,QNetworkProxy)\0"
    "theWrappedObject,socketDescriptor\0"
    "setSocketDescriptor(QTcpServer*,int)\0"
    "socketDescriptor(QTcpServer*)\0"
    "theWrappedObject,msec,timedOut\0"
    "waitForNewConnection(QTcpServer*,int,bool*)\0"
    "theWrappedObject,msec\0"
    "waitForNewConnection(QTcpServer*,int)\0"
    "waitForNewConnection(QTcpServer*)\0"
};

void PythonQtWrapper_QTcpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTcpServer *_t = static_cast<PythonQtWrapper_QTcpServer *>(_o);
        switch (_id) {
        case 0: { QTcpServer* _r = _t->new_QTcpServer((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTcpServer**>(_a[0]) = _r; }  break;
        case 1: { QTcpServer* _r = _t->new_QTcpServer();
            if (_a[0]) *reinterpret_cast< QTcpServer**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTcpServer((*reinterpret_cast< QTcpServer*(*)>(_a[1]))); break;
        case 3: _t->addPendingConnection((*reinterpret_cast< QTcpServer*(*)>(_a[1])),(*reinterpret_cast< QTcpSocket*(*)>(_a[2]))); break;
        case 4: _t->close((*reinterpret_cast< QTcpServer*(*)>(_a[1]))); break;
        case 5: { QString _r = _t->errorString((*reinterpret_cast< QTcpServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->hasPendingConnections((*reinterpret_cast< QTcpServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->incomingConnection((*reinterpret_cast< QTcpServer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: { bool _r = _t->isListening((*reinterpret_cast< QTcpServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->listen((*reinterpret_cast< QTcpServer*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->listen((*reinterpret_cast< QTcpServer*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->listen((*reinterpret_cast< QTcpServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->maxPendingConnections((*reinterpret_cast< QTcpServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { QTcpSocket* _r = _t->nextPendingConnection((*reinterpret_cast< QTcpServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTcpSocket**>(_a[0]) = _r; }  break;
        case 14: { QNetworkProxy _r = _t->proxy((*reinterpret_cast< QTcpServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy*>(_a[0]) = _r; }  break;
        case 15: { QHostAddress _r = _t->serverAddress((*reinterpret_cast< QTcpServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress*>(_a[0]) = _r; }  break;
        case 16: { QAbstractSocket::SocketError _r = _t->serverError((*reinterpret_cast< QTcpServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractSocket::SocketError*>(_a[0]) = _r; }  break;
        case 17: { unsigned short _r = _t->serverPort((*reinterpret_cast< QTcpServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< unsigned short*>(_a[0]) = _r; }  break;
        case 18: _t->setMaxPendingConnections((*reinterpret_cast< QTcpServer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->setProxy((*reinterpret_cast< QTcpServer*(*)>(_a[1])),(*reinterpret_cast< const QNetworkProxy(*)>(_a[2]))); break;
        case 20: { bool _r = _t->setSocketDescriptor((*reinterpret_cast< QTcpServer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->socketDescriptor((*reinterpret_cast< QTcpServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->waitForNewConnection((*reinterpret_cast< QTcpServer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->waitForNewConnection((*reinterpret_cast< QTcpServer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->waitForNewConnection((*reinterpret_cast< QTcpServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTcpServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTcpServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTcpServer,
      qt_meta_data_PythonQtWrapper_QTcpServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTcpServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTcpServer))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTcpServer*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QTcpSocket[] = {

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
      47,   40,   28,   27, 0x0a,
      72,   27,   28,   27, 0x2a,
      93,   89,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QTcpSocket[] = {
    "PythonQtWrapper_QTcpSocket\0\0QTcpSocket*\0"
    "parent\0new_QTcpSocket(QObject*)\0"
    "new_QTcpSocket()\0obj\0"
    "delete_QTcpSocket(QTcpSocket*)\0"
};

void PythonQtWrapper_QTcpSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QTcpSocket *_t = static_cast<PythonQtWrapper_QTcpSocket *>(_o);
        switch (_id) {
        case 0: { QTcpSocket* _r = _t->new_QTcpSocket((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTcpSocket**>(_a[0]) = _r; }  break;
        case 1: { QTcpSocket* _r = _t->new_QTcpSocket();
            if (_a[0]) *reinterpret_cast< QTcpSocket**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTcpSocket((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QTcpSocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QTcpSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTcpSocket,
      qt_meta_data_PythonQtWrapper_QTcpSocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QTcpSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QTcpSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QTcpSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTcpSocket))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTcpSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTcpSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

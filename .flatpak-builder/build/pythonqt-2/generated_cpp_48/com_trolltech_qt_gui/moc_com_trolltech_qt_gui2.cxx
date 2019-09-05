/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_gui2.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "com_trolltech_qt_gui2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_gui2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonQtWrapper_QFocusFrame[] = {

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
      49,   42,   29,   28, 0x0a,
      75,   28,   29,   28, 0x2a,
      97,   93,   28,   28, 0x0a,
     154,  135,  130,   28, 0x0a,
     213,  182,  130,   28, 0x0a,
     280,  256,   28,   28, 0x0a,
     348,  324,   28,   28, 0x0a,
     410,  386,   28,   28, 0x0a,
     469,  452,  443,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFocusFrame[] = {
    "PythonQtWrapper_QFocusFrame\0\0QFocusFrame*\0"
    "parent\0new_QFocusFrame(QWidget*)\0"
    "new_QFocusFrame()\0obj\0"
    "delete_QFocusFrame(QFocusFrame*)\0bool\0"
    "theWrappedObject,e\0event(QFocusFrame*,QEvent*)\0"
    "theWrappedObject,arg__1,arg__2\0"
    "eventFilter(QFocusFrame*,QObject*,QEvent*)\0"
    "theWrappedObject,option\0"
    "initStyleOption(QFocusFrame*,QStyleOption*)\0"
    "theWrappedObject,arg__1\0"
    "paintEvent(QFocusFrame*,QPaintEvent*)\0"
    "theWrappedObject,widget\0"
    "setWidget(QFocusFrame*,QWidget*)\0"
    "QWidget*\0theWrappedObject\0"
    "widget(QFocusFrame*)\0"
};

void PythonQtWrapper_QFocusFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFocusFrame *_t = static_cast<PythonQtWrapper_QFocusFrame *>(_o);
        switch (_id) {
        case 0: { QFocusFrame* _r = _t->new_QFocusFrame((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFocusFrame**>(_a[0]) = _r; }  break;
        case 1: { QFocusFrame* _r = _t->new_QFocusFrame();
            if (_a[0]) *reinterpret_cast< QFocusFrame**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFocusFrame((*reinterpret_cast< QFocusFrame*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->event((*reinterpret_cast< QFocusFrame*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->eventFilter((*reinterpret_cast< QFocusFrame*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->initStyleOption((*reinterpret_cast< QFocusFrame*(*)>(_a[1])),(*reinterpret_cast< QStyleOption*(*)>(_a[2]))); break;
        case 6: _t->paintEvent((*reinterpret_cast< QFocusFrame*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 7: _t->setWidget((*reinterpret_cast< QFocusFrame*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 8: { QWidget* _r = _t->widget((*reinterpret_cast< QFocusFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFocusFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFocusFrame::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFocusFrame,
      qt_meta_data_PythonQtWrapper_QFocusFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFocusFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFocusFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFocusFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFocusFrame))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFocusFrame*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFocusFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFontComboBox[] = {

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
      53,   46,   31,   30, 0x0a,
      81,   30,   31,   30, 0x2a,
     105,  101,   30,   30, 0x0a,
     165,  148,  142,   30, 0x0a,
     217,  198,  193,   30, 0x0a,
     274,  148,  247,   30, 0x0a,
     327,  302,   30,   30, 0x0a,
     409,  385,   30,   30, 0x0a,
     477,  148,  471,   30, 0x0a,
     531,  148,  502,   30, 0x0a,

 // enums: name, flags, count, data
     561, 0x0,    5,   72,
     572, 0x1,    5,   82,

 // enum data: key, value
     584, uint(PythonQtWrapper_QFontComboBox::AllFonts),
     593, uint(PythonQtWrapper_QFontComboBox::ScalableFonts),
     607, uint(PythonQtWrapper_QFontComboBox::NonScalableFonts),
     624, uint(PythonQtWrapper_QFontComboBox::MonospacedFonts),
     640, uint(PythonQtWrapper_QFontComboBox::ProportionalFonts),
     584, uint(PythonQtWrapper_QFontComboBox::AllFonts),
     593, uint(PythonQtWrapper_QFontComboBox::ScalableFonts),
     607, uint(PythonQtWrapper_QFontComboBox::NonScalableFonts),
     624, uint(PythonQtWrapper_QFontComboBox::MonospacedFonts),
     640, uint(PythonQtWrapper_QFontComboBox::ProportionalFonts),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFontComboBox[] = {
    "PythonQtWrapper_QFontComboBox\0\0"
    "QFontComboBox*\0parent\0new_QFontComboBox(QWidget*)\0"
    "new_QFontComboBox()\0obj\0"
    "delete_QFontComboBox(QFontComboBox*)\0"
    "QFont\0theWrappedObject\0"
    "currentFont(QFontComboBox*)\0bool\0"
    "theWrappedObject,e\0event(QFontComboBox*,QEvent*)\0"
    "QFontComboBox::FontFilters\0"
    "fontFilters(QFontComboBox*)\0"
    "theWrappedObject,filters\0"
    "setFontFilters(QFontComboBox*,QFontComboBox::FontFilters)\0"
    "theWrappedObject,arg__1\0"
    "setWritingSystem(QFontComboBox*,QFontDatabase::WritingSystem)\0"
    "QSize\0sizeHint(QFontComboBox*)\0"
    "QFontDatabase::WritingSystem\0"
    "writingSystem(QFontComboBox*)\0FontFilter\0"
    "FontFilters\0AllFonts\0ScalableFonts\0"
    "NonScalableFonts\0MonospacedFonts\0"
    "ProportionalFonts\0"
};

void PythonQtWrapper_QFontComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFontComboBox *_t = static_cast<PythonQtWrapper_QFontComboBox *>(_o);
        switch (_id) {
        case 0: { QFontComboBox* _r = _t->new_QFontComboBox((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontComboBox**>(_a[0]) = _r; }  break;
        case 1: { QFontComboBox* _r = _t->new_QFontComboBox();
            if (_a[0]) *reinterpret_cast< QFontComboBox**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFontComboBox((*reinterpret_cast< QFontComboBox*(*)>(_a[1]))); break;
        case 3: { QFont _r = _t->currentFont((*reinterpret_cast< QFontComboBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->event((*reinterpret_cast< QFontComboBox*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QFontComboBox::FontFilters _r = _t->fontFilters((*reinterpret_cast< QFontComboBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontComboBox::FontFilters*>(_a[0]) = _r; }  break;
        case 6: _t->setFontFilters((*reinterpret_cast< QFontComboBox*(*)>(_a[1])),(*reinterpret_cast< QFontComboBox::FontFilters(*)>(_a[2]))); break;
        case 7: _t->setWritingSystem((*reinterpret_cast< QFontComboBox*(*)>(_a[1])),(*reinterpret_cast< QFontDatabase::WritingSystem(*)>(_a[2]))); break;
        case 8: { QSize _r = _t->sizeHint((*reinterpret_cast< QFontComboBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 9: { QFontDatabase::WritingSystem _r = _t->writingSystem((*reinterpret_cast< QFontComboBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontDatabase::WritingSystem*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFontComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFontComboBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFontComboBox,
      qt_meta_data_PythonQtWrapper_QFontComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFontComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFontComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFontComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFontComboBox))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFontComboBox*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFontComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFontDatabase[] = {

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
      46,   30,   31,   30, 0x0a,
      72,   66,   31,   30, 0x0a,
     109,  105,   30,   30, 0x0a,
     159,  150,  146,   30, 0x0a,
     217,  208,  146,   30, 0x0a,
     292,  289,  277,   30, 0x0a,
     377,  347,  342,   30, 0x0a,
     445,  414,  277,   30, 0x0a,
     516,  499,  277,   30, 0x2a,
     587,  547,  541,   30, 0x0a,
     652,  628,  342,   30, 0x0a,
     686,  347,  342,   30, 0x0a,
     735,  628,  342,   30, 0x2a,
     776,  347,  342,   30, 0x0a,
     821,  628,  342,   30, 0x2a,
     858,  347,  342,   30, 0x0a,
     901,  628,  342,   30, 0x2a,
     936,  347,  342,   30, 0x0a,
     987,  628,  342,   30, 0x2a,
    1030,  347,  342,   30, 0x0a,
    1080,  347, 1069,   30, 0x0a,
    1123,  628, 1069,   30, 0x2a,
    1158,   30,  342,   30, 0x0a,
    1207,  289,  342,   30, 0x0a,
    1255,  347, 1069,   30, 0x0a,
    1299,   30, 1069,   30, 0x0a,
    1366, 1344, 1336,   30, 0x0a,
    1426, 1400, 1336,   30, 0x0a,
    1464,  628,  277,   30, 0x0a,
    1495,   30,  342,   30, 0x0a,
    1548,  347,  146,   30, 0x0a,
    1601, 1587, 1336,   30, 0x0a,
    1670, 1587, 1336,   30, 0x0a,
    1777,  499, 1741,   30, 0x0a,
    1808,  628, 1741,   30, 0x0a,

 // enums: name, flags, count, data
    1847, 0x0,   36,  193,

 // enum data: key, value
    1861, uint(PythonQtWrapper_QFontDatabase::Any),
    1865, uint(PythonQtWrapper_QFontDatabase::Latin),
    1871, uint(PythonQtWrapper_QFontDatabase::Greek),
    1877, uint(PythonQtWrapper_QFontDatabase::Cyrillic),
    1886, uint(PythonQtWrapper_QFontDatabase::Armenian),
    1895, uint(PythonQtWrapper_QFontDatabase::Hebrew),
    1902, uint(PythonQtWrapper_QFontDatabase::Arabic),
    1909, uint(PythonQtWrapper_QFontDatabase::Syriac),
    1916, uint(PythonQtWrapper_QFontDatabase::Thaana),
    1923, uint(PythonQtWrapper_QFontDatabase::Devanagari),
    1934, uint(PythonQtWrapper_QFontDatabase::Bengali),
    1942, uint(PythonQtWrapper_QFontDatabase::Gurmukhi),
    1951, uint(PythonQtWrapper_QFontDatabase::Gujarati),
    1960, uint(PythonQtWrapper_QFontDatabase::Oriya),
    1966, uint(PythonQtWrapper_QFontDatabase::Tamil),
    1972, uint(PythonQtWrapper_QFontDatabase::Telugu),
    1979, uint(PythonQtWrapper_QFontDatabase::Kannada),
    1987, uint(PythonQtWrapper_QFontDatabase::Malayalam),
    1997, uint(PythonQtWrapper_QFontDatabase::Sinhala),
    2005, uint(PythonQtWrapper_QFontDatabase::Thai),
    2010, uint(PythonQtWrapper_QFontDatabase::Lao),
    2014, uint(PythonQtWrapper_QFontDatabase::Tibetan),
    2022, uint(PythonQtWrapper_QFontDatabase::Myanmar),
    2030, uint(PythonQtWrapper_QFontDatabase::Georgian),
    2039, uint(PythonQtWrapper_QFontDatabase::Khmer),
    2045, uint(PythonQtWrapper_QFontDatabase::SimplifiedChinese),
    2063, uint(PythonQtWrapper_QFontDatabase::TraditionalChinese),
    2082, uint(PythonQtWrapper_QFontDatabase::Japanese),
    2091, uint(PythonQtWrapper_QFontDatabase::Korean),
    2098, uint(PythonQtWrapper_QFontDatabase::Vietnamese),
    2109, uint(PythonQtWrapper_QFontDatabase::Symbol),
    2116, uint(PythonQtWrapper_QFontDatabase::Other),
    2122, uint(PythonQtWrapper_QFontDatabase::Ogham),
    2128, uint(PythonQtWrapper_QFontDatabase::Runic),
    2134, uint(PythonQtWrapper_QFontDatabase::Nko),
    2138, uint(PythonQtWrapper_QFontDatabase::WritingSystemsCount),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFontDatabase[] = {
    "PythonQtWrapper_QFontDatabase\0\0"
    "QFontDatabase*\0new_QFontDatabase()\0"
    "other\0new_QFontDatabase(QFontDatabase)\0"
    "obj\0delete_QFontDatabase(QFontDatabase*)\0"
    "int\0fileName\0"
    "static_QFontDatabase_addApplicationFont(QString)\0"
    "fontData\0"
    "static_QFontDatabase_addApplicationFontFromData(QByteArray)\0"
    "QStringList\0id\0"
    "static_QFontDatabase_applicationFontFamilies(int)\0"
    "bool\0theWrappedObject,family,style\0"
    "bold(QFontDatabase*,QString,QString)\0"
    "theWrappedObject,writingSystem\0"
    "families(QFontDatabase*,QFontDatabase::WritingSystem)\0"
    "theWrappedObject\0families(QFontDatabase*)\0"
    "QFont\0theWrappedObject,family,style,pointSize\0"
    "font(QFontDatabase*,QString,QString,int)\0"
    "theWrappedObject,family\0"
    "hasFamily(QFontDatabase*,QString)\0"
    "isBitmapScalable(QFontDatabase*,QString,QString)\0"
    "isBitmapScalable(QFontDatabase*,QString)\0"
    "isFixedPitch(QFontDatabase*,QString,QString)\0"
    "isFixedPitch(QFontDatabase*,QString)\0"
    "isScalable(QFontDatabase*,QString,QString)\0"
    "isScalable(QFontDatabase*,QString)\0"
    "isSmoothlyScalable(QFontDatabase*,QString,QString)\0"
    "isSmoothlyScalable(QFontDatabase*,QString)\0"
    "italic(QFontDatabase*,QString,QString)\0"
    "QList<int>\0pointSizes(QFontDatabase*,QString,QString)\0"
    "pointSizes(QFontDatabase*,QString)\0"
    "static_QFontDatabase_removeAllApplicationFonts()\0"
    "static_QFontDatabase_removeApplicationFont(int)\0"
    "smoothSizes(QFontDatabase*,QString,QString)\0"
    "static_QFontDatabase_standardSizes()\0"
    "QString\0theWrappedObject,font\0"
    "styleString(QFontDatabase*,QFont)\0"
    "theWrappedObject,fontInfo\0"
    "styleString(QFontDatabase*,QFontInfo)\0"
    "styles(QFontDatabase*,QString)\0"
    "static_QFontDatabase_supportsThreadedFontRendering()\0"
    "weight(QFontDatabase*,QString,QString)\0"
    "writingSystem\0"
    "static_QFontDatabase_writingSystemName(QFontDatabase::WritingSystem)\0"
    "static_QFontDatabase_writingSystemSample(QFontDatabase::WritingSystem)\0"
    "QList<QFontDatabase::WritingSystem>\0"
    "writingSystems(QFontDatabase*)\0"
    "writingSystems(QFontDatabase*,QString)\0"
    "WritingSystem\0Any\0Latin\0Greek\0Cyrillic\0"
    "Armenian\0Hebrew\0Arabic\0Syriac\0Thaana\0"
    "Devanagari\0Bengali\0Gurmukhi\0Gujarati\0"
    "Oriya\0Tamil\0Telugu\0Kannada\0Malayalam\0"
    "Sinhala\0Thai\0Lao\0Tibetan\0Myanmar\0"
    "Georgian\0Khmer\0SimplifiedChinese\0"
    "TraditionalChinese\0Japanese\0Korean\0"
    "Vietnamese\0Symbol\0Other\0Ogham\0Runic\0"
    "Nko\0WritingSystemsCount\0"
};

void PythonQtWrapper_QFontDatabase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFontDatabase *_t = static_cast<PythonQtWrapper_QFontDatabase *>(_o);
        switch (_id) {
        case 0: { QFontDatabase* _r = _t->new_QFontDatabase();
            if (_a[0]) *reinterpret_cast< QFontDatabase**>(_a[0]) = _r; }  break;
        case 1: { QFontDatabase* _r = _t->new_QFontDatabase((*reinterpret_cast< const QFontDatabase(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontDatabase**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFontDatabase((*reinterpret_cast< QFontDatabase*(*)>(_a[1]))); break;
        case 3: { int _r = _t->static_QFontDatabase_addApplicationFont((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->static_QFontDatabase_addApplicationFontFromData((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { QStringList _r = _t->static_QFontDatabase_applicationFontFamilies((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->bold((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QStringList _r = _t->families((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< QFontDatabase::WritingSystem(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 8: { QStringList _r = _t->families((*reinterpret_cast< QFontDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 9: { QFont _r = _t->font((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->hasFamily((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isBitmapScalable((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isBitmapScalable((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isFixedPitch((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isFixedPitch((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isScalable((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isScalable((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isSmoothlyScalable((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->isSmoothlyScalable((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->italic((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { QList<int> _r = _t->pointSizes((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 21: { QList<int> _r = _t->pointSizes((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->static_QFontDatabase_removeAllApplicationFonts();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->static_QFontDatabase_removeApplicationFont((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { QList<int> _r = _t->smoothSizes((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 25: { QList<int> _r = _t->static_QFontDatabase_standardSizes();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 26: { QString _r = _t->styleString((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 27: { QString _r = _t->styleString((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QFontInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 28: { QStringList _r = _t->styles((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->static_QFontDatabase_supportsThreadedFontRendering();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->weight((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: { QString _r = _t->static_QFontDatabase_writingSystemName((*reinterpret_cast< QFontDatabase::WritingSystem(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 32: { QString _r = _t->static_QFontDatabase_writingSystemSample((*reinterpret_cast< QFontDatabase::WritingSystem(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 33: { QList<QFontDatabase::WritingSystem> _r = _t->writingSystems((*reinterpret_cast< QFontDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QFontDatabase::WritingSystem>*>(_a[0]) = _r; }  break;
        case 34: { QList<QFontDatabase::WritingSystem> _r = _t->writingSystems((*reinterpret_cast< QFontDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QFontDatabase::WritingSystem>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFontDatabase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFontDatabase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFontDatabase,
      qt_meta_data_PythonQtWrapper_QFontDatabase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFontDatabase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFontDatabase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFontDatabase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFontDatabase))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFontDatabase*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFontDatabase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFontDialog[] = {

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
      49,   42,   29,   28, 0x0a,
      75,   28,   29,   28, 0x2a,
     108,   93,   29,   28, 0x0a,
     148,  140,   29,   28, 0x2a,
     175,  171,   28,   28, 0x0a,
     231,  208,   28,   28, 0x0a,
     288,  271,  265,   28, 0x0a,
     338,  314,   28,   28, 0x0a,
     371,  361,  265,   28, 0x0a,
     417,  414,  265,   28, 0x2a,
     469,  451,  265,   28, 0x0a,
     529,  518,  265,   28, 0x2a,
     593,  569,  265,   28, 0x0a,
     682,  650,  265,   28, 0x0a,
     770,  271,   28,   28, 0x0a,
     822,  789,   28,   28, 0x0a,
     893,  271,  862,   28, 0x0a,
     915,  271,  265,   28, 0x0a,
     964,  942,   28,   28, 0x0a,
    1026,  999,   28,   28, 0x0a,
    1109, 1085,   28,   28, 0x2a,
    1188, 1163,   28,   28, 0x0a,
    1269, 1244,   28,   28, 0x0a,
    1304, 1085, 1299,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFontDialog[] = {
    "PythonQtWrapper_QFontDialog\0\0QFontDialog*\0"
    "parent\0new_QFontDialog(QWidget*)\0"
    "new_QFontDialog()\0initial,parent\0"
    "new_QFontDialog(QFont,QWidget*)\0initial\0"
    "new_QFontDialog(QFont)\0obj\0"
    "delete_QFontDialog(QFontDialog*)\0"
    "theWrappedObject,event\0"
    "changeEvent(QFontDialog*,QEvent*)\0"
    "QFont\0theWrappedObject\0currentFont(QFontDialog*)\0"
    "theWrappedObject,result\0done(QFontDialog*,int)\0"
    "ok,parent\0static_QFontDialog_getFont(bool*,QWidget*)\0"
    "ok\0static_QFontDialog_getFont(bool*)\0"
    "ok,initial,parent\0"
    "static_QFontDialog_getFont(bool*,QFont,QWidget*)\0"
    "ok,initial\0static_QFontDialog_getFont(bool*,QFont)\0"
    "ok,initial,parent,title\0"
    "static_QFontDialog_getFont(bool*,QFont,QWidget*,QString)\0"
    "ok,initial,parent,title,options\0"
    "static_QFontDialog_getFont(bool*,QFont,QWidget*,QString,QFontDialog::F"
    "ontDialogOptions)\0"
    "open(QFontDialog*)\0theWrappedObject,receiver,member\0"
    "open(QFontDialog*,QObject*,const char*)\0"
    "QFontDialog::FontDialogOptions\0"
    "options(QFontDialog*)\0selectedFont(QFontDialog*)\0"
    "theWrappedObject,font\0"
    "setCurrentFont(QFontDialog*,QFont)\0"
    "theWrappedObject,option,on\0"
    "setOption(QFontDialog*,QFontDialog::FontDialogOption,bool)\0"
    "theWrappedObject,option\0"
    "setOption(QFontDialog*,QFontDialog::FontDialogOption)\0"
    "theWrappedObject,options\0"
    "setOptions(QFontDialog*,QFontDialog::FontDialogOptions)\0"
    "theWrappedObject,visible\0"
    "setVisible(QFontDialog*,bool)\0bool\0"
    "testOption(QFontDialog*,QFontDialog::FontDialogOption)\0"
};

void PythonQtWrapper_QFontDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFontDialog *_t = static_cast<PythonQtWrapper_QFontDialog *>(_o);
        switch (_id) {
        case 0: { QFontDialog* _r = _t->new_QFontDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontDialog**>(_a[0]) = _r; }  break;
        case 1: { QFontDialog* _r = _t->new_QFontDialog();
            if (_a[0]) *reinterpret_cast< QFontDialog**>(_a[0]) = _r; }  break;
        case 2: { QFontDialog* _r = _t->new_QFontDialog((*reinterpret_cast< const QFont(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFontDialog**>(_a[0]) = _r; }  break;
        case 3: { QFontDialog* _r = _t->new_QFontDialog((*reinterpret_cast< const QFont(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontDialog**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QFontDialog((*reinterpret_cast< QFontDialog*(*)>(_a[1]))); break;
        case 5: _t->changeEvent((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 6: { QFont _r = _t->currentFont((*reinterpret_cast< QFontDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 7: _t->done((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: { QFont _r = _t->static_QFontDialog_getFont((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 9: { QFont _r = _t->static_QFontDialog_getFont((*reinterpret_cast< bool*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 10: { QFont _r = _t->static_QFontDialog_getFont((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 11: { QFont _r = _t->static_QFontDialog_getFont((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 12: { QFont _r = _t->static_QFontDialog_getFont((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 13: { QFont _r = _t->static_QFontDialog_getFont((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< QFontDialog::FontDialogOptions(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 14: _t->open((*reinterpret_cast< QFontDialog*(*)>(_a[1]))); break;
        case 15: _t->open((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3]))); break;
        case 16: { QFontDialog::FontDialogOptions _r = _t->options((*reinterpret_cast< QFontDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontDialog::FontDialogOptions*>(_a[0]) = _r; }  break;
        case 17: { QFont _r = _t->selectedFont((*reinterpret_cast< QFontDialog*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 18: _t->setCurrentFont((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2]))); break;
        case 19: _t->setOption((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< QFontDialog::FontDialogOption(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 20: _t->setOption((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< QFontDialog::FontDialogOption(*)>(_a[2]))); break;
        case 21: _t->setOptions((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< QFontDialog::FontDialogOptions(*)>(_a[2]))); break;
        case 22: _t->setVisible((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: { bool _r = _t->testOption((*reinterpret_cast< QFontDialog*(*)>(_a[1])),(*reinterpret_cast< QFontDialog::FontDialogOption(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFontDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFontDialog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFontDialog,
      qt_meta_data_PythonQtWrapper_QFontDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFontDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFontDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFontDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFontDialog))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFontDialog*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFontDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFontInfo[] = {

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
      45,   38,   27,   26, 0x0a,
      66,   38,   27,   26, 0x0a,
      95,   91,   26,   26, 0x0a,
     146,  129,  124,   26, 0x0a,
     163,  129,  124,   26, 0x0a,
     194,  129,  186,   26, 0x0a,
     213,  129,  124,   26, 0x0a,
     236,  129,  124,   26, 0x0a,
     255,  129,  124,   26, 0x0a,
     280,  129,  276,   26, 0x0a,
     302,  129,  276,   26, 0x0a,
     330,  129,  324,   26, 0x0a,
     353,  129,  124,   26, 0x0a,
     373,  129,  124,   26, 0x0a,
     408,  129,  395,   26, 0x0a,
     443,  129,  426,   26, 0x0a,
     465,  129,  186,   26, 0x0a,
     487,  129,  124,   26, 0x0a,
     509,  129,  276,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFontInfo[] = {
    "PythonQtWrapper_QFontInfo\0\0QFontInfo*\0"
    "arg__1\0new_QFontInfo(QFont)\0"
    "new_QFontInfo(QFontInfo)\0obj\0"
    "delete_QFontInfo(QFontInfo*)\0bool\0"
    "theWrappedObject\0bold(QFontInfo*)\0"
    "exactMatch(QFontInfo*)\0QString\0"
    "family(QFontInfo*)\0fixedPitch(QFontInfo*)\0"
    "italic(QFontInfo*)\0overline(QFontInfo*)\0"
    "int\0pixelSize(QFontInfo*)\0"
    "pointSize(QFontInfo*)\0qreal\0"
    "pointSizeF(QFontInfo*)\0rawMode(QFontInfo*)\0"
    "strikeOut(QFontInfo*)\0QFont::Style\0"
    "style(QFontInfo*)\0QFont::StyleHint\0"
    "styleHint(QFontInfo*)\0styleName(QFontInfo*)\0"
    "underline(QFontInfo*)\0weight(QFontInfo*)\0"
};

void PythonQtWrapper_QFontInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFontInfo *_t = static_cast<PythonQtWrapper_QFontInfo *>(_o);
        switch (_id) {
        case 0: { QFontInfo* _r = _t->new_QFontInfo((*reinterpret_cast< const QFont(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontInfo**>(_a[0]) = _r; }  break;
        case 1: { QFontInfo* _r = _t->new_QFontInfo((*reinterpret_cast< const QFontInfo(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontInfo**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFontInfo((*reinterpret_cast< QFontInfo*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->bold((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->exactMatch((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->family((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->fixedPitch((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->italic((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->overline((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->pixelSize((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->pointSize((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { qreal _r = _t->pointSizeF((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->rawMode((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->strikeOut((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QFont::Style _r = _t->style((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::Style*>(_a[0]) = _r; }  break;
        case 15: { QFont::StyleHint _r = _t->styleHint((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::StyleHint*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->styleName((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->underline((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->weight((*reinterpret_cast< QFontInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFontInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFontInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFontInfo,
      qt_meta_data_PythonQtWrapper_QFontInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFontInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFontInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFontInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFontInfo))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFontInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFontInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFontMetrics[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      51,   44,   30,   29, 0x0a,
      85,   75,   30,   29, 0x0a,
     127,  123,   29,   29, 0x0a,
     183,  166,  162,   29, 0x0a,
     205,  166,  162,   29, 0x0a,
     267,  243,  237,   29, 0x0a,
     349,  301,  237,   29, 0x0a,
     443,  404,  237,   29, 0x2a,
     523,  493,  237,   29, 0x2a,
     591,  569,  237,   29, 0x0a,
     681,  627,  237,   29, 0x0a,
     791,  746,  237,   29, 0x2a,
     887,  851,  237,   29, 0x2a,
     968,  943,  162,   29, 0x0a,
    1005,  166,  162,   29, 0x0a,
    1075, 1036, 1028,   29, 0x0a,
    1168, 1135, 1028,   29, 0x2a,
    1224,  166,  162,   29, 0x0a,
    1251,  243, 1246,   29, 0x0a,
    1301, 1279, 1246,   29, 0x0a,
    1332,  166,  162,   29, 0x0a,
    1355,  243,  162,   29, 0x0a,
    1388,  166,  162,   29, 0x0a,
    1415,  166,  162,   29, 0x0a,
    1440,  166,  162,   29, 0x0a,
    1464,  166,  162,   29, 0x0a,
    1494,  166,  162,   29, 0x0a,
    1525,  166,  162,   29, 0x0a,
    1552,  243,  162,   29, 0x0a,
    1637, 1592, 1586,   29, 0x0a,
    1714, 1678, 1586,   29, 0x2a,
    1777, 1750, 1586,   29, 0x2a,
    1809,  166,  162,   29, 0x0a,
    1837,  569,  237,   29, 0x0a,
    1878,  166,  162,   29, 0x0a,
    1906,  243,  162,   29, 0x0a,
    1961, 1933,  162,   29, 0x0a,
    1994,  243,  162,   29, 0x2a,
    2057, 2023,  162,   29, 0x0a,
    2094,  166,  162,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFontMetrics[] = {
    "PythonQtWrapper_QFontMetrics\0\0"
    "QFontMetrics*\0arg__1\0new_QFontMetrics(QFont)\0"
    "arg__1,pd\0new_QFontMetrics(QFont,QPaintDevice*)\0"
    "obj\0delete_QFontMetrics(QFontMetrics*)\0"
    "int\0theWrappedObject\0ascent(QFontMetrics*)\0"
    "averageCharWidth(QFontMetrics*)\0QRect\0"
    "theWrappedObject,arg__1\0"
    "boundingRect(QFontMetrics*,QChar)\0"
    "theWrappedObject,r,flags,text,tabstops,tabarray\0"
    "boundingRect(QFontMetrics*,QRect,int,QString,int,int*)\0"
    "theWrappedObject,r,flags,text,tabstops\0"
    "boundingRect(QFontMetrics*,QRect,int,QString,int)\0"
    "theWrappedObject,r,flags,text\0"
    "boundingRect(QFontMetrics*,QRect,int,QString)\0"
    "theWrappedObject,text\0"
    "boundingRect(QFontMetrics*,QString)\0"
    "theWrappedObject,x,y,w,h,flags,text,tabstops,tabarray\0"
    "boundingRect(QFontMetrics*,int,int,int,int,int,QString,int,int*)\0"
    "theWrappedObject,x,y,w,h,flags,text,tabstops\0"
    "boundingRect(QFontMetrics*,int,int,int,int,int,QString,int)\0"
    "theWrappedObject,x,y,w,h,flags,text\0"
    "boundingRect(QFontMetrics*,int,int,int,int,int,QString)\0"
    "theWrappedObject,str,pos\0"
    "charWidth(QFontMetrics*,QString,int)\0"
    "descent(QFontMetrics*)\0QString\0"
    "theWrappedObject,text,mode,width,flags\0"
    "elidedText(QFontMetrics*,QString,Qt::TextElideMode,int,int)\0"
    "theWrappedObject,text,mode,width\0"
    "elidedText(QFontMetrics*,QString,Qt::TextElideMode,int)\0"
    "height(QFontMetrics*)\0bool\0"
    "inFont(QFontMetrics*,QChar)\0"
    "theWrappedObject,ucs4\0"
    "inFontUcs4(QFontMetrics*,uint)\0"
    "leading(QFontMetrics*)\0"
    "leftBearing(QFontMetrics*,QChar)\0"
    "lineSpacing(QFontMetrics*)\0"
    "lineWidth(QFontMetrics*)\0"
    "maxWidth(QFontMetrics*)\0"
    "minLeftBearing(QFontMetrics*)\0"
    "minRightBearing(QFontMetrics*)\0"
    "overlinePos(QFontMetrics*)\0"
    "rightBearing(QFontMetrics*,QChar)\0"
    "QSize\0theWrappedObject,flags,str,tabstops,tabarray\0"
    "size(QFontMetrics*,int,QString,int,int*)\0"
    "theWrappedObject,flags,str,tabstops\0"
    "size(QFontMetrics*,int,QString,int)\0"
    "theWrappedObject,flags,str\0"
    "size(QFontMetrics*,int,QString)\0"
    "strikeOutPos(QFontMetrics*)\0"
    "tightBoundingRect(QFontMetrics*,QString)\0"
    "underlinePos(QFontMetrics*)\0"
    "width(QFontMetrics*,QChar)\0"
    "theWrappedObject,arg__1,len\0"
    "width(QFontMetrics*,QString,int)\0"
    "width(QFontMetrics*,QString)\0"
    "theWrappedObject,arg__1,len,flags\0"
    "width(QFontMetrics*,QString,int,int)\0"
    "xHeight(QFontMetrics*)\0"
};

void PythonQtWrapper_QFontMetrics::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFontMetrics *_t = static_cast<PythonQtWrapper_QFontMetrics *>(_o);
        switch (_id) {
        case 0: { QFontMetrics* _r = _t->new_QFontMetrics((*reinterpret_cast< const QFont(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontMetrics**>(_a[0]) = _r; }  break;
        case 1: { QFontMetrics* _r = _t->new_QFontMetrics((*reinterpret_cast< const QFont(*)>(_a[1])),(*reinterpret_cast< QPaintDevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFontMetrics**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFontMetrics((*reinterpret_cast< QFontMetrics*(*)>(_a[1]))); break;
        case 3: { int _r = _t->ascent((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->averageCharWidth((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { QRect _r = _t->boundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 6: { QRect _r = _t->boundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 7: { QRect _r = _t->boundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 8: { QRect _r = _t->boundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 9: { QRect _r = _t->boundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 10: { QRect _r = _t->boundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int*(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 11: { QRect _r = _t->boundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 12: { QRect _r = _t->boundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->charWidth((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->descent((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->elidedText((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::TextElideMode(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->elidedText((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::TextElideMode(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->height((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->inFont((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->inFontUcs4((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->leading((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->leftBearing((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->lineSpacing((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->lineWidth((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->maxWidth((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->minLeftBearing((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->minRightBearing((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { int _r = _t->overlinePos((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 28: { int _r = _t->rightBearing((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 29: { QSize _r = _t->size((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 30: { QSize _r = _t->size((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 31: { QSize _r = _t->size((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 32: { int _r = _t->strikeOutPos((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 33: { QRect _r = _t->tightBoundingRect((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 34: { int _r = _t->underlinePos((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 35: { int _r = _t->width((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 36: { int _r = _t->width((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 37: { int _r = _t->width((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 38: { int _r = _t->width((*reinterpret_cast< QFontMetrics*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 39: { int _r = _t->xHeight((*reinterpret_cast< QFontMetrics*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFontMetrics::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFontMetrics::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFontMetrics,
      qt_meta_data_PythonQtWrapper_QFontMetrics, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFontMetrics::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFontMetrics::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFontMetrics::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFontMetrics))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFontMetrics*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFontMetrics::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QFontMetricsF[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      53,   46,   31,   30, 0x0a,
      88,   78,   31,   30, 0x0a,
     131,  127,   30,   30, 0x0a,
     191,  174,  168,   30, 0x0a,
     214,  174,  168,   30, 0x0a,
     278,  254,  247,   30, 0x0a,
     363,  313,  247,   30, 0x0a,
     461,  420,  247,   30, 0x2a,
     545,  513,  247,   30, 0x2a,
     617,  593,  247,   30, 0x0a,
     654,  174,  168,   30, 0x0a,
     725,  686,  678,   30, 0x0a,
     821,  788,  678,   30, 0x2a,
     880,  174,  168,   30, 0x0a,
     908,  254,  903,   30, 0x0a,
     959,  937,  903,   30, 0x0a,
     991,  174,  168,   30, 0x0a,
    1015,  254,  168,   30, 0x0a,
    1049,  174,  168,   30, 0x0a,
    1077,  174,  168,   30, 0x0a,
    1103,  174,  168,   30, 0x0a,
    1128,  174,  168,   30, 0x0a,
    1159,  174,  168,   30, 0x0a,
    1191,  174,  168,   30, 0x0a,
    1219,  254,  168,   30, 0x0a,
    1306, 1261, 1254,   30, 0x0a,
    1384, 1348, 1254,   30, 0x2a,
    1448, 1421, 1254,   30, 0x2a,
    1481,  174,  168,   30, 0x0a,
    1532, 1510,  247,   30, 0x0a,
    1574,  174,  168,   30, 0x0a,
    1603,  254,  168,   30, 0x0a,
    1631,  593,  168,   30, 0x0a,
    1661,  174,  168,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFontMetricsF[] = {
    "PythonQtWrapper_QFontMetricsF\0\0"
    "QFontMetricsF*\0arg__1\0new_QFontMetricsF(QFont)\0"
    "arg__1,pd\0new_QFontMetricsF(QFont,QPaintDevice*)\0"
    "obj\0delete_QFontMetricsF(QFontMetricsF*)\0"
    "qreal\0theWrappedObject\0ascent(QFontMetricsF*)\0"
    "averageCharWidth(QFontMetricsF*)\0"
    "QRectF\0theWrappedObject,arg__1\0"
    "boundingRect(QFontMetricsF*,QChar)\0"
    "theWrappedObject,r,flags,string,tabstops,tabarray\0"
    "boundingRect(QFontMetricsF*,QRectF,int,QString,int,int*)\0"
    "theWrappedObject,r,flags,string,tabstops\0"
    "boundingRect(QFontMetricsF*,QRectF,int,QString,int)\0"
    "theWrappedObject,r,flags,string\0"
    "boundingRect(QFontMetricsF*,QRectF,int,QString)\0"
    "theWrappedObject,string\0"
    "boundingRect(QFontMetricsF*,QString)\0"
    "descent(QFontMetricsF*)\0QString\0"
    "theWrappedObject,text,mode,width,flags\0"
    "elidedText(QFontMetricsF*,QString,Qt::TextElideMode,qreal,int)\0"
    "theWrappedObject,text,mode,width\0"
    "elidedText(QFontMetricsF*,QString,Qt::TextElideMode,qreal)\0"
    "height(QFontMetricsF*)\0bool\0"
    "inFont(QFontMetricsF*,QChar)\0"
    "theWrappedObject,ucs4\0"
    "inFontUcs4(QFontMetricsF*,uint)\0"
    "leading(QFontMetricsF*)\0"
    "leftBearing(QFontMetricsF*,QChar)\0"
    "lineSpacing(QFontMetricsF*)\0"
    "lineWidth(QFontMetricsF*)\0"
    "maxWidth(QFontMetricsF*)\0"
    "minLeftBearing(QFontMetricsF*)\0"
    "minRightBearing(QFontMetricsF*)\0"
    "overlinePos(QFontMetricsF*)\0"
    "rightBearing(QFontMetricsF*,QChar)\0"
    "QSizeF\0theWrappedObject,flags,str,tabstops,tabarray\0"
    "size(QFontMetricsF*,int,QString,int,int*)\0"
    "theWrappedObject,flags,str,tabstops\0"
    "size(QFontMetricsF*,int,QString,int)\0"
    "theWrappedObject,flags,str\0"
    "size(QFontMetricsF*,int,QString)\0"
    "strikeOutPos(QFontMetricsF*)\0"
    "theWrappedObject,text\0"
    "tightBoundingRect(QFontMetricsF*,QString)\0"
    "underlinePos(QFontMetricsF*)\0"
    "width(QFontMetricsF*,QChar)\0"
    "width(QFontMetricsF*,QString)\0"
    "xHeight(QFontMetricsF*)\0"
};

void PythonQtWrapper_QFontMetricsF::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFontMetricsF *_t = static_cast<PythonQtWrapper_QFontMetricsF *>(_o);
        switch (_id) {
        case 0: { QFontMetricsF* _r = _t->new_QFontMetricsF((*reinterpret_cast< const QFont(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFontMetricsF**>(_a[0]) = _r; }  break;
        case 1: { QFontMetricsF* _r = _t->new_QFontMetricsF((*reinterpret_cast< const QFont(*)>(_a[1])),(*reinterpret_cast< QPaintDevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFontMetricsF**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFontMetricsF((*reinterpret_cast< QFontMetricsF*(*)>(_a[1]))); break;
        case 3: { qreal _r = _t->ascent((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 4: { qreal _r = _t->averageCharWidth((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: { QRectF _r = _t->boundingRect((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 6: { QRectF _r = _t->boundingRect((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 7: { QRectF _r = _t->boundingRect((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 8: { QRectF _r = _t->boundingRect((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 9: { QRectF _r = _t->boundingRect((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 10: { qreal _r = _t->descent((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->elidedText((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::TextElideMode(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->elidedText((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::TextElideMode(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->height((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->inFont((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->inFontUcs4((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { qreal _r = _t->leading((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 17: { qreal _r = _t->leftBearing((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 18: { qreal _r = _t->lineSpacing((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 19: { qreal _r = _t->lineWidth((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 20: { qreal _r = _t->maxWidth((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 21: { qreal _r = _t->minLeftBearing((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 22: { qreal _r = _t->minRightBearing((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 23: { qreal _r = _t->overlinePos((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 24: { qreal _r = _t->rightBearing((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 25: { QSizeF _r = _t->size((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 26: { QSizeF _r = _t->size((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 27: { QSizeF _r = _t->size((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 28: { qreal _r = _t->strikeOutPos((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 29: { QRectF _r = _t->tightBoundingRect((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 30: { qreal _r = _t->underlinePos((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 31: { qreal _r = _t->width((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 32: { qreal _r = _t->width((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 33: { qreal _r = _t->xHeight((*reinterpret_cast< QFontMetricsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFontMetricsF::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFontMetricsF::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFontMetricsF,
      qt_meta_data_PythonQtWrapper_QFontMetricsF, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFontMetricsF::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFontMetricsF::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFontMetricsF::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFontMetricsF))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFontMetricsF*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFontMetricsF::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QFormLayout[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
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
     211,  187,   28,   28, 0x0a,
     298,  269,   28,   28, 0x0a,
     393,  269,   28,   28, 0x0a,
     512,  488,   28,   28, 0x0a,
     603,  570,   28,   28, 0x0a,
     669,  570,   28,   28, 0x0a,
     756,  739,  735,   28, 0x0a,
     793,  739,  776,   28, 0x0a,
     858,  739,  827,   28, 0x0a,
     904,  739,  890,   28, 0x0a,
     970,  932,   28,   28, 0x0a,
    1071, 1032,   28,   28, 0x0a,
    1179, 1140,   28,   28, 0x0a,
    1253,  739, 1248,   28, 0x0a,
    1308, 1285,  735,   28, 0x0a,
    1341,  739,  735,   28, 0x0a,
    1401, 1373,   28,   28, 0x0a,
    1499, 1466,   28,   28, 0x0a,
    1601, 1466,   28,   28, 0x0a,
    1731, 1703,   28,   28, 0x0a,
    1833, 1796,   28,   28, 0x0a,
    1906, 1796,   28,   28, 0x0a,
    1979,  739,   28,   28, 0x0a,
    2040, 2017, 2004,   28, 0x0a,
    2091, 2065, 2004,   28, 0x0a,
    2138,  739,  890,   28, 0x0a,
    2199, 2176, 2167,   28, 0x0a,
    2236, 2176, 2167,   28, 0x0a,
    2279,  739, 2273,   28, 0x0a,
    2305,  739,  735,   28, 0x0a,
    2355,  739, 2328,   28, 0x0a,
    2407, 2383,   28,   28, 0x0a,
    2500, 2473,   28,   28, 0x0a,
    2567, 2545,   28,   28, 0x0a,
    2624, 2599,   28,   28, 0x0a,
    2694, 2663,   28,   28, 0x0a,
    2783, 2473,   28,   28, 0x0a,
    2862, 2829,   28,   28, 0x0a,
    2949, 2383,   28,   28, 0x0a,
    3031, 3007,   28,   28, 0x0a,
    3060, 2599,   28,   28, 0x0a,
    3130, 3097,   28,   28, 0x0a,
    3217,  739, 2273,   28, 0x0a,
    3240,  739,  735,   28, 0x0a,
    3262, 2017, 2004,   28, 0x0a,
    3287,  739,  735,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFormLayout[] = {
    "PythonQtWrapper_QFormLayout\0\0QFormLayout*\0"
    "parent\0new_QFormLayout(QWidget*)\0"
    "new_QFormLayout()\0obj\0"
    "delete_QFormLayout(QFormLayout*)\0"
    "theWrappedObject,item\0"
    "addItem(QFormLayout*,QLayoutItem*)\0"
    "theWrappedObject,layout\0"
    "addRow(QFormLayout*,PythonQtPassOwnershipToCPP<QLayout*>)\0"
    "theWrappedObject,label,field\0"
    "addRow(QFormLayout*,PythonQtPassOwnershipToCPP<QWidget*>,PythonQtPassO"
    "wnershipToCPP<QLayout*>)\0"
    "addRow(QFormLayout*,PythonQtPassOwnershipToCPP<QWidget*>,PythonQtPassO"
    "wnershipToCPP<QWidget*>)\0"
    "theWrappedObject,widget\0"
    "addRow(QFormLayout*,PythonQtPassOwnershipToCPP<QWidget*>)\0"
    "theWrappedObject,labelText,field\0"
    "addRow(QFormLayout*,QString,PythonQtPassOwnershipToCPP<QLayout*>)\0"
    "addRow(QFormLayout*,QString,PythonQtPassOwnershipToCPP<QWidget*>)\0"
    "int\0theWrappedObject\0count(QFormLayout*)\0"
    "Qt::Orientations\0expandingDirections(QFormLayout*)\0"
    "QFormLayout::FieldGrowthPolicy\0"
    "fieldGrowthPolicy(QFormLayout*)\0"
    "Qt::Alignment\0formAlignment(QFormLayout*)\0"
    "theWrappedObject,index,rowPtr,rolePtr\0"
    "getItemPosition(QFormLayout*,int,int*,QFormLayout::ItemRole*)\0"
    "theWrappedObject,layout,rowPtr,rolePtr\0"
    "getLayoutPosition(QFormLayout*,QLayout*,int*,QFormLayout::ItemRole*)\0"
    "theWrappedObject,widget,rowPtr,rolePtr\0"
    "getWidgetPosition(QFormLayout*,QWidget*,int*,QFormLayout::ItemRole*)\0"
    "bool\0hasHeightForWidth(QFormLayout*)\0"
    "theWrappedObject,width\0"
    "heightForWidth(QFormLayout*,int)\0"
    "horizontalSpacing(QFormLayout*)\0"
    "theWrappedObject,row,layout\0"
    "insertRow(QFormLayout*,int,PythonQtPassOwnershipToCPP<QLayout*>)\0"
    "theWrappedObject,row,label,field\0"
    "insertRow(QFormLayout*,int,PythonQtPassOwnershipToCPP<QWidget*>,Python"
    "QtPassOwnershipToCPP<QLayout*>)\0"
    "insertRow(QFormLayout*,int,PythonQtPassOwnershipToCPP<QWidget*>,Python"
    "QtPassOwnershipToCPP<QWidget*>)\0"
    "theWrappedObject,row,widget\0"
    "insertRow(QFormLayout*,int,PythonQtPassOwnershipToCPP<QWidget*>)\0"
    "theWrappedObject,row,labelText,field\0"
    "insertRow(QFormLayout*,int,QString,PythonQtPassOwnershipToCPP<QLayout*"
    ">)\0"
    "insertRow(QFormLayout*,int,QString,PythonQtPassOwnershipToCPP<QWidget*"
    ">)\0"
    "invalidate(QFormLayout*)\0QLayoutItem*\0"
    "theWrappedObject,index\0itemAt(QFormLayout*,int)\0"
    "theWrappedObject,row,role\0"
    "itemAt(QFormLayout*,int,QFormLayout::ItemRole)\0"
    "labelAlignment(QFormLayout*)\0QWidget*\0"
    "theWrappedObject,field\0"
    "labelForField(QFormLayout*,QLayout*)\0"
    "labelForField(QFormLayout*,QWidget*)\0"
    "QSize\0minimumSize(QFormLayout*)\0"
    "rowCount(QFormLayout*)\0"
    "QFormLayout::RowWrapPolicy\0"
    "rowWrapPolicy(QFormLayout*)\0"
    "theWrappedObject,policy\0"
    "setFieldGrowthPolicy(QFormLayout*,QFormLayout::FieldGrowthPolicy)\0"
    "theWrappedObject,alignment\0"
    "setFormAlignment(QFormLayout*,Qt::Alignment)\0"
    "theWrappedObject,rect\0"
    "setGeometry(QFormLayout*,QRect)\0"
    "theWrappedObject,spacing\0"
    "setHorizontalSpacing(QFormLayout*,int)\0"
    "theWrappedObject,row,role,item\0"
    "setItem(QFormLayout*,int,QFormLayout::ItemRole,PythonQtPassOwnershipTo"
    "CPP<QLayoutItem*>)\0"
    "setLabelAlignment(QFormLayout*,Qt::Alignment)\0"
    "theWrappedObject,row,role,layout\0"
    "setLayout(QFormLayout*,int,QFormLayout::ItemRole,PythonQtPassOwnership"
    "ToCPP<QLayout*>)\0"
    "setRowWrapPolicy(QFormLayout*,QFormLayout::RowWrapPolicy)\0"
    "theWrappedObject,arg__1\0"
    "setSpacing(QFormLayout*,int)\0"
    "setVerticalSpacing(QFormLayout*,int)\0"
    "theWrappedObject,row,role,widget\0"
    "setWidget(QFormLayout*,int,QFormLayout::ItemRole,PythonQtPassOwnership"
    "ToCPP<QWidget*>)\0"
    "sizeHint(QFormLayout*)\0spacing(QFormLayout*)\0"
    "takeAt(QFormLayout*,int)\0"
    "verticalSpacing(QFormLayout*)\0"
};

void PythonQtWrapper_QFormLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFormLayout *_t = static_cast<PythonQtWrapper_QFormLayout *>(_o);
        switch (_id) {
        case 0: { QFormLayout* _r = _t->new_QFormLayout((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFormLayout**>(_a[0]) = _r; }  break;
        case 1: { QFormLayout* _r = _t->new_QFormLayout();
            if (_a[0]) *reinterpret_cast< QFormLayout**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFormLayout((*reinterpret_cast< QFormLayout*(*)>(_a[1]))); break;
        case 3: _t->addItem((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QLayoutItem*(*)>(_a[2]))); break;
        case 4: _t->addRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QLayout*>(*)>(_a[2]))); break;
        case 5: _t->addRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QLayout*>(*)>(_a[3]))); break;
        case 6: _t->addRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[3]))); break;
        case 7: _t->addRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[2]))); break;
        case 8: _t->addRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QLayout*>(*)>(_a[3]))); break;
        case 9: _t->addRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[3]))); break;
        case 10: { int _r = _t->count((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { Qt::Orientations _r = _t->expandingDirections((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientations*>(_a[0]) = _r; }  break;
        case 12: { QFormLayout::FieldGrowthPolicy _r = _t->fieldGrowthPolicy((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFormLayout::FieldGrowthPolicy*>(_a[0]) = _r; }  break;
        case 13: { Qt::Alignment _r = _t->formAlignment((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 14: _t->getItemPosition((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< QFormLayout::ItemRole*(*)>(_a[4]))); break;
        case 15: _t->getLayoutPosition((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QLayout*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< QFormLayout::ItemRole*(*)>(_a[4]))); break;
        case 16: _t->getWidgetPosition((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< QFormLayout::ItemRole*(*)>(_a[4]))); break;
        case 17: { bool _r = _t->hasHeightForWidth((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->heightForWidth((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->horizontalSpacing((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: _t->insertRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QLayout*>(*)>(_a[3]))); break;
        case 21: _t->insertRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[3])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QLayout*>(*)>(_a[4]))); break;
        case 22: _t->insertRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[3])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[4]))); break;
        case 23: _t->insertRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[3]))); break;
        case 24: _t->insertRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QLayout*>(*)>(_a[4]))); break;
        case 25: _t->insertRow((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[4]))); break;
        case 26: _t->invalidate((*reinterpret_cast< QFormLayout*(*)>(_a[1]))); break;
        case 27: { QLayoutItem* _r = _t->itemAt((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLayoutItem**>(_a[0]) = _r; }  break;
        case 28: { QLayoutItem* _r = _t->itemAt((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QFormLayout::ItemRole(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QLayoutItem**>(_a[0]) = _r; }  break;
        case 29: { Qt::Alignment _r = _t->labelAlignment((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 30: { QWidget* _r = _t->labelForField((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QLayout*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 31: { QWidget* _r = _t->labelForField((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 32: { QSize _r = _t->minimumSize((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 33: { int _r = _t->rowCount((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 34: { QFormLayout::RowWrapPolicy _r = _t->rowWrapPolicy((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFormLayout::RowWrapPolicy*>(_a[0]) = _r; }  break;
        case 35: _t->setFieldGrowthPolicy((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QFormLayout::FieldGrowthPolicy(*)>(_a[2]))); break;
        case 36: _t->setFormAlignment((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 37: _t->setGeometry((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 38: _t->setHorizontalSpacing((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 39: _t->setItem((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QFormLayout::ItemRole(*)>(_a[3])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QLayoutItem*>(*)>(_a[4]))); break;
        case 40: _t->setLabelAlignment((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 41: _t->setLayout((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QFormLayout::ItemRole(*)>(_a[3])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QLayout*>(*)>(_a[4]))); break;
        case 42: _t->setRowWrapPolicy((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< QFormLayout::RowWrapPolicy(*)>(_a[2]))); break;
        case 43: _t->setSpacing((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 44: _t->setVerticalSpacing((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->setWidget((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QFormLayout::ItemRole(*)>(_a[3])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[4]))); break;
        case 46: { QSize _r = _t->sizeHint((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 47: { int _r = _t->spacing((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 48: { QLayoutItem* _r = _t->takeAt((*reinterpret_cast< QFormLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLayoutItem**>(_a[0]) = _r; }  break;
        case 49: { int _r = _t->verticalSpacing((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFormLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFormLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFormLayout,
      qt_meta_data_PythonQtWrapper_QFormLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFormLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFormLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFormLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFormLayout))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFormLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFormLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QFrame[] = {

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
      41,   32,   24,   23, 0x0a,
      85,   78,   24,   23, 0x2a,
     106,   23,   24,   23, 0x2a,
     123,  119,   23,   23, 0x0a,
     170,  146,   23,   23, 0x0a,
     199,  146,   23,   23, 0x0a,
     252,  233,  228,   23, 0x0a,
     298,  281,  275,   23, 0x0a,
     332,  281,  317,   23, 0x0a,
     367,  281,  353,   23, 0x0a,
     391,  281,  387,   23, 0x0a,
     411,  281,  387,   23, 0x0a,
     431,  281,  387,   23, 0x0a,
     450,  281,  387,   23, 0x0a,
     472,  146,   23,   23, 0x0a,
     505,  146,   23,   23, 0x0a,
     533,  146,   23,   23, 0x0a,
     572,  146,   23,   23, 0x0a,
     609,  146,   23,   23, 0x0a,
     636,  146,   23,   23, 0x0a,
     662,  146,   23,   23, 0x0a,
     697,  281,  691,   23, 0x0a,

 // enums: name, flags, count, data
     715, 0x0,    2,  128,

 // enum data: key, value
     725, uint(PythonQtWrapper_QFrame::Shadow_Mask),
     737, uint(PythonQtWrapper_QFrame::Shape_Mask),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QFrame[] = {
    "PythonQtWrapper_QFrame\0\0QFrame*\0"
    "parent,f\0new_QFrame(QWidget*,Qt::WindowFlags)\0"
    "parent\0new_QFrame(QWidget*)\0new_QFrame()\0"
    "obj\0delete_QFrame(QFrame*)\0"
    "theWrappedObject,arg__1\0"
    "changeEvent(QFrame*,QEvent*)\0"
    "drawFrame(QFrame*,QPainter*)\0bool\0"
    "theWrappedObject,e\0event(QFrame*,QEvent*)\0"
    "QRect\0theWrappedObject\0frameRect(QFrame*)\0"
    "QFrame::Shadow\0frameShadow(QFrame*)\0"
    "QFrame::Shape\0frameShape(QFrame*)\0int\0"
    "frameStyle(QFrame*)\0frameWidth(QFrame*)\0"
    "lineWidth(QFrame*)\0midLineWidth(QFrame*)\0"
    "paintEvent(QFrame*,QPaintEvent*)\0"
    "setFrameRect(QFrame*,QRect)\0"
    "setFrameShadow(QFrame*,QFrame::Shadow)\0"
    "setFrameShape(QFrame*,QFrame::Shape)\0"
    "setFrameStyle(QFrame*,int)\0"
    "setLineWidth(QFrame*,int)\0"
    "setMidLineWidth(QFrame*,int)\0QSize\0"
    "sizeHint(QFrame*)\0StyleMask\0Shadow_Mask\0"
    "Shape_Mask\0"
};

void PythonQtWrapper_QFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QFrame *_t = static_cast<PythonQtWrapper_QFrame *>(_o);
        switch (_id) {
        case 0: { QFrame* _r = _t->new_QFrame((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFrame**>(_a[0]) = _r; }  break;
        case 1: { QFrame* _r = _t->new_QFrame((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFrame**>(_a[0]) = _r; }  break;
        case 2: { QFrame* _r = _t->new_QFrame();
            if (_a[0]) *reinterpret_cast< QFrame**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QFrame((*reinterpret_cast< QFrame*(*)>(_a[1]))); break;
        case 4: _t->changeEvent((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 5: _t->drawFrame((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 6: { bool _r = _t->event((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QRect _r = _t->frameRect((*reinterpret_cast< QFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 8: { QFrame::Shadow _r = _t->frameShadow((*reinterpret_cast< QFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFrame::Shadow*>(_a[0]) = _r; }  break;
        case 9: { QFrame::Shape _r = _t->frameShape((*reinterpret_cast< QFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFrame::Shape*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->frameStyle((*reinterpret_cast< QFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->frameWidth((*reinterpret_cast< QFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->lineWidth((*reinterpret_cast< QFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->midLineWidth((*reinterpret_cast< QFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: _t->paintEvent((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 15: _t->setFrameRect((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 16: _t->setFrameShadow((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< QFrame::Shadow(*)>(_a[2]))); break;
        case 17: _t->setFrameShape((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< QFrame::Shape(*)>(_a[2]))); break;
        case 18: _t->setFrameStyle((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->setLineWidth((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->setMidLineWidth((*reinterpret_cast< QFrame*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: { QSize _r = _t->sizeHint((*reinterpret_cast< QFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QFrame::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFrame,
      qt_meta_data_PythonQtWrapper_QFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFrame))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFrame*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGesture[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       1,   69, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   36,   26,   25, 0x0a,
      66,   25,   26,   25, 0x2a,
      85,   81,   25,   25, 0x0a,
     159,  142,  112,   25, 0x0a,
     206,  142,  190,   25, 0x0a,
     234,  142,  229,   25, 0x0a,
     264,  142,  256,   25, 0x0a,
     307,  283,   25,   25, 0x0a,
     394,  371,   25,   25, 0x0a,
     441,  142,  424,   25, 0x0a,
     458,  142,   25,   25, 0x0a,

 // enums: name, flags, count, data
     482, 0x0,    2,   73,

 // enum data: key, value
     502, uint(PythonQtWrapper_QGesture::CancelNone),
     513, uint(PythonQtWrapper_QGesture::CancelAllInContext),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGesture[] = {
    "PythonQtWrapper_QGesture\0\0QGesture*\0"
    "parent\0new_QGesture(QObject*)\0"
    "new_QGesture()\0obj\0delete_QGesture(QGesture*)\0"
    "QGesture::GestureCancelPolicy\0"
    "theWrappedObject\0gestureCancelPolicy(QGesture*)\0"
    "Qt::GestureType\0gestureType(QGesture*)\0"
    "bool\0hasHotSpot(QGesture*)\0QPointF\0"
    "hotSpot(QGesture*)\0theWrappedObject,policy\0"
    "setGestureCancelPolicy(QGesture*,QGesture::GestureCancelPolicy)\0"
    "theWrappedObject,value\0"
    "setHotSpot(QGesture*,QPointF)\0"
    "Qt::GestureState\0state(QGesture*)\0"
    "unsetHotSpot(QGesture*)\0GestureCancelPolicy\0"
    "CancelNone\0CancelAllInContext\0"
};

void PythonQtWrapper_QGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGesture *_t = static_cast<PythonQtWrapper_QGesture *>(_o);
        switch (_id) {
        case 0: { QGesture* _r = _t->new_QGesture((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGesture**>(_a[0]) = _r; }  break;
        case 1: { QGesture* _r = _t->new_QGesture();
            if (_a[0]) *reinterpret_cast< QGesture**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGesture((*reinterpret_cast< QGesture*(*)>(_a[1]))); break;
        case 3: { QGesture::GestureCancelPolicy _r = _t->gestureCancelPolicy((*reinterpret_cast< QGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGesture::GestureCancelPolicy*>(_a[0]) = _r; }  break;
        case 4: { Qt::GestureType _r = _t->gestureType((*reinterpret_cast< QGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::GestureType*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->hasHotSpot((*reinterpret_cast< QGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QPointF _r = _t->hotSpot((*reinterpret_cast< QGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 7: _t->setGestureCancelPolicy((*reinterpret_cast< QGesture*(*)>(_a[1])),(*reinterpret_cast< QGesture::GestureCancelPolicy(*)>(_a[2]))); break;
        case 8: _t->setHotSpot((*reinterpret_cast< QGesture*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 9: { Qt::GestureState _r = _t->state((*reinterpret_cast< QGesture*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::GestureState*>(_a[0]) = _r; }  break;
        case 10: _t->unsetHotSpot((*reinterpret_cast< QGesture*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGesture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGesture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGesture,
      qt_meta_data_PythonQtWrapper_QGesture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGesture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGesture))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGesture*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGestureEvent[] = {

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
      55,   46,   31,   30, 0x0a,
      95,   91,   30,   30, 0x0a,
     149,  132,   30,   30, 0x0a,
     196,  172,   30,   30, 0x0a,
     229,  172,   30,   30, 0x0a,
     285,  132,  268,   30, 0x0a,
     316,  132,  268,   30, 0x0a,
     381,  359,  349,   30, 0x0a,
     421,  132,  268,   30, 0x0a,
     446,  132,   30,   30, 0x0a,
     469,  172,   30,   30, 0x0a,
     502,  172,   30,   30, 0x0a,
     546,  132,  541,   30, 0x0a,
     573,  172,  541,   30, 0x0a,
     610,  172,  541,   30, 0x0a,
     691,  661,  653,   30, 0x0a,
     765,  734,   30,   30, 0x0a,
     808,  734,   30,   30, 0x0a,
     883,  857,   30,   30, 0x0a,
     940,  916,   30,   30, 0x0a,
     984,  132,  975,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGestureEvent[] = {
    "PythonQtWrapper_QGestureEvent\0\0"
    "QGestureEvent*\0gestures\0"
    "new_QGestureEvent(QList<QGesture*>)\0"
    "obj\0delete_QGestureEvent(QGestureEvent*)\0"
    "theWrappedObject\0accept(QGestureEvent*)\0"
    "theWrappedObject,arg__1\0"
    "accept(QGestureEvent*,QGesture*)\0"
    "accept(QGestureEvent*,Qt::GestureType)\0"
    "QList<QGesture*>\0activeGestures(QGestureEvent*)\0"
    "canceledGestures(QGestureEvent*)\0"
    "QGesture*\0theWrappedObject,type\0"
    "gesture(QGestureEvent*,Qt::GestureType)\0"
    "gestures(QGestureEvent*)\0"
    "ignore(QGestureEvent*)\0"
    "ignore(QGestureEvent*,QGesture*)\0"
    "ignore(QGestureEvent*,Qt::GestureType)\0"
    "bool\0isAccepted(QGestureEvent*)\0"
    "isAccepted(QGestureEvent*,QGesture*)\0"
    "isAccepted(QGestureEvent*,Qt::GestureType)\0"
    "QPointF\0theWrappedObject,gesturePoint\0"
    "mapToGraphicsScene(QGestureEvent*,QPointF)\0"
    "theWrappedObject,arg__1,arg__2\0"
    "setAccepted(QGestureEvent*,QGesture*,bool)\0"
    "setAccepted(QGestureEvent*,Qt::GestureType,bool)\0"
    "theWrappedObject,accepted\0"
    "setAccepted(QGestureEvent*,bool)\0"
    "theWrappedObject,widget\0"
    "setWidget(QGestureEvent*,QWidget*)\0"
    "QWidget*\0widget(QGestureEvent*)\0"
};

void PythonQtWrapper_QGestureEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGestureEvent *_t = static_cast<PythonQtWrapper_QGestureEvent *>(_o);
        switch (_id) {
        case 0: { QGestureEvent* _r = _t->new_QGestureEvent((*reinterpret_cast< const QList<QGesture*>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGestureEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QGestureEvent((*reinterpret_cast< QGestureEvent*(*)>(_a[1]))); break;
        case 2: _t->accept((*reinterpret_cast< QGestureEvent*(*)>(_a[1]))); break;
        case 3: _t->accept((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2]))); break;
        case 4: _t->accept((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< Qt::GestureType(*)>(_a[2]))); break;
        case 5: { QList<QGesture*> _r = _t->activeGestures((*reinterpret_cast< QGestureEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGesture*>*>(_a[0]) = _r; }  break;
        case 6: { QList<QGesture*> _r = _t->canceledGestures((*reinterpret_cast< QGestureEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGesture*>*>(_a[0]) = _r; }  break;
        case 7: { QGesture* _r = _t->gesture((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< Qt::GestureType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGesture**>(_a[0]) = _r; }  break;
        case 8: { QList<QGesture*> _r = _t->gestures((*reinterpret_cast< QGestureEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGesture*>*>(_a[0]) = _r; }  break;
        case 9: _t->ignore((*reinterpret_cast< QGestureEvent*(*)>(_a[1]))); break;
        case 10: _t->ignore((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2]))); break;
        case 11: _t->ignore((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< Qt::GestureType(*)>(_a[2]))); break;
        case 12: { bool _r = _t->isAccepted((*reinterpret_cast< QGestureEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isAccepted((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isAccepted((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< Qt::GestureType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QPointF _r = _t->mapToGraphicsScene((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 16: _t->setAccepted((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 17: _t->setAccepted((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< Qt::GestureType(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 18: _t->setAccepted((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->setWidget((*reinterpret_cast< QGestureEvent*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 20: { QWidget* _r = _t->widget((*reinterpret_cast< QGestureEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGestureEvent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGestureEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGestureEvent,
      qt_meta_data_PythonQtWrapper_QGestureEvent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGestureEvent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGestureEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGestureEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGestureEvent))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGestureEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGestureEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGestureRecognizer[] = {

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
      56,   35,   36,   35, 0x0a,
      85,   81,   35,   35, 0x0a,
     166,  142,  132,   35, 0x0a,
     267,  230,  203,   35, 0x0a,
     352,  341,  325,   35, 0x0a,
     441,  418,   35,   35, 0x0a,
     483,  478,   35,   35, 0x0a,

 // enums: name, flags, count, data
     547, 0x0,    8,   57,
     558, 0x1,    8,   73,

 // enum data: key, value
     565, uint(PythonQtWrapper_QGestureRecognizer::Ignore),
     572, uint(PythonQtWrapper_QGestureRecognizer::MayBeGesture),
     585, uint(PythonQtWrapper_QGestureRecognizer::TriggerGesture),
     600, uint(PythonQtWrapper_QGestureRecognizer::FinishGesture),
     614, uint(PythonQtWrapper_QGestureRecognizer::CancelGesture),
     628, uint(PythonQtWrapper_QGestureRecognizer::ResultState_Mask),
     645, uint(PythonQtWrapper_QGestureRecognizer::ConsumeEventHint),
     662, uint(PythonQtWrapper_QGestureRecognizer::ResultHint_Mask),
     565, uint(PythonQtWrapper_QGestureRecognizer::Ignore),
     572, uint(PythonQtWrapper_QGestureRecognizer::MayBeGesture),
     585, uint(PythonQtWrapper_QGestureRecognizer::TriggerGesture),
     600, uint(PythonQtWrapper_QGestureRecognizer::FinishGesture),
     614, uint(PythonQtWrapper_QGestureRecognizer::CancelGesture),
     628, uint(PythonQtWrapper_QGestureRecognizer::ResultState_Mask),
     645, uint(PythonQtWrapper_QGestureRecognizer::ConsumeEventHint),
     662, uint(PythonQtWrapper_QGestureRecognizer::ResultHint_Mask),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGestureRecognizer[] = {
    "PythonQtWrapper_QGestureRecognizer\0\0"
    "QGestureRecognizer*\0new_QGestureRecognizer()\0"
    "obj\0delete_QGestureRecognizer(QGestureRecognizer*)\0"
    "QGesture*\0theWrappedObject,target\0"
    "create(QGestureRecognizer*,QObject*)\0"
    "QGestureRecognizer::Result\0"
    "theWrappedObject,state,watched,event\0"
    "recognize(QGestureRecognizer*,QGesture*,QObject*,QEvent*)\0"
    "Qt::GestureType\0recognizer\0"
    "static_QGestureRecognizer_registerRecognizer(QGestureRecognizer*)\0"
    "theWrappedObject,state\0"
    "reset(QGestureRecognizer*,QGesture*)\0"
    "type\0"
    "static_QGestureRecognizer_unregisterRecognizer(Qt::GestureType)\0"
    "ResultFlag\0Result\0Ignore\0MayBeGesture\0"
    "TriggerGesture\0FinishGesture\0CancelGesture\0"
    "ResultState_Mask\0ConsumeEventHint\0"
    "ResultHint_Mask\0"
};

void PythonQtWrapper_QGestureRecognizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGestureRecognizer *_t = static_cast<PythonQtWrapper_QGestureRecognizer *>(_o);
        switch (_id) {
        case 0: { QGestureRecognizer* _r = _t->new_QGestureRecognizer();
            if (_a[0]) *reinterpret_cast< QGestureRecognizer**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QGestureRecognizer((*reinterpret_cast< QGestureRecognizer*(*)>(_a[1]))); break;
        case 2: { QGesture* _r = _t->create((*reinterpret_cast< QGestureRecognizer*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGesture**>(_a[0]) = _r; }  break;
        case 3: { QGestureRecognizer::Result _r = _t->recognize((*reinterpret_cast< QGestureRecognizer*(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])),(*reinterpret_cast< QEvent*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QGestureRecognizer::Result*>(_a[0]) = _r; }  break;
        case 4: { Qt::GestureType _r = _t->static_QGestureRecognizer_registerRecognizer((*reinterpret_cast< QGestureRecognizer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::GestureType*>(_a[0]) = _r; }  break;
        case 5: _t->reset((*reinterpret_cast< QGestureRecognizer*(*)>(_a[1])),(*reinterpret_cast< QGesture*(*)>(_a[2]))); break;
        case 6: _t->static_QGestureRecognizer_unregisterRecognizer((*reinterpret_cast< Qt::GestureType(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGestureRecognizer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGestureRecognizer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGestureRecognizer,
      qt_meta_data_PythonQtWrapper_QGestureRecognizer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGestureRecognizer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGestureRecognizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGestureRecognizer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGestureRecognizer))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGestureRecognizer*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGestureRecognizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGradient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       3,   79, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   26,   27,   26, 0x0a,
      60,   54,   27,   26, 0x0a,
      89,   85,   26,   26, 0x0a,
     161,  144,  118,   26, 0x0a,
     216,  193,  188,   26, 0x0a,
     271,  245,  188,   26, 0x0a,
     327,  300,   26,   26, 0x0a,
     385,  363,   26,   26, 0x0a,
     465,  441,   26,   26, 0x0a,
     528,  505,   26,   26, 0x0a,
     597,  144,  579,   26, 0x0a,
     646,  144,  616,   26, 0x0a,
     680,  144,  664,   26, 0x0a,

 // enums: name, flags, count, data
     697, 0x0,    3,   91,
     712, 0x0,    3,   97,
     719, 0x0,    4,  103,

 // enum data: key, value
     724, uint(PythonQtWrapper_QGradient::LogicalMode),
     736, uint(PythonQtWrapper_QGradient::StretchToDeviceMode),
     756, uint(PythonQtWrapper_QGradient::ObjectBoundingMode),
     775, uint(PythonQtWrapper_QGradient::PadSpread),
     785, uint(PythonQtWrapper_QGradient::ReflectSpread),
     799, uint(PythonQtWrapper_QGradient::RepeatSpread),
     812, uint(PythonQtWrapper_QGradient::LinearGradient),
     827, uint(PythonQtWrapper_QGradient::RadialGradient),
     842, uint(PythonQtWrapper_QGradient::ConicalGradient),
     858, uint(PythonQtWrapper_QGradient::NoGradient),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGradient[] = {
    "PythonQtWrapper_QGradient\0\0QGradient*\0"
    "new_QGradient()\0other\0new_QGradient(QGradient)\0"
    "obj\0delete_QGradient(QGradient*)\0"
    "QGradient::CoordinateMode\0theWrappedObject\0"
    "coordinateMode(QGradient*)\0bool\0"
    "theWrappedObject,other\0"
    "__ne__(QGradient*,QGradient)\0"
    "theWrappedObject,gradient\0"
    "__eq__(QGradient*,QGradient)\0"
    "theWrappedObject,pos,color\0"
    "setColorAt(QGradient*,qreal,QColor)\0"
    "theWrappedObject,mode\0"
    "setCoordinateMode(QGradient*,QGradient::CoordinateMode)\0"
    "theWrappedObject,spread\0"
    "setSpread(QGradient*,QGradient::Spread)\0"
    "theWrappedObject,stops\0"
    "setStops(QGradient*,QVector<QPair<qreal,QColor> >)\0"
    "QGradient::Spread\0spread(QGradient*)\0"
    "QVector<QPair<qreal,QColor> >\0"
    "stops(QGradient*)\0QGradient::Type\0"
    "type(QGradient*)\0CoordinateMode\0Spread\0"
    "Type\0LogicalMode\0StretchToDeviceMode\0"
    "ObjectBoundingMode\0PadSpread\0ReflectSpread\0"
    "RepeatSpread\0LinearGradient\0RadialGradient\0"
    "ConicalGradient\0NoGradient\0"
};

void PythonQtWrapper_QGradient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGradient *_t = static_cast<PythonQtWrapper_QGradient *>(_o);
        switch (_id) {
        case 0: { QGradient* _r = _t->new_QGradient();
            if (_a[0]) *reinterpret_cast< QGradient**>(_a[0]) = _r; }  break;
        case 1: { QGradient* _r = _t->new_QGradient((*reinterpret_cast< const QGradient(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGradient**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGradient((*reinterpret_cast< QGradient*(*)>(_a[1]))); break;
        case 3: { QGradient::CoordinateMode _r = _t->coordinateMode((*reinterpret_cast< QGradient*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGradient::CoordinateMode*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->__ne__((*reinterpret_cast< QGradient*(*)>(_a[1])),(*reinterpret_cast< const QGradient(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->__eq__((*reinterpret_cast< QGradient*(*)>(_a[1])),(*reinterpret_cast< const QGradient(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->setColorAt((*reinterpret_cast< QGradient*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 7: _t->setCoordinateMode((*reinterpret_cast< QGradient*(*)>(_a[1])),(*reinterpret_cast< QGradient::CoordinateMode(*)>(_a[2]))); break;
        case 8: _t->setSpread((*reinterpret_cast< QGradient*(*)>(_a[1])),(*reinterpret_cast< QGradient::Spread(*)>(_a[2]))); break;
        case 9: _t->setStops((*reinterpret_cast< QGradient*(*)>(_a[1])),(*reinterpret_cast< const QVector<QPair<qreal,QColor> >(*)>(_a[2]))); break;
        case 10: { QGradient::Spread _r = _t->spread((*reinterpret_cast< QGradient*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGradient::Spread*>(_a[0]) = _r; }  break;
        case 11: { QVector<QPair<qreal,QColor> > _r = _t->stops((*reinterpret_cast< QGradient*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QPair<qreal,QColor> >*>(_a[0]) = _r; }  break;
        case 12: { QGradient::Type _r = _t->type((*reinterpret_cast< QGradient*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGradient::Type*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGradient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGradient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGradient,
      qt_meta_data_PythonQtWrapper_QGradient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGradient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGradient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGradient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGradient))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGradient*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGradient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsAnchor[] = {

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
      37,   33,   32,   32, 0x0a,
     102,   78,   32,   32, 0x0a,
     179,  154,   32,   32, 0x0a,
     251,  234,  214,   32, 0x0a,
     286,  234,  280,   32, 0x0a,
     312,  234,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsAnchor[] = {
    "PythonQtWrapper_QGraphicsAnchor\0\0obj\0"
    "delete_QGraphicsAnchor(QGraphicsAnchor*)\0"
    "theWrappedObject,policy\0"
    "setSizePolicy(QGraphicsAnchor*,QSizePolicy::Policy)\0"
    "theWrappedObject,spacing\0"
    "setSpacing(QGraphicsAnchor*,qreal)\0"
    "QSizePolicy::Policy\0theWrappedObject\0"
    "sizePolicy(QGraphicsAnchor*)\0qreal\0"
    "spacing(QGraphicsAnchor*)\0"
    "unsetSpacing(QGraphicsAnchor*)\0"
};

void PythonQtWrapper_QGraphicsAnchor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsAnchor *_t = static_cast<PythonQtWrapper_QGraphicsAnchor *>(_o);
        switch (_id) {
        case 0: _t->delete_QGraphicsAnchor((*reinterpret_cast< QGraphicsAnchor*(*)>(_a[1]))); break;
        case 1: _t->setSizePolicy((*reinterpret_cast< QGraphicsAnchor*(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[2]))); break;
        case 2: _t->setSpacing((*reinterpret_cast< QGraphicsAnchor*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 3: { QSizePolicy::Policy _r = _t->sizePolicy((*reinterpret_cast< QGraphicsAnchor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizePolicy::Policy*>(_a[0]) = _r; }  break;
        case 4: { qreal _r = _t->spacing((*reinterpret_cast< QGraphicsAnchor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: _t->unsetSpacing((*reinterpret_cast< QGraphicsAnchor*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsAnchor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsAnchor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsAnchor,
      qt_meta_data_PythonQtWrapper_QGraphicsAnchor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsAnchor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsAnchor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsAnchor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsAnchor))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsAnchor*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsAnchor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsAnchorLayout[] = {

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
      69,   62,   39,   38, 0x0a,
     117,   38,   39,   38, 0x2a,
     149,  145,   38,   38, 0x0a,
     278,  219,  202,   38, 0x0a,
     437,  386,   38,   38, 0x0a,
     569,  531,   38,   38, 0x2a,
     709,  646,   38,   38, 0x0a,
     814,  219,  202,   38, 0x0a,
     940,  923,  919,   38, 0x0a,
     976,  923,  970,   38, 0x0a,
    1018,  923,   38,   38, 0x0a,
    1097, 1074, 1053,   38, 0x0a,
    1132, 1074,   38,   38, 0x0a,
    1191, 1169,   38,   38, 0x0a,
    1259, 1234,   38,   38, 0x0a,
    1310, 1234,   38,   38, 0x0a,
    1351, 1234,   38,   38, 0x0a,
    1441, 1407, 1400,   38, 0x0a,
    1517, 1494, 1400,   38, 0x2a,
    1563,  923,  970,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsAnchorLayout[] = {
    "PythonQtWrapper_QGraphicsAnchorLayout\0"
    "\0QGraphicsAnchorLayout*\0parent\0"
    "new_QGraphicsAnchorLayout(QGraphicsLayoutItem*)\0"
    "new_QGraphicsAnchorLayout()\0obj\0"
    "delete_QGraphicsAnchorLayout(QGraphicsAnchorLayout*)\0"
    "QGraphicsAnchor*\0"
    "theWrappedObject,firstItem,firstEdge,secondItem,secondEdge\0"
    "addAnchor(QGraphicsAnchorLayout*,QGraphicsLayoutItem*,Qt::AnchorPoint,"
    "QGraphicsLayoutItem*,Qt::AnchorPoint)\0"
    "theWrappedObject,firstItem,secondItem,orientations\0"
    "addAnchors(QGraphicsAnchorLayout*,QGraphicsLayoutItem*,QGraphicsLayout"
    "Item*,Qt::Orientations)\0"
    "theWrappedObject,firstItem,secondItem\0"
    "addAnchors(QGraphicsAnchorLayout*,QGraphicsLayoutItem*,QGraphicsLayout"
    "Item*)\0"
    "theWrappedObject,firstItem,firstCorner,secondItem,secondCorner\0"
    "addCornerAnchors(QGraphicsAnchorLayout*,QGraphicsLayoutItem*,Qt::Corne"
    "r,QGraphicsLayoutItem*,Qt::Corner)\0"
    "anchor(QGraphicsAnchorLayout*,QGraphicsLayoutItem*,Qt::AnchorPoint,QGr"
    "aphicsLayoutItem*,Qt::AnchorPoint)\0"
    "int\0theWrappedObject\0count(QGraphicsAnchorLayout*)\0"
    "qreal\0horizontalSpacing(QGraphicsAnchorLayout*)\0"
    "invalidate(QGraphicsAnchorLayout*)\0"
    "QGraphicsLayoutItem*\0theWrappedObject,index\0"
    "itemAt(QGraphicsAnchorLayout*,int)\0"
    "removeAt(QGraphicsAnchorLayout*,int)\0"
    "theWrappedObject,rect\0"
    "setGeometry(QGraphicsAnchorLayout*,QRectF)\0"
    "theWrappedObject,spacing\0"
    "setHorizontalSpacing(QGraphicsAnchorLayout*,qreal)\0"
    "setSpacing(QGraphicsAnchorLayout*,qreal)\0"
    "setVerticalSpacing(QGraphicsAnchorLayout*,qreal)\0"
    "QSizeF\0theWrappedObject,which,constraint\0"
    "sizeHint(QGraphicsAnchorLayout*,Qt::SizeHint,QSizeF)\0"
    "theWrappedObject,which\0"
    "sizeHint(QGraphicsAnchorLayout*,Qt::SizeHint)\0"
    "verticalSpacing(QGraphicsAnchorLayout*)\0"
};

void PythonQtWrapper_QGraphicsAnchorLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsAnchorLayout *_t = static_cast<PythonQtWrapper_QGraphicsAnchorLayout *>(_o);
        switch (_id) {
        case 0: { QGraphicsAnchorLayout* _r = _t->new_QGraphicsAnchorLayout((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsAnchorLayout**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsAnchorLayout* _r = _t->new_QGraphicsAnchorLayout();
            if (_a[0]) *reinterpret_cast< QGraphicsAnchorLayout**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGraphicsAnchorLayout((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1]))); break;
        case 3: { QGraphicsAnchor* _r = _t->addAnchor((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< Qt::AnchorPoint(*)>(_a[3])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[4])),(*reinterpret_cast< Qt::AnchorPoint(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QGraphicsAnchor**>(_a[0]) = _r; }  break;
        case 4: _t->addAnchors((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[3])),(*reinterpret_cast< Qt::Orientations(*)>(_a[4]))); break;
        case 5: _t->addAnchors((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[3]))); break;
        case 6: _t->addCornerAnchors((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< Qt::Corner(*)>(_a[3])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[4])),(*reinterpret_cast< Qt::Corner(*)>(_a[5]))); break;
        case 7: { QGraphicsAnchor* _r = _t->anchor((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< Qt::AnchorPoint(*)>(_a[3])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[4])),(*reinterpret_cast< Qt::AnchorPoint(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QGraphicsAnchor**>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->count((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { qreal _r = _t->horizontalSpacing((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 10: _t->invalidate((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1]))); break;
        case 11: { QGraphicsLayoutItem* _r = _t->itemAt((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsLayoutItem**>(_a[0]) = _r; }  break;
        case 12: _t->removeAt((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->setGeometry((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 14: _t->setHorizontalSpacing((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 15: _t->setSpacing((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 16: _t->setVerticalSpacing((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 17: { QSizeF _r = _t->sizeHint((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< Qt::SizeHint(*)>(_a[2])),(*reinterpret_cast< const QSizeF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 18: { QSizeF _r = _t->sizeHint((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])),(*reinterpret_cast< Qt::SizeHint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 19: { qreal _r = _t->verticalSpacing((*reinterpret_cast< QGraphicsAnchorLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsAnchorLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsAnchorLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsAnchorLayout,
      qt_meta_data_PythonQtWrapper_QGraphicsAnchorLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsAnchorLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsAnchorLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsAnchorLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsAnchorLayout))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsAnchorLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsAnchorLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsBlurEffect[] = {

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
      65,   58,   37,   36, 0x0a,
      99,   36,   37,   36, 0x2a,
     129,  125,   36,   36, 0x0a,
     226,  209,  178,   36, 0x0a,
     264,  209,  258,   36, 0x0a,
     326,  304,  297,   36, 0x0a,
     396,  371,   36,   36, 0x0a,

 // enums: name, flags, count, data
     433, 0x0,    3,   57,
     442, 0x1,    3,   63,

 // enum data: key, value
     452, uint(PythonQtWrapper_QGraphicsBlurEffect::PerformanceHint),
     468, uint(PythonQtWrapper_QGraphicsBlurEffect::QualityHint),
     480, uint(PythonQtWrapper_QGraphicsBlurEffect::AnimationHint),
     452, uint(PythonQtWrapper_QGraphicsBlurEffect::PerformanceHint),
     468, uint(PythonQtWrapper_QGraphicsBlurEffect::QualityHint),
     480, uint(PythonQtWrapper_QGraphicsBlurEffect::AnimationHint),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsBlurEffect[] = {
    "PythonQtWrapper_QGraphicsBlurEffect\0"
    "\0QGraphicsBlurEffect*\0parent\0"
    "new_QGraphicsBlurEffect(QObject*)\0"
    "new_QGraphicsBlurEffect()\0obj\0"
    "delete_QGraphicsBlurEffect(QGraphicsBlurEffect*)\0"
    "QGraphicsBlurEffect::BlurHints\0"
    "theWrappedObject\0blurHints(QGraphicsBlurEffect*)\0"
    "qreal\0blurRadius(QGraphicsBlurEffect*)\0"
    "QRectF\0theWrappedObject,rect\0"
    "boundingRectFor(QGraphicsBlurEffect*,QRectF)\0"
    "theWrappedObject,painter\0"
    "draw(QGraphicsBlurEffect*,QPainter*)\0"
    "BlurHint\0BlurHints\0PerformanceHint\0"
    "QualityHint\0AnimationHint\0"
};

void PythonQtWrapper_QGraphicsBlurEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsBlurEffect *_t = static_cast<PythonQtWrapper_QGraphicsBlurEffect *>(_o);
        switch (_id) {
        case 0: { QGraphicsBlurEffect* _r = _t->new_QGraphicsBlurEffect((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsBlurEffect**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsBlurEffect* _r = _t->new_QGraphicsBlurEffect();
            if (_a[0]) *reinterpret_cast< QGraphicsBlurEffect**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGraphicsBlurEffect((*reinterpret_cast< QGraphicsBlurEffect*(*)>(_a[1]))); break;
        case 3: { QGraphicsBlurEffect::BlurHints _r = _t->blurHints((*reinterpret_cast< QGraphicsBlurEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsBlurEffect::BlurHints*>(_a[0]) = _r; }  break;
        case 4: { qreal _r = _t->blurRadius((*reinterpret_cast< QGraphicsBlurEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: { QRectF _r = _t->boundingRectFor((*reinterpret_cast< QGraphicsBlurEffect*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 6: _t->draw((*reinterpret_cast< QGraphicsBlurEffect*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsBlurEffect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsBlurEffect::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsBlurEffect,
      qt_meta_data_PythonQtWrapper_QGraphicsBlurEffect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsBlurEffect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsBlurEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsBlurEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsBlurEffect))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsBlurEffect*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsBlurEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsColorizeEffect[] = {

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
      73,   66,   41,   40, 0x0a,
     111,   40,   41,   40, 0x2a,
     145,  141,   40,   40, 0x0a,
     226,  209,  202,   40, 0x0a,
     283,  258,   40,   40, 0x0a,
     330,  209,  324,   40, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsColorizeEffect[] = {
    "PythonQtWrapper_QGraphicsColorizeEffect\0"
    "\0QGraphicsColorizeEffect*\0parent\0"
    "new_QGraphicsColorizeEffect(QObject*)\0"
    "new_QGraphicsColorizeEffect()\0obj\0"
    "delete_QGraphicsColorizeEffect(QGraphicsColorizeEffect*)\0"
    "QColor\0theWrappedObject\0"
    "color(QGraphicsColorizeEffect*)\0"
    "theWrappedObject,painter\0"
    "draw(QGraphicsColorizeEffect*,QPainter*)\0"
    "qreal\0strength(QGraphicsColorizeEffect*)\0"
};

void PythonQtWrapper_QGraphicsColorizeEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsColorizeEffect *_t = static_cast<PythonQtWrapper_QGraphicsColorizeEffect *>(_o);
        switch (_id) {
        case 0: { QGraphicsColorizeEffect* _r = _t->new_QGraphicsColorizeEffect((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsColorizeEffect**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsColorizeEffect* _r = _t->new_QGraphicsColorizeEffect();
            if (_a[0]) *reinterpret_cast< QGraphicsColorizeEffect**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGraphicsColorizeEffect((*reinterpret_cast< QGraphicsColorizeEffect*(*)>(_a[1]))); break;
        case 3: { QColor _r = _t->color((*reinterpret_cast< QGraphicsColorizeEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 4: _t->draw((*reinterpret_cast< QGraphicsColorizeEffect*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 5: { qreal _r = _t->strength((*reinterpret_cast< QGraphicsColorizeEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsColorizeEffect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsColorizeEffect::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsColorizeEffect,
      qt_meta_data_PythonQtWrapper_QGraphicsColorizeEffect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsColorizeEffect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsColorizeEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsColorizeEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsColorizeEffect))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsColorizeEffect*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsColorizeEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsDropShadowEffect[] = {

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
      77,   70,   43,   42, 0x0a,
     117,   42,   43,   42, 0x2a,
     153,  149,   42,   42, 0x0a,
     237,  220,  214,   42, 0x0a,
     305,  283,  276,   42, 0x0a,
     363,  220,  356,   42, 0x0a,
     422,  397,   42,   42, 0x0a,
     473,  220,  465,   42, 0x0a,
     508,  220,  214,   42, 0x0a,
     544,  220,  214,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsDropShadowEffect[] = {
    "PythonQtWrapper_QGraphicsDropShadowEffect\0"
    "\0QGraphicsDropShadowEffect*\0parent\0"
    "new_QGraphicsDropShadowEffect(QObject*)\0"
    "new_QGraphicsDropShadowEffect()\0obj\0"
    "delete_QGraphicsDropShadowEffect(QGraphicsDropShadowEffect*)\0"
    "qreal\0theWrappedObject\0"
    "blurRadius(QGraphicsDropShadowEffect*)\0"
    "QRectF\0theWrappedObject,rect\0"
    "boundingRectFor(QGraphicsDropShadowEffect*,QRectF)\0"
    "QColor\0color(QGraphicsDropShadowEffect*)\0"
    "theWrappedObject,painter\0"
    "draw(QGraphicsDropShadowEffect*,QPainter*)\0"
    "QPointF\0offset(QGraphicsDropShadowEffect*)\0"
    "xOffset(QGraphicsDropShadowEffect*)\0"
    "yOffset(QGraphicsDropShadowEffect*)\0"
};

void PythonQtWrapper_QGraphicsDropShadowEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsDropShadowEffect *_t = static_cast<PythonQtWrapper_QGraphicsDropShadowEffect *>(_o);
        switch (_id) {
        case 0: { QGraphicsDropShadowEffect* _r = _t->new_QGraphicsDropShadowEffect((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsDropShadowEffect**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsDropShadowEffect* _r = _t->new_QGraphicsDropShadowEffect();
            if (_a[0]) *reinterpret_cast< QGraphicsDropShadowEffect**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGraphicsDropShadowEffect((*reinterpret_cast< QGraphicsDropShadowEffect*(*)>(_a[1]))); break;
        case 3: { qreal _r = _t->blurRadius((*reinterpret_cast< QGraphicsDropShadowEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 4: { QRectF _r = _t->boundingRectFor((*reinterpret_cast< QGraphicsDropShadowEffect*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 5: { QColor _r = _t->color((*reinterpret_cast< QGraphicsDropShadowEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 6: _t->draw((*reinterpret_cast< QGraphicsDropShadowEffect*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 7: { QPointF _r = _t->offset((*reinterpret_cast< QGraphicsDropShadowEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 8: { qreal _r = _t->xOffset((*reinterpret_cast< QGraphicsDropShadowEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 9: { qreal _r = _t->yOffset((*reinterpret_cast< QGraphicsDropShadowEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsDropShadowEffect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsDropShadowEffect::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsDropShadowEffect,
      qt_meta_data_PythonQtWrapper_QGraphicsDropShadowEffect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsDropShadowEffect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsDropShadowEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsDropShadowEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsDropShadowEffect))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsDropShadowEffect*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsDropShadowEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsEffect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       3,   99, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      57,   50,   33,   32, 0x0a,
      87,   32,   33,   32, 0x2a,
     113,  109,   32,   32, 0x0a,
     178,  161,  154,   32, 0x0a,
     237,  209,  154,   32, 0x0a,
     303,  278,   32,   32, 0x0a,
     336,  278,   32,   32, 0x0a,
     380,  161,  375,   32, 0x0a,
     432,  408,  154,   32, 0x0a,
     490,  161,  154,   32, 0x2a,
     550,  527,   32,   32, 0x0a,
     611,  161,  375,   32, 0x0a,
     688,  652,  644,   32, 0x0a,
     810,  779,  644,   32, 0x2a,
     870,  408,  644,   32, 0x2a,
     922,  161,  644,   32, 0x2a,
     953,  161,   32,   32, 0x0a,

 // enums: name, flags, count, data
     990, 0x0,    4,  111,
    1001, 0x1,    4,  119,
    1013, 0x0,    3,  127,

 // enum data: key, value
    1027, uint(PythonQtWrapper_QGraphicsEffect::SourceAttached),
    1042, uint(PythonQtWrapper_QGraphicsEffect::SourceDetached),
    1057, uint(PythonQtWrapper_QGraphicsEffect::SourceBoundingRectChanged),
    1083, uint(PythonQtWrapper_QGraphicsEffect::SourceInvalidated),
    1027, uint(PythonQtWrapper_QGraphicsEffect::SourceAttached),
    1042, uint(PythonQtWrapper_QGraphicsEffect::SourceDetached),
    1057, uint(PythonQtWrapper_QGraphicsEffect::SourceBoundingRectChanged),
    1083, uint(PythonQtWrapper_QGraphicsEffect::SourceInvalidated),
    1101, uint(PythonQtWrapper_QGraphicsEffect::NoPad),
    1107, uint(PythonQtWrapper_QGraphicsEffect::PadToTransparentBorder),
    1130, uint(PythonQtWrapper_QGraphicsEffect::PadToEffectiveBoundingRect),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsEffect[] = {
    "PythonQtWrapper_QGraphicsEffect\0\0"
    "QGraphicsEffect*\0parent\0"
    "new_QGraphicsEffect(QObject*)\0"
    "new_QGraphicsEffect()\0obj\0"
    "delete_QGraphicsEffect(QGraphicsEffect*)\0"
    "QRectF\0theWrappedObject\0"
    "boundingRect(QGraphicsEffect*)\0"
    "theWrappedObject,sourceRect\0"
    "boundingRectFor(QGraphicsEffect*,QRectF)\0"
    "theWrappedObject,painter\0"
    "draw(QGraphicsEffect*,QPainter*)\0"
    "drawSource(QGraphicsEffect*,QPainter*)\0"
    "bool\0isEnabled(QGraphicsEffect*)\0"
    "theWrappedObject,system\0"
    "sourceBoundingRect(QGraphicsEffect*,Qt::CoordinateSystem)\0"
    "sourceBoundingRect(QGraphicsEffect*)\0"
    "theWrappedObject,flags\0"
    "sourceChanged(QGraphicsEffect*,QGraphicsEffect::ChangeFlags)\0"
    "sourceIsPixmap(QGraphicsEffect*)\0"
    "QPixmap\0theWrappedObject,system,offset,mode\0"
    "sourcePixmap(QGraphicsEffect*,Qt::CoordinateSystem,QPoint*,QGraphicsEf"
    "fect::PixmapPadMode)\0"
    "theWrappedObject,system,offset\0"
    "sourcePixmap(QGraphicsEffect*,Qt::CoordinateSystem,QPoint*)\0"
    "sourcePixmap(QGraphicsEffect*,Qt::CoordinateSystem)\0"
    "sourcePixmap(QGraphicsEffect*)\0"
    "updateBoundingRect(QGraphicsEffect*)\0"
    "ChangeFlag\0ChangeFlags\0PixmapPadMode\0"
    "SourceAttached\0SourceDetached\0"
    "SourceBoundingRectChanged\0SourceInvalidated\0"
    "NoPad\0PadToTransparentBorder\0"
    "PadToEffectiveBoundingRect\0"
};

void PythonQtWrapper_QGraphicsEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsEffect *_t = static_cast<PythonQtWrapper_QGraphicsEffect *>(_o);
        switch (_id) {
        case 0: { QGraphicsEffect* _r = _t->new_QGraphicsEffect((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsEffect**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsEffect* _r = _t->new_QGraphicsEffect();
            if (_a[0]) *reinterpret_cast< QGraphicsEffect**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGraphicsEffect((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1]))); break;
        case 3: { QRectF _r = _t->boundingRect((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 4: { QRectF _r = _t->boundingRectFor((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 5: _t->draw((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 6: _t->drawSource((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 7: { bool _r = _t->isEnabled((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QRectF _r = _t->sourceBoundingRect((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])),(*reinterpret_cast< Qt::CoordinateSystem(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 9: { QRectF _r = _t->sourceBoundingRect((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 10: _t->sourceChanged((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])),(*reinterpret_cast< QGraphicsEffect::ChangeFlags(*)>(_a[2]))); break;
        case 11: { bool _r = _t->sourceIsPixmap((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QPixmap _r = _t->sourcePixmap((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])),(*reinterpret_cast< Qt::CoordinateSystem(*)>(_a[2])),(*reinterpret_cast< QPoint*(*)>(_a[3])),(*reinterpret_cast< QGraphicsEffect::PixmapPadMode(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 13: { QPixmap _r = _t->sourcePixmap((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])),(*reinterpret_cast< Qt::CoordinateSystem(*)>(_a[2])),(*reinterpret_cast< QPoint*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 14: { QPixmap _r = _t->sourcePixmap((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])),(*reinterpret_cast< Qt::CoordinateSystem(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 15: { QPixmap _r = _t->sourcePixmap((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 16: _t->updateBoundingRect((*reinterpret_cast< QGraphicsEffect*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsEffect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsEffect::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsEffect,
      qt_meta_data_PythonQtWrapper_QGraphicsEffect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsEffect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsEffect))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsEffect*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsEllipseItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       1,  154, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      73,   60,   38,   37, 0x0a,
     137,  130,   38,   37, 0x2a,
     178,   37,   38,   37, 0x2a,
     223,  205,   38,   37, 0x0a,
     299,  287,   38,   37, 0x2a,
     352,  347,   38,   37, 0x2a,
     406,  385,   38,   37, 0x0a,
     502,  487,   38,   37, 0x2a,
     575,  567,   38,   37, 0x2a,
     629,  625,   37,   37, 0x0a,
     704,  687,  680,   37, 0x0a,
     768,  745,  740,   37, 0x0a,
     842,  817,  808,   37, 0x0a,
     906,  884,  740,   37, 0x0a,
     976,  687,  963,   37, 0x0a,
    1049, 1010,   37,   37, 0x0a,
    1161, 1129,   37,   37, 0x2a,
    1232,  687,  680,   37, 0x0a,
    1295, 1260,   37,   37, 0x0a,
    1366, 1344,   37,   37, 0x0a,
    1429, 1404,   37,   37, 0x0a,
    1507, 1484,   37,   37, 0x0a,
    1547, 1484,   37,   37, 0x0a,
    1588,  687,  963,   37, 0x0a,
    1621,  687, 1617,   37, 0x0a,
    1654,  687, 1617,   37, 0x0a,
    1715, 1688,  740,   37, 0x0a,
    1760,  687, 1617,   37, 0x0a,

 // enums: name, flags, count, data
    1788, 0x0,    1,  158,

 // enum data: key, value
    1795, uint(PythonQtWrapper_QGraphicsEllipseItem::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsEllipseItem[] = {
    "PythonQtWrapper_QGraphicsEllipseItem\0"
    "\0QGraphicsEllipseItem*\0parent,scene\0"
    "new_QGraphicsEllipseItem(QGraphicsItem*,QGraphicsScene*)\0"
    "parent\0new_QGraphicsEllipseItem(QGraphicsItem*)\0"
    "new_QGraphicsEllipseItem()\0rect,parent,scene\0"
    "new_QGraphicsEllipseItem(QRectF,QGraphicsItem*,QGraphicsScene*)\0"
    "rect,parent\0new_QGraphicsEllipseItem(QRectF,QGraphicsItem*)\0"
    "rect\0new_QGraphicsEllipseItem(QRectF)\0"
    "x,y,w,h,parent,scene\0"
    "new_QGraphicsEllipseItem(qreal,qreal,qreal,qreal,QGraphicsItem*,QGraph"
    "icsScene*)\0"
    "x,y,w,h,parent\0"
    "new_QGraphicsEllipseItem(qreal,qreal,qreal,qreal,QGraphicsItem*)\0"
    "x,y,w,h\0new_QGraphicsEllipseItem(qreal,qreal,qreal,qreal)\0"
    "obj\0delete_QGraphicsEllipseItem(QGraphicsEllipseItem*)\0"
    "QRectF\0theWrappedObject\0"
    "boundingRect(QGraphicsEllipseItem*)\0"
    "bool\0theWrappedObject,point\0"
    "contains(QGraphicsEllipseItem*,QPointF)\0"
    "QVariant\0theWrappedObject,variant\0"
    "extension(QGraphicsEllipseItem*,QVariant)\0"
    "theWrappedObject,item\0"
    "isObscuredBy(QGraphicsEllipseItem*,const QGraphicsItem*)\0"
    "QPainterPath\0opaqueArea(QGraphicsEllipseItem*)\0"
    "theWrappedObject,painter,option,widget\0"
    "paint(QGraphicsEllipseItem*,QPainter*,const QStyleOptionGraphicsItem*,"
    "QWidget*)\0"
    "theWrappedObject,painter,option\0"
    "paint(QGraphicsEllipseItem*,QPainter*,const QStyleOptionGraphicsItem*)\0"
    "rect(QGraphicsEllipseItem*)\0"
    "theWrappedObject,extension,variant\0"
    "setExtension(QGraphicsEllipseItem*,int,QVariant)\0"
    "theWrappedObject,rect\0"
    "setRect(QGraphicsEllipseItem*,QRectF)\0"
    "theWrappedObject,x,y,w,h\0"
    "setRect(QGraphicsEllipseItem*,qreal,qreal,qreal,qreal)\0"
    "theWrappedObject,angle\0"
    "setSpanAngle(QGraphicsEllipseItem*,int)\0"
    "setStartAngle(QGraphicsEllipseItem*,int)\0"
    "shape(QGraphicsEllipseItem*)\0int\0"
    "spanAngle(QGraphicsEllipseItem*)\0"
    "startAngle(QGraphicsEllipseItem*)\0"
    "theWrappedObject,extension\0"
    "supportsExtension(QGraphicsEllipseItem*,int)\0"
    "type(QGraphicsEllipseItem*)\0enum_1\0"
    "Type\0"
};

void PythonQtWrapper_QGraphicsEllipseItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsEllipseItem *_t = static_cast<PythonQtWrapper_QGraphicsEllipseItem *>(_o);
        switch (_id) {
        case 0: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsScene*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 2: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem();
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 3: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem((*reinterpret_cast< const QRectF(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< QGraphicsScene*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 4: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem((*reinterpret_cast< const QRectF(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 5: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem((*reinterpret_cast< const QRectF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 6: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[5])),(*reinterpret_cast< QGraphicsScene*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 7: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 8: { QGraphicsEllipseItem* _r = _t->new_QGraphicsEllipseItem((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QGraphicsEllipseItem**>(_a[0]) = _r; }  break;
        case 9: _t->delete_QGraphicsEllipseItem((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1]))); break;
        case 10: { QRectF _r = _t->boundingRect((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->contains((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QVariant _r = _t->extension((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isObscuredBy((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QPainterPath _r = _t->opaqueArea((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 15: _t->paint((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionGraphicsItem*(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4]))); break;
        case 16: _t->paint((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionGraphicsItem*(*)>(_a[3]))); break;
        case 17: { QRectF _r = _t->rect((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 18: _t->setExtension((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 19: _t->setRect((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 20: _t->setRect((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 21: _t->setSpanAngle((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->setStartAngle((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: { QPainterPath _r = _t->shape((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->spanAngle((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->startAngle((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->supportsExtension((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { int _r = _t->type((*reinterpret_cast< QGraphicsEllipseItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsEllipseItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsEllipseItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsEllipseItem,
      qt_meta_data_PythonQtWrapper_QGraphicsEllipseItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsEllipseItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsEllipseItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsEllipseItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsEllipseItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsEllipseItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsEllipseItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QGraphicsGridLayout[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      65,   58,   37,   36, 0x0a,
     111,   36,   37,   36, 0x2a,
     141,  137,   36,   36, 0x0a,
     233,  190,   36,   36, 0x0a,
     367,  334,   36,   36, 0x2a,
     516,  454,   36,   36, 0x0a,
     677,  625,   36,   36, 0x2a,
     808,  786,  772,   36, 0x0a,
     885,  861,  772,   36, 0x0a,
     948,  931,  927,   36, 0x0a,
     988,  861,  982,   36, 0x0a,
    1033,  861,  982,   36, 0x0a,
    1078,  861,  982,   36, 0x0a,
    1125,  861,  982,   36, 0x0a,
    1165,  861,  927,   36, 0x0a,
    1211,  931,  927,   36, 0x0a,
    1239,  931,  982,   36, 0x0a,
    1279,  931,   36,   36, 0x0a,
    1356, 1333, 1312,   36, 0x0a,
    1417, 1389, 1312,   36, 0x0a,
    1454, 1333,   36,   36, 0x0a,
    1489,  786,   36,   36, 0x0a,
    1564, 1543,  772,   36, 0x0a,
    1603,  931,  927,   36, 0x0a,
    1634, 1543,  982,   36, 0x0a,
    1677, 1543,  982,   36, 0x0a,
    1720, 1543,  982,   36, 0x0a,
    1765, 1543,  982,   36, 0x0a,
    1802, 1543,  927,   36, 0x0a,
    1877, 1845,   36,   36, 0x0a,
    1981, 1947,   36,   36, 0x0a,
    2070, 2040,   36,   36, 0x0a,
    2122, 2040,   36,   36, 0x0a,
    2176, 2040,   36,   36, 0x0a,
    2230, 2040,   36,   36, 0x0a,
    2318, 2286,   36,   36, 0x0a,
    2399, 2367,   36,   36, 0x0a,
    2474, 2452,   36,   36, 0x0a,
    2540, 2515,   36,   36, 0x0a,
    2620, 2589,   36,   36, 0x0a,
    2704, 2676,   36,   36, 0x0a,
    2754, 2676,   36,   36, 0x0a,
    2806, 2676,   36,   36, 0x0a,
    2858, 2676,   36,   36, 0x0a,
    2941, 2912,   36,   36, 0x0a,
    3016, 2987,   36,   36, 0x0a,
    3066, 2515,   36,   36, 0x0a,
    3105, 2515,   36,   36, 0x0a,
    3193, 3159, 3152,   36, 0x0a,
    3267, 3244, 3152,   36, 0x2a,
    3311,  931,  982,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsGridLayout[] = {
    "PythonQtWrapper_QGraphicsGridLayout\0"
    "\0QGraphicsGridLayout*\0parent\0"
    "new_QGraphicsGridLayout(QGraphicsLayoutItem*)\0"
    "new_QGraphicsGridLayout()\0obj\0"
    "delete_QGraphicsGridLayout(QGraphicsGridLayout*)\0"
    "theWrappedObject,item,row,column,alignment\0"
    "addItem(QGraphicsGridLayout*,PythonQtPassOwnershipToCPP<QGraphicsLayou"
    "tItem*>,int,int,Qt::Alignment)\0"
    "theWrappedObject,item,row,column\0"
    "addItem(QGraphicsGridLayout*,PythonQtPassOwnershipToCPP<QGraphicsLayou"
    "tItem*>,int,int)\0"
    "theWrappedObject,item,row,column,rowSpan,columnSpan,alignment\0"
    "addItem(QGraphicsGridLayout*,PythonQtPassOwnershipToCPP<QGraphicsLayou"
    "tItem*>,int,int,int,int,Qt::Alignment)\0"
    "theWrappedObject,item,row,column,rowSpan,columnSpan\0"
    "addItem(QGraphicsGridLayout*,PythonQtPassOwnershipToCPP<QGraphicsLayou"
    "tItem*>,int,int,int,int)\0"
    "Qt::Alignment\0theWrappedObject,item\0"
    "alignment(QGraphicsGridLayout*,QGraphicsLayoutItem*)\0"
    "theWrappedObject,column\0"
    "columnAlignment(QGraphicsGridLayout*,int)\0"
    "int\0theWrappedObject\0"
    "columnCount(QGraphicsGridLayout*)\0"
    "qreal\0columnMaximumWidth(QGraphicsGridLayout*,int)\0"
    "columnMinimumWidth(QGraphicsGridLayout*,int)\0"
    "columnPreferredWidth(QGraphicsGridLayout*,int)\0"
    "columnSpacing(QGraphicsGridLayout*,int)\0"
    "columnStretchFactor(QGraphicsGridLayout*,int)\0"
    "count(QGraphicsGridLayout*)\0"
    "horizontalSpacing(QGraphicsGridLayout*)\0"
    "invalidate(QGraphicsGridLayout*)\0"
    "QGraphicsLayoutItem*\0theWrappedObject,index\0"
    "itemAt(QGraphicsGridLayout*,int)\0"
    "theWrappedObject,row,column\0"
    "itemAt(QGraphicsGridLayout*,int,int)\0"
    "removeAt(QGraphicsGridLayout*,int)\0"
    "removeItem(QGraphicsGridLayout*,QGraphicsLayoutItem*)\0"
    "theWrappedObject,row\0"
    "rowAlignment(QGraphicsGridLayout*,int)\0"
    "rowCount(QGraphicsGridLayout*)\0"
    "rowMaximumHeight(QGraphicsGridLayout*,int)\0"
    "rowMinimumHeight(QGraphicsGridLayout*,int)\0"
    "rowPreferredHeight(QGraphicsGridLayout*,int)\0"
    "rowSpacing(QGraphicsGridLayout*,int)\0"
    "rowStretchFactor(QGraphicsGridLayout*,int)\0"
    "theWrappedObject,item,alignment\0"
    "setAlignment(QGraphicsGridLayout*,QGraphicsLayoutItem*,Qt::Alignment)\0"
    "theWrappedObject,column,alignment\0"
    "setColumnAlignment(QGraphicsGridLayout*,int,Qt::Alignment)\0"
    "theWrappedObject,column,width\0"
    "setColumnFixedWidth(QGraphicsGridLayout*,int,qreal)\0"
    "setColumnMaximumWidth(QGraphicsGridLayout*,int,qreal)\0"
    "setColumnMinimumWidth(QGraphicsGridLayout*,int,qreal)\0"
    "setColumnPreferredWidth(QGraphicsGridLayout*,int,qreal)\0"
    "theWrappedObject,column,spacing\0"
    "setColumnSpacing(QGraphicsGridLayout*,int,qreal)\0"
    "theWrappedObject,column,stretch\0"
    "setColumnStretchFactor(QGraphicsGridLayout*,int,int)\0"
    "theWrappedObject,rect\0"
    "setGeometry(QGraphicsGridLayout*,QRectF)\0"
    "theWrappedObject,spacing\0"
    "setHorizontalSpacing(QGraphicsGridLayout*,qreal)\0"
    "theWrappedObject,row,alignment\0"
    "setRowAlignment(QGraphicsGridLayout*,int,Qt::Alignment)\0"
    "theWrappedObject,row,height\0"
    "setRowFixedHeight(QGraphicsGridLayout*,int,qreal)\0"
    "setRowMaximumHeight(QGraphicsGridLayout*,int,qreal)\0"
    "setRowMinimumHeight(QGraphicsGridLayout*,int,qreal)\0"
    "setRowPreferredHeight(QGraphicsGridLayout*,int,qreal)\0"
    "theWrappedObject,row,spacing\0"
    "setRowSpacing(QGraphicsGridLayout*,int,qreal)\0"
    "theWrappedObject,row,stretch\0"
    "setRowStretchFactor(QGraphicsGridLayout*,int,int)\0"
    "setSpacing(QGraphicsGridLayout*,qreal)\0"
    "setVerticalSpacing(QGraphicsGridLayout*,qreal)\0"
    "QSizeF\0theWrappedObject,which,constraint\0"
    "sizeHint(QGraphicsGridLayout*,Qt::SizeHint,QSizeF)\0"
    "theWrappedObject,which\0"
    "sizeHint(QGraphicsGridLayout*,Qt::SizeHint)\0"
    "verticalSpacing(QGraphicsGridLayout*)\0"
};

void PythonQtWrapper_QGraphicsGridLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsGridLayout *_t = static_cast<PythonQtWrapper_QGraphicsGridLayout *>(_o);
        switch (_id) {
        case 0: { QGraphicsGridLayout* _r = _t->new_QGraphicsGridLayout((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsGridLayout**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsGridLayout* _r = _t->new_QGraphicsGridLayout();
            if (_a[0]) *reinterpret_cast< QGraphicsGridLayout**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGraphicsGridLayout((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1]))); break;
        case 3: _t->addItem((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QGraphicsLayoutItem*>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< Qt::Alignment(*)>(_a[5]))); break;
        case 4: _t->addItem((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QGraphicsLayoutItem*>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->addItem((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QGraphicsLayoutItem*>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< Qt::Alignment(*)>(_a[7]))); break;
        case 6: _t->addItem((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QGraphicsLayoutItem*>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 7: { Qt::Alignment _r = _t->alignment((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 8: { Qt::Alignment _r = _t->columnAlignment((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->columnCount((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { qreal _r = _t->columnMaximumWidth((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 11: { qreal _r = _t->columnMinimumWidth((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 12: { qreal _r = _t->columnPreferredWidth((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->columnSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->columnStretchFactor((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->count((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { qreal _r = _t->horizontalSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 17: _t->invalidate((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1]))); break;
        case 18: { QGraphicsLayoutItem* _r = _t->itemAt((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsLayoutItem**>(_a[0]) = _r; }  break;
        case 19: { QGraphicsLayoutItem* _r = _t->itemAt((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QGraphicsLayoutItem**>(_a[0]) = _r; }  break;
        case 20: _t->removeAt((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->removeItem((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2]))); break;
        case 22: { Qt::Alignment _r = _t->rowAlignment((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->rowCount((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { qreal _r = _t->rowMaximumHeight((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 25: { qreal _r = _t->rowMinimumHeight((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 26: { qreal _r = _t->rowPreferredHeight((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 27: { qreal _r = _t->rowSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 28: { int _r = _t->rowStretchFactor((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 29: _t->setAlignment((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< Qt::Alignment(*)>(_a[3]))); break;
        case 30: _t->setColumnAlignment((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Alignment(*)>(_a[3]))); break;
        case 31: _t->setColumnFixedWidth((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 32: _t->setColumnMaximumWidth((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 33: _t->setColumnMinimumWidth((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 34: _t->setColumnPreferredWidth((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 35: _t->setColumnSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 36: _t->setColumnStretchFactor((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 37: _t->setGeometry((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 38: _t->setHorizontalSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 39: _t->setRowAlignment((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Alignment(*)>(_a[3]))); break;
        case 40: _t->setRowFixedHeight((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 41: _t->setRowMaximumHeight((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 42: _t->setRowMinimumHeight((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 43: _t->setRowPreferredHeight((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 44: _t->setRowSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 45: _t->setRowStretchFactor((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 46: _t->setSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 47: _t->setVerticalSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 48: { QSizeF _r = _t->sizeHint((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< Qt::SizeHint(*)>(_a[2])),(*reinterpret_cast< const QSizeF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 49: { QSizeF _r = _t->sizeHint((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])),(*reinterpret_cast< Qt::SizeHint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 50: { qreal _r = _t->verticalSpacing((*reinterpret_cast< QGraphicsGridLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsGridLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsGridLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsGridLayout,
      qt_meta_data_PythonQtWrapper_QGraphicsGridLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsGridLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsGridLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsGridLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsGridLayout))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsGridLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsGridLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QGraphicsItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
     236,   14, // methods
       0,    0, // properties
       7, 1194, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      59,   46,   31,   30, 0x0a,
     116,  109,   31,   30, 0x2a,
     150,   30,   31,   30, 0x2a,
     174,  170,   30,   30, 0x0a,
     233,  216,  211,   30, 0x0a,
     261,  216,  211,   30, 0x0a,
     295,  216,  211,   30, 0x0a,
     346,  216,  329,   30, 0x0a,
     383,  216,  211,   30, 0x0a,
     418,  216,   30,   30, 0x0a,
     468,  445,   30,   30, 0x0a,
     503,  216,  496,   30, 0x0a,
     579,  540,  532,   30, 0x0a,
     627,  216,  621,   30, 0x0a,
     694,  216,  669,   30, 0x0a,
     742,  216,  720,   30, 0x0a,
     769,  216,  496,   30, 0x0a,
     806,  216,   30,   30, 0x0a,
     846,  216,  833,   30, 0x0a,
     899,  871,  211,   30, 0x0a,
     998,  975,  211,   30, 0x2a,
    1079, 1052,  211,   30, 0x0a,
    1169, 1147,  211,   30, 0x2a,
    1237, 1215,  720,   30, 0x0a,
    1290,  216,  720,   30, 0x2a,
    1321,  975,   31,   30, 0x0a,
    1400, 1377,  211,   30, 0x0a,
    1456, 1433,   30,   30, 0x0a,
    1529,  216, 1521,   30, 0x0a,
    1582, 1561, 1552,   30, 0x0a,
    1653, 1618, 1607,   30, 0x0a,
    1696, 1433,   30,   30, 0x0a,
    1756, 1433,   30,   30, 0x0a,
    1816, 1433,   30,   30, 0x0a,
    1875, 1433,   30,   30, 0x0a,
    1930,  216,  621,   30, 0x0a,
    2001, 1963,   30,   30, 0x0a,
    2076, 2046,   30,   30, 0x2a,
    2139, 2117,   30,   30, 0x2a,
    2176,  216,   30,   30, 0x2a,
    2247, 2206,   30,   30, 0x0a,
    2342, 2309,   30,   30, 0x2a,
    2425, 2400,   30,   30, 0x2a,
    2504, 2479, 1552,   30, 0x0a,
    2539,  216,  211,   30, 0x0a,
    2607,  216, 2574,   30, 0x0a,
    2629, 1433,   30,   30, 0x0a,
    2671,  216,   31,   30, 0x0a,
    2697, 1433,   30,   30, 0x0a,
    2740,  216,   31,   30, 0x0a,
    2767,  216,   31,   30, 0x0a,
    2798,  216,   30,   30, 0x0a,
    2827,  216,   30,   30, 0x0a,
    2870,  216, 2853,   30, 0x0a,
    2921,  216, 2901,   30, 0x0a,
    2943,  216,  211,   30, 0x0a,
    2978,  216,  211,   30, 0x0a,
    3004,  216,  211,   30, 0x0a,
    3029,  216,   30,   30, 0x0a,
    3050, 1433,   30,   30, 0x0a,
    3108, 1433,   30,   30, 0x0a,
    3166, 1433,   30,   30, 0x0a,
    3223, 1433,   30,   30, 0x0a,
    3296,  216, 3275,   30, 0x0a,
    3352, 3329, 1552,   30, 0x0a,
    3434, 3406,   30,   30, 0x0a,
    3489,  216,  211,   30, 0x0a,
    3537, 3514,  211,   30, 0x0a,
    3618, 3587,  211,   30, 0x0a,
    3672,  216,  211,   30, 0x2a,
    3710,  216,  211,   30, 0x0a,
    3736,  216,  211,   30, 0x0a,
    3762,  216,  211,   30, 0x0a,
    3789, 2117,  211,   30, 0x0a,
    3823, 2400,  211,   30, 0x0a,
    3896, 3874,  211,   30, 0x0a,
    3946,  216,  211,   30, 0x0a,
    3970,  216,  211,   30, 0x0a,
    3997,  216,  211,   30, 0x0a,
    4026,  216,  211,   30, 0x0a,
    4076, 4052,  211,   30, 0x0a,
    4125,  216,  211,   30, 0x0a,
    4150,  216,  211,   30, 0x0a,
    4205, 4175, 1552,   30, 0x0a,
    4301, 4275, 1607,   30, 0x0a,
    4358,  975, 1607,   30, 0x2a,
    4409, 1433,   30,   30, 0x0a,
    4450, 1433,   30,   30, 0x0a,
    4520, 4493,  833,   30, 0x0a,
    4618, 4590, 4582,   30, 0x0a,
    4715, 4685, 4675,   30, 0x0a,
    4801, 4774, 4675,   30, 0x0a,
    4883, 4857, 4582,   30, 0x0a,
    4974, 4944, 4675,   30, 0x0a,
    5047, 1147,  833,   30, 0x0a,
    5090, 1377, 4582,   30, 0x0a,
    5153, 5128, 4675,   30, 0x0a,
    5193, 2117, 4675,   30, 0x0a,
    5251, 5230, 4582,   30, 0x0a,
    5293, 2400, 4675,   30, 0x0a,
    5347, 1147,  833,   30, 0x0a,
    5389, 1377, 4582,   30, 0x0a,
    5426, 5128, 4675,   30, 0x0a,
    5465, 2117, 4675,   30, 0x0a,
    5501, 5230, 4582,   30, 0x0a,
    5542, 2400, 4675,   30, 0x0a,
    5595, 4774,  496,   30, 0x0a,
    5655, 4944,  496,   30, 0x0a,
    5732, 2117,  496,   30, 0x0a,
    5773, 2400,  496,   30, 0x0a,
    5831, 2117,  496,   30, 0x0a,
    5871, 2400,  496,   30, 0x0a,
    5928, 4774,  496,   30, 0x0a,
    5986, 4944,  496,   30, 0x0a,
    6061, 2117,  496,   30, 0x0a,
    6100, 2400,  496,   30, 0x0a,
    6156, 2117,  496,   30, 0x0a,
    6194, 2400,  496,   30, 0x0a,
    6249, 4493,  833,   30, 0x0a,
    6309, 4590, 4582,   30, 0x0a,
    6364, 4685, 4675,   30, 0x0a,
    6421, 4774, 4675,   30, 0x0a,
    6475, 4857, 4582,   30, 0x0a,
    6534, 4944, 4675,   30, 0x0a,
    6605, 1147,  833,   30, 0x0a,
    6646, 1377, 4582,   30, 0x0a,
    6682, 5128, 4675,   30, 0x0a,
    6720, 2117, 4675,   30, 0x0a,
    6755, 5230, 4582,   30, 0x0a,
    6795, 2400, 4675,   30, 0x0a,
    6847, 1147,  833,   30, 0x0a,
    6887, 1377, 4582,   30, 0x0a,
    6922, 5128, 4675,   30, 0x0a,
    6959, 2117, 4675,   30, 0x0a,
    6993, 5230, 4582,   30, 0x0a,
    7032, 2400, 4675,   30, 0x0a,
    7083, 1433,   30,   30, 0x0a,
    7147, 1433,   30,   30, 0x0a,
    7204, 1433,   30,   30, 0x0a,
    7262, 1433,   30,   30, 0x0a,
    7345, 7322,   30,   30, 0x0a,
    7380,  216,  621,   30, 0x0a,
    7404,  216,  833,   30, 0x0a,
    7470, 7431,   30,   30, 0x0a,
    7575, 7543,   30,   30, 0x2a,
    7639,  216,   31,   30, 0x0a,
    7690,  216, 7661,   30, 0x0a,
    7720,  216,   31,   30, 0x0a,
    7764,  216, 7747,   30, 0x0a,
    7810,  216, 7793,   30, 0x0a,
    7839,  216, 4582,   30, 0x0a,
    7859,  216,   30,   30, 0x0a,
    7897,  216,   30,   30, 0x0a,
    7929, 3406,   30,   30, 0x0a,
    7983,  216,   30,   30, 0x0a,
    8037, 8014,   30,   30, 0x0a,
    8066,  216,  621,   30, 0x0a,
    8091,  216,  621,   30, 0x0a,
    8136, 8113,   30,   30, 0x0a,
    8186,  216, 8170,   30, 0x0a,
    8208,  216,  496,   30, 0x0a,
    8242, 1433,  211,   30, 0x0a,
    8308, 8277,  211,   30, 0x0a,
    8364,  216, 4582,   30, 0x0a,
    8389,  216, 1607,   30, 0x0a,
    8448, 8420,   30,   30, 0x0a,
    8490, 7322,   30,   30, 0x2a,
    8545, 8525,   30,   30, 0x0a,
    8606, 8581,   30,   30, 0x0a,
    8648, 8581,   30,   30, 0x0a,
    8715, 8690,   30,   30, 0x0a,
    8772, 8581,   30,   30, 0x0a,
    8839, 8815,   30,   30, 0x0a,
    8899, 8870,   30,   30, 0x0a,
    8982, 8950,   30,   30, 0x0a,
    9042, 1215,   30,   30, 0x2a,
    9120, 9096,   30,   30, 0x0a,
    9181, 9154,   30,   30, 0x0a,
    9218, 8581,   30,   30, 0x0a,
    9285, 9250,   30,   30, 0x0a,
    9327, 8581,   30,   30, 0x0a,
    9400, 9370,   30,   30, 0x0a,
    9483, 9461,   30,   30, 0x2a,
    9562, 9539,   30,   30, 0x0a,
    9649, 9620,   30,   30, 0x0a,
    9690,  216,   30,   30, 0x2a,
    9715, 3874,   30,   30, 0x0a,
    9784, 9760,   30,   30, 0x0a,
    9858, 9835,   30,   30, 0x0a,
    9903, 8581,   30,   30, 0x0a,
    9969, 9946,   30,   30, 0x0a,
    10051, 10026,   30,   30, 0x0a,
    10115, 10084,   30,   30, 0x0a,
    10177, 4052,   30,   30, 0x0a,
    10267, 10246,   30,   30, 0x0a,
    10298, 5230,   30,   30, 0x0a,
    10333, 8014,   30,   30, 0x0a,
    10390, 10367,   30,   30, 0x0a,
    10447, 10421,   30,   30, 0x0a,
    10505, 10480,   30,   30, 0x0a,
    10572, 10540,   30,   30, 0x0a,
    10641, 10617,   30,   30, 0x2a,
    10705, 10681,   30,   30, 0x0a,
    10776, 10753,   30,   30, 0x0a,
    10861, 10828,   30,   30, 0x0a,
    10948, 10923,   30,   30, 0x0a,
    10999, 10980,   30,   30, 0x0a,
    11045, 11026,   30,   30, 0x0a,
    11091, 11072,   30,   30, 0x0a,
    11123,  216,  833,   30, 0x0a,
    11168, 11145,   30,   30, 0x0a,
    11202,  216,   30,   30, 0x0a,
    11248, 11223,   30,   30, 0x0a,
    11324, 11297,  211,   30, 0x0a,
    11362,  216, 7747,   30, 0x0a,
    11403,  216, 11395,   30, 0x0a,
    11427,  216,   31,   30, 0x0a,
    11456,  216, 7793,   30, 0x0a,
    11487,  216, 1607,   30, 0x0a,
    11513,  216, 4582,   30, 0x0a,
    11577,  216, 11550,   30, 0x0a,
    11609, 7322,   30,   30, 0x0a,
    11651,  216, 11647,   30, 0x0a,
    11672,  216,   30,   30, 0x0a,
    11703,  216,   30,   30, 0x0a,
    11731,  216,   30,   30, 0x0a,
    11759, 2117,   30,   30, 0x0a,
    11789,  216,   30,   30, 0x2a,
    11846, 11812,   30,   30, 0x0a,
    11893,  216,   30,   30, 0x0a,
    11926, 1433,   30,   30, 0x0a,
    11979,  216, 7793,   30, 0x0a,
    12002,  216,  621,   30, 0x0a,
    12020,  216,  621,   30, 0x0a,
    12038,  216,  621,   30, 0x0a,
    12061,   30, 11395,   30, 0x0a,

 // enums: name, flags, count, data
    12089, 0x0,    3, 1222,
    12099, 0x0,    1, 1228,
    12109, 0x0,   34, 1230,
    12128, 0x0,   19, 1298,
    12145, 0x1,   19, 1336,
    12163, 0x0,    3, 1374,
    12177, 0x0,    2, 1380,

 // enum data: key, value
    12184, uint(PythonQtWrapper_QGraphicsItem::NoCache),
    12192, uint(PythonQtWrapper_QGraphicsItem::ItemCoordinateCache),
    12212, uint(PythonQtWrapper_QGraphicsItem::DeviceCoordinateCache),
    12234, uint(PythonQtWrapper_QGraphicsItem::UserExtension),
    12248, uint(PythonQtWrapper_QGraphicsItem::ItemPositionChange),
    12267, uint(PythonQtWrapper_QGraphicsItem::ItemMatrixChange),
    12284, uint(PythonQtWrapper_QGraphicsItem::ItemVisibleChange),
    12302, uint(PythonQtWrapper_QGraphicsItem::ItemEnabledChange),
    12320, uint(PythonQtWrapper_QGraphicsItem::ItemSelectedChange),
    12339, uint(PythonQtWrapper_QGraphicsItem::ItemParentChange),
    12356, uint(PythonQtWrapper_QGraphicsItem::ItemChildAddedChange),
    12377, uint(PythonQtWrapper_QGraphicsItem::ItemChildRemovedChange),
    12400, uint(PythonQtWrapper_QGraphicsItem::ItemTransformChange),
    12420, uint(PythonQtWrapper_QGraphicsItem::ItemPositionHasChanged),
    12443, uint(PythonQtWrapper_QGraphicsItem::ItemTransformHasChanged),
    12467, uint(PythonQtWrapper_QGraphicsItem::ItemSceneChange),
    12483, uint(PythonQtWrapper_QGraphicsItem::ItemVisibleHasChanged),
    12505, uint(PythonQtWrapper_QGraphicsItem::ItemEnabledHasChanged),
    12527, uint(PythonQtWrapper_QGraphicsItem::ItemSelectedHasChanged),
    12550, uint(PythonQtWrapper_QGraphicsItem::ItemParentHasChanged),
    12571, uint(PythonQtWrapper_QGraphicsItem::ItemSceneHasChanged),
    12591, uint(PythonQtWrapper_QGraphicsItem::ItemCursorChange),
    12608, uint(PythonQtWrapper_QGraphicsItem::ItemCursorHasChanged),
    12629, uint(PythonQtWrapper_QGraphicsItem::ItemToolTipChange),
    12647, uint(PythonQtWrapper_QGraphicsItem::ItemToolTipHasChanged),
    12669, uint(PythonQtWrapper_QGraphicsItem::ItemFlagsChange),
    12685, uint(PythonQtWrapper_QGraphicsItem::ItemFlagsHaveChanged),
    12706, uint(PythonQtWrapper_QGraphicsItem::ItemZValueChange),
    12723, uint(PythonQtWrapper_QGraphicsItem::ItemZValueHasChanged),
    12744, uint(PythonQtWrapper_QGraphicsItem::ItemOpacityChange),
    12762, uint(PythonQtWrapper_QGraphicsItem::ItemOpacityHasChanged),
    12784, uint(PythonQtWrapper_QGraphicsItem::ItemScenePositionHasChanged),
    12812, uint(PythonQtWrapper_QGraphicsItem::ItemRotationChange),
    12831, uint(PythonQtWrapper_QGraphicsItem::ItemRotationHasChanged),
    12854, uint(PythonQtWrapper_QGraphicsItem::ItemScaleChange),
    12870, uint(PythonQtWrapper_QGraphicsItem::ItemScaleHasChanged),
    12890, uint(PythonQtWrapper_QGraphicsItem::ItemTransformOriginPointChange),
    12921, uint(PythonQtWrapper_QGraphicsItem::ItemTransformOriginPointHasChanged),
    12956, uint(PythonQtWrapper_QGraphicsItem::ItemIsMovable),
    12970, uint(PythonQtWrapper_QGraphicsItem::ItemIsSelectable),
    12987, uint(PythonQtWrapper_QGraphicsItem::ItemIsFocusable),
    13003, uint(PythonQtWrapper_QGraphicsItem::ItemClipsToShape),
    13020, uint(PythonQtWrapper_QGraphicsItem::ItemClipsChildrenToShape),
    13045, uint(PythonQtWrapper_QGraphicsItem::ItemIgnoresTransformations),
    13072, uint(PythonQtWrapper_QGraphicsItem::ItemIgnoresParentOpacity),
    13097, uint(PythonQtWrapper_QGraphicsItem::ItemDoesntPropagateOpacityToChildren),
    13134, uint(PythonQtWrapper_QGraphicsItem::ItemStacksBehindParent),
    13157, uint(PythonQtWrapper_QGraphicsItem::ItemUsesExtendedStyleOption),
    13185, uint(PythonQtWrapper_QGraphicsItem::ItemHasNoContents),
    13203, uint(PythonQtWrapper_QGraphicsItem::ItemSendsGeometryChanges),
    13228, uint(PythonQtWrapper_QGraphicsItem::ItemAcceptsInputMethod),
    13251, uint(PythonQtWrapper_QGraphicsItem::ItemNegativeZStacksBehindParent),
    13283, uint(PythonQtWrapper_QGraphicsItem::ItemIsPanel),
    13295, uint(PythonQtWrapper_QGraphicsItem::ItemIsFocusScope),
    13312, uint(PythonQtWrapper_QGraphicsItem::ItemSendsScenePositionChanges),
    13342, uint(PythonQtWrapper_QGraphicsItem::ItemStopsClickFocusPropagation),
    13373, uint(PythonQtWrapper_QGraphicsItem::ItemStopsFocusHandling),
    12956, uint(PythonQtWrapper_QGraphicsItem::ItemIsMovable),
    12970, uint(PythonQtWrapper_QGraphicsItem::ItemIsSelectable),
    12987, uint(PythonQtWrapper_QGraphicsItem::ItemIsFocusable),
    13003, uint(PythonQtWrapper_QGraphicsItem::ItemClipsToShape),
    13020, uint(PythonQtWrapper_QGraphicsItem::ItemClipsChildrenToShape),
    13045, uint(PythonQtWrapper_QGraphicsItem::ItemIgnoresTransformations),
    13072, uint(PythonQtWrapper_QGraphicsItem::ItemIgnoresParentOpacity),
    13097, uint(PythonQtWrapper_QGraphicsItem::ItemDoesntPropagateOpacityToChildren),
    13134, uint(PythonQtWrapper_QGraphicsItem::ItemStacksBehindParent),
    13157, uint(PythonQtWrapper_QGraphicsItem::ItemUsesExtendedStyleOption),
    13185, uint(PythonQtWrapper_QGraphicsItem::ItemHasNoContents),
    13203, uint(PythonQtWrapper_QGraphicsItem::ItemSendsGeometryChanges),
    13228, uint(PythonQtWrapper_QGraphicsItem::ItemAcceptsInputMethod),
    13251, uint(PythonQtWrapper_QGraphicsItem::ItemNegativeZStacksBehindParent),
    13283, uint(PythonQtWrapper_QGraphicsItem::ItemIsPanel),
    13295, uint(PythonQtWrapper_QGraphicsItem::ItemIsFocusScope),
    13312, uint(PythonQtWrapper_QGraphicsItem::ItemSendsScenePositionChanges),
    13342, uint(PythonQtWrapper_QGraphicsItem::ItemStopsClickFocusPropagation),
    13373, uint(PythonQtWrapper_QGraphicsItem::ItemStopsFocusHandling),
    13396, uint(PythonQtWrapper_QGraphicsItem::NonModal),
    13405, uint(PythonQtWrapper_QGraphicsItem::PanelModal),
    13416, uint(PythonQtWrapper_QGraphicsItem::SceneModal),
    13427, uint(PythonQtWrapper_QGraphicsItem::Type),
    13432, uint(PythonQtWrapper_QGraphicsItem::UserType),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsItem[] = {
    "PythonQtWrapper_QGraphicsItem\0\0"
    "QGraphicsItem*\0parent,scene\0"
    "new_QGraphicsItem(QGraphicsItem*,QGraphicsScene*)\0"
    "parent\0new_QGraphicsItem(QGraphicsItem*)\0"
    "new_QGraphicsItem()\0obj\0"
    "delete_QGraphicsItem(QGraphicsItem*)\0"
    "bool\0theWrappedObject\0acceptDrops(QGraphicsItem*)\0"
    "acceptHoverEvents(QGraphicsItem*)\0"
    "acceptTouchEvents(QGraphicsItem*)\0"
    "Qt::MouseButtons\0acceptedMouseButtons(QGraphicsItem*)\0"
    "acceptsHoverEvents(QGraphicsItem*)\0"
    "addToIndex(QGraphicsItem*)\0"
    "theWrappedObject,phase\0"
    "advance(QGraphicsItem*,int)\0QRectF\0"
    "boundingRect(QGraphicsItem*)\0QRegion\0"
    "theWrappedObject,itemToDeviceTransform\0"
    "boundingRegion(QGraphicsItem*,QTransform)\0"
    "qreal\0boundingRegionGranularity(QGraphicsItem*)\0"
    "QGraphicsItem::CacheMode\0"
    "cacheMode(QGraphicsItem*)\0"
    "QList<QGraphicsItem*>\0childItems(QGraphicsItem*)\0"
    "childrenBoundingRect(QGraphicsItem*)\0"
    "clearFocus(QGraphicsItem*)\0QPainterPath\0"
    "clipPath(QGraphicsItem*)\0"
    "theWrappedObject,other,mode\0"
    "collidesWithItem(QGraphicsItem*,const QGraphicsItem*,Qt::ItemSelection"
    "Mode)\0"
    "theWrappedObject,other\0"
    "collidesWithItem(QGraphicsItem*,const QGraphicsItem*)\0"
    "theWrappedObject,path,mode\0"
    "collidesWithPath(QGraphicsItem*,QPainterPath,Qt::ItemSelectionMode)\0"
    "theWrappedObject,path\0"
    "collidesWithPath(QGraphicsItem*,QPainterPath)\0"
    "theWrappedObject,mode\0"
    "collidingItems(QGraphicsItem*,Qt::ItemSelectionMode)\0"
    "collidingItems(QGraphicsItem*)\0"
    "commonAncestorItem(QGraphicsItem*,const QGraphicsItem*)\0"
    "theWrappedObject,point\0"
    "contains(QGraphicsItem*,QPointF)\0"
    "theWrappedObject,event\0"
    "contextMenuEvent(QGraphicsItem*,QGraphicsSceneContextMenuEvent*)\0"
    "QCursor\0cursor(QGraphicsItem*)\0QVariant\0"
    "theWrappedObject,key\0data(QGraphicsItem*,int)\0"
    "QTransform\0theWrappedObject,viewportTransform\0"
    "deviceTransform(QGraphicsItem*,QTransform)\0"
    "dragEnterEvent(QGraphicsItem*,QGraphicsSceneDragDropEvent*)\0"
    "dragLeaveEvent(QGraphicsItem*,QGraphicsSceneDragDropEvent*)\0"
    "dragMoveEvent(QGraphicsItem*,QGraphicsSceneDragDropEvent*)\0"
    "dropEvent(QGraphicsItem*,QGraphicsSceneDragDropEvent*)\0"
    "effectiveOpacity(QGraphicsItem*)\0"
    "theWrappedObject,rect,xmargin,ymargin\0"
    "ensureVisible(QGraphicsItem*,QRectF,int,int)\0"
    "theWrappedObject,rect,xmargin\0"
    "ensureVisible(QGraphicsItem*,QRectF,int)\0"
    "theWrappedObject,rect\0"
    "ensureVisible(QGraphicsItem*,QRectF)\0"
    "ensureVisible(QGraphicsItem*)\0"
    "theWrappedObject,x,y,w,h,xmargin,ymargin\0"
    "ensureVisible(QGraphicsItem*,qreal,qreal,qreal,qreal,int,int)\0"
    "theWrappedObject,x,y,w,h,xmargin\0"
    "ensureVisible(QGraphicsItem*,qreal,qreal,qreal,qreal,int)\0"
    "theWrappedObject,x,y,w,h\0"
    "ensureVisible(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "theWrappedObject,variant\0"
    "extension(QGraphicsItem*,QVariant)\0"
    "filtersChildEvents(QGraphicsItem*)\0"
    "QGraphicsItem::GraphicsItemFlags\0"
    "flags(QGraphicsItem*)\0"
    "focusInEvent(QGraphicsItem*,QFocusEvent*)\0"
    "focusItem(QGraphicsItem*)\0"
    "focusOutEvent(QGraphicsItem*,QFocusEvent*)\0"
    "focusProxy(QGraphicsItem*)\0"
    "focusScopeItem(QGraphicsItem*)\0"
    "grabKeyboard(QGraphicsItem*)\0"
    "grabMouse(QGraphicsItem*)\0QGraphicsEffect*\0"
    "graphicsEffect(QGraphicsItem*)\0"
    "QGraphicsItemGroup*\0group(QGraphicsItem*)\0"
    "handlesChildEvents(QGraphicsItem*)\0"
    "hasCursor(QGraphicsItem*)\0"
    "hasFocus(QGraphicsItem*)\0hide(QGraphicsItem*)\0"
    "hoverEnterEvent(QGraphicsItem*,QGraphicsSceneHoverEvent*)\0"
    "hoverLeaveEvent(QGraphicsItem*,QGraphicsSceneHoverEvent*)\0"
    "hoverMoveEvent(QGraphicsItem*,QGraphicsSceneHoverEvent*)\0"
    "inputMethodEvent(QGraphicsItem*,QInputMethodEvent*)\0"
    "Qt::InputMethodHints\0"
    "inputMethodHints(QGraphicsItem*)\0"
    "theWrappedObject,query\0"
    "inputMethodQuery(QGraphicsItem*,Qt::InputMethodQuery)\0"
    "theWrappedObject,filterItem\0"
    "installSceneEventFilter(QGraphicsItem*,QGraphicsItem*)\0"
    "isActive(QGraphicsItem*)\0"
    "theWrappedObject,child\0"
    "isAncestorOf(QGraphicsItem*,const QGraphicsItem*)\0"
    "theWrappedObject,blockingPanel\0"
    "isBlockedByModalPanel(QGraphicsItem*,QGraphicsItem**)\0"
    "isBlockedByModalPanel(QGraphicsItem*)\0"
    "isClipped(QGraphicsItem*)\0"
    "isEnabled(QGraphicsItem*)\0"
    "isObscured(QGraphicsItem*)\0"
    "isObscured(QGraphicsItem*,QRectF)\0"
    "isObscured(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "theWrappedObject,item\0"
    "isObscuredBy(QGraphicsItem*,const QGraphicsItem*)\0"
    "isPanel(QGraphicsItem*)\0"
    "isSelected(QGraphicsItem*)\0"
    "isUnderMouse(QGraphicsItem*)\0"
    "isVisible(QGraphicsItem*)\0"
    "theWrappedObject,parent\0"
    "isVisibleTo(QGraphicsItem*,const QGraphicsItem*)\0"
    "isWidget(QGraphicsItem*)\0"
    "isWindow(QGraphicsItem*)\0"
    "theWrappedObject,change,value\0"
    "itemChange(QGraphicsItem*,QGraphicsItem::GraphicsItemChange,QVariant)\0"
    "theWrappedObject,other,ok\0"
    "itemTransform(QGraphicsItem*,const QGraphicsItem*,bool*)\0"
    "itemTransform(QGraphicsItem*,const QGraphicsItem*)\0"
    "keyPressEvent(QGraphicsItem*,QKeyEvent*)\0"
    "keyReleaseEvent(QGraphicsItem*,QKeyEvent*)\0"
    "theWrappedObject,item,path\0"
    "mapFromItem(QGraphicsItem*,const QGraphicsItem*,QPainterPath)\0"
    "QPointF\0theWrappedObject,item,point\0"
    "mapFromItem(QGraphicsItem*,const QGraphicsItem*,QPointF)\0"
    "QPolygonF\0theWrappedObject,item,polygon\0"
    "mapFromItem(QGraphicsItem*,const QGraphicsItem*,QPolygonF)\0"
    "theWrappedObject,item,rect\0"
    "mapFromItem(QGraphicsItem*,const QGraphicsItem*,QRectF)\0"
    "theWrappedObject,item,x,y\0"
    "mapFromItem(QGraphicsItem*,const QGraphicsItem*,qreal,qreal)\0"
    "theWrappedObject,item,x,y,w,h\0"
    "mapFromItem(QGraphicsItem*,const QGraphicsItem*,qreal,qreal,qreal,qrea"
    "l)\0"
    "mapFromParent(QGraphicsItem*,QPainterPath)\0"
    "mapFromParent(QGraphicsItem*,QPointF)\0"
    "theWrappedObject,polygon\0"
    "mapFromParent(QGraphicsItem*,QPolygonF)\0"
    "mapFromParent(QGraphicsItem*,QRectF)\0"
    "theWrappedObject,x,y\0"
    "mapFromParent(QGraphicsItem*,qreal,qreal)\0"
    "mapFromParent(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mapFromScene(QGraphicsItem*,QPainterPath)\0"
    "mapFromScene(QGraphicsItem*,QPointF)\0"
    "mapFromScene(QGraphicsItem*,QPolygonF)\0"
    "mapFromScene(QGraphicsItem*,QRectF)\0"
    "mapFromScene(QGraphicsItem*,qreal,qreal)\0"
    "mapFromScene(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mapRectFromItem(QGraphicsItem*,const QGraphicsItem*,QRectF)\0"
    "mapRectFromItem(QGraphicsItem*,const QGraphicsItem*,qreal,qreal,qreal,"
    "qreal)\0"
    "mapRectFromParent(QGraphicsItem*,QRectF)\0"
    "mapRectFromParent(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mapRectFromScene(QGraphicsItem*,QRectF)\0"
    "mapRectFromScene(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mapRectToItem(QGraphicsItem*,const QGraphicsItem*,QRectF)\0"
    "mapRectToItem(QGraphicsItem*,const QGraphicsItem*,qreal,qreal,qreal,qr"
    "eal)\0"
    "mapRectToParent(QGraphicsItem*,QRectF)\0"
    "mapRectToParent(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mapRectToScene(QGraphicsItem*,QRectF)\0"
    "mapRectToScene(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mapToItem(QGraphicsItem*,const QGraphicsItem*,QPainterPath)\0"
    "mapToItem(QGraphicsItem*,const QGraphicsItem*,QPointF)\0"
    "mapToItem(QGraphicsItem*,const QGraphicsItem*,QPolygonF)\0"
    "mapToItem(QGraphicsItem*,const QGraphicsItem*,QRectF)\0"
    "mapToItem(QGraphicsItem*,const QGraphicsItem*,qreal,qreal)\0"
    "mapToItem(QGraphicsItem*,const QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mapToParent(QGraphicsItem*,QPainterPath)\0"
    "mapToParent(QGraphicsItem*,QPointF)\0"
    "mapToParent(QGraphicsItem*,QPolygonF)\0"
    "mapToParent(QGraphicsItem*,QRectF)\0"
    "mapToParent(QGraphicsItem*,qreal,qreal)\0"
    "mapToParent(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mapToScene(QGraphicsItem*,QPainterPath)\0"
    "mapToScene(QGraphicsItem*,QPointF)\0"
    "mapToScene(QGraphicsItem*,QPolygonF)\0"
    "mapToScene(QGraphicsItem*,QRectF)\0"
    "mapToScene(QGraphicsItem*,qreal,qreal)\0"
    "mapToScene(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "mouseDoubleClickEvent(QGraphicsItem*,QGraphicsSceneMouseEvent*)\0"
    "mouseMoveEvent(QGraphicsItem*,QGraphicsSceneMouseEvent*)\0"
    "mousePressEvent(QGraphicsItem*,QGraphicsSceneMouseEvent*)\0"
    "mouseReleaseEvent(QGraphicsItem*,QGraphicsSceneMouseEvent*)\0"
    "theWrappedObject,dx,dy\0"
    "moveBy(QGraphicsItem*,qreal,qreal)\0"
    "opacity(QGraphicsItem*)\0"
    "opaqueArea(QGraphicsItem*)\0"
    "theWrappedObject,painter,option,widget\0"
    "paint(QGraphicsItem*,QPainter*,const QStyleOptionGraphicsItem*,QWidget"
    "*)\0"
    "theWrappedObject,painter,option\0"
    "paint(QGraphicsItem*,QPainter*,const QStyleOptionGraphicsItem*)\0"
    "panel(QGraphicsItem*)\0"
    "QGraphicsItem::PanelModality\0"
    "panelModality(QGraphicsItem*)\0"
    "parentItem(QGraphicsItem*)\0QGraphicsObject*\0"
    "parentObject(QGraphicsItem*)\0"
    "QGraphicsWidget*\0parentWidget(QGraphicsItem*)\0"
    "pos(QGraphicsItem*)\0"
    "prepareGeometryChange(QGraphicsItem*)\0"
    "removeFromIndex(QGraphicsItem*)\0"
    "removeSceneEventFilter(QGraphicsItem*,QGraphicsItem*)\0"
    "resetTransform(QGraphicsItem*)\0"
    "theWrappedObject,angle\0"
    "rotate(QGraphicsItem*,qreal)\0"
    "rotation(QGraphicsItem*)\0scale(QGraphicsItem*)\0"
    "theWrappedObject,sx,sy\0"
    "scale(QGraphicsItem*,qreal,qreal)\0"
    "QGraphicsScene*\0scene(QGraphicsItem*)\0"
    "sceneBoundingRect(QGraphicsItem*)\0"
    "sceneEvent(QGraphicsItem*,QEvent*)\0"
    "theWrappedObject,watched,event\0"
    "sceneEventFilter(QGraphicsItem*,QGraphicsItem*,QEvent*)\0"
    "scenePos(QGraphicsItem*)\0"
    "sceneTransform(QGraphicsItem*)\0"
    "theWrappedObject,dx,dy,rect\0"
    "scroll(QGraphicsItem*,qreal,qreal,QRectF)\0"
    "scroll(QGraphicsItem*,qreal,qreal)\0"
    "theWrappedObject,on\0"
    "setAcceptDrops(QGraphicsItem*,bool)\0"
    "theWrappedObject,enabled\0"
    "setAcceptHoverEvents(QGraphicsItem*,bool)\0"
    "setAcceptTouchEvents(QGraphicsItem*,bool)\0"
    "theWrappedObject,buttons\0"
    "setAcceptedMouseButtons(QGraphicsItem*,Qt::MouseButtons)\0"
    "setAcceptsHoverEvents(QGraphicsItem*,bool)\0"
    "theWrappedObject,active\0"
    "setActive(QGraphicsItem*,bool)\0"
    "theWrappedObject,granularity\0"
    "setBoundingRegionGranularity(QGraphicsItem*,qreal)\0"
    "theWrappedObject,mode,cacheSize\0"
    "setCacheMode(QGraphicsItem*,QGraphicsItem::CacheMode,QSize)\0"
    "setCacheMode(QGraphicsItem*,QGraphicsItem::CacheMode)\0"
    "theWrappedObject,cursor\0"
    "setCursor(QGraphicsItem*,QCursor)\0"
    "theWrappedObject,key,value\0"
    "setData(QGraphicsItem*,int,QVariant)\0"
    "setEnabled(QGraphicsItem*,bool)\0"
    "theWrappedObject,extension,variant\0"
    "setExtension(QGraphicsItem*,int,QVariant)\0"
    "setFiltersChildEvents(QGraphicsItem*,bool)\0"
    "theWrappedObject,flag,enabled\0"
    "setFlag(QGraphicsItem*,QGraphicsItem::GraphicsItemFlag,bool)\0"
    "theWrappedObject,flag\0"
    "setFlag(QGraphicsItem*,QGraphicsItem::GraphicsItemFlag)\0"
    "theWrappedObject,flags\0"
    "setFlags(QGraphicsItem*,QGraphicsItem::GraphicsItemFlags)\0"
    "theWrappedObject,focusReason\0"
    "setFocus(QGraphicsItem*,Qt::FocusReason)\0"
    "setFocus(QGraphicsItem*)\0"
    "setFocusProxy(QGraphicsItem*,QGraphicsItem*)\0"
    "theWrappedObject,effect\0"
    "setGraphicsEffect(QGraphicsItem*,QGraphicsEffect*)\0"
    "theWrappedObject,group\0"
    "setGroup(QGraphicsItem*,QGraphicsItemGroup*)\0"
    "setHandlesChildEvents(QGraphicsItem*,bool)\0"
    "theWrappedObject,hints\0"
    "setInputMethodHints(QGraphicsItem*,Qt::InputMethodHints)\0"
    "theWrappedObject,opacity\0"
    "setOpacity(QGraphicsItem*,qreal)\0"
    "theWrappedObject,panelModality\0"
    "setPanelModality(QGraphicsItem*,QGraphicsItem::PanelModality)\0"
    "setParentItem(QGraphicsItem*,PythonQtNewOwnerOfThis<QGraphicsItem*>)\0"
    "theWrappedObject,pos\0"
    "setPos(QGraphicsItem*,QPointF)\0"
    "setPos(QGraphicsItem*,qreal,qreal)\0"
    "setRotation(QGraphicsItem*,qreal)\0"
    "theWrappedObject,scale\0"
    "setScale(QGraphicsItem*,qreal)\0"
    "theWrappedObject,selected\0"
    "setSelected(QGraphicsItem*,bool)\0"
    "theWrappedObject,toolTip\0"
    "setToolTip(QGraphicsItem*,QString)\0"
    "theWrappedObject,matrix,combine\0"
    "setTransform(QGraphicsItem*,QTransform,bool)\0"
    "theWrappedObject,matrix\0"
    "setTransform(QGraphicsItem*,QTransform)\0"
    "theWrappedObject,origin\0"
    "setTransformOriginPoint(QGraphicsItem*,QPointF)\0"
    "theWrappedObject,ax,ay\0"
    "setTransformOriginPoint(QGraphicsItem*,qreal,qreal)\0"
    "theWrappedObject,transformations\0"
    "setTransformations(QGraphicsItem*,QList<QGraphicsTransform*>)\0"
    "theWrappedObject,visible\0"
    "setVisible(QGraphicsItem*,bool)\0"
    "theWrappedObject,x\0setX(QGraphicsItem*,qreal)\0"
    "theWrappedObject,y\0setY(QGraphicsItem*,qreal)\0"
    "theWrappedObject,z\0setZValue(QGraphicsItem*,qreal)\0"
    "shape(QGraphicsItem*)\0theWrappedObject,sh,sv\0"
    "shear(QGraphicsItem*,qreal,qreal)\0"
    "show(QGraphicsItem*)\0theWrappedObject,sibling\0"
    "stackBefore(QGraphicsItem*,const QGraphicsItem*)\0"
    "theWrappedObject,extension\0"
    "supportsExtension(QGraphicsItem*,int)\0"
    "toGraphicsObject(QGraphicsItem*)\0"
    "QString\0toolTip(QGraphicsItem*)\0"
    "topLevelItem(QGraphicsItem*)\0"
    "topLevelWidget(QGraphicsItem*)\0"
    "transform(QGraphicsItem*)\0"
    "transformOriginPoint(QGraphicsItem*)\0"
    "QList<QGraphicsTransform*>\0"
    "transformations(QGraphicsItem*)\0"
    "translate(QGraphicsItem*,qreal,qreal)\0"
    "int\0type(QGraphicsItem*)\0"
    "ungrabKeyboard(QGraphicsItem*)\0"
    "ungrabMouse(QGraphicsItem*)\0"
    "unsetCursor(QGraphicsItem*)\0"
    "update(QGraphicsItem*,QRectF)\0"
    "update(QGraphicsItem*)\0"
    "theWrappedObject,x,y,width,height\0"
    "update(QGraphicsItem*,qreal,qreal,qreal,qreal)\0"
    "updateMicroFocus(QGraphicsItem*)\0"
    "wheelEvent(QGraphicsItem*,QGraphicsSceneWheelEvent*)\0"
    "window(QGraphicsItem*)\0x(QGraphicsItem*)\0"
    "y(QGraphicsItem*)\0zValue(QGraphicsItem*)\0"
    "py_toString(QGraphicsItem*)\0CacheMode\0"
    "Extension\0GraphicsItemChange\0"
    "GraphicsItemFlag\0GraphicsItemFlags\0"
    "PanelModality\0enum_1\0NoCache\0"
    "ItemCoordinateCache\0DeviceCoordinateCache\0"
    "UserExtension\0ItemPositionChange\0"
    "ItemMatrixChange\0ItemVisibleChange\0"
    "ItemEnabledChange\0ItemSelectedChange\0"
    "ItemParentChange\0ItemChildAddedChange\0"
    "ItemChildRemovedChange\0ItemTransformChange\0"
    "ItemPositionHasChanged\0ItemTransformHasChanged\0"
    "ItemSceneChange\0ItemVisibleHasChanged\0"
    "ItemEnabledHasChanged\0ItemSelectedHasChanged\0"
    "ItemParentHasChanged\0ItemSceneHasChanged\0"
    "ItemCursorChange\0ItemCursorHasChanged\0"
    "ItemToolTipChange\0ItemToolTipHasChanged\0"
    "ItemFlagsChange\0ItemFlagsHaveChanged\0"
    "ItemZValueChange\0ItemZValueHasChanged\0"
    "ItemOpacityChange\0ItemOpacityHasChanged\0"
    "ItemScenePositionHasChanged\0"
    "ItemRotationChange\0ItemRotationHasChanged\0"
    "ItemScaleChange\0ItemScaleHasChanged\0"
    "ItemTransformOriginPointChange\0"
    "ItemTransformOriginPointHasChanged\0"
    "ItemIsMovable\0ItemIsSelectable\0"
    "ItemIsFocusable\0ItemClipsToShape\0"
    "ItemClipsChildrenToShape\0"
    "ItemIgnoresTransformations\0"
    "ItemIgnoresParentOpacity\0"
    "ItemDoesntPropagateOpacityToChildren\0"
    "ItemStacksBehindParent\0"
    "ItemUsesExtendedStyleOption\0"
    "ItemHasNoContents\0ItemSendsGeometryChanges\0"
    "ItemAcceptsInputMethod\0"
    "ItemNegativeZStacksBehindParent\0"
    "ItemIsPanel\0ItemIsFocusScope\0"
    "ItemSendsScenePositionChanges\0"
    "ItemStopsClickFocusPropagation\0"
    "ItemStopsFocusHandling\0NonModal\0"
    "PanelModal\0SceneModal\0Type\0UserType\0"
};

void PythonQtWrapper_QGraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsItem *_t = static_cast<PythonQtWrapper_QGraphicsItem *>(_o);
        switch (_id) {
        case 0: { QGraphicsItem* _r = _t->new_QGraphicsItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsScene*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsItem* _r = _t->new_QGraphicsItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 2: { QGraphicsItem* _r = _t->new_QGraphicsItem();
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QGraphicsItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->acceptDrops((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->acceptHoverEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->acceptTouchEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { Qt::MouseButtons _r = _t->acceptedMouseButtons((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::MouseButtons*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->acceptsHoverEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->addToIndex((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 10: _t->advance((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: { QRectF _r = _t->boundingRect((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 12: { QRegion _r = _t->boundingRegion((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRegion*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->boundingRegionGranularity((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: { QGraphicsItem::CacheMode _r = _t->cacheMode((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem::CacheMode*>(_a[0]) = _r; }  break;
        case 15: { QList<QGraphicsItem*> _r = _t->childItems((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGraphicsItem*>*>(_a[0]) = _r; }  break;
        case 16: { QRectF _r = _t->childrenBoundingRect((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 17: _t->clearFocus((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 18: { QPainterPath _r = _t->clipPath((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->collidesWithItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< Qt::ItemSelectionMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->collidesWithItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->collidesWithPath((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPainterPath(*)>(_a[2])),(*reinterpret_cast< Qt::ItemSelectionMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->collidesWithPath((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPainterPath(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { QList<QGraphicsItem*> _r = _t->collidingItems((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< Qt::ItemSelectionMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QGraphicsItem*>*>(_a[0]) = _r; }  break;
        case 24: { QList<QGraphicsItem*> _r = _t->collidingItems((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGraphicsItem*>*>(_a[0]) = _r; }  break;
        case 25: { QGraphicsItem* _r = _t->commonAncestorItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->contains((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->contextMenuEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneContextMenuEvent*(*)>(_a[2]))); break;
        case 28: { QCursor _r = _t->cursor((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QCursor*>(_a[0]) = _r; }  break;
        case 29: { QVariant _r = _t->data((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 30: { QTransform _r = _t->deviceTransform((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 31: _t->dragEnterEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneDragDropEvent*(*)>(_a[2]))); break;
        case 32: _t->dragLeaveEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneDragDropEvent*(*)>(_a[2]))); break;
        case 33: _t->dragMoveEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneDragDropEvent*(*)>(_a[2]))); break;
        case 34: _t->dropEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneDragDropEvent*(*)>(_a[2]))); break;
        case 35: { qreal _r = _t->effectiveOpacity((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 36: _t->ensureVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 37: _t->ensureVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 38: _t->ensureVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 39: _t->ensureVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 40: _t->ensureVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 41: _t->ensureVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 42: _t->ensureVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 43: { QVariant _r = _t->extension((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->filtersChildEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { QGraphicsItem::GraphicsItemFlags _r = _t->flags((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem::GraphicsItemFlags*>(_a[0]) = _r; }  break;
        case 46: _t->focusInEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 47: { QGraphicsItem* _r = _t->focusItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 48: _t->focusOutEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 49: { QGraphicsItem* _r = _t->focusProxy((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 50: { QGraphicsItem* _r = _t->focusScopeItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 51: _t->grabKeyboard((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 52: _t->grabMouse((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 53: { QGraphicsEffect* _r = _t->graphicsEffect((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsEffect**>(_a[0]) = _r; }  break;
        case 54: { QGraphicsItemGroup* _r = _t->group((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItemGroup**>(_a[0]) = _r; }  break;
        case 55: { bool _r = _t->handlesChildEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 56: { bool _r = _t->hasCursor((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 57: { bool _r = _t->hasFocus((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 58: _t->hide((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 59: _t->hoverEnterEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneHoverEvent*(*)>(_a[2]))); break;
        case 60: _t->hoverLeaveEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneHoverEvent*(*)>(_a[2]))); break;
        case 61: _t->hoverMoveEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneHoverEvent*(*)>(_a[2]))); break;
        case 62: _t->inputMethodEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QInputMethodEvent*(*)>(_a[2]))); break;
        case 63: { Qt::InputMethodHints _r = _t->inputMethodHints((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::InputMethodHints*>(_a[0]) = _r; }  break;
        case 64: { QVariant _r = _t->inputMethodQuery((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< Qt::InputMethodQuery(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 65: _t->installSceneEventFilter((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2]))); break;
        case 66: { bool _r = _t->isActive((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 67: { bool _r = _t->isAncestorOf((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 68: { bool _r = _t->isBlockedByModalPanel((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem**(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 69: { bool _r = _t->isBlockedByModalPanel((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 70: { bool _r = _t->isClipped((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 71: { bool _r = _t->isEnabled((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 72: { bool _r = _t->isObscured((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 73: { bool _r = _t->isObscured((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 74: { bool _r = _t->isObscured((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 75: { bool _r = _t->isObscuredBy((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 76: { bool _r = _t->isPanel((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 77: { bool _r = _t->isSelected((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 78: { bool _r = _t->isUnderMouse((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 79: { bool _r = _t->isVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 80: { bool _r = _t->isVisibleTo((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 81: { bool _r = _t->isWidget((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 82: { bool _r = _t->isWindow((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 83: { QVariant _r = _t->itemChange((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem::GraphicsItemChange(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 84: { QTransform _r = _t->itemTransform((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 85: { QTransform _r = _t->itemTransform((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 86: _t->keyPressEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 87: _t->keyReleaseEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 88: { QPainterPath _r = _t->mapFromItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPainterPath(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 89: { QPointF _r = _t->mapFromItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 90: { QPolygonF _r = _t->mapFromItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPolygonF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 91: { QPolygonF _r = _t->mapFromItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 92: { QPointF _r = _t->mapFromItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 93: { QPolygonF _r = _t->mapFromItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 94: { QPainterPath _r = _t->mapFromParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPainterPath(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 95: { QPointF _r = _t->mapFromParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 96: { QPolygonF _r = _t->mapFromParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPolygonF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 97: { QPolygonF _r = _t->mapFromParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 98: { QPointF _r = _t->mapFromParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 99: { QPolygonF _r = _t->mapFromParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 100: { QPainterPath _r = _t->mapFromScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPainterPath(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 101: { QPointF _r = _t->mapFromScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 102: { QPolygonF _r = _t->mapFromScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPolygonF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 103: { QPolygonF _r = _t->mapFromScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 104: { QPointF _r = _t->mapFromScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 105: { QPolygonF _r = _t->mapFromScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 106: { QRectF _r = _t->mapRectFromItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 107: { QRectF _r = _t->mapRectFromItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 108: { QRectF _r = _t->mapRectFromParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 109: { QRectF _r = _t->mapRectFromParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 110: { QRectF _r = _t->mapRectFromScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 111: { QRectF _r = _t->mapRectFromScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 112: { QRectF _r = _t->mapRectToItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 113: { QRectF _r = _t->mapRectToItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 114: { QRectF _r = _t->mapRectToParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 115: { QRectF _r = _t->mapRectToParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 116: { QRectF _r = _t->mapRectToScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 117: { QRectF _r = _t->mapRectToScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 118: { QPainterPath _r = _t->mapToItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPainterPath(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 119: { QPointF _r = _t->mapToItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 120: { QPolygonF _r = _t->mapToItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPolygonF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 121: { QPolygonF _r = _t->mapToItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 122: { QPointF _r = _t->mapToItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 123: { QPolygonF _r = _t->mapToItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 124: { QPainterPath _r = _t->mapToParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPainterPath(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 125: { QPointF _r = _t->mapToParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 126: { QPolygonF _r = _t->mapToParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPolygonF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 127: { QPolygonF _r = _t->mapToParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 128: { QPointF _r = _t->mapToParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 129: { QPolygonF _r = _t->mapToParent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 130: { QPainterPath _r = _t->mapToScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPainterPath(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 131: { QPointF _r = _t->mapToScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 132: { QPolygonF _r = _t->mapToScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPolygonF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 133: { QPolygonF _r = _t->mapToScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 134: { QPointF _r = _t->mapToScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 135: { QPolygonF _r = _t->mapToScene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QPolygonF*>(_a[0]) = _r; }  break;
        case 136: _t->mouseDoubleClickEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[2]))); break;
        case 137: _t->mouseMoveEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[2]))); break;
        case 138: _t->mousePressEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[2]))); break;
        case 139: _t->mouseReleaseEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[2]))); break;
        case 140: _t->moveBy((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 141: { qreal _r = _t->opacity((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 142: { QPainterPath _r = _t->opaqueArea((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 143: _t->paint((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionGraphicsItem*(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4]))); break;
        case 144: _t->paint((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionGraphicsItem*(*)>(_a[3]))); break;
        case 145: { QGraphicsItem* _r = _t->panel((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 146: { QGraphicsItem::PanelModality _r = _t->panelModality((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem::PanelModality*>(_a[0]) = _r; }  break;
        case 147: { QGraphicsItem* _r = _t->parentItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 148: { QGraphicsObject* _r = _t->parentObject((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsObject**>(_a[0]) = _r; }  break;
        case 149: { QGraphicsWidget* _r = _t->parentWidget((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsWidget**>(_a[0]) = _r; }  break;
        case 150: { QPointF _r = _t->pos((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 151: _t->prepareGeometryChange((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 152: _t->removeFromIndex((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 153: _t->removeSceneEventFilter((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2]))); break;
        case 154: _t->resetTransform((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 155: _t->rotate((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 156: { qreal _r = _t->rotation((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 157: { qreal _r = _t->scale((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 158: _t->scale((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 159: { QGraphicsScene* _r = _t->scene((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsScene**>(_a[0]) = _r; }  break;
        case 160: { QRectF _r = _t->sceneBoundingRect((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 161: { bool _r = _t->sceneEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 162: { bool _r = _t->sceneEventFilter((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 163: { QPointF _r = _t->scenePos((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 164: { QTransform _r = _t->sceneTransform((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 165: _t->scroll((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< const QRectF(*)>(_a[4]))); break;
        case 166: _t->scroll((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 167: _t->setAcceptDrops((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 168: _t->setAcceptHoverEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 169: _t->setAcceptTouchEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 170: _t->setAcceptedMouseButtons((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[2]))); break;
        case 171: _t->setAcceptsHoverEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 172: _t->setActive((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 173: _t->setBoundingRegionGranularity((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 174: _t->setCacheMode((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem::CacheMode(*)>(_a[2])),(*reinterpret_cast< const QSize(*)>(_a[3]))); break;
        case 175: _t->setCacheMode((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem::CacheMode(*)>(_a[2]))); break;
        case 176: _t->setCursor((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QCursor(*)>(_a[2]))); break;
        case 177: _t->setData((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 178: _t->setEnabled((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 179: _t->setExtension((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 180: _t->setFiltersChildEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 181: _t->setFlag((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem::GraphicsItemFlag(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 182: _t->setFlag((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem::GraphicsItemFlag(*)>(_a[2]))); break;
        case 183: _t->setFlags((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem::GraphicsItemFlags(*)>(_a[2]))); break;
        case 184: _t->setFocus((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< Qt::FocusReason(*)>(_a[2]))); break;
        case 185: _t->setFocus((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 186: _t->setFocusProxy((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2]))); break;
        case 187: _t->setGraphicsEffect((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsEffect*(*)>(_a[2]))); break;
        case 188: _t->setGroup((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItemGroup*(*)>(_a[2]))); break;
        case 189: _t->setHandlesChildEvents((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 190: _t->setInputMethodHints((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< Qt::InputMethodHints(*)>(_a[2]))); break;
        case 191: _t->setOpacity((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 192: _t->setPanelModality((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem::PanelModality(*)>(_a[2]))); break;
        case 193: _t->setParentItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< PythonQtNewOwnerOfThis<QGraphicsItem*>(*)>(_a[2]))); break;
        case 194: _t->setPos((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 195: _t->setPos((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 196: _t->setRotation((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 197: _t->setScale((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 198: _t->setSelected((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 199: _t->setToolTip((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 200: _t->setTransform((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 201: _t->setTransform((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2]))); break;
        case 202: _t->setTransformOriginPoint((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 203: _t->setTransformOriginPoint((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 204: _t->setTransformations((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QList<QGraphicsTransform*>(*)>(_a[2]))); break;
        case 205: _t->setVisible((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 206: _t->setX((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 207: _t->setY((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 208: _t->setZValue((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 209: { QPainterPath _r = _t->shape((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 210: _t->shear((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 211: _t->show((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 212: _t->stackBefore((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2]))); break;
        case 213: { bool _r = _t->supportsExtension((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 214: { QGraphicsObject* _r = _t->toGraphicsObject((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsObject**>(_a[0]) = _r; }  break;
        case 215: { QString _r = _t->toolTip((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 216: { QGraphicsItem* _r = _t->topLevelItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 217: { QGraphicsWidget* _r = _t->topLevelWidget((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsWidget**>(_a[0]) = _r; }  break;
        case 218: { QTransform _r = _t->transform((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 219: { QPointF _r = _t->transformOriginPoint((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 220: { QList<QGraphicsTransform*> _r = _t->transformations((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGraphicsTransform*>*>(_a[0]) = _r; }  break;
        case 221: _t->translate((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 222: { int _r = _t->type((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 223: _t->ungrabKeyboard((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 224: _t->ungrabMouse((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 225: _t->unsetCursor((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 226: _t->update((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 227: _t->update((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 228: _t->update((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 229: _t->updateMicroFocus((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 230: _t->wheelEvent((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneWheelEvent*(*)>(_a[2]))); break;
        case 231: { QGraphicsWidget* _r = _t->window((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsWidget**>(_a[0]) = _r; }  break;
        case 232: { qreal _r = _t->x((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 233: { qreal _r = _t->y((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 234: { qreal _r = _t->zValue((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 235: { QString _r = _t->py_toString((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsItem,
      qt_meta_data_PythonQtWrapper_QGraphicsItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 236)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 236;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QGraphicsItemAnimation[] = {

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
      71,   64,   40,   39, 0x0a,
     108,   39,   40,   39, 0x2a,
     141,  137,   39,   39, 0x0a,
     218,  196,   39,   39, 0x0a,
     268,  196,   39,   39, 0x0a,
     336,  319,   39,   39, 0x0a,
     373,  196,  367,   39, 0x0a,
     422,  196,  367,   39, 0x0a,
     486,  319,  471,   39, 0x0a,
     524,  196,  516,   39, 0x0a,
     572,  196,  564,   39, 0x0a,
     638,  319,  609,   39, 0x0a,
     671,  196,  367,   39, 0x0a,
     740,  319,  713,   39, 0x0a,
     778,  319,  609,   39, 0x0a,
     835,  813,   39,   39, 0x0a,
     909,  883,   39,   39, 0x0a,
     985,  957,   39,   39, 0x0a,
    1064, 1036,   39,   39, 0x0a,
    1146, 1118,   39,   39, 0x0a,
    1226, 1200,   39,   39, 0x0a,
    1302, 1274,   39,   39, 0x0a,
    1362,  319,  609,   39, 0x0a,
    1408,  319, 1397,   39, 0x0a,
    1442,  319,  609,   39, 0x0a,
    1483,  196,  367,   39, 0x0a,
    1530,  196,  367,   39, 0x0a,
    1577,  196,  367,   39, 0x0a,
    1623,  196,  367,   39, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsItemAnimation[] = {
    "PythonQtWrapper_QGraphicsItemAnimation\0"
    "\0QGraphicsItemAnimation*\0parent\0"
    "new_QGraphicsItemAnimation(QObject*)\0"
    "new_QGraphicsItemAnimation()\0obj\0"
    "delete_QGraphicsItemAnimation(QGraphicsItemAnimation*)\0"
    "theWrappedObject,step\0"
    "afterAnimationStep(QGraphicsItemAnimation*,qreal)\0"
    "beforeAnimationStep(QGraphicsItemAnimation*,qreal)\0"
    "theWrappedObject\0clear(QGraphicsItemAnimation*)\0"
    "qreal\0horizontalScaleAt(QGraphicsItemAnimation*,qreal)\0"
    "horizontalShearAt(QGraphicsItemAnimation*,qreal)\0"
    "QGraphicsItem*\0item(QGraphicsItemAnimation*)\0"
    "QMatrix\0matrixAt(QGraphicsItemAnimation*,qreal)\0"
    "QPointF\0posAt(QGraphicsItemAnimation*,qreal)\0"
    "QList<QPair<qreal,QPointF> >\0"
    "posList(QGraphicsItemAnimation*)\0"
    "rotationAt(QGraphicsItemAnimation*,qreal)\0"
    "QList<QPair<qreal,qreal> >\0"
    "rotationList(QGraphicsItemAnimation*)\0"
    "scaleList(QGraphicsItemAnimation*)\0"
    "theWrappedObject,item\0"
    "setItem(QGraphicsItemAnimation*,QGraphicsItem*)\0"
    "theWrappedObject,step,pos\0"
    "setPosAt(QGraphicsItemAnimation*,qreal,QPointF)\0"
    "theWrappedObject,step,angle\0"
    "setRotationAt(QGraphicsItemAnimation*,qreal,qreal)\0"
    "theWrappedObject,step,sx,sy\0"
    "setScaleAt(QGraphicsItemAnimation*,qreal,qreal,qreal)\0"
    "theWrappedObject,step,sh,sv\0"
    "setShearAt(QGraphicsItemAnimation*,qreal,qreal,qreal)\0"
    "theWrappedObject,timeLine\0"
    "setTimeLine(QGraphicsItemAnimation*,QTimeLine*)\0"
    "theWrappedObject,step,dx,dy\0"
    "setTranslationAt(QGraphicsItemAnimation*,qreal,qreal,qreal)\0"
    "shearList(QGraphicsItemAnimation*)\0"
    "QTimeLine*\0timeLine(QGraphicsItemAnimation*)\0"
    "translationList(QGraphicsItemAnimation*)\0"
    "verticalScaleAt(QGraphicsItemAnimation*,qreal)\0"
    "verticalShearAt(QGraphicsItemAnimation*,qreal)\0"
    "xTranslationAt(QGraphicsItemAnimation*,qreal)\0"
    "yTranslationAt(QGraphicsItemAnimation*,qreal)\0"
};

void PythonQtWrapper_QGraphicsItemAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsItemAnimation *_t = static_cast<PythonQtWrapper_QGraphicsItemAnimation *>(_o);
        switch (_id) {
        case 0: { QGraphicsItemAnimation* _r = _t->new_QGraphicsItemAnimation((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItemAnimation**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsItemAnimation* _r = _t->new_QGraphicsItemAnimation();
            if (_a[0]) *reinterpret_cast< QGraphicsItemAnimation**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGraphicsItemAnimation((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1]))); break;
        case 3: _t->afterAnimationStep((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 4: _t->beforeAnimationStep((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 5: _t->clear((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1]))); break;
        case 6: { qreal _r = _t->horizontalScaleAt((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 7: { qreal _r = _t->horizontalShearAt((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 8: { QGraphicsItem* _r = _t->item((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 9: { QMatrix _r = _t->matrixAt((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMatrix*>(_a[0]) = _r; }  break;
        case 10: { QPointF _r = _t->posAt((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 11: { QList<QPair<qreal,QPointF> > _r = _t->posList((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QPair<qreal,QPointF> >*>(_a[0]) = _r; }  break;
        case 12: { qreal _r = _t->rotationAt((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 13: { QList<QPair<qreal,qreal> > _r = _t->rotationList((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QPair<qreal,qreal> >*>(_a[0]) = _r; }  break;
        case 14: { QList<QPair<qreal,QPointF> > _r = _t->scaleList((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QPair<qreal,QPointF> >*>(_a[0]) = _r; }  break;
        case 15: _t->setItem((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2]))); break;
        case 16: _t->setPosAt((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3]))); break;
        case 17: _t->setRotationAt((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 18: _t->setScaleAt((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 19: _t->setShearAt((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 20: _t->setTimeLine((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< QTimeLine*(*)>(_a[2]))); break;
        case 21: _t->setTranslationAt((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 22: { QList<QPair<qreal,QPointF> > _r = _t->shearList((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QPair<qreal,QPointF> >*>(_a[0]) = _r; }  break;
        case 23: { QTimeLine* _r = _t->timeLine((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTimeLine**>(_a[0]) = _r; }  break;
        case 24: { QList<QPair<qreal,QPointF> > _r = _t->translationList((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QPair<qreal,QPointF> >*>(_a[0]) = _r; }  break;
        case 25: { qreal _r = _t->verticalScaleAt((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 26: { qreal _r = _t->verticalShearAt((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 27: { qreal _r = _t->xTranslationAt((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 28: { qreal _r = _t->yTranslationAt((*reinterpret_cast< QGraphicsItemAnimation*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsItemAnimation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsItemAnimation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsItemAnimation,
      qt_meta_data_PythonQtWrapper_QGraphicsItemAnimation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsItemAnimation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsItemAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsItemAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsItemAnimation))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsItemAnimation*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsItemAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsItemGroup[] = {

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
      69,   56,   36,   35, 0x0a,
     131,  124,   36,   35, 0x2a,
     170,   35,   36,   35, 0x2a,
     199,  195,   35,   35, 0x0a,
     268,  246,   35,   35, 0x0a,
     339,  322,  315,   35, 0x0a,
     378,  246,  373,   35, 0x0a,
     446,  322,  433,   35, 0x0a,
     517,  478,   35,   35, 0x0a,
     627,  595,   35,   35, 0x2a,
     696,  246,   35,   35, 0x0a,
     752,  322,  748,   35, 0x0a,

 // enums: name, flags, count, data
     778, 0x0,    1,   78,

 // enum data: key, value
     785, uint(PythonQtWrapper_QGraphicsItemGroup::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsItemGroup[] = {
    "PythonQtWrapper_QGraphicsItemGroup\0\0"
    "QGraphicsItemGroup*\0parent,scene\0"
    "new_QGraphicsItemGroup(QGraphicsItem*,QGraphicsScene*)\0"
    "parent\0new_QGraphicsItemGroup(QGraphicsItem*)\0"
    "new_QGraphicsItemGroup()\0obj\0"
    "delete_QGraphicsItemGroup(QGraphicsItemGroup*)\0"
    "theWrappedObject,item\0"
    "addToGroup(QGraphicsItemGroup*,QGraphicsItem*)\0"
    "QRectF\0theWrappedObject\0"
    "boundingRect(QGraphicsItemGroup*)\0"
    "bool\0isObscuredBy(QGraphicsItemGroup*,const QGraphicsItem*)\0"
    "QPainterPath\0opaqueArea(QGraphicsItemGroup*)\0"
    "theWrappedObject,painter,option,widget\0"
    "paint(QGraphicsItemGroup*,QPainter*,const QStyleOptionGraphicsItem*,QW"
    "idget*)\0"
    "theWrappedObject,painter,option\0"
    "paint(QGraphicsItemGroup*,QPainter*,const QStyleOptionGraphicsItem*)\0"
    "removeFromGroup(QGraphicsItemGroup*,QGraphicsItem*)\0"
    "int\0type(QGraphicsItemGroup*)\0enum_1\0"
    "Type\0"
};

void PythonQtWrapper_QGraphicsItemGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsItemGroup *_t = static_cast<PythonQtWrapper_QGraphicsItemGroup *>(_o);
        switch (_id) {
        case 0: { QGraphicsItemGroup* _r = _t->new_QGraphicsItemGroup((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsScene*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsItemGroup**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsItemGroup* _r = _t->new_QGraphicsItemGroup((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItemGroup**>(_a[0]) = _r; }  break;
        case 2: { QGraphicsItemGroup* _r = _t->new_QGraphicsItemGroup();
            if (_a[0]) *reinterpret_cast< QGraphicsItemGroup**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QGraphicsItemGroup((*reinterpret_cast< QGraphicsItemGroup*(*)>(_a[1]))); break;
        case 4: _t->addToGroup((*reinterpret_cast< QGraphicsItemGroup*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2]))); break;
        case 5: { QRectF _r = _t->boundingRect((*reinterpret_cast< QGraphicsItemGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isObscuredBy((*reinterpret_cast< QGraphicsItemGroup*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QPainterPath _r = _t->opaqueArea((*reinterpret_cast< QGraphicsItemGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 8: _t->paint((*reinterpret_cast< QGraphicsItemGroup*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionGraphicsItem*(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4]))); break;
        case 9: _t->paint((*reinterpret_cast< QGraphicsItemGroup*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionGraphicsItem*(*)>(_a[3]))); break;
        case 10: _t->removeFromGroup((*reinterpret_cast< QGraphicsItemGroup*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2]))); break;
        case 11: { int _r = _t->type((*reinterpret_cast< QGraphicsItemGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsItemGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsItemGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsItemGroup,
      qt_meta_data_PythonQtWrapper_QGraphicsItemGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsItemGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsItemGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsItemGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsItemGroup))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsItemGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsItemGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsLayout[] = {

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
      57,   50,   33,   32, 0x0a,
      99,   32,   33,   32, 0x2a,
     125,  121,   32,   32, 0x0a,
     183,  166,   32,   32, 0x0a,
     238,  210,   32,   32, 0x0a,
     300,  166,  296,   32, 0x0a,
     363,  324,   32,   32, 0x0a,
     433,   32,  428,   32, 0x0a,
     487,  166,   32,   32, 0x0a,
     516,  166,  428,   32, 0x0a,
     586,  567,  546,   32, 0x0a,
     638,  615,   32,   32, 0x0a,
     669,  324,   32,   32, 0x0a,
     737,  730,   32,   32, 0x0a,
     798,  166,   32,   32, 0x0a,
     850,  831,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsLayout[] = {
    "PythonQtWrapper_QGraphicsLayout\0\0"
    "QGraphicsLayout*\0parent\0"
    "new_QGraphicsLayout(QGraphicsLayoutItem*)\0"
    "new_QGraphicsLayout()\0obj\0"
    "delete_QGraphicsLayout(QGraphicsLayout*)\0"
    "theWrappedObject\0activate(QGraphicsLayout*)\0"
    "theWrappedObject,layoutItem\0"
    "addChildLayoutItem(QGraphicsLayout*,QGraphicsLayoutItem*)\0"
    "int\0count(QGraphicsLayout*)\0"
    "theWrappedObject,left,top,right,bottom\0"
    "getContentsMargins(QGraphicsLayout*,qreal*,qreal*,qreal*,qreal*)\0"
    "bool\0static_QGraphicsLayout_instantInvalidatePropagation()\0"
    "invalidate(QGraphicsLayout*)\0"
    "isActivated(QGraphicsLayout*)\0"
    "QGraphicsLayoutItem*\0theWrappedObject,i\0"
    "itemAt(QGraphicsLayout*,int)\0"
    "theWrappedObject,index\0"
    "removeAt(QGraphicsLayout*,int)\0"
    "setContentsMargins(QGraphicsLayout*,qreal,qreal,qreal,qreal)\0"
    "enable\0"
    "static_QGraphicsLayout_setInstantInvalidatePropagation(bool)\0"
    "updateGeometry(QGraphicsLayout*)\0"
    "theWrappedObject,e\0"
    "widgetEvent(QGraphicsLayout*,QEvent*)\0"
};

void PythonQtWrapper_QGraphicsLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsLayout *_t = static_cast<PythonQtWrapper_QGraphicsLayout *>(_o);
        switch (_id) {
        case 0: { QGraphicsLayout* _r = _t->new_QGraphicsLayout((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsLayout**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsLayout* _r = _t->new_QGraphicsLayout();
            if (_a[0]) *reinterpret_cast< QGraphicsLayout**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGraphicsLayout((*reinterpret_cast< QGraphicsLayout*(*)>(_a[1]))); break;
        case 3: _t->activate((*reinterpret_cast< QGraphicsLayout*(*)>(_a[1]))); break;
        case 4: _t->addChildLayoutItem((*reinterpret_cast< QGraphicsLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2]))); break;
        case 5: { int _r = _t->count((*reinterpret_cast< QGraphicsLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->getContentsMargins((*reinterpret_cast< QGraphicsLayout*(*)>(_a[1])),(*reinterpret_cast< qreal*(*)>(_a[2])),(*reinterpret_cast< qreal*(*)>(_a[3])),(*reinterpret_cast< qreal*(*)>(_a[4])),(*reinterpret_cast< qreal*(*)>(_a[5]))); break;
        case 7: { bool _r = _t->static_QGraphicsLayout_instantInvalidatePropagation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->invalidate((*reinterpret_cast< QGraphicsLayout*(*)>(_a[1]))); break;
        case 9: { bool _r = _t->isActivated((*reinterpret_cast< QGraphicsLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QGraphicsLayoutItem* _r = _t->itemAt((*reinterpret_cast< QGraphicsLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsLayoutItem**>(_a[0]) = _r; }  break;
        case 11: _t->removeAt((*reinterpret_cast< QGraphicsLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->setContentsMargins((*reinterpret_cast< QGraphicsLayout*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 13: _t->static_QGraphicsLayout_setInstantInvalidatePropagation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->updateGeometry((*reinterpret_cast< QGraphicsLayout*(*)>(_a[1]))); break;
        case 15: _t->widgetEvent((*reinterpret_cast< QGraphicsLayout*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsLayout,
      qt_meta_data_PythonQtWrapper_QGraphicsLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsLayout))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsLayoutItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      74,   58,   37,   36, 0x0a,
     132,  125,   37,   36, 0x2a,
     178,   36,   37,   36, 0x2a,
     208,  204,   36,   36, 0x0a,
     281,  264,  257,   36, 0x0a,
     357,  323,  316,   36, 0x0a,
     440,  417,  316,   36, 0x2a,
     493,  264,  257,   36, 0x0a,
     563,  524,   36,   36, 0x0a,
     647,  264,  632,   36, 0x0a,
     687,  264,  682,   36, 0x0a,
     724,  264,  718,   36, 0x0a,
     760,  264,  316,   36, 0x0a,
     794,  264,  718,   36, 0x0a,
     829,  264,  718,   36, 0x0a,
     865,  264,  316,   36, 0x0a,
     899,  264,  718,   36, 0x0a,
     934,  264,  682,   36, 0x0a,
     970,  264,   37,   36, 0x0a,
    1009,  264,  718,   36, 0x0a,
    1047,  264,  316,   36, 0x0a,
    1083,  264,  718,   36, 0x0a,
    1142, 1120,   36,   36, 0x0a,
    1205, 1183,   36,   36, 0x0a,
    1282, 1258,   36,   36, 0x0a,
    1349, 1327,   36,   36, 0x0a,
    1414, 1393,   36,   36, 0x0a,
    1486, 1463,   36,   36, 0x0a,
    1530, 1258,   36,   36, 0x0a,
    1575, 1327,   36,   36, 0x0a,
    1619, 1393,   36,   36, 0x0a,
    1668, 1463,   36,   36, 0x0a,
    1743, 1712,   36,   36, 0x0a,
    1811, 1787,   36,   36, 0x0a,
    1874, 1258,   36,   36, 0x0a,
    1921, 1327,   36,   36, 0x0a,
    1967, 1393,   36,   36, 0x0a,
    2018, 1463,   36,   36, 0x0a,
    2109, 2064,   36,   36, 0x0a,
    2243, 2210,   36,   36, 0x2a,
    2343, 2319,   36,   36, 0x0a,
    2391,  323,  316,   36, 0x0a,
    2442,  417,  316,   36, 0x2a,
    2498,  264, 2486,   36, 0x0a,
    2531,  264,   36,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsLayoutItem[] = {
    "PythonQtWrapper_QGraphicsLayoutItem\0"
    "\0QGraphicsLayoutItem*\0parent,isLayout\0"
    "new_QGraphicsLayoutItem(QGraphicsLayoutItem*,bool)\0"
    "parent\0new_QGraphicsLayoutItem(QGraphicsLayoutItem*)\0"
    "new_QGraphicsLayoutItem()\0obj\0"
    "delete_QGraphicsLayoutItem(QGraphicsLayoutItem*)\0"
    "QRectF\0theWrappedObject\0"
    "contentsRect(QGraphicsLayoutItem*)\0"
    "QSizeF\0theWrappedObject,which,constraint\0"
    "effectiveSizeHint(QGraphicsLayoutItem*,Qt::SizeHint,QSizeF)\0"
    "theWrappedObject,which\0"
    "effectiveSizeHint(QGraphicsLayoutItem*,Qt::SizeHint)\0"
    "geometry(QGraphicsLayoutItem*)\0"
    "theWrappedObject,left,top,right,bottom\0"
    "getContentsMargins(QGraphicsLayoutItem*,qreal*,qreal*,qreal*,qreal*)\0"
    "QGraphicsItem*\0graphicsItem(QGraphicsLayoutItem*)\0"
    "bool\0isLayout(QGraphicsLayoutItem*)\0"
    "qreal\0maximumHeight(QGraphicsLayoutItem*)\0"
    "maximumSize(QGraphicsLayoutItem*)\0"
    "maximumWidth(QGraphicsLayoutItem*)\0"
    "minimumHeight(QGraphicsLayoutItem*)\0"
    "minimumSize(QGraphicsLayoutItem*)\0"
    "minimumWidth(QGraphicsLayoutItem*)\0"
    "ownedByLayout(QGraphicsLayoutItem*)\0"
    "parentLayoutItem(QGraphicsLayoutItem*)\0"
    "preferredHeight(QGraphicsLayoutItem*)\0"
    "preferredSize(QGraphicsLayoutItem*)\0"
    "preferredWidth(QGraphicsLayoutItem*)\0"
    "theWrappedObject,rect\0"
    "setGeometry(QGraphicsLayoutItem*,QRectF)\0"
    "theWrappedObject,item\0"
    "setGraphicsItem(QGraphicsLayoutItem*,QGraphicsItem*)\0"
    "theWrappedObject,height\0"
    "setMaximumHeight(QGraphicsLayoutItem*,qreal)\0"
    "theWrappedObject,size\0"
    "setMaximumSize(QGraphicsLayoutItem*,QSizeF)\0"
    "theWrappedObject,w,h\0"
    "setMaximumSize(QGraphicsLayoutItem*,qreal,qreal)\0"
    "theWrappedObject,width\0"
    "setMaximumWidth(QGraphicsLayoutItem*,qreal)\0"
    "setMinimumHeight(QGraphicsLayoutItem*,qreal)\0"
    "setMinimumSize(QGraphicsLayoutItem*,QSizeF)\0"
    "setMinimumSize(QGraphicsLayoutItem*,qreal,qreal)\0"
    "setMinimumWidth(QGraphicsLayoutItem*,qreal)\0"
    "theWrappedObject,ownedByLayout\0"
    "setOwnedByLayout(QGraphicsLayoutItem*,bool)\0"
    "theWrappedObject,parent\0"
    "setParentLayoutItem(QGraphicsLayoutItem*,QGraphicsLayoutItem*)\0"
    "setPreferredHeight(QGraphicsLayoutItem*,qreal)\0"
    "setPreferredSize(QGraphicsLayoutItem*,QSizeF)\0"
    "setPreferredSize(QGraphicsLayoutItem*,qreal,qreal)\0"
    "setPreferredWidth(QGraphicsLayoutItem*,qreal)\0"
    "theWrappedObject,hPolicy,vPolicy,controlType\0"
    "setSizePolicy(QGraphicsLayoutItem*,QSizePolicy::Policy,QSizePolicy::Po"
    "licy,QSizePolicy::ControlType)\0"
    "theWrappedObject,hPolicy,vPolicy\0"
    "setSizePolicy(QGraphicsLayoutItem*,QSizePolicy::Policy,QSizePolicy::Po"
    "licy)\0"
    "theWrappedObject,policy\0"
    "setSizePolicy(QGraphicsLayoutItem*,QSizePolicy)\0"
    "sizeHint(QGraphicsLayoutItem*,Qt::SizeHint,QSizeF)\0"
    "sizeHint(QGraphicsLayoutItem*,Qt::SizeHint)\0"
    "QSizePolicy\0sizePolicy(QGraphicsLayoutItem*)\0"
    "updateGeometry(QGraphicsLayoutItem*)\0"
};

void PythonQtWrapper_QGraphicsLayoutItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsLayoutItem *_t = static_cast<PythonQtWrapper_QGraphicsLayoutItem *>(_o);
        switch (_id) {
        case 0: { QGraphicsLayoutItem* _r = _t->new_QGraphicsLayoutItem((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsLayoutItem**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsLayoutItem* _r = _t->new_QGraphicsLayoutItem((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsLayoutItem**>(_a[0]) = _r; }  break;
        case 2: { QGraphicsLayoutItem* _r = _t->new_QGraphicsLayoutItem();
            if (_a[0]) *reinterpret_cast< QGraphicsLayoutItem**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QGraphicsLayoutItem((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1]))); break;
        case 4: { QRectF _r = _t->contentsRect((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 5: { QSizeF _r = _t->effectiveSizeHint((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< Qt::SizeHint(*)>(_a[2])),(*reinterpret_cast< const QSizeF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 6: { QSizeF _r = _t->effectiveSizeHint((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< Qt::SizeHint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 7: { QRectF _r = _t->geometry((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 8: _t->getContentsMargins((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< qreal*(*)>(_a[2])),(*reinterpret_cast< qreal*(*)>(_a[3])),(*reinterpret_cast< qreal*(*)>(_a[4])),(*reinterpret_cast< qreal*(*)>(_a[5]))); break;
        case 9: { QGraphicsItem* _r = _t->graphicsItem((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsItem**>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isLayout((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { qreal _r = _t->maximumHeight((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 12: { QSizeF _r = _t->maximumSize((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->maximumWidth((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: { qreal _r = _t->minimumHeight((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 15: { QSizeF _r = _t->minimumSize((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 16: { qreal _r = _t->minimumWidth((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->ownedByLayout((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { QGraphicsLayoutItem* _r = _t->parentLayoutItem((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsLayoutItem**>(_a[0]) = _r; }  break;
        case 19: { qreal _r = _t->preferredHeight((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 20: { QSizeF _r = _t->preferredSize((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 21: { qreal _r = _t->preferredWidth((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 22: _t->setGeometry((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 23: _t->setGraphicsItem((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2]))); break;
        case 24: _t->setMaximumHeight((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 25: _t->setMaximumSize((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< const QSizeF(*)>(_a[2]))); break;
        case 26: _t->setMaximumSize((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 27: _t->setMaximumWidth((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 28: _t->setMinimumHeight((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 29: _t->setMinimumSize((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< const QSizeF(*)>(_a[2]))); break;
        case 30: _t->setMinimumSize((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 31: _t->setMinimumWidth((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 32: _t->setOwnedByLayout((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 33: _t->setParentLayoutItem((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2]))); break;
        case 34: _t->setPreferredHeight((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 35: _t->setPreferredSize((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< const QSizeF(*)>(_a[2]))); break;
        case 36: _t->setPreferredSize((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 37: _t->setPreferredWidth((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 38: _t->setSizePolicy((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[2])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[3])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[4]))); break;
        case 39: _t->setSizePolicy((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[2])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[3]))); break;
        case 40: _t->setSizePolicy((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< const QSizePolicy(*)>(_a[2]))); break;
        case 41: { QSizeF _r = _t->sizeHint((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< Qt::SizeHint(*)>(_a[2])),(*reinterpret_cast< const QSizeF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 42: { QSizeF _r = _t->sizeHint((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])),(*reinterpret_cast< Qt::SizeHint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 43: { QSizePolicy _r = _t->sizePolicy((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizePolicy*>(_a[0]) = _r; }  break;
        case 44: _t->updateGeometry((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsLayoutItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsLayoutItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsLayoutItem,
      qt_meta_data_PythonQtWrapper_QGraphicsLayoutItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsLayoutItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsLayoutItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsLayoutItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsLayoutItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsLayoutItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsLayoutItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    return _id;
}
static const uint qt_meta_data_PythonQtWrapper_QGraphicsLineItem[] = {

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
      67,   54,   35,   34, 0x0a,
     128,  121,   35,   34, 0x2a,
     166,   34,   35,   34, 0x2a,
     208,  190,   35,   34, 0x0a,
     281,  269,   35,   34, 0x2a,
     331,  326,   35,   34, 0x2a,
     386,  361,   35,   34, 0x0a,
     483,  464,   35,   34, 0x2a,
     557,  545,   35,   34, 0x2a,
     608,  604,   34,   34, 0x0a,
     677,  660,  653,   34, 0x0a,
     738,  715,  710,   34, 0x0a,
     809,  784,  775,   34, 0x0a,
     870,  848,  710,   34, 0x0a,
     931,  660,  924,   34, 0x0a,
     969,  660,  956,   34, 0x0a,
    1039, 1000,   34,   34, 0x0a,
    1148, 1116,   34,   34, 0x2a,
    1221,  660, 1216,   34, 0x0a,
    1280, 1245,   34,   34, 0x0a,
    1348, 1326,   34,   34, 0x0a,
    1412, 1383,   34,   34, 0x0a,
    1485, 1464,   34,   34, 0x0a,
    1517,  660,  956,   34, 0x0a,
    1570, 1543,  710,   34, 0x0a,
    1616,  660, 1612,   34, 0x0a,

 // enums: name, flags, count, data
    1641, 0x0,    1,  148,

 // enum data: key, value
    1648, uint(PythonQtWrapper_QGraphicsLineItem::Type),

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsLineItem[] = {
    "PythonQtWrapper_QGraphicsLineItem\0\0"
    "QGraphicsLineItem*\0parent,scene\0"
    "new_QGraphicsLineItem(QGraphicsItem*,QGraphicsScene*)\0"
    "parent\0new_QGraphicsLineItem(QGraphicsItem*)\0"
    "new_QGraphicsLineItem()\0line,parent,scene\0"
    "new_QGraphicsLineItem(QLineF,QGraphicsItem*,QGraphicsScene*)\0"
    "line,parent\0new_QGraphicsLineItem(QLineF,QGraphicsItem*)\0"
    "line\0new_QGraphicsLineItem(QLineF)\0"
    "x1,y1,x2,y2,parent,scene\0"
    "new_QGraphicsLineItem(qreal,qreal,qreal,qreal,QGraphicsItem*,QGraphics"
    "Scene*)\0"
    "x1,y1,x2,y2,parent\0"
    "new_QGraphicsLineItem(qreal,qreal,qreal,qreal,QGraphicsItem*)\0"
    "x1,y1,x2,y2\0new_QGraphicsLineItem(qreal,qreal,qreal,qreal)\0"
    "obj\0delete_QGraphicsLineItem(QGraphicsLineItem*)\0"
    "QRectF\0theWrappedObject\0"
    "boundingRect(QGraphicsLineItem*)\0bool\0"
    "theWrappedObject,point\0"
    "contains(QGraphicsLineItem*,QPointF)\0"
    "QVariant\0theWrappedObject,variant\0"
    "extension(QGraphicsLineItem*,QVariant)\0"
    "theWrappedObject,item\0"
    "isObscuredBy(QGraphicsLineItem*,const QGraphicsItem*)\0"
    "QLineF\0line(QGraphicsLineItem*)\0"
    "QPainterPath\0opaqueArea(QGraphicsLineItem*)\0"
    "theWrappedObject,painter,option,widget\0"
    "paint(QGraphicsLineItem*,QPainter*,const QStyleOptionGraphicsItem*,QWi"
    "dget*)\0"
    "theWrappedObject,painter,option\0"
    "paint(QGraphicsLineItem*,QPainter*,const QStyleOptionGraphicsItem*)\0"
    "QPen\0pen(QGraphicsLineItem*)\0"
    "theWrappedObject,extension,variant\0"
    "setExtension(QGraphicsLineItem*,int,QVariant)\0"
    "theWrappedObject,line\0"
    "setLine(QGraphicsLineItem*,QLineF)\0"
    "theWrappedObject,x1,y1,x2,y2\0"
    "setLine(QGraphicsLineItem*,qreal,qreal,qreal,qreal)\0"
    "theWrappedObject,pen\0"
    "setPen(QGraphicsLineItem*,QPen)\0"
    "shape(QGraphicsLineItem*)\0"
    "theWrappedObject,extension\0"
    "supportsExtension(QGraphicsLineItem*,int)\0"
    "int\0type(QGraphicsLineItem*)\0enum_1\0"
    "Type\0"
};

void PythonQtWrapper_QGraphicsLineItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsLineItem *_t = static_cast<PythonQtWrapper_QGraphicsLineItem *>(_o);
        switch (_id) {
        case 0: { QGraphicsLineItem* _r = _t->new_QGraphicsLineItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QGraphicsScene*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsLineItem**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsLineItem* _r = _t->new_QGraphicsLineItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsLineItem**>(_a[0]) = _r; }  break;
        case 2: { QGraphicsLineItem* _r = _t->new_QGraphicsLineItem();
            if (_a[0]) *reinterpret_cast< QGraphicsLineItem**>(_a[0]) = _r; }  break;
        case 3: { QGraphicsLineItem* _r = _t->new_QGraphicsLineItem((*reinterpret_cast< const QLineF(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< QGraphicsScene*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QGraphicsLineItem**>(_a[0]) = _r; }  break;
        case 4: { QGraphicsLineItem* _r = _t->new_QGraphicsLineItem((*reinterpret_cast< const QLineF(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsLineItem**>(_a[0]) = _r; }  break;
        case 5: { QGraphicsLineItem* _r = _t->new_QGraphicsLineItem((*reinterpret_cast< const QLineF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsLineItem**>(_a[0]) = _r; }  break;
        case 6: { QGraphicsLineItem* _r = _t->new_QGraphicsLineItem((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[5])),(*reinterpret_cast< QGraphicsScene*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QGraphicsLineItem**>(_a[0]) = _r; }  break;
        case 7: { QGraphicsLineItem* _r = _t->new_QGraphicsLineItem((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QGraphicsLineItem**>(_a[0]) = _r; }  break;
        case 8: { QGraphicsLineItem* _r = _t->new_QGraphicsLineItem((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QGraphicsLineItem**>(_a[0]) = _r; }  break;
        case 9: _t->delete_QGraphicsLineItem((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1]))); break;
        case 10: { QRectF _r = _t->boundingRect((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->contains((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QVariant _r = _t->extension((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isObscuredBy((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1])),(*reinterpret_cast< const QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QLineF _r = _t->line((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLineF*>(_a[0]) = _r; }  break;
        case 15: { QPainterPath _r = _t->opaqueArea((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 16: _t->paint((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionGraphicsItem*(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4]))); break;
        case 17: _t->paint((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionGraphicsItem*(*)>(_a[3]))); break;
        case 18: { QPen _r = _t->pen((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPen*>(_a[0]) = _r; }  break;
        case 19: _t->setExtension((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 20: _t->setLine((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1])),(*reinterpret_cast< const QLineF(*)>(_a[2]))); break;
        case 21: _t->setLine((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 22: _t->setPen((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1])),(*reinterpret_cast< const QPen(*)>(_a[2]))); break;
        case 23: { QPainterPath _r = _t->shape((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->supportsExtension((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->type((*reinterpret_cast< QGraphicsLineItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsLineItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsLineItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsLineItem,
      qt_meta_data_PythonQtWrapper_QGraphicsLineItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsLineItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsLineItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsLineItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsLineItem))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsLineItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsLineItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsLinearLayout[] = {

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
      69,   62,   39,   38, 0x0a,
     117,   38,   39,   38, 0x2a,
     164,  145,   39,   38, 0x0a,
     240,  228,   39,   38, 0x2a,
     287,  283,   38,   38, 0x0a,
     362,  340,   38,   38, 0x0a,
     468,  443,   38,   38, 0x0a,
     524,  507,   38,   38, 0x2a,
     573,  340,  559,   38, 0x0a,
     632,  507,  628,   38, 0x0a,
     686,  662,   38,   38, 0x0a,
     719,  507,   38,   38, 0x2a,
     776,  748,   38,   38, 0x0a,
     895,  864,   38,   38, 0x0a,
     964,  941,   38,   38, 0x2a,
    1006,  507,   38,   38, 0x0a,
    1062,  941, 1041,   38, 0x0a,
    1103,  941, 1097,   38, 0x0a,
    1159,  507, 1143,   38, 0x0a,
    1195,  941,   38,   38, 0x0a,
    1232,  340,   38,   38, 0x0a,
    1351, 1319,   38,   38, 0x0a,
    1445, 1423,   38,   38, 0x0a,
    1519, 1488,   38,   38, 0x0a,
    1597, 1568,   38,   38, 0x0a,
    1677, 1652,   38,   38, 0x0a,
    1748, 1718,   38,   38, 0x0a,
    1855, 1821, 1814,   38, 0x0a,
    1931, 1908, 1814,   38, 0x2a,
    1977,  507, 1097,   38, 0x0a,
    2009,  340,  628,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsLinearLayout[] = {
    "PythonQtWrapper_QGraphicsLinearLayout\0"
    "\0QGraphicsLinearLayout*\0parent\0"
    "new_QGraphicsLinearLayout(QGraphicsLayoutItem*)\0"
    "new_QGraphicsLinearLayout()\0"
    "orientation,parent\0"
    "new_QGraphicsLinearLayout(Qt::Orientation,QGraphicsLayoutItem*)\0"
    "orientation\0new_QGraphicsLinearLayout(Qt::Orientation)\0"
    "obj\0delete_QGraphicsLinearLayout(QGraphicsLinearLayout*)\0"
    "theWrappedObject,item\0"
    "addItem(QGraphicsLinearLayout*,PythonQtPassOwnershipToCPP<QGraphicsLay"
    "outItem*>)\0"
    "theWrappedObject,stretch\0"
    "addStretch(QGraphicsLinearLayout*,int)\0"
    "theWrappedObject\0addStretch(QGraphicsLinearLayout*)\0"
    "Qt::Alignment\0"
    "alignment(QGraphicsLinearLayout*,QGraphicsLayoutItem*)\0"
    "int\0count(QGraphicsLinearLayout*)\0"
    "theWrappedObject,indent\0"
    "dump(QGraphicsLinearLayout*,int)\0"
    "dump(QGraphicsLinearLayout*)\0"
    "theWrappedObject,index,item\0"
    "insertItem(QGraphicsLinearLayout*,int,PythonQtPassOwnershipToCPP<QGrap"
    "hicsLayoutItem*>)\0"
    "theWrappedObject,index,stretch\0"
    "insertStretch(QGraphicsLinearLayout*,int,int)\0"
    "theWrappedObject,index\0"
    "insertStretch(QGraphicsLinearLayout*,int)\0"
    "invalidate(QGraphicsLinearLayout*)\0"
    "QGraphicsLayoutItem*\0"
    "itemAt(QGraphicsLinearLayout*,int)\0"
    "qreal\0itemSpacing(QGraphicsLinearLayout*,int)\0"
    "Qt::Orientation\0orientation(QGraphicsLinearLayout*)\0"
    "removeAt(QGraphicsLinearLayout*,int)\0"
    "removeItem(QGraphicsLinearLayout*,PythonQtPassOwnershipToPython<QGraph"
    "icsLayoutItem*>)\0"
    "theWrappedObject,item,alignment\0"
    "setAlignment(QGraphicsLinearLayout*,QGraphicsLayoutItem*,Qt::Alignment"
    ")\0"
    "theWrappedObject,rect\0"
    "setGeometry(QGraphicsLinearLayout*,QRectF)\0"
    "theWrappedObject,index,spacing\0"
    "setItemSpacing(QGraphicsLinearLayout*,int,qreal)\0"
    "theWrappedObject,orientation\0"
    "setOrientation(QGraphicsLinearLayout*,Qt::Orientation)\0"
    "theWrappedObject,spacing\0"
    "setSpacing(QGraphicsLinearLayout*,qreal)\0"
    "theWrappedObject,item,stretch\0"
    "setStretchFactor(QGraphicsLinearLayout*,QGraphicsLayoutItem*,int)\0"
    "QSizeF\0theWrappedObject,which,constraint\0"
    "sizeHint(QGraphicsLinearLayout*,Qt::SizeHint,QSizeF)\0"
    "theWrappedObject,which\0"
    "sizeHint(QGraphicsLinearLayout*,Qt::SizeHint)\0"
    "spacing(QGraphicsLinearLayout*)\0"
    "stretchFactor(QGraphicsLinearLayout*,QGraphicsLayoutItem*)\0"
};

void PythonQtWrapper_QGraphicsLinearLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsLinearLayout *_t = static_cast<PythonQtWrapper_QGraphicsLinearLayout *>(_o);
        switch (_id) {
        case 0: { QGraphicsLinearLayout* _r = _t->new_QGraphicsLinearLayout((*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsLinearLayout**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsLinearLayout* _r = _t->new_QGraphicsLinearLayout();
            if (_a[0]) *reinterpret_cast< QGraphicsLinearLayout**>(_a[0]) = _r; }  break;
        case 2: { QGraphicsLinearLayout* _r = _t->new_QGraphicsLinearLayout((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsLinearLayout**>(_a[0]) = _r; }  break;
        case 3: { QGraphicsLinearLayout* _r = _t->new_QGraphicsLinearLayout((*reinterpret_cast< Qt::Orientation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsLinearLayout**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QGraphicsLinearLayout((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1]))); break;
        case 5: _t->addItem((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QGraphicsLayoutItem*>(*)>(_a[2]))); break;
        case 6: _t->addStretch((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->addStretch((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1]))); break;
        case 8: { Qt::Alignment _r = _t->alignment((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->count((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->dump((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->dump((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1]))); break;
        case 12: _t->insertItem((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QGraphicsLayoutItem*>(*)>(_a[3]))); break;
        case 13: _t->insertStretch((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->insertStretch((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->invalidate((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1]))); break;
        case 16: { QGraphicsLayoutItem* _r = _t->itemAt((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QGraphicsLayoutItem**>(_a[0]) = _r; }  break;
        case 17: { qreal _r = _t->itemSpacing((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 18: { Qt::Orientation _r = _t->orientation((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientation*>(_a[0]) = _r; }  break;
        case 19: _t->removeAt((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->removeItem((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToPython<QGraphicsLayoutItem*>(*)>(_a[2]))); break;
        case 21: _t->setAlignment((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< Qt::Alignment(*)>(_a[3]))); break;
        case 22: _t->setGeometry((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 23: _t->setItemSpacing((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 24: _t->setOrientation((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< Qt::Orientation(*)>(_a[2]))); break;
        case 25: _t->setSpacing((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 26: _t->setStretchFactor((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 27: { QSizeF _r = _t->sizeHint((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< Qt::SizeHint(*)>(_a[2])),(*reinterpret_cast< const QSizeF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 28: { QSizeF _r = _t->sizeHint((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< Qt::SizeHint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 29: { qreal _r = _t->spacing((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->stretchFactor((*reinterpret_cast< QGraphicsLinearLayout*(*)>(_a[1])),(*reinterpret_cast< QGraphicsLayoutItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsLinearLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsLinearLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsLinearLayout,
      qt_meta_data_PythonQtWrapper_QGraphicsLinearLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsLinearLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsLinearLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsLinearLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsLinearLayout))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsLinearLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsLinearLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsObject[] = {

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
      57,   50,   33,   32, 0x0a,
      93,   32,   33,   32, 0x2a,
     119,  115,   32,   32, 0x0a,
     188,  160,   32,   32, 0x0a,
     273,  251,   32,   32, 0x2a,
     319,  251,   32,   32, 0x0a,
     375,   32,  367,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsObject[] = {
    "PythonQtWrapper_QGraphicsObject\0\0"
    "QGraphicsObject*\0parent\0"
    "new_QGraphicsObject(QGraphicsItem*)\0"
    "new_QGraphicsObject()\0obj\0"
    "delete_QGraphicsObject(QGraphicsObject*)\0"
    "theWrappedObject,type,flags\0"
    "grabGesture(QGraphicsObject*,Qt::GestureType,Qt::GestureFlags)\0"
    "theWrappedObject,type\0"
    "grabGesture(QGraphicsObject*,Qt::GestureType)\0"
    "ungrabGesture(QGraphicsObject*,Qt::GestureType)\0"
    "QString\0py_toString(QGraphicsObject*)\0"
};

void PythonQtWrapper_QGraphicsObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsObject *_t = static_cast<PythonQtWrapper_QGraphicsObject *>(_o);
        switch (_id) {
        case 0: { QGraphicsObject* _r = _t->new_QGraphicsObject((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsObject**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsObject* _r = _t->new_QGraphicsObject();
            if (_a[0]) *reinterpret_cast< QGraphicsObject**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGraphicsObject((*reinterpret_cast< QGraphicsObject*(*)>(_a[1]))); break;
        case 3: _t->grabGesture((*reinterpret_cast< QGraphicsObject*(*)>(_a[1])),(*reinterpret_cast< Qt::GestureType(*)>(_a[2])),(*reinterpret_cast< Qt::GestureFlags(*)>(_a[3]))); break;
        case 4: _t->grabGesture((*reinterpret_cast< QGraphicsObject*(*)>(_a[1])),(*reinterpret_cast< Qt::GestureType(*)>(_a[2]))); break;
        case 5: _t->ungrabGesture((*reinterpret_cast< QGraphicsObject*(*)>(_a[1])),(*reinterpret_cast< Qt::GestureType(*)>(_a[2]))); break;
        case 6: { QString _r = _t->py_toString((*reinterpret_cast< QGraphicsObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsObject,
      qt_meta_data_PythonQtWrapper_QGraphicsObject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsObject))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsObject*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_PythonQtWrapper_QGraphicsOpacityEffect[] = {

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
      71,   64,   40,   39, 0x0a,
     108,   39,   40,   39, 0x2a,
     141,  137,   39,   39, 0x0a,
     221,  196,   39,   39, 0x0a,
     284,  267,  261,   39, 0x0a,
     324,  267,  317,   39, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonQtWrapper_QGraphicsOpacityEffect[] = {
    "PythonQtWrapper_QGraphicsOpacityEffect\0"
    "\0QGraphicsOpacityEffect*\0parent\0"
    "new_QGraphicsOpacityEffect(QObject*)\0"
    "new_QGraphicsOpacityEffect()\0obj\0"
    "delete_QGraphicsOpacityEffect(QGraphicsOpacityEffect*)\0"
    "theWrappedObject,painter\0"
    "draw(QGraphicsOpacityEffect*,QPainter*)\0"
    "qreal\0theWrappedObject\0"
    "opacity(QGraphicsOpacityEffect*)\0"
    "QBrush\0opacityMask(QGraphicsOpacityEffect*)\0"
};

void PythonQtWrapper_QGraphicsOpacityEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonQtWrapper_QGraphicsOpacityEffect *_t = static_cast<PythonQtWrapper_QGraphicsOpacityEffect *>(_o);
        switch (_id) {
        case 0: { QGraphicsOpacityEffect* _r = _t->new_QGraphicsOpacityEffect((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGraphicsOpacityEffect**>(_a[0]) = _r; }  break;
        case 1: { QGraphicsOpacityEffect* _r = _t->new_QGraphicsOpacityEffect();
            if (_a[0]) *reinterpret_cast< QGraphicsOpacityEffect**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QGraphicsOpacityEffect((*reinterpret_cast< QGraphicsOpacityEffect*(*)>(_a[1]))); break;
        case 3: _t->draw((*reinterpret_cast< QGraphicsOpacityEffect*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 4: { qreal _r = _t->opacity((*reinterpret_cast< QGraphicsOpacityEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: { QBrush _r = _t->opacityMask((*reinterpret_cast< QGraphicsOpacityEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonQtWrapper_QGraphicsOpacityEffect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonQtWrapper_QGraphicsOpacityEffect::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QGraphicsOpacityEffect,
      qt_meta_data_PythonQtWrapper_QGraphicsOpacityEffect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonQtWrapper_QGraphicsOpacityEffect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonQtWrapper_QGraphicsOpacityEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonQtWrapper_QGraphicsOpacityEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QGraphicsOpacityEffect))
        return static_cast<void*>(const_cast< PythonQtWrapper_QGraphicsOpacityEffect*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QGraphicsOpacityEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE

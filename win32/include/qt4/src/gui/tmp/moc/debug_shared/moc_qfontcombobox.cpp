/****************************************************************************
** Meta object code from reading C++ file 'qfontcombobox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qfontcombobox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfontcombobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QFontComboBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   34, // properties
       1,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   15,   14,   14, 0x0a,
      65,   14,   14,   14, 0x08,
      92,   14,   14,   14, 0x08,

 // properties: name, type, flags
     138,  109, 0x0009510b,
     164,  152, 0x0009510b,
     182,  176, 0x40495103,

 // properties: notify_signal_id
       0,
       0,
       0,

 // enums: name, flags, count, data
     152, 0x1,    5,   50,

 // enum data: key, value
     194, uint(QFontComboBox::AllFonts),
     203, uint(QFontComboBox::ScalableFonts),
     217, uint(QFontComboBox::NonScalableFonts),
     234, uint(QFontComboBox::MonospacedFonts),
     250, uint(QFontComboBox::ProportionalFonts),

       0        // eod
};

static const char qt_meta_stringdata_QFontComboBox[] = {
    "QFontComboBox\0\0f\0currentFontChanged(QFont)\0"
    "setCurrentFont(QFont)\0_q_currentChanged(QString)\0"
    "_q_updateModel()\0QFontDatabase::WritingSystem\0"
    "writingSystem\0FontFilters\0fontFilters\0"
    "QFont\0currentFont\0AllFonts\0ScalableFonts\0"
    "NonScalableFonts\0MonospacedFonts\0"
    "ProportionalFonts\0"
};

void QFontComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QFontComboBox *_t = static_cast<QFontComboBox *>(_o);
        switch (_id) {
        case 0: _t->currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 1: _t->setCurrentFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_currentChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->d_func()->_q_updateModel(); break;
        default: ;
        }
    }
}

#ifdef Q_NO_DATA_RELOCATION
static const QMetaObjectAccessor qt_meta_extradata_QFontComboBox[] = {
        QFontDatabase::getStaticMetaObject,
#else
static const QMetaObject *qt_meta_extradata_QFontComboBox[] = {
        &QFontDatabase::staticMetaObject,
#endif //Q_NO_DATA_RELOCATION
    0
};

const QMetaObjectExtraData QFontComboBox::staticMetaObjectExtraData = {
    qt_meta_extradata_QFontComboBox,  qt_static_metacall 
};

const QMetaObject QFontComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_QFontComboBox,
      qt_meta_data_QFontComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QFontComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QFontComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QFontComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFontComboBox))
        return static_cast<void*>(const_cast< QFontComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int QFontComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QFontDatabase::WritingSystem*>(_v) = writingSystem(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(fontFilters()); break;
        case 2: *reinterpret_cast< QFont*>(_v) = currentFont(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setWritingSystem(*reinterpret_cast< QFontDatabase::WritingSystem*>(_v)); break;
        case 1: setFontFilters(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 2: setCurrentFont(*reinterpret_cast< QFont*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QFontComboBox::currentFontChanged(const QFont & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'qlayout.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../kernel/qlayout.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLayout[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       1,   23, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      12,    8, 0x02095103,
      19,    8, 0x02095103,
      42,   27, 0x0009510b,

 // enums: name, flags, count, data
      27, 0x0,    6,   27,

 // enum data: key, value
      57, uint(QLayout::SetDefaultConstraint),
      78, uint(QLayout::SetNoConstraint),
      94, uint(QLayout::SetMinimumSize),
     109, uint(QLayout::SetFixedSize),
     122, uint(QLayout::SetMaximumSize),
     137, uint(QLayout::SetMinAndMaxSize),

       0        // eod
};

static const char qt_meta_stringdata_QLayout[] = {
    "QLayout\0int\0margin\0spacing\0SizeConstraint\0"
    "sizeConstraint\0SetDefaultConstraint\0"
    "SetNoConstraint\0SetMinimumSize\0"
    "SetFixedSize\0SetMaximumSize\0"
    "SetMinAndMaxSize\0"
};

void QLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLayout,
      qt_meta_data_QLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLayout))
        return static_cast<void*>(const_cast< QLayout*>(this));
    if (!strcmp(_clname, "QLayoutItem"))
        return static_cast< QLayoutItem*>(const_cast< QLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int QLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = margin(); break;
        case 1: *reinterpret_cast< int*>(_v) = spacing(); break;
        case 2: *reinterpret_cast< SizeConstraint*>(_v) = sizeConstraint(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMargin(*reinterpret_cast< int*>(_v)); break;
        case 1: setSpacing(*reinterpret_cast< int*>(_v)); break;
        case 2: setSizeConstraint(*reinterpret_cast< SizeConstraint*>(_v)); break;
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
QT_END_MOC_NAMESPACE

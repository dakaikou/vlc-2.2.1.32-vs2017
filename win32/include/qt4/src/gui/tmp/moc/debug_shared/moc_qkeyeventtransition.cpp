/****************************************************************************
** Meta object code from reading C++ file 'qkeyeventtransition.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../statemachine/qkeyeventtransition.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qkeyeventtransition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QKeyEventTransition[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      24,   20, 0x02095103,
      50,   28, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_QKeyEventTransition[] = {
    "QKeyEventTransition\0int\0key\0"
    "Qt::KeyboardModifiers\0modifierMask\0"
};

void QKeyEventTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QKeyEventTransition::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QKeyEventTransition::staticMetaObject = {
    { &QEventTransition::staticMetaObject, qt_meta_stringdata_QKeyEventTransition,
      qt_meta_data_QKeyEventTransition, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QKeyEventTransition::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QKeyEventTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QKeyEventTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QKeyEventTransition))
        return static_cast<void*>(const_cast< QKeyEventTransition*>(this));
    return QEventTransition::qt_metacast(_clname);
}

int QKeyEventTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEventTransition::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = key(); break;
        case 1: *reinterpret_cast< Qt::KeyboardModifiers*>(_v) = modifierMask(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setKey(*reinterpret_cast< int*>(_v)); break;
        case 1: setModifierMask(*reinterpret_cast< Qt::KeyboardModifiers*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE

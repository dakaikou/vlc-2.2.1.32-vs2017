/****************************************************************************
** Meta object code from reading C++ file 'qbuttongroup.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qbuttongroup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbuttongroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QButtonGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      46,   13,   13,   13, 0x05,
      65,   13,   13,   13, 0x05,
      97,   13,   13,   13, 0x05,
     116,   13,   13,   13, 0x05,
     149,   13,   13,   13, 0x05,

 // properties: name, type, flags
     174,  169, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QButtonGroup[] = {
    "QButtonGroup\0\0buttonClicked(QAbstractButton*)\0"
    "buttonClicked(int)\0buttonPressed(QAbstractButton*)\0"
    "buttonPressed(int)\0buttonReleased(QAbstractButton*)\0"
    "buttonReleased(int)\0bool\0exclusive\0"
};

void QButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QButtonGroup *_t = static_cast<QButtonGroup *>(_o);
        switch (_id) {
        case 0: _t->buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: _t->buttonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->buttonPressed((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 3: _t->buttonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->buttonReleased((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 5: _t->buttonReleased((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QButtonGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QButtonGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QButtonGroup,
      qt_meta_data_QButtonGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QButtonGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QButtonGroup))
        return static_cast<void*>(const_cast< QButtonGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int QButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = exclusive(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setExclusive(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QButtonGroup::buttonClicked(QAbstractButton * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QButtonGroup::buttonClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QButtonGroup::buttonPressed(QAbstractButton * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QButtonGroup::buttonPressed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QButtonGroup::buttonReleased(QAbstractButton * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QButtonGroup::buttonReleased(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE

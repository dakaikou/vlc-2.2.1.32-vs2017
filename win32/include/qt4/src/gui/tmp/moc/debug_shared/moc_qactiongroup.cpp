/****************************************************************************
** Meta object code from reading C++ file 'qactiongroup.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../kernel/qactiongroup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qactiongroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QActionGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      34,   13,   13,   13, 0x15,
      53,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      71,   13,   13,   13, 0x0a,
      90,   88,   13,   13, 0x0a,
     108,   13,   13,   13, 0x0a,
     125,   13,   13,   13, 0x0a,
     144,   13,   13,   13, 0x08,
     165,   13,   13,   13, 0x08,
     184,   13,   13,   13, 0x08,

 // properties: name, type, flags
     208,  203, 0x01095103,
     218,  203, 0x01095103,
     226,  203, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QActionGroup[] = {
    "QActionGroup\0\0triggered(QAction*)\0"
    "selected(QAction*)\0hovered(QAction*)\0"
    "setEnabled(bool)\0b\0setDisabled(bool)\0"
    "setVisible(bool)\0setExclusive(bool)\0"
    "_q_actionTriggered()\0_q_actionChanged()\0"
    "_q_actionHovered()\0bool\0exclusive\0"
    "enabled\0visible\0"
};

void QActionGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QActionGroup *_t = static_cast<QActionGroup *>(_o);
        switch (_id) {
        case 0: _t->triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->selected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->hovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setDisabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setExclusive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->d_func()->_q_actionTriggered(); break;
        case 8: _t->d_func()->_q_actionChanged(); break;
        case 9: _t->d_func()->_q_actionHovered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QActionGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QActionGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QActionGroup,
      qt_meta_data_QActionGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QActionGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QActionGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QActionGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QActionGroup))
        return static_cast<void*>(const_cast< QActionGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int QActionGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isExclusive(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isVisible(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setExclusive(*reinterpret_cast< bool*>(_v)); break;
        case 1: setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: setVisible(*reinterpret_cast< bool*>(_v)); break;
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
void QActionGroup::triggered(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QActionGroup::selected(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QActionGroup::hovered(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

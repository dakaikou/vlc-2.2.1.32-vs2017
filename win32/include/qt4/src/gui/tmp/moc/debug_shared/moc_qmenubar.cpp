/****************************************************************************
** Meta object code from reading C++ file 'qmenubar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qmenubar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmenubar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QMenuBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   10,    9,    9, 0x05,
      37,   10,    9,    9, 0x05,
      62,   55,    9,    9, 0x15,
      77,   55,    9,    9, 0x15,

 // slots: signature, parameters, type, tag, flags
     102,   94,    9,    9, 0x0a,
     119,    9,    9,    9, 0x08,
     140,    9,    9,    9, 0x08,
     159,    9,    9,    9, 0x08,
     193,    9,    9,    9, 0x08,

 // properties: name, type, flags
     216,  211, 0x01095103,
     226,  211, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QMenuBar[] = {
    "QMenuBar\0\0action\0triggered(QAction*)\0"
    "hovered(QAction*)\0itemId\0activated(int)\0"
    "highlighted(int)\0visible\0setVisible(bool)\0"
    "_q_actionTriggered()\0_q_actionHovered()\0"
    "_q_internalShortcutActivated(int)\0"
    "_q_updateLayout()\0bool\0defaultUp\0"
    "nativeMenuBar\0"
};

void QMenuBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QMenuBar *_t = static_cast<QMenuBar *>(_o);
        switch (_id) {
        case 0: _t->triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->hovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->highlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_actionTriggered(); break;
        case 6: _t->d_func()->_q_actionHovered(); break;
        case 7: _t->d_func()->_q_internalShortcutActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->d_func()->_q_updateLayout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QMenuBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QMenuBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QMenuBar,
      qt_meta_data_QMenuBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QMenuBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QMenuBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QMenuBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMenuBar))
        return static_cast<void*>(const_cast< QMenuBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int QMenuBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isDefaultUp(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isNativeMenuBar(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDefaultUp(*reinterpret_cast< bool*>(_v)); break;
        case 1: setNativeMenuBar(*reinterpret_cast< bool*>(_v)); break;
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

// SIGNAL 0
void QMenuBar::triggered(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMenuBar::hovered(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMenuBar::activated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMenuBar::highlighted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE

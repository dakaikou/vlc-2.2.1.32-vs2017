/****************************************************************************
** Meta object code from reading C++ file 'qtimer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../kernel/qtimer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtimer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QTimer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      23,   18,    7,    7, 0x0a,
      34,    7,    7,    7, 0x0a,
      42,    7,    7,    7, 0x0a,
      49,   18,    7,    7, 0x1a,
      84,   73,   69,    7, 0x1a,

 // properties: name, type, flags
     105,  100, 0x01095103,
     116,   69, 0x02095103,
     125,  100, 0x01095001,

       0        // eod
};

static const char qt_meta_stringdata_QTimer[] = {
    "QTimer\0\0timeout()\0msec\0start(int)\0"
    "start()\0stop()\0changeInterval(int)\0"
    "int\0msec,sshot\0start(int,bool)\0bool\0"
    "singleShot\0interval\0active\0"
};

void QTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTimer *_t = static_cast<QTimer *>(_o);
        switch (_id) {
        case 0: _t->timeout(); break;
        case 1: _t->start((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->start(); break;
        case 3: _t->stop(); break;
        case 4: _t->changeInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: { int _r = _t->start((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QTimer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTimer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QTimer,
      qt_meta_data_QTimer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTimer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTimer))
        return static_cast<void*>(const_cast< QTimer*>(this));
    return QObject::qt_metacast(_clname);
}

int QTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< bool*>(_v) = isSingleShot(); break;
        case 1: *reinterpret_cast< int*>(_v) = interval(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isActive(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSingleShot(*reinterpret_cast< bool*>(_v)); break;
        case 1: setInterval(*reinterpret_cast< int*>(_v)); break;
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
void QTimer::timeout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE

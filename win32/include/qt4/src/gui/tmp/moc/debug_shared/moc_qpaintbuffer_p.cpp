/****************************************************************************
** Meta object code from reading C++ file 'qpaintbuffer_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../painting/qpaintbuffer_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpaintbuffer_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPaintBufferSignalProxy[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   25,   24,   24, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QPaintBufferSignalProxy[] = {
    "QPaintBufferSignalProxy\0\0buffer\0"
    "aboutToDestroy(const QPaintBufferPrivate*)\0"
};

void QPaintBufferSignalProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QPaintBufferSignalProxy *_t = static_cast<QPaintBufferSignalProxy *>(_o);
        switch (_id) {
        case 0: _t->aboutToDestroy((*reinterpret_cast< const QPaintBufferPrivate*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QPaintBufferSignalProxy::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPaintBufferSignalProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QPaintBufferSignalProxy,
      qt_meta_data_QPaintBufferSignalProxy, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPaintBufferSignalProxy::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPaintBufferSignalProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPaintBufferSignalProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPaintBufferSignalProxy))
        return static_cast<void*>(const_cast< QPaintBufferSignalProxy*>(this));
    return QObject::qt_metacast(_clname);
}

int QPaintBufferSignalProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QPaintBufferSignalProxy::aboutToDestroy(const QPaintBufferPrivate * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QPaintBufferResource[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   22,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QPaintBufferResource[] = {
    "QPaintBufferResource\0\0key\0"
    "remove(const QPaintBufferPrivate*)\0"
};

void QPaintBufferResource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QPaintBufferResource *_t = static_cast<QPaintBufferResource *>(_o);
        switch (_id) {
        case 0: _t->remove((*reinterpret_cast< const QPaintBufferPrivate*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QPaintBufferResource::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPaintBufferResource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QPaintBufferResource,
      qt_meta_data_QPaintBufferResource, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPaintBufferResource::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPaintBufferResource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPaintBufferResource::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPaintBufferResource))
        return static_cast<void*>(const_cast< QPaintBufferResource*>(this));
    return QObject::qt_metacast(_clname);
}

int QPaintBufferResource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

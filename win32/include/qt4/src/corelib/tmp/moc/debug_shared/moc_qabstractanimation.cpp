/****************************************************************************
** Meta object code from reading C++ file 'qabstractanimation.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../animation/qabstractanimation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractanimation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAbstractAnimation[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       6,   69, // properties
       2,   93, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      49,   31,   19,   19, 0x05,
     127,  115,   19,   19, 0x05,
     151,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     206,  199,   19,   19, 0x0a,
     248,   19,   19,   19, 0x2a,
     256,   19,   19,   19, 0x0a,
     264,   19,   19,   19, 0x0a,
     273,   19,   19,   19, 0x0a,
     289,   19,   19,   19, 0x0a,
     302,  296,   19,   19, 0x0a,

 // properties: name, type, flags
     328,  322, 0x00495009,
     338,  334, 0x02095103,
     348,  334, 0x02095103,
     115,  334, 0x02495001,
     370,  360, 0x0049510b,
     380,  334, 0x02095001,

 // properties: notify_signal_id
       1,
       0,
       0,
       2,
       3,
       0,

 // enums: name, flags, count, data
     360, 0x0,    2,  101,
     322, 0x0,    3,  105,

 // enum data: key, value
     389, uint(QAbstractAnimation::Forward),
     397, uint(QAbstractAnimation::Backward),
     406, uint(QAbstractAnimation::Stopped),
     414, uint(QAbstractAnimation::Paused),
     421, uint(QAbstractAnimation::Running),

       0        // eod
};

static const char qt_meta_stringdata_QAbstractAnimation[] = {
    "QAbstractAnimation\0\0finished()\0"
    "newState,oldState\0"
    "stateChanged(QAbstractAnimation::State,QAbstractAnimation::State)\0"
    "currentLoop\0currentLoopChanged(int)\0"
    "directionChanged(QAbstractAnimation::Direction)\0"
    "policy\0start(QAbstractAnimation::DeletionPolicy)\0"
    "start()\0pause()\0resume()\0setPaused(bool)\0"
    "stop()\0msecs\0setCurrentTime(int)\0State\0"
    "state\0int\0loopCount\0currentTime\0"
    "Direction\0direction\0duration\0Forward\0"
    "Backward\0Stopped\0Paused\0Running\0"
};

void QAbstractAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QAbstractAnimation *_t = static_cast<QAbstractAnimation *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->stateChanged((*reinterpret_cast< QAbstractAnimation::State(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation::State(*)>(_a[2]))); break;
        case 2: _t->currentLoopChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->directionChanged((*reinterpret_cast< QAbstractAnimation::Direction(*)>(_a[1]))); break;
        case 4: _t->start((*reinterpret_cast< QAbstractAnimation::DeletionPolicy(*)>(_a[1]))); break;
        case 5: _t->start(); break;
        case 6: _t->pause(); break;
        case 7: _t->resume(); break;
        case 8: _t->setPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->stop(); break;
        case 10: _t->setCurrentTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QAbstractAnimation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QAbstractAnimation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractAnimation,
      qt_meta_data_QAbstractAnimation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QAbstractAnimation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QAbstractAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QAbstractAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractAnimation))
        return static_cast<void*>(const_cast< QAbstractAnimation*>(this));
    return QObject::qt_metacast(_clname);
}

int QAbstractAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< State*>(_v) = state(); break;
        case 1: *reinterpret_cast< int*>(_v) = loopCount(); break;
        case 2: *reinterpret_cast< int*>(_v) = currentTime(); break;
        case 3: *reinterpret_cast< int*>(_v) = currentLoop(); break;
        case 4: *reinterpret_cast< Direction*>(_v) = direction(); break;
        case 5: *reinterpret_cast< int*>(_v) = duration(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setLoopCount(*reinterpret_cast< int*>(_v)); break;
        case 2: setCurrentTime(*reinterpret_cast< int*>(_v)); break;
        case 4: setDirection(*reinterpret_cast< Direction*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QAbstractAnimation::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QAbstractAnimation::stateChanged(QAbstractAnimation::State _t1, QAbstractAnimation::State _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QAbstractAnimation::currentLoopChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAbstractAnimation::directionChanged(QAbstractAnimation::Direction _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_QAnimationDriver[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QAnimationDriver[] = {
    "QAnimationDriver\0"
};

void QAnimationDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QAnimationDriver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QAnimationDriver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAnimationDriver,
      qt_meta_data_QAnimationDriver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QAnimationDriver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QAnimationDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QAnimationDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAnimationDriver))
        return static_cast<void*>(const_cast< QAnimationDriver*>(this));
    return QObject::qt_metacast(_clname);
}

int QAnimationDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

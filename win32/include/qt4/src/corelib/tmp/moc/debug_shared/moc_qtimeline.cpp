/****************************************************************************
** Meta object code from reading C++ file 'qtimeline.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../tools/qtimeline.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtimeline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QTimeLine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       7,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   11,   10,   10, 0x05,
      33,   10,   10,   10, 0x05,
      60,   51,   10,   10, 0x05,
      91,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     102,   10,   10,   10, 0x0a,
     110,   10,   10,   10, 0x0a,
     119,   10,   10,   10, 0x0a,
     133,  126,   10,   10, 0x0a,
     154,  149,   10,   10, 0x0a,
     174,   10,   10,   10, 0x0a,

 // properties: name, type, flags
     196,  192, 0x02095103,
     205,  192, 0x02095103,
     220,  192, 0x02095103,
     242,  232, 0x0009510b,
     252,  192, 0x02095103,
     273,  262, 0x0009510b,
     297,  284, 0x1d095103,

       0        // eod
};

static const char qt_meta_stringdata_QTimeLine[] = {
    "QTimeLine\0\0x\0valueChanged(qreal)\0"
    "frameChanged(int)\0newState\0"
    "stateChanged(QTimeLine::State)\0"
    "finished()\0start()\0resume()\0stop()\0"
    "paused\0setPaused(bool)\0msec\0"
    "setCurrentTime(int)\0toggleDirection()\0"
    "int\0duration\0updateInterval\0currentTime\0"
    "Direction\0direction\0loopCount\0CurveShape\0"
    "curveShape\0QEasingCurve\0easingCurve\0"
};

void QTimeLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTimeLine *_t = static_cast<QTimeLine *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->frameChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->stateChanged((*reinterpret_cast< QTimeLine::State(*)>(_a[1]))); break;
        case 3: _t->finished(); break;
        case 4: _t->start(); break;
        case 5: _t->resume(); break;
        case 6: _t->stop(); break;
        case 7: _t->setPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setCurrentTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->toggleDirection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QTimeLine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTimeLine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QTimeLine,
      qt_meta_data_QTimeLine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTimeLine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTimeLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTimeLine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTimeLine))
        return static_cast<void*>(const_cast< QTimeLine*>(this));
    return QObject::qt_metacast(_clname);
}

int QTimeLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< int*>(_v) = duration(); break;
        case 1: *reinterpret_cast< int*>(_v) = updateInterval(); break;
        case 2: *reinterpret_cast< int*>(_v) = currentTime(); break;
        case 3: *reinterpret_cast< Direction*>(_v) = direction(); break;
        case 4: *reinterpret_cast< int*>(_v) = loopCount(); break;
        case 5: *reinterpret_cast< CurveShape*>(_v) = curveShape(); break;
        case 6: *reinterpret_cast< QEasingCurve*>(_v) = easingCurve(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDuration(*reinterpret_cast< int*>(_v)); break;
        case 1: setUpdateInterval(*reinterpret_cast< int*>(_v)); break;
        case 2: setCurrentTime(*reinterpret_cast< int*>(_v)); break;
        case 3: setDirection(*reinterpret_cast< Direction*>(_v)); break;
        case 4: setLoopCount(*reinterpret_cast< int*>(_v)); break;
        case 5: setCurveShape(*reinterpret_cast< CurveShape*>(_v)); break;
        case 6: setEasingCurve(*reinterpret_cast< QEasingCurve*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QTimeLine::valueChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTimeLine::frameChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTimeLine::stateChanged(QTimeLine::State _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QTimeLine::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE

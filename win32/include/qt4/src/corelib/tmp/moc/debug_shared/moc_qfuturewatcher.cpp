/****************************************************************************
** Meta object code from reading C++ file 'qfuturewatcher.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../concurrent/qfuturewatcher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfuturewatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QFutureWatcherBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      30,   19,   19,   19, 0x05,
      41,   19,   19,   19, 0x05,
      52,   19,   19,   19, 0x05,
      61,   19,   19,   19, 0x05,
      83,   71,   19,   19, 0x05,
     122,  102,   19,   19, 0x05,
     162,  146,   19,   19, 0x05,
     206,  192,   19,   19, 0x05,
     245,  232,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     274,   19,   19,   19, 0x0a,
     290,  283,   19,   19, 0x0a,
     306,   19,   19,   19, 0x0a,
     314,   19,   19,   19, 0x0a,
     323,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QFutureWatcherBase[] = {
    "QFutureWatcherBase\0\0started()\0finished()\0"
    "canceled()\0paused()\0resumed()\0resultIndex\0"
    "resultReadyAt(int)\0beginIndex,endIndex\0"
    "resultsReadyAt(int,int)\0minimum,maximum\0"
    "progressRangeChanged(int,int)\0"
    "progressValue\0progressValueChanged(int)\0"
    "progressText\0progressTextChanged(QString)\0"
    "cancel()\0paused\0setPaused(bool)\0pause()\0"
    "resume()\0togglePaused()\0"
};

void QFutureWatcherBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QFutureWatcherBase *_t = static_cast<QFutureWatcherBase *>(_o);
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->finished(); break;
        case 2: _t->canceled(); break;
        case 3: _t->paused(); break;
        case 4: _t->resumed(); break;
        case 5: _t->resultReadyAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->resultsReadyAt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->progressRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->progressValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->progressTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->cancel(); break;
        case 11: _t->setPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->pause(); break;
        case 13: _t->resume(); break;
        case 14: _t->togglePaused(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QFutureWatcherBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QFutureWatcherBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QFutureWatcherBase,
      qt_meta_data_QFutureWatcherBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QFutureWatcherBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QFutureWatcherBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QFutureWatcherBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFutureWatcherBase))
        return static_cast<void*>(const_cast< QFutureWatcherBase*>(this));
    return QObject::qt_metacast(_clname);
}

int QFutureWatcherBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void QFutureWatcherBase::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QFutureWatcherBase::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QFutureWatcherBase::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QFutureWatcherBase::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QFutureWatcherBase::resumed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QFutureWatcherBase::resultReadyAt(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QFutureWatcherBase::resultsReadyAt(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QFutureWatcherBase::progressRangeChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QFutureWatcherBase::progressValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QFutureWatcherBase::progressTextChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE

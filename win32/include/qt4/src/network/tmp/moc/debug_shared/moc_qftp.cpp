/****************************************************************************
** Meta object code from reading C++ file 'qftp.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../access/qftp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qftp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QFtp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x05,
      24,    5,    5,    5, 0x05,
      43,    5,    5,    5, 0x05,
      57,   55,    5,    5, 0x05,
      93,   55,    5,    5, 0x05,
     122,    5,    5,    5, 0x05,
     142,   55,    5,    5, 0x05,
     168,    5,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
     179,    5,    5,    5, 0x0a,
     187,    5,    5,    5, 0x08,
     209,    5,    5,    5, 0x08,
     232,   55,    5,    5, 0x08,
     256,    5,    5,    5, 0x08,
     279,   55,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QFtp[] = {
    "QFtp\0\0stateChanged(int)\0listInfo(QUrlInfo)\0"
    "readyRead()\0,\0dataTransferProgress(qint64,qint64)\0"
    "rawCommandReply(int,QString)\0"
    "commandStarted(int)\0commandFinished(int,bool)\0"
    "done(bool)\0abort()\0_q_startNextCommand()\0"
    "_q_piFinished(QString)\0_q_piError(int,QString)\0"
    "_q_piConnectState(int)\0"
    "_q_piFtpReply(int,QString)\0"
};

void QFtp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QFtp *_t = static_cast<QFtp *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->listInfo((*reinterpret_cast< const QUrlInfo(*)>(_a[1]))); break;
        case 2: _t->readyRead(); break;
        case 3: _t->dataTransferProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->rawCommandReply((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->commandStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->commandFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->done((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->abort(); break;
        case 9: _t->d_func()->_q_startNextCommand(); break;
        case 10: _t->d_func()->_q_piFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->d_func()->_q_piError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->d_func()->_q_piConnectState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->d_func()->_q_piFtpReply((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QFtp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QFtp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QFtp,
      qt_meta_data_QFtp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QFtp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QFtp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QFtp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFtp))
        return static_cast<void*>(const_cast< QFtp*>(this));
    return QObject::qt_metacast(_clname);
}

int QFtp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QFtp::stateChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QFtp::listInfo(const QUrlInfo & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QFtp::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QFtp::dataTransferProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QFtp::rawCommandReply(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QFtp::commandStarted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QFtp::commandFinished(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QFtp::done(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE

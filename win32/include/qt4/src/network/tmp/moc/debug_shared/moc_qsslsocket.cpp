/****************************************************************************
** Meta object code from reading C++ file 'qsslsocket.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ssl/qsslsocket.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsslsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSslSocket[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      30,   24,   11,   11, 0x05,
      64,   57,   11,   11, 0x05,
     100,   92,   11,   11, 0x05,
     144,  133,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     174,   11,   11,   11, 0x0a,
     198,   11,   11,   11, 0x0a,
     222,   11,   11,   11, 0x0a,
     263,  240,   11,   11, 0x09,
     317,   11,   11,   11, 0x09,
     352,   11,   11,   11, 0x08,
     371,   11,   11,   11, 0x08,
     390,   11,   11,   11, 0x08,
     412,   11,   11,   11, 0x08,
     462,   11,   11,   11, 0x08,
     505,   11,   11,   11, 0x08,
     524,   11,   11,   11, 0x08,
     552,   11,   11,   11, 0x08,
     574,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QSslSocket[] = {
    "QSslSocket\0\0encrypted()\0error\0"
    "peerVerifyError(QSslError)\0errors\0"
    "sslErrors(QList<QSslError>)\0newMode\0"
    "modeChanged(QSslSocket::SslMode)\0"
    "totalBytes\0encryptedBytesWritten(qint64)\0"
    "startClientEncryption()\0startServerEncryption()\0"
    "ignoreSslErrors()\0hostName,port,openMode\0"
    "connectToHostImplementation(QString,quint16,OpenMode)\0"
    "disconnectFromHostImplementation()\0"
    "_q_connectedSlot()\0_q_hostFoundSlot()\0"
    "_q_disconnectedSlot()\0"
    "_q_stateChangedSlot(QAbstractSocket::SocketState)\0"
    "_q_errorSlot(QAbstractSocket::SocketError)\0"
    "_q_readyReadSlot()\0_q_bytesWrittenSlot(qint64)\0"
    "_q_flushWriteBuffer()\0_q_flushReadBuffer()\0"
};

void QSslSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSslSocket *_t = static_cast<QSslSocket *>(_o);
        switch (_id) {
        case 0: _t->encrypted(); break;
        case 1: _t->peerVerifyError((*reinterpret_cast< const QSslError(*)>(_a[1]))); break;
        case 2: _t->sslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 3: _t->modeChanged((*reinterpret_cast< QSslSocket::SslMode(*)>(_a[1]))); break;
        case 4: _t->encryptedBytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->startClientEncryption(); break;
        case 6: _t->startServerEncryption(); break;
        case 7: _t->ignoreSslErrors(); break;
        case 8: _t->connectToHostImplementation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< OpenMode(*)>(_a[3]))); break;
        case 9: _t->disconnectFromHostImplementation(); break;
        case 10: _t->d_func()->_q_connectedSlot(); break;
        case 11: _t->d_func()->_q_hostFoundSlot(); break;
        case 12: _t->d_func()->_q_disconnectedSlot(); break;
        case 13: _t->d_func()->_q_stateChangedSlot((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 14: _t->d_func()->_q_errorSlot((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 15: _t->d_func()->_q_readyReadSlot(); break;
        case 16: _t->d_func()->_q_bytesWrittenSlot((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 17: _t->d_func()->_q_flushWriteBuffer(); break;
        case 18: _t->d_func()->_q_flushReadBuffer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QSslSocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSslSocket::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_QSslSocket,
      qt_meta_data_QSslSocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSslSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSslSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSslSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSslSocket))
        return static_cast<void*>(const_cast< QSslSocket*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int QSslSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void QSslSocket::encrypted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QSslSocket::peerVerifyError(const QSslError & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSslSocket::sslErrors(const QList<QSslError> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSslSocket::modeChanged(QSslSocket::SslMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QSslSocket::encryptedBytesWritten(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'qclipboard.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../kernel/qclipboard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qclipboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QClipboard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x05,
      43,   11,   11,   11, 0x05,
      62,   11,   11,   11, 0x05,
      82,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QClipboard[] = {
    "QClipboard\0\0mode\0changed(QClipboard::Mode)\0"
    "selectionChanged()\0findBufferChanged()\0"
    "dataChanged()\0ownerDestroyed()\0"
};

void QClipboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QClipboard *_t = static_cast<QClipboard *>(_o);
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< QClipboard::Mode(*)>(_a[1]))); break;
        case 1: _t->selectionChanged(); break;
        case 2: _t->findBufferChanged(); break;
        case 3: _t->dataChanged(); break;
        case 4: _t->ownerDestroyed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QClipboard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QClipboard::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QClipboard,
      qt_meta_data_QClipboard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QClipboard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QClipboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QClipboard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QClipboard))
        return static_cast<void*>(const_cast< QClipboard*>(this));
    return QObject::qt_metacast(_clname);
}

int QClipboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QClipboard::changed(QClipboard::Mode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QClipboard::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QClipboard::findBufferChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QClipboard::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE

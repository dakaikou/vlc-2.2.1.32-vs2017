/****************************************************************************
** Meta object code from reading C++ file 'errors.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "errors.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'errors.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ErrorsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      22,   13,   13,   13, 0x08,
      30,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ErrorsDialog[] = {
    "ErrorsDialog\0\0close()\0clear()\0dontShow()\0"
};

void ErrorsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ErrorsDialog *_t = static_cast<ErrorsDialog *>(_o);
        switch (_id) {
        case 0: _t->close(); break;
        case 1: _t->clear(); break;
        case 2: _t->dontShow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ErrorsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ErrorsDialog::staticMetaObject = {
    { &QVLCDialog::staticMetaObject, qt_meta_stringdata_ErrorsDialog,
      qt_meta_data_ErrorsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ErrorsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ErrorsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ErrorsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ErrorsDialog))
        return static_cast<void*>(const_cast< ErrorsDialog*>(this));
    if (!strcmp(_clname, "Singleton<ErrorsDialog>"))
        return static_cast< Singleton<ErrorsDialog>*>(const_cast< ErrorsDialog*>(this));
    return QVLCDialog::qt_metacast(_clname);
}

int ErrorsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVLCDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

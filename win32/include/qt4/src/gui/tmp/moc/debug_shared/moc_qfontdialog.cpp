/****************************************************************************
** Meta object code from reading C++ file 'qfontdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialogs/qfontdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfontdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QFontDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   54, // properties
       1,   62, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   13,   12,   12, 0x05,
      44,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   12,   12,   12, 0x08,
      88,   12,   12,   12, 0x08,
     114,   12,   12,   12, 0x08,
     147,   12,   12,   12, 0x08,
     172,   12,   12,   12, 0x08,
     196,   12,   12,   12, 0x08,

 // properties: name, type, flags
     220,  214, 0x40495103,
     250,  232, 0x0009510b,

 // properties: notify_signal_id
       0,
       0,

 // enums: name, flags, count, data
     258, 0x0,    2,   66,

 // enum data: key, value
     275, uint(QFontDialog::NoButtons),
     285, uint(QFontDialog::DontUseNativeDialog),

       0        // eod
};

static const char qt_meta_stringdata_QFontDialog[] = {
    "QFontDialog\0\0font\0currentFontChanged(QFont)\0"
    "fontSelected(QFont)\0_q_sizeChanged(QString)\0"
    "_q_familyHighlighted(int)\0"
    "_q_writingSystemHighlighted(int)\0"
    "_q_styleHighlighted(int)\0"
    "_q_sizeHighlighted(int)\0_q_updateSample()\0"
    "QFont\0currentFont\0FontDialogOptions\0"
    "options\0FontDialogOption\0NoButtons\0"
    "DontUseNativeDialog\0"
};

void QFontDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QFontDialog *_t = static_cast<QFontDialog *>(_o);
        switch (_id) {
        case 0: _t->currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 1: _t->fontSelected((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_sizeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->d_func()->_q_familyHighlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->d_func()->_q_writingSystemHighlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_styleHighlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_sizeHighlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->d_func()->_q_updateSample(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QFontDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QFontDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QFontDialog,
      qt_meta_data_QFontDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QFontDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QFontDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QFontDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFontDialog))
        return static_cast<void*>(const_cast< QFontDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QFontDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QFont*>(_v) = currentFont(); break;
        case 1: *reinterpret_cast< FontDialogOptions*>(_v) = options(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCurrentFont(*reinterpret_cast< QFont*>(_v)); break;
        case 1: setOptions(*reinterpret_cast< FontDialogOptions*>(_v)); break;
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
void QFontDialog::currentFontChanged(const QFont & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QFontDialog::fontSelected(const QFont & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

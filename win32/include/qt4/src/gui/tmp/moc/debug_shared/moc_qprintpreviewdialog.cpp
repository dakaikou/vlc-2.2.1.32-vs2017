/****************************************************************************
** Meta object code from reading C++ file 'qprintpreviewdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialogs/qprintpreviewdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprintpreviewdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPrintPreviewDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   55,   20,   20, 0x08,
      79,   20,   20,   20, 0x08,
      91,   20,   20,   20, 0x08,
     104,   55,   20,   20, 0x08,
     126,   55,   20,   20, 0x08,
     147,   20,   20,   20, 0x08,
     166,   20,   20,   20, 0x08,
     177,   20,   20,   20, 0x08,
     192,   20,   20,   20, 0x08,
     212,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QPrintPreviewDialog[] = {
    "QPrintPreviewDialog\0\0printer\0"
    "paintRequested(QPrinter*)\0action\0"
    "_q_fit(QAction*)\0_q_zoomIn()\0_q_zoomOut()\0"
    "_q_navigate(QAction*)\0_q_setMode(QAction*)\0"
    "_q_pageNumEdited()\0_q_print()\0"
    "_q_pageSetup()\0_q_previewChanged()\0"
    "_q_zoomFactorChanged()\0"
};

void QPrintPreviewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QPrintPreviewDialog *_t = static_cast<QPrintPreviewDialog *>(_o);
        switch (_id) {
        case 0: _t->paintRequested((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 1: _t->d_func()->_q_fit((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_zoomIn(); break;
        case 3: _t->d_func()->_q_zoomOut(); break;
        case 4: _t->d_func()->_q_navigate((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_setMode((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_pageNumEdited(); break;
        case 7: _t->d_func()->_q_print(); break;
        case 8: _t->d_func()->_q_pageSetup(); break;
        case 9: _t->d_func()->_q_previewChanged(); break;
        case 10: _t->d_func()->_q_zoomFactorChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QPrintPreviewDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPrintPreviewDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QPrintPreviewDialog,
      qt_meta_data_QPrintPreviewDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPrintPreviewDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPrintPreviewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPrintPreviewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPrintPreviewDialog))
        return static_cast<void*>(const_cast< QPrintPreviewDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QPrintPreviewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QPrintPreviewDialog::paintRequested(QPrinter * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

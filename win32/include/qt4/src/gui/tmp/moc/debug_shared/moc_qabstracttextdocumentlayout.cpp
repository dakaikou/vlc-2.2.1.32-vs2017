/****************************************************************************
** Meta object code from reading C++ file 'qabstracttextdocumentlayout.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../text/qabstracttextdocumentlayout.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstracttextdocumentlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAbstractTextDocumentLayout[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x05,
      44,   28,   28,   28, 0x25,
      59,   53,   28,   28, 0x05,
      91,   83,   28,   28, 0x05,
     128,  119,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
     154,  150,   28,   28, 0x08,
     188,   28,  184,   28, 0x08,
     221,   28,  214,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QAbstractTextDocumentLayout[] = {
    "QAbstractTextDocumentLayout\0\0"
    "update(QRectF)\0update()\0block\0"
    "updateBlock(QTextBlock)\0newSize\0"
    "documentSizeChanged(QSizeF)\0newPages\0"
    "pageCountChanged(int)\0obj\0"
    "_q_handlerDestroyed(QObject*)\0int\0"
    "_q_dynamicPageCountSlot()\0QSizeF\0"
    "_q_dynamicDocumentSizeSlot()\0"
};

void QAbstractTextDocumentLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QAbstractTextDocumentLayout *_t = static_cast<QAbstractTextDocumentLayout *>(_o);
        switch (_id) {
        case 0: _t->update((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 1: _t->update(); break;
        case 2: _t->updateBlock((*reinterpret_cast< const QTextBlock(*)>(_a[1]))); break;
        case 3: _t->documentSizeChanged((*reinterpret_cast< const QSizeF(*)>(_a[1]))); break;
        case 4: _t->pageCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_handlerDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: { int _r = _t->d_func()->_q_dynamicPageCountSlot();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { QSizeF _r = _t->d_func()->_q_dynamicDocumentSizeSlot();
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QAbstractTextDocumentLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QAbstractTextDocumentLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractTextDocumentLayout,
      qt_meta_data_QAbstractTextDocumentLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QAbstractTextDocumentLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QAbstractTextDocumentLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QAbstractTextDocumentLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractTextDocumentLayout))
        return static_cast<void*>(const_cast< QAbstractTextDocumentLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int QAbstractTextDocumentLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QAbstractTextDocumentLayout::update(const QRectF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void QAbstractTextDocumentLayout::updateBlock(const QTextBlock & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAbstractTextDocumentLayout::documentSizeChanged(const QSizeF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QAbstractTextDocumentLayout::pageCountChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE

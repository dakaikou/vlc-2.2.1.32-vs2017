/****************************************************************************
** Meta object code from reading C++ file 'qcombobox_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qcombobox_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcombobox_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QComboBoxListView[] = {

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

static const char qt_meta_stringdata_QComboBoxListView[] = {
    "QComboBoxListView\0"
};

void QComboBoxListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QComboBoxListView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QComboBoxListView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_QComboBoxListView,
      qt_meta_data_QComboBoxListView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QComboBoxListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QComboBoxListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QComboBoxListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QComboBoxListView))
        return static_cast<void*>(const_cast< QComboBoxListView*>(this));
    return QListView::qt_metacast(_clname);
}

int QComboBoxListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QComboBoxPrivateScroller[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   26,   25,   25, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QComboBoxPrivateScroller[] = {
    "QComboBoxPrivateScroller\0\0action\0"
    "doScroll(int)\0"
};

void QComboBoxPrivateScroller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QComboBoxPrivateScroller *_t = static_cast<QComboBoxPrivateScroller *>(_o);
        switch (_id) {
        case 0: _t->doScroll((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QComboBoxPrivateScroller::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QComboBoxPrivateScroller::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QComboBoxPrivateScroller,
      qt_meta_data_QComboBoxPrivateScroller, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QComboBoxPrivateScroller::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QComboBoxPrivateScroller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QComboBoxPrivateScroller::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QComboBoxPrivateScroller))
        return static_cast<void*>(const_cast< QComboBoxPrivateScroller*>(this));
    return QWidget::qt_metacast(_clname);
}

int QComboBoxPrivateScroller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QComboBoxPrivateScroller::doScroll(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QComboBoxPrivateContainer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,
      53,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   67,   26,   26, 0x0a,
      94,   26,   26,   26, 0x0a,
     112,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QComboBoxPrivateContainer[] = {
    "QComboBoxPrivateContainer\0\0"
    "itemSelected(QModelIndex)\0resetButton()\0"
    "action\0scrollItemView(int)\0updateScrollers()\0"
    "viewDestroyed()\0"
};

void QComboBoxPrivateContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QComboBoxPrivateContainer *_t = static_cast<QComboBoxPrivateContainer *>(_o);
        switch (_id) {
        case 0: _t->itemSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->resetButton(); break;
        case 2: _t->scrollItemView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateScrollers(); break;
        case 4: _t->viewDestroyed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QComboBoxPrivateContainer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QComboBoxPrivateContainer::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QComboBoxPrivateContainer,
      qt_meta_data_QComboBoxPrivateContainer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QComboBoxPrivateContainer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QComboBoxPrivateContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QComboBoxPrivateContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QComboBoxPrivateContainer))
        return static_cast<void*>(const_cast< QComboBoxPrivateContainer*>(this));
    return QFrame::qt_metacast(_clname);
}

int QComboBoxPrivateContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void QComboBoxPrivateContainer::itemSelected(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QComboBoxPrivateContainer::resetButton()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_QComboMenuDelegate[] = {

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

static const char qt_meta_stringdata_QComboMenuDelegate[] = {
    "QComboMenuDelegate\0"
};

void QComboMenuDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QComboMenuDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QComboMenuDelegate::staticMetaObject = {
    { &QAbstractItemDelegate::staticMetaObject, qt_meta_stringdata_QComboMenuDelegate,
      qt_meta_data_QComboMenuDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QComboMenuDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QComboMenuDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QComboMenuDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QComboMenuDelegate))
        return static_cast<void*>(const_cast< QComboMenuDelegate*>(this));
    return QAbstractItemDelegate::qt_metacast(_clname);
}

int QComboMenuDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QComboBoxDelegate[] = {

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

static const char qt_meta_stringdata_QComboBoxDelegate[] = {
    "QComboBoxDelegate\0"
};

void QComboBoxDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QComboBoxDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QComboBoxDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_QComboBoxDelegate,
      qt_meta_data_QComboBoxDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QComboBoxDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QComboBoxDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QComboBoxDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QComboBoxDelegate))
        return static_cast<void*>(const_cast< QComboBoxDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int QComboBoxDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

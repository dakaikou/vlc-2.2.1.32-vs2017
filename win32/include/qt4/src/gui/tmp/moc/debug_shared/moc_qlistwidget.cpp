/****************************************************************************
** Meta object code from reading C++ file 'qlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../itemviews/qlistwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QListWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       3,  124, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   13,   12,   12, 0x05,
      48,   13,   12,   12, 0x05,
      78,   13,   12,   12, 0x05,
     114,   13,   12,   12, 0x05,
     146,   13,   12,   12, 0x05,
     176,   13,   12,   12, 0x05,
     223,  206,   12,   12, 0x05,
     289,  277,   12,   12, 0x05,
     328,  317,   12,   12, 0x05,
     351,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     384,  374,   12,   12, 0x0a,
     451,   13,   12,   12, 0x2a,
     488,   12,   12,   12, 0x0a,
     502,  496,   12,   12, 0x08,
     534,  496,   12,   12, 0x08,
     566,  496,   12,   12, 0x08,
     604,  496,   12,   12, 0x08,
     638,  496,   12,   12, 0x08,
     670,  496,   12,   12, 0x08,
     719,  702,   12,   12, 0x08,
     770,   12,   12,   12, 0x08,
     800,  780,   12,   12, 0x08,

 // properties: name, type, flags
     844,  840, 0x02095001,
     317,  840, 0x02595103,
     855,  850, 0x01095103,

 // properties: notify_signal_id
       0,
       8,
       0,

       0        // eod
};

static const char qt_meta_stringdata_QListWidget[] = {
    "QListWidget\0\0item\0itemPressed(QListWidgetItem*)\0"
    "itemClicked(QListWidgetItem*)\0"
    "itemDoubleClicked(QListWidgetItem*)\0"
    "itemActivated(QListWidgetItem*)\0"
    "itemEntered(QListWidgetItem*)\0"
    "itemChanged(QListWidgetItem*)\0"
    "current,previous\0"
    "currentItemChanged(QListWidgetItem*,QListWidgetItem*)\0"
    "currentText\0currentTextChanged(QString)\0"
    "currentRow\0currentRowChanged(int)\0"
    "itemSelectionChanged()\0item,hint\0"
    "scrollToItem(const QListWidgetItem*,QAbstractItemView::ScrollHint)\0"
    "scrollToItem(const QListWidgetItem*)\0"
    "clear()\0index\0_q_emitItemPressed(QModelIndex)\0"
    "_q_emitItemClicked(QModelIndex)\0"
    "_q_emitItemDoubleClicked(QModelIndex)\0"
    "_q_emitItemActivated(QModelIndex)\0"
    "_q_emitItemEntered(QModelIndex)\0"
    "_q_emitItemChanged(QModelIndex)\0"
    "previous,current\0"
    "_q_emitCurrentItemChanged(QModelIndex,QModelIndex)\0"
    "_q_sort()\0topLeft,bottomRight\0"
    "_q_dataChanged(QModelIndex,QModelIndex)\0"
    "int\0count\0bool\0sortingEnabled\0"
};

void QListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QListWidget *_t = static_cast<QListWidget *>(_o);
        switch (_id) {
        case 0: _t->itemPressed((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->itemActivated((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->itemEntered((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 7: _t->currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->itemSelectionChanged(); break;
        case 10: _t->scrollToItem((*reinterpret_cast< const QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemView::ScrollHint(*)>(_a[2]))); break;
        case 11: _t->scrollToItem((*reinterpret_cast< const QListWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->clear(); break;
        case 13: _t->d_func()->_q_emitItemPressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 14: _t->d_func()->_q_emitItemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 15: _t->d_func()->_q_emitItemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 16: _t->d_func()->_q_emitItemActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 17: _t->d_func()->_q_emitItemEntered((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 18: _t->d_func()->_q_emitItemChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 19: _t->d_func()->_q_emitCurrentItemChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 20: _t->d_func()->_q_sort(); break;
        case 21: _t->d_func()->_q_dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QListWidget::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_QListWidget,
      qt_meta_data_QListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QListWidget))
        return static_cast<void*>(const_cast< QListWidget*>(this));
    return QListView::qt_metacast(_clname);
}

int QListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = count(); break;
        case 1: *reinterpret_cast< int*>(_v) = currentRow(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isSortingEnabled(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setCurrentRow(*reinterpret_cast< int*>(_v)); break;
        case 2: setSortingEnabled(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QListWidget::itemPressed(QListWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QListWidget::itemClicked(QListWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QListWidget::itemDoubleClicked(QListWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QListWidget::itemActivated(QListWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QListWidget::itemEntered(QListWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QListWidget::itemChanged(QListWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QListWidget::currentItemChanged(QListWidgetItem * _t1, QListWidgetItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QListWidget::currentTextChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QListWidget::currentRowChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QListWidget::itemSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE

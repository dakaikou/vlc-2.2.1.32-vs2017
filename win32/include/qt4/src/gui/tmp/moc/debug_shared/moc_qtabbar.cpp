/****************************************************************************
** Meta object code from reading C++ file 'qtabbar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qtabbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtabbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QTabBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
      12,   54, // properties
       1,  102, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,    9,    8,    8, 0x05,
      35,    9,    8,    8, 0x05,
      66,   58,    8,    8, 0x05,
      84,    8,    8,    8, 0x15,

 // slots: signature, parameters, type, tag, flags
      98,    9,    8,    8, 0x0a,
     119,    9,    8,    8, 0x1a,
     138,    8,    8,    8, 0x08,
     154,    8,    8,    8, 0x08,

 // properties: name, type, flags
     174,  168, 0x0009510b,
     184,  180, 0x02495103,
     197,  180, 0x02095001,
     208,  203, 0x01095103,
     223,  217, 0x15095103,
     250,  232, 0x0009510b,
     260,  203, 0x01095103,
     278,  203, 0x01095103,
     309,  291, 0x0009510b,
     335,  203, 0x01095103,
     345,  203, 0x01095103,
     353,  203, 0x01095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
     168, 0x0,    8,  106,

 // enum data: key, value
     366, uint(QTabBar::RoundedNorth),
     379, uint(QTabBar::RoundedSouth),
     392, uint(QTabBar::RoundedWest),
     404, uint(QTabBar::RoundedEast),
     416, uint(QTabBar::TriangularNorth),
     432, uint(QTabBar::TriangularSouth),
     448, uint(QTabBar::TriangularWest),
     463, uint(QTabBar::TriangularEast),

       0        // eod
};

static const char qt_meta_stringdata_QTabBar[] = {
    "QTabBar\0\0index\0currentChanged(int)\0"
    "tabCloseRequested(int)\0from,to\0"
    "tabMoved(int,int)\0selected(int)\0"
    "setCurrentIndex(int)\0setCurrentTab(int)\0"
    "_q_scrollTabs()\0_q_closeTab()\0Shape\0"
    "shape\0int\0currentIndex\0count\0bool\0"
    "drawBase\0QSize\0iconSize\0Qt::TextElideMode\0"
    "elideMode\0usesScrollButtons\0tabsClosable\0"
    "SelectionBehavior\0selectionBehaviorOnRemove\0"
    "expanding\0movable\0documentMode\0"
    "RoundedNorth\0RoundedSouth\0RoundedWest\0"
    "RoundedEast\0TriangularNorth\0TriangularSouth\0"
    "TriangularWest\0TriangularEast\0"
};

void QTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTabBar *_t = static_cast<QTabBar *>(_o);
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->tabMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->selected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setCurrentTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_scrollTabs(); break;
        case 7: _t->d_func()->_q_closeTab(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QTabBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTabBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QTabBar,
      qt_meta_data_QTabBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTabBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTabBar))
        return static_cast<void*>(const_cast< QTabBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int QTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< Shape*>(_v) = shape(); break;
        case 1: *reinterpret_cast< int*>(_v) = currentIndex(); break;
        case 2: *reinterpret_cast< int*>(_v) = count(); break;
        case 3: *reinterpret_cast< bool*>(_v) = drawBase(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = iconSize(); break;
        case 5: *reinterpret_cast< Qt::TextElideMode*>(_v) = elideMode(); break;
        case 6: *reinterpret_cast< bool*>(_v) = usesScrollButtons(); break;
        case 7: *reinterpret_cast< bool*>(_v) = tabsClosable(); break;
        case 8: *reinterpret_cast< SelectionBehavior*>(_v) = selectionBehaviorOnRemove(); break;
        case 9: *reinterpret_cast< bool*>(_v) = expanding(); break;
        case 10: *reinterpret_cast< bool*>(_v) = isMovable(); break;
        case 11: *reinterpret_cast< bool*>(_v) = documentMode(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setShape(*reinterpret_cast< Shape*>(_v)); break;
        case 1: setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 3: setDrawBase(*reinterpret_cast< bool*>(_v)); break;
        case 4: setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 5: setElideMode(*reinterpret_cast< Qt::TextElideMode*>(_v)); break;
        case 6: setUsesScrollButtons(*reinterpret_cast< bool*>(_v)); break;
        case 7: setTabsClosable(*reinterpret_cast< bool*>(_v)); break;
        case 8: setSelectionBehaviorOnRemove(*reinterpret_cast< SelectionBehavior*>(_v)); break;
        case 9: setExpanding(*reinterpret_cast< bool*>(_v)); break;
        case 10: setMovable(*reinterpret_cast< bool*>(_v)); break;
        case 11: setDocumentMode(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QTabBar::currentChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTabBar::tabCloseRequested(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTabBar::tabMoved(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QTabBar::selected(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE

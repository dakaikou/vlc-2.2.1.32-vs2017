/****************************************************************************
** Meta object code from reading C++ file 'qmenu.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qmenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,   69, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,
      21,    6,    6,    6, 0x05,
      42,   35,    6,    6, 0x05,
      62,   35,    6,    6, 0x05,
      87,   80,    6,    6, 0x15,
     102,   80,    6,    6, 0x15,

 // slots: signature, parameters, type, tag, flags
     119,    6,    6,    6, 0x08,
     145,    6,    6,    6, 0x08,
     168,    6,    6,    6, 0x08,
     189,    6,    6,    6, 0x08,
     208,    6,    6,    6, 0x08,

 // properties: name, type, flags
     246,  241, 0x01095103,
     269,  261, 0x0a095103,
     281,  275, 0x45095103,
     286,  241, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QMenu[] = {
    "QMenu\0\0aboutToShow()\0aboutToHide()\0"
    "action\0triggered(QAction*)\0hovered(QAction*)\0"
    "itemId\0activated(int)\0highlighted(int)\0"
    "internalSetSloppyAction()\0"
    "internalDelayedPopup()\0_q_actionTriggered()\0"
    "_q_actionHovered()\0_q_overrideMenuActionDestroyed()\0"
    "bool\0tearOffEnabled\0QString\0title\0"
    "QIcon\0icon\0separatorsCollapsible\0"
};

void QMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QMenu *_t = static_cast<QMenu *>(_o);
        switch (_id) {
        case 0: _t->aboutToShow(); break;
        case 1: _t->aboutToHide(); break;
        case 2: _t->triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->hovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->highlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->internalSetSloppyAction(); break;
        case 7: _t->internalDelayedPopup(); break;
        case 8: _t->d_func()->_q_actionTriggered(); break;
        case 9: _t->d_func()->_q_actionHovered(); break;
        case 10: _t->d_func()->_q_overrideMenuActionDestroyed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QMenu,
      qt_meta_data_QMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMenu))
        return static_cast<void*>(const_cast< QMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int QMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isTearOffEnabled(); break;
        case 1: *reinterpret_cast< QString*>(_v) = title(); break;
        case 2: *reinterpret_cast< QIcon*>(_v) = icon(); break;
        case 3: *reinterpret_cast< bool*>(_v) = separatorsCollapsible(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTearOffEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 3: setSeparatorsCollapsible(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QMenu::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QMenu::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QMenu::triggered(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMenu::hovered(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QMenu::activated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QMenu::highlighted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE

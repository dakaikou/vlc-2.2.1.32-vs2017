/****************************************************************************
** Meta object code from reading C++ file 'qapplication.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../kernel/qapplication.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QApplication[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      12,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      41,   33,   13,   13, 0x05,
      73,   13,   13,   13, 0x05,
     110,   95,   13,   13, 0x05,
     146,   95,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     187,  181,   13,   13, 0x0a,
     218,  210,   13,   13, 0x0a,
     247,   13,  242,   13, 0x0a,
     264,   13,   13,   13, 0x0a,
     282,   13,   13,   13, 0x0a,

 // properties: name, type, flags
     312,  292, 0x0009510b,
     334,  328, 0x45095103,
     349,  345, 0x02095103,
     365,  345, 0x02095103,
     385,  345, 0x02095103,
     407,  345, 0x02095103,
     430,  424, 0x15095103,
     442,  345, 0x02095103,
     456,  345, 0x02095103,
     474,  242, 0x01095103,
     505,  497, 0x0a095103,
     516,  242, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QApplication[] = {
    "QApplication\0\0lastWindowClosed()\0"
    "old,now\0focusChanged(QWidget*,QWidget*)\0"
    "fontDatabaseChanged()\0sessionManager\0"
    "commitDataRequest(QSessionManager&)\0"
    "saveStateRequest(QSessionManager&)\0"
    "sheet\0setStyleSheet(QString)\0enabled\0"
    "setAutoSipEnabled(bool)\0bool\0"
    "autoSipEnabled()\0closeAllWindows()\0"
    "aboutQt()\0Qt::LayoutDirection\0"
    "layoutDirection\0QIcon\0windowIcon\0int\0"
    "cursorFlashTime\0doubleClickInterval\0"
    "keyboardInputInterval\0wheelScrollLines\0"
    "QSize\0globalStrut\0startDragTime\0"
    "startDragDistance\0quitOnLastWindowClosed\0"
    "QString\0styleSheet\0autoSipEnabled\0"
};

void QApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QApplication *_t = static_cast<QApplication *>(_o);
        switch (_id) {
        case 0: _t->lastWindowClosed(); break;
        case 1: _t->focusChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 2: _t->fontDatabaseChanged(); break;
        case 3: _t->commitDataRequest((*reinterpret_cast< QSessionManager(*)>(_a[1]))); break;
        case 4: _t->saveStateRequest((*reinterpret_cast< QSessionManager(*)>(_a[1]))); break;
        case 5: _t->setStyleSheet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setAutoSipEnabled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: { bool _r = _t->autoSipEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->closeAllWindows(); break;
        case 9: _t->aboutQt(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QApplication::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QApplication::staticMetaObject = {
    { &QCoreApplication::staticMetaObject, qt_meta_stringdata_QApplication,
      qt_meta_data_QApplication, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QApplication::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QApplication))
        return static_cast<void*>(const_cast< QApplication*>(this));
    return QCoreApplication::qt_metacast(_clname);
}

int QApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCoreApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::LayoutDirection*>(_v) = layoutDirection(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = windowIcon(); break;
        case 2: *reinterpret_cast< int*>(_v) = cursorFlashTime(); break;
        case 3: *reinterpret_cast< int*>(_v) = doubleClickInterval(); break;
        case 4: *reinterpret_cast< int*>(_v) = keyboardInputInterval(); break;
        case 5: *reinterpret_cast< int*>(_v) = wheelScrollLines(); break;
        case 6: *reinterpret_cast< QSize*>(_v) = globalStrut(); break;
        case 7: *reinterpret_cast< int*>(_v) = startDragTime(); break;
        case 8: *reinterpret_cast< int*>(_v) = startDragDistance(); break;
        case 9: *reinterpret_cast< bool*>(_v) = quitOnLastWindowClosed(); break;
        case 10: *reinterpret_cast< QString*>(_v) = styleSheet(); break;
        case 11: *reinterpret_cast< bool*>(_v) = autoSipEnabled(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        case 1: setWindowIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: setCursorFlashTime(*reinterpret_cast< int*>(_v)); break;
        case 3: setDoubleClickInterval(*reinterpret_cast< int*>(_v)); break;
        case 4: setKeyboardInputInterval(*reinterpret_cast< int*>(_v)); break;
        case 5: setWheelScrollLines(*reinterpret_cast< int*>(_v)); break;
        case 6: setGlobalStrut(*reinterpret_cast< QSize*>(_v)); break;
        case 7: setStartDragTime(*reinterpret_cast< int*>(_v)); break;
        case 8: setStartDragDistance(*reinterpret_cast< int*>(_v)); break;
        case 9: setQuitOnLastWindowClosed(*reinterpret_cast< bool*>(_v)); break;
        case 10: setStyleSheet(*reinterpret_cast< QString*>(_v)); break;
        case 11: setAutoSipEnabled(*reinterpret_cast< bool*>(_v)); break;
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
void QApplication::lastWindowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QApplication::focusChanged(QWidget * _t1, QWidget * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QApplication::fontDatabaseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QApplication::commitDataRequest(QSessionManager & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QApplication::saveStateRequest(QSessionManager & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE

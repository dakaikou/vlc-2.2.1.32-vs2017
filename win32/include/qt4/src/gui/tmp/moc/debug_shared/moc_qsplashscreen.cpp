/****************************************************************************
** Meta object code from reading C++ file 'qsplashscreen.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qsplashscreen.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsplashscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSplashScreen[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      71,   47,   14,   14, 0x0a,
     121,  103,   14,   14, 0x2a,
     146,   15,   14,   14, 0x2a,
     167,   14,   14,   14, 0x0a,
     202,  182,   14,   14, 0x1a,
     244,  230,   14,   14, 0x3a,
     269,  265,   14,   14, 0x3a,
     286,   14,   14,   14, 0x1a,

       0        // eod
};

static const char qt_meta_stringdata_QSplashScreen[] = {
    "QSplashScreen\0\0message\0messageChanged(QString)\0"
    "message,alignment,color\0"
    "showMessage(QString,int,QColor)\0"
    "message,alignment\0showMessage(QString,int)\0"
    "showMessage(QString)\0clearMessage()\0"
    "str,alignment,color\0message(QString,int,QColor)\0"
    "str,alignment\0message(QString,int)\0"
    "str\0message(QString)\0clear()\0"
};

void QSplashScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSplashScreen *_t = static_cast<QSplashScreen *>(_o);
        switch (_id) {
        case 0: _t->messageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 2: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->clearMessage(); break;
        case 5: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 6: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->clear(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QSplashScreen::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSplashScreen::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QSplashScreen,
      qt_meta_data_QSplashScreen, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSplashScreen::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSplashScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSplashScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSplashScreen))
        return static_cast<void*>(const_cast< QSplashScreen*>(this));
    return QWidget::qt_metacast(_clname);
}

int QSplashScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QSplashScreen::messageChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

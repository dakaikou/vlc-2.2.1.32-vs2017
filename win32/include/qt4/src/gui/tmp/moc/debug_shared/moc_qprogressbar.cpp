/****************************************************************************
** Meta object code from reading C++ file 'qprogressbar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qprogressbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprogressbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QProgressBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
      10,   49, // properties
       1,   89, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   13,   13,   13, 0x0a,
      62,   46,   13,   13, 0x0a,
      88,   80,   13,   13, 0x0a,
     112,  104,   13,   13, 0x0a,
     128,   14,   13,   13, 0x0a,
     142,   13,   13,   13, 0x0a,

 // properties: name, type, flags
      80,  174, 0x02095103,
     104,  174, 0x02095103,
     186,  178, 0x0a095001,
      14,  174, 0x02495103,
     205,  191, 0x0009510b,
     220,  215, 0x01095103,
     248,  232, 0x0009510b,
     260,  215, 0x01095103,
     289,  279, 0x0009510b,
     303,  178, 0x0a095103,

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

 // enums: name, flags, count, data
     279, 0x0,    2,   93,

 // enum data: key, value
     310, uint(QProgressBar::TopToBottom),
     322, uint(QProgressBar::BottomToTop),

       0        // eod
};

static const char qt_meta_stringdata_QProgressBar[] = {
    "QProgressBar\0\0value\0valueChanged(int)\0"
    "reset()\0minimum,maximum\0setRange(int,int)\0"
    "minimum\0setMinimum(int)\0maximum\0"
    "setMaximum(int)\0setValue(int)\0"
    "setOrientation(Qt::Orientation)\0int\0"
    "QString\0text\0Qt::Alignment\0alignment\0"
    "bool\0textVisible\0Qt::Orientation\0"
    "orientation\0invertedAppearance\0Direction\0"
    "textDirection\0format\0TopToBottom\0"
    "BottomToTop\0"
};

void QProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QProgressBar *_t = static_cast<QProgressBar *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->reset(); break;
        case 2: _t->setRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setMinimum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setMaximum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setOrientation((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QProgressBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QProgressBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QProgressBar,
      qt_meta_data_QProgressBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QProgressBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QProgressBar))
        return static_cast<void*>(const_cast< QProgressBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int QProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = minimum(); break;
        case 1: *reinterpret_cast< int*>(_v) = maximum(); break;
        case 2: *reinterpret_cast< QString*>(_v) = text(); break;
        case 3: *reinterpret_cast< int*>(_v) = value(); break;
        case 4: *reinterpret_cast< Qt::Alignment*>(_v) = alignment(); break;
        case 5: *reinterpret_cast< bool*>(_v) = isTextVisible(); break;
        case 6: *reinterpret_cast< Qt::Orientation*>(_v) = orientation(); break;
        case 7: *reinterpret_cast< bool*>(_v) = invertedAppearance(); break;
        case 8: *reinterpret_cast< Direction*>(_v) = textDirection(); break;
        case 9: *reinterpret_cast< QString*>(_v) = format(); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMinimum(*reinterpret_cast< int*>(_v)); break;
        case 1: setMaximum(*reinterpret_cast< int*>(_v)); break;
        case 3: setValue(*reinterpret_cast< int*>(_v)); break;
        case 4: setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 5: setTextVisible(*reinterpret_cast< bool*>(_v)); break;
        case 6: setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 7: setInvertedAppearance(*reinterpret_cast< bool*>(_v)); break;
        case 8: setTextDirection(*reinterpret_cast< Direction*>(_v)); break;
        case 9: setFormat(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QProgressBar::valueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

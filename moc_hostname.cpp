/****************************************************************************
** Meta object code from reading C++ file 'hostname.h'
**
** Created: Tue Oct 7 20:22:25 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "hostname.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hostname.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Hostname[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,   26,   26,   26, 0x08,
      27,   26,   26,   26, 0x08,
      44,   26,   26,   26, 0x08,
      55,   98,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Hostname[] = {
    "Hostname\0setDefaultPort()\0\0requestNewData()\0"
    "readPort()\0displayError(QAbstractSocket::SocketError)\0"
    "socketError\0"
};

void Hostname::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Hostname *_t = static_cast<Hostname *>(_o);
        switch (_id) {
        case 0: _t->setDefaultPort(); break;
        case 1: _t->requestNewData(); break;
        case 2: _t->readPort(); break;
        case 3: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Hostname::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Hostname::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Hostname,
      qt_meta_data_Hostname, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Hostname::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Hostname::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Hostname::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Hostname))
        return static_cast<void*>(const_cast< Hostname*>(this));
    if (!strcmp(_clname, "Ui::Hostname"))
        return static_cast< Ui::Hostname*>(const_cast< Hostname*>(this));
    return QDialog::qt_metacast(_clname);
}

int Hostname::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

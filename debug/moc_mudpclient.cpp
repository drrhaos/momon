/****************************************************************************
** Meta object code from reading C++ file 'mudpclient.h'
**
** Created: Mon 16. Apr 22:00:18 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mudpclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mudpclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MUdpClient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      85,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     164,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MUdpClient[] = {
    "MUdpClient\0\0"
    "strStatusName,nameUser,nameSurname,name,namePatronymic,namePost,ipAdre"
    "ss\0"
    "signalsNewUser(QString&,QString&,QString&,QString&,QString&,QString&,Q"
    "String&)\0"
    "readUdp()\0"
};

void MUdpClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MUdpClient *_t = static_cast<MUdpClient *>(_o);
        switch (_id) {
        case 0: _t->signalsNewUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 1: _t->readUdp(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MUdpClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MUdpClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MUdpClient,
      qt_meta_data_MUdpClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MUdpClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MUdpClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MUdpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MUdpClient))
        return static_cast<void*>(const_cast< MUdpClient*>(this));
    return QObject::qt_metacast(_clname);
}

int MUdpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MUdpClient::signalsNewUser(QString & _t1, QString & _t2, QString & _t3, QString & _t4, QString & _t5, QString & _t6, QString & _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

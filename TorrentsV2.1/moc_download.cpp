/****************************************************************************
** Meta object code from reading C++ file 'download.h'
**
** Created: Fri Oct 1 23:59:22 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "download.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'download.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Download[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      18,    9,    9,    9, 0x08,
      33,    9,    9,    9, 0x08,
      48,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Download[] = {
    "Download\0\0start()\0downloadFile()\0"
    "httpFinished()\0httpReadyRead()\0"
};

const QMetaObject Download::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Download,
      qt_meta_data_Download, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Download::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Download::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Download::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Download))
        return static_cast<void*>(const_cast< Download*>(this));
    return QDialog::qt_metacast(_clname);
}

int Download::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: start(); break;
        case 1: downloadFile(); break;
        case 2: httpFinished(); break;
        case 3: httpReadyRead(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Download::start()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE

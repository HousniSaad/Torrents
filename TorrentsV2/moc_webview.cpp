/****************************************************************************
** Meta object code from reading C++ file 'webview.h'
**
** Created: Fri Oct 8 11:39:45 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "webview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebView[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      20,    8,    8,    8, 0x05,
      37,   32,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,    8,    8,    8, 0x09,
      80,   78,    8,    8, 0x09,
      94,    8,    8,    8, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_WebView[] = {
    "WebView\0\0QMESSAGE()\0QJobsDone()\0name\0"
    "Progression(QString)\0finishLoading(bool)\0"
    "i\0progress(int)\0DownloadEnded(bool)\0"
};

const QMetaObject WebView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebView,
      qt_meta_data_WebView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebView))
        return static_cast<void*>(const_cast< WebView*>(this));
    return QObject::qt_metacast(_clname);
}

int WebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: QMESSAGE(); break;
        case 1: QJobsDone(); break;
        case 2: Progression((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: finishLoading((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: DownloadEnded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WebView::QMESSAGE()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void WebView::QJobsDone()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void WebView::Progression(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

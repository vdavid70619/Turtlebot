/****************************************************************************
** Meta object code from reading C++ file 'ModelAcquisitionWindow.h'
**
** Created: Mon Apr 30 12:49:10 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scan-markers/ModelAcquisitionWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModelAcquisitionWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ModelAcquisitionWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x08,
      52,   23,   23,   23, 0x08,
      77,   23,   23,   23, 0x08,
     102,   23,   23,   23, 0x08,
     126,   23,   23,   23, 0x08,
     151,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ModelAcquisitionWindow[] = {
    "ModelAcquisitionWindow\0\0"
    "on_saveMeshButton_clicked()\0"
    "on_resetCamera_clicked()\0"
    "on_startButton_clicked()\0"
    "on_stopButton_clicked()\0"
    "on_resetButton_clicked()\0"
    "on_removeFloorPlaneButton_clicked()\0"
};

const QMetaObject ModelAcquisitionWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ModelAcquisitionWindow,
      qt_meta_data_ModelAcquisitionWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModelAcquisitionWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModelAcquisitionWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModelAcquisitionWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModelAcquisitionWindow))
        return static_cast<void*>(const_cast< ModelAcquisitionWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ModelAcquisitionWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_saveMeshButton_clicked(); break;
        case 1: on_resetCamera_clicked(); break;
        case 2: on_startButton_clicked(); break;
        case 3: on_stopButton_clicked(); break;
        case 4: on_resetButton_clicked(); break;
        case 5: on_removeFloorPlaneButton_clicked(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'RawImagesWindow.h'
**
** Created: Mon Apr 30 12:48:06 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../multikinect/RawImagesWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RawImagesWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RawImagesWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   17,   16,   16, 0x0a,
      48,   16,   16,   16, 0x0a,
      83,   75,   16,   16, 0x0a,
     109,   16,   16,   16, 0x0a,
     144,   16,   16,   16, 0x0a,
     179,   16,   16,   16, 0x0a,
     228,   16,   16,   16, 0x0a,
     257,   16,   16,   16, 0x0a,
     289,   16,   16,   16, 0x0a,
     319,   16,   16,   16, 0x0a,
     349,   16,   16,   16, 0x0a,
     379,   16,   16,   16, 0x0a,
     409,   16,   16,   16, 0x0a,
     441,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RawImagesWindow[] = {
    "RawImagesWindow\0\0event\0closeEvent(QCloseEvent*)\0"
    "on_action_Quit_triggered()\0checked\0"
    "on_syncMode_toggled(bool)\0"
    "on_outputDirText_editingFinished()\0"
    "on_action_GrabFrames_toggled(bool)\0"
    "on_actionSave_calibration_parameters_triggered()\0"
    "on_actionPause_toggled(bool)\0"
    "on_actionNext_frame_triggered()\0"
    "on_actionKinect_0_triggered()\0"
    "on_actionKinect_1_triggered()\0"
    "on_actionKinect_2_triggered()\0"
    "on_actionKinect_3_triggered()\0"
    "on_action_Filters_toggled(bool)\0"
    "on_action_3D_View_toggled(bool)\0"
};

const QMetaObject RawImagesWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RawImagesWindow,
      qt_meta_data_RawImagesWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RawImagesWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RawImagesWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RawImagesWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RawImagesWindow))
        return static_cast<void*>(const_cast< RawImagesWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int RawImagesWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 1: on_action_Quit_triggered(); break;
        case 2: on_syncMode_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: on_outputDirText_editingFinished(); break;
        case 4: on_action_GrabFrames_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_actionSave_calibration_parameters_triggered(); break;
        case 6: on_actionPause_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: on_actionNext_frame_triggered(); break;
        case 8: on_actionKinect_0_triggered(); break;
        case 9: on_actionKinect_1_triggered(); break;
        case 10: on_actionKinect_2_triggered(); break;
        case 11: on_actionKinect_3_triggered(); break;
        case 12: on_action_Filters_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: on_action_3D_View_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

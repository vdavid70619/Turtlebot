/****************************************************************************
** Meta object code from reading C++ file 'GuiMultiKinectController.h'
**
** Created: Mon Apr 30 12:48:06 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../multikinect/GuiMultiKinectController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiMultiKinectController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GuiMultiKinectController[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   26,   25,   25, 0x0a,
      60,   25,   25,   25, 0x0a,
      80,   25,   25,   25, 0x0a,
      99,   25,   25,   25, 0x0a,
     127,  116,   25,   25, 0x0a,
     159,  147,   25,   25, 0x0a,
     220,  213,   25,   25, 0x0a,
     272,   25,   25,   25, 0x0a,
     299,   25,   25,   25, 0x0a,
     338,  333,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GuiMultiKinectController[] = {
    "GuiMultiKinectController\0\0x,y\0"
    "on_depth_mouse_moved(int,int)\0"
    "toggleFilters(bool)\0toggleView3d(bool)\0"
    "saveLastMeshes()\0merge_them\0"
    "setMergeViews(bool)\0new_t,new_r\0"
    "updateCameraCalibrationToGrabber(cv::Vec3f,cv::Vec3f)\0"
    "params\0onCameraExtrinsicsChanged(CalibrationParametersPtr)\0"
    "refineCalibrationWithICP()\0"
    "refineCalibrationWithChessboard()\0"
    "grab\0setGrabbing(bool)\0"
};

const QMetaObject GuiMultiKinectController::staticMetaObject = {
    { &ntk::AsyncEventListener::staticMetaObject, qt_meta_stringdata_GuiMultiKinectController,
      qt_meta_data_GuiMultiKinectController, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GuiMultiKinectController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GuiMultiKinectController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GuiMultiKinectController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GuiMultiKinectController))
        return static_cast<void*>(const_cast< GuiMultiKinectController*>(this));
    if (!strcmp(_clname, "MultiKinectController"))
        return static_cast< MultiKinectController*>(const_cast< GuiMultiKinectController*>(this));
    if (!strcmp(_clname, "ntk::EventBroadcaster"))
        return static_cast< ntk::EventBroadcaster*>(const_cast< GuiMultiKinectController*>(this));
    typedef ntk::AsyncEventListener QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int GuiMultiKinectController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef ntk::AsyncEventListener QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_depth_mouse_moved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: toggleFilters((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: toggleView3d((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: saveLastMeshes(); break;
        case 4: setMergeViews((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: updateCameraCalibrationToGrabber((*reinterpret_cast< const cv::Vec3f(*)>(_a[1])),(*reinterpret_cast< const cv::Vec3f(*)>(_a[2]))); break;
        case 6: onCameraExtrinsicsChanged((*reinterpret_cast< CalibrationParametersPtr(*)>(_a[1]))); break;
        case 7: refineCalibrationWithICP(); break;
        case 8: refineCalibrationWithChessboard(); break;
        case 9: setGrabbing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

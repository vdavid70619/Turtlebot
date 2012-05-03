/****************************************************************************
** Meta object code from reading C++ file 'View3dWindow.h'
**
** Created: Mon Apr 30 12:48:06 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../multikinect/View3dWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'View3dWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_View3DWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x0a,
      45,   13,   13,   13, 0x08,
      77,   13,   13,   13, 0x08,
     108,   13,   13,   13, 0x08,
     150,  142,   13,   13, 0x08,
     188,   13,   13,   13, 0x08,
     220,   13,   13,   13, 0x08,
     245,  142,   13,   13, 0x08,
     287,  281,   13,   13, 0x08,
     335,   13,   13,   13, 0x08,
     364,   13,   13,   13, 0x08,
     393,   13,   13,   13, 0x08,
     422,   13,   13,   13, 0x08,
     451,   13,   13,   13, 0x08,
     480,   13,   13,   13, 0x08,
     509,  142,   13,   13, 0x08,
     550,   13,   13,   13, 0x08,
     583,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_View3DWindow[] = {
    "View3DWindow\0\0event\0closeEvent(QCloseEvent*)\0"
    "on_trianglePushButton_clicked()\0"
    "on_surfelsPushButton_clicked()\0"
    "on_pointCloudPushButton_clicked()\0"
    "checked\0on_colorMappingCheckBox_toggled(bool)\0"
    "on_saveMeshPushButton_clicked()\0"
    "on_resetCamera_clicked()\0"
    "on_mergeViewsCheckBox_toggled(bool)\0"
    "value\0on_resolutionFactorSpinBox_valueChanged(double)\0"
    "on_txValue_editingFinished()\0"
    "on_tyValue_editingFinished()\0"
    "on_tzValue_editingFinished()\0"
    "on_rxValue_editingFinished()\0"
    "on_ryValue_editingFinished()\0"
    "on_rzValue_editingFinished()\0"
    "on_calibrationModeCheckBox_toggled(bool)\0"
    "on_refineWithICPButton_clicked()\0"
    "on_refineWithChessboardButton_clicked()\0"
};

const QMetaObject View3DWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_View3DWindow,
      qt_meta_data_View3DWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &View3DWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *View3DWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *View3DWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_View3DWindow))
        return static_cast<void*>(const_cast< View3DWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int View3DWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 1: on_trianglePushButton_clicked(); break;
        case 2: on_surfelsPushButton_clicked(); break;
        case 3: on_pointCloudPushButton_clicked(); break;
        case 4: on_colorMappingCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_saveMeshPushButton_clicked(); break;
        case 6: on_resetCamera_clicked(); break;
        case 7: on_mergeViewsCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: on_resolutionFactorSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: on_txValue_editingFinished(); break;
        case 10: on_tyValue_editingFinished(); break;
        case 11: on_tzValue_editingFinished(); break;
        case 12: on_rxValue_editingFinished(); break;
        case 13: on_ryValue_editingFinished(); break;
        case 14: on_rzValue_editingFinished(); break;
        case 15: on_calibrationModeCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: on_refineWithICPButton_clicked(); break;
        case 17: on_refineWithChessboardButton_clicked(); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

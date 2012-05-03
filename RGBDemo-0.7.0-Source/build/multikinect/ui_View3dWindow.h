/********************************************************************************
** Form generated from reading UI file 'View3dWindow.ui'
**
** Created: Mon Apr 30 12:48:06 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW3DWINDOW_H
#define UI_VIEW3DWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "View3dWindow.h"

QT_BEGIN_NAMESPACE

class Ui_View3DWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QCheckBox *colorMappingCheckBox;
    QPushButton *saveMeshPushButton;
    QPushButton *pointCloudPushButton;
    QPushButton *surfelsPushButton;
    QPushButton *trianglePushButton;
    QCheckBox *mergeViewsCheckBox;
    QCheckBox *calibrationModeCheckBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QDoubleSpinBox *resolutionFactorSpinBox;
    QPushButton *resetCamera;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *txValue;
    QLabel *label_3;
    QDoubleSpinBox *tyValue;
    QLabel *label_4;
    QDoubleSpinBox *tzValue;
    QLabel *label_5;
    QDoubleSpinBox *rxValue;
    QLabel *label_6;
    QDoubleSpinBox *ryValue;
    QLabel *label_7;
    QDoubleSpinBox *rzValue;
    QPushButton *refineWithICPButton;
    QPushButton *refineWithChessboardButton;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    CalibrationMeshViewer *mesh_view;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *View3DWindow)
    {
        if (View3DWindow->objectName().isEmpty())
            View3DWindow->setObjectName(QString::fromUtf8("View3DWindow"));
        View3DWindow->resize(1075, 600);
        centralwidget = new QWidget(View3DWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        colorMappingCheckBox = new QCheckBox(frame);
        colorMappingCheckBox->setObjectName(QString::fromUtf8("colorMappingCheckBox"));
        colorMappingCheckBox->setChecked(true);

        horizontalLayout->addWidget(colorMappingCheckBox);

        saveMeshPushButton = new QPushButton(frame);
        saveMeshPushButton->setObjectName(QString::fromUtf8("saveMeshPushButton"));

        horizontalLayout->addWidget(saveMeshPushButton);

        pointCloudPushButton = new QPushButton(frame);
        pointCloudPushButton->setObjectName(QString::fromUtf8("pointCloudPushButton"));

        horizontalLayout->addWidget(pointCloudPushButton);

        surfelsPushButton = new QPushButton(frame);
        surfelsPushButton->setObjectName(QString::fromUtf8("surfelsPushButton"));

        horizontalLayout->addWidget(surfelsPushButton);

        trianglePushButton = new QPushButton(frame);
        trianglePushButton->setObjectName(QString::fromUtf8("trianglePushButton"));

        horizontalLayout->addWidget(trianglePushButton);

        mergeViewsCheckBox = new QCheckBox(frame);
        mergeViewsCheckBox->setObjectName(QString::fromUtf8("mergeViewsCheckBox"));
        mergeViewsCheckBox->setChecked(true);

        horizontalLayout->addWidget(mergeViewsCheckBox);

        calibrationModeCheckBox = new QCheckBox(frame);
        calibrationModeCheckBox->setObjectName(QString::fromUtf8("calibrationModeCheckBox"));

        horizontalLayout->addWidget(calibrationModeCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        resolutionFactorSpinBox = new QDoubleSpinBox(frame);
        resolutionFactorSpinBox->setObjectName(QString::fromUtf8("resolutionFactorSpinBox"));
        resolutionFactorSpinBox->setMinimum(0.1);
        resolutionFactorSpinBox->setMaximum(4);
        resolutionFactorSpinBox->setSingleStep(0.1);
        resolutionFactorSpinBox->setValue(1);

        horizontalLayout->addWidget(resolutionFactorSpinBox);

        resetCamera = new QPushButton(frame);
        resetCamera->setObjectName(QString::fromUtf8("resetCamera"));

        horizontalLayout->addWidget(resetCamera);


        verticalLayout->addWidget(frame);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        txValue = new QDoubleSpinBox(frame_3);
        txValue->setObjectName(QString::fromUtf8("txValue"));
        txValue->setDecimals(3);
        txValue->setMinimum(-10);
        txValue->setMaximum(10);

        horizontalLayout_3->addWidget(txValue);

        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        tyValue = new QDoubleSpinBox(frame_3);
        tyValue->setObjectName(QString::fromUtf8("tyValue"));
        tyValue->setDecimals(3);
        tyValue->setMinimum(-10);
        tyValue->setMaximum(10);

        horizontalLayout_3->addWidget(tyValue);

        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        tzValue = new QDoubleSpinBox(frame_3);
        tzValue->setObjectName(QString::fromUtf8("tzValue"));
        tzValue->setDecimals(3);
        tzValue->setMinimum(-10);
        tzValue->setMaximum(10);

        horizontalLayout_3->addWidget(tzValue);

        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        rxValue = new QDoubleSpinBox(frame_3);
        rxValue->setObjectName(QString::fromUtf8("rxValue"));
        rxValue->setDecimals(3);
        rxValue->setMinimum(-360);
        rxValue->setMaximum(360);

        horizontalLayout_3->addWidget(rxValue);

        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        ryValue = new QDoubleSpinBox(frame_3);
        ryValue->setObjectName(QString::fromUtf8("ryValue"));
        ryValue->setDecimals(3);
        ryValue->setMinimum(-360);
        ryValue->setMaximum(360);

        horizontalLayout_3->addWidget(ryValue);

        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        rzValue = new QDoubleSpinBox(frame_3);
        rzValue->setObjectName(QString::fromUtf8("rzValue"));
        rzValue->setDecimals(3);
        rzValue->setMinimum(-360);
        rzValue->setMaximum(360);

        horizontalLayout_3->addWidget(rzValue);

        refineWithICPButton = new QPushButton(frame_3);
        refineWithICPButton->setObjectName(QString::fromUtf8("refineWithICPButton"));

        horizontalLayout_3->addWidget(refineWithICPButton);

        refineWithChessboardButton = new QPushButton(frame_3);
        refineWithChessboardButton->setObjectName(QString::fromUtf8("refineWithChessboardButton"));

        horizontalLayout_3->addWidget(refineWithChessboardButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(frame_3);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mesh_view = new CalibrationMeshViewer(frame_2);
        mesh_view->setObjectName(QString::fromUtf8("mesh_view"));

        horizontalLayout_2->addWidget(mesh_view);


        verticalLayout->addWidget(frame_2);

        View3DWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(View3DWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1075, 21));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        View3DWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(View3DWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        View3DWindow->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());

        retranslateUi(View3DWindow);

        QMetaObject::connectSlotsByName(View3DWindow);
    } // setupUi

    void retranslateUi(QMainWindow *View3DWindow)
    {
        View3DWindow->setWindowTitle(QApplication::translate("View3DWindow", "3D View", 0, QApplication::UnicodeUTF8));
        colorMappingCheckBox->setText(QApplication::translate("View3DWindow", "Color", 0, QApplication::UnicodeUTF8));
        saveMeshPushButton->setText(QApplication::translate("View3DWindow", "SaveMesh", 0, QApplication::UnicodeUTF8));
        pointCloudPushButton->setText(QApplication::translate("View3DWindow", "PointCloud", 0, QApplication::UnicodeUTF8));
        surfelsPushButton->setText(QApplication::translate("View3DWindow", "Surfels", 0, QApplication::UnicodeUTF8));
        trianglePushButton->setText(QApplication::translate("View3DWindow", "Triangles", 0, QApplication::UnicodeUTF8));
        mergeViewsCheckBox->setText(QApplication::translate("View3DWindow", "Merge views", 0, QApplication::UnicodeUTF8));
        calibrationModeCheckBox->setText(QApplication::translate("View3DWindow", "Calibration mode", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("View3DWindow", "Resolution factor", 0, QApplication::UnicodeUTF8));
        resetCamera->setText(QApplication::translate("View3DWindow", "Reset camera", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("View3DWindow", "Tx", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("View3DWindow", "Ty", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("View3DWindow", "Tz", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("View3DWindow", "Rx", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("View3DWindow", "Ry", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("View3DWindow", "Rz", 0, QApplication::UnicodeUTF8));
        refineWithICPButton->setText(QApplication::translate("View3DWindow", "Refine with ICP", 0, QApplication::UnicodeUTF8));
        refineWithChessboardButton->setText(QApplication::translate("View3DWindow", "Refine with chessboard", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("View3DWindow", "&File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class View3DWindow: public Ui_View3DWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW3DWINDOW_H

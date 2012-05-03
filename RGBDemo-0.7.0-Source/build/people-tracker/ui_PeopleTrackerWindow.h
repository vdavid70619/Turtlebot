/********************************************************************************
** Form generated from reading UI file 'PeopleTrackerWindow.ui'
**
** Created: Mon Apr 30 12:47:36 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEOPLETRACKERWINDOW_H
#define UI_PEOPLETRACKERWINDOW_H

#include <PeopleTrackerWindow.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <ntk/mesh/mesh_viewer.h>

QT_BEGIN_NAMESPACE

class Ui_PeopleTrackerWindow
{
public:
    QAction *actionNext_frame;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QCheckBox *colorMappingCheckBox;
    QPushButton *saveMeshPushButton;
    QPushButton *pointCloudPushButton;
    QPushButton *trianglePushButton;
    QCheckBox *showPlaneCheckBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *resetCamera;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *setAsBackgroundButton;
    QPushButton *loadParametersButton;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    ntk::MeshViewer *mesh_view;
    QHBoxLayout *horizontalLayout_5;
    PeopleTrackerImageWidget *image_view;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuCapture;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PeopleTrackerWindow)
    {
        if (PeopleTrackerWindow->objectName().isEmpty())
            PeopleTrackerWindow->setObjectName(QString::fromUtf8("PeopleTrackerWindow"));
        PeopleTrackerWindow->resize(913, 600);
        actionNext_frame = new QAction(PeopleTrackerWindow);
        actionNext_frame->setObjectName(QString::fromUtf8("actionNext_frame"));
        centralwidget = new QWidget(PeopleTrackerWindow);
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

        trianglePushButton = new QPushButton(frame);
        trianglePushButton->setObjectName(QString::fromUtf8("trianglePushButton"));

        horizontalLayout->addWidget(trianglePushButton);

        showPlaneCheckBox = new QCheckBox(frame);
        showPlaneCheckBox->setObjectName(QString::fromUtf8("showPlaneCheckBox"));
        showPlaneCheckBox->setChecked(true);

        horizontalLayout->addWidget(showPlaneCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

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
        setAsBackgroundButton = new QPushButton(frame_3);
        setAsBackgroundButton->setObjectName(QString::fromUtf8("setAsBackgroundButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(setAsBackgroundButton->sizePolicy().hasHeightForWidth());
        setAsBackgroundButton->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(setAsBackgroundButton);

        loadParametersButton = new QPushButton(frame_3);
        loadParametersButton->setObjectName(QString::fromUtf8("loadParametersButton"));

        horizontalLayout_3->addWidget(loadParametersButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(frame_3);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mesh_view = new ntk::MeshViewer(frame_2);
        mesh_view->setObjectName(QString::fromUtf8("mesh_view"));
        horizontalLayout_5 = new QHBoxLayout(mesh_view);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));

        horizontalLayout_2->addWidget(mesh_view);

        image_view = new PeopleTrackerImageWidget(frame_2);
        image_view->setObjectName(QString::fromUtf8("image_view"));

        horizontalLayout_2->addWidget(image_view);


        verticalLayout->addWidget(frame_2);

        PeopleTrackerWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PeopleTrackerWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 913, 21));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuCapture = new QMenu(menubar);
        menuCapture->setObjectName(QString::fromUtf8("menuCapture"));
        PeopleTrackerWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(PeopleTrackerWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PeopleTrackerWindow->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menuCapture->menuAction());
        menuCapture->addAction(actionNext_frame);

        retranslateUi(PeopleTrackerWindow);

        QMetaObject::connectSlotsByName(PeopleTrackerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PeopleTrackerWindow)
    {
        PeopleTrackerWindow->setWindowTitle(QApplication::translate("PeopleTrackerWindow", "People Tracker", 0, QApplication::UnicodeUTF8));
        actionNext_frame->setText(QApplication::translate("PeopleTrackerWindow", "Next frame", 0, QApplication::UnicodeUTF8));
        actionNext_frame->setShortcut(QApplication::translate("PeopleTrackerWindow", "Ctrl+Right", 0, QApplication::UnicodeUTF8));
        colorMappingCheckBox->setText(QApplication::translate("PeopleTrackerWindow", "Color", 0, QApplication::UnicodeUTF8));
        saveMeshPushButton->setText(QApplication::translate("PeopleTrackerWindow", "SaveMesh", 0, QApplication::UnicodeUTF8));
        pointCloudPushButton->setText(QApplication::translate("PeopleTrackerWindow", "PointCloud", 0, QApplication::UnicodeUTF8));
        trianglePushButton->setText(QApplication::translate("PeopleTrackerWindow", "Triangles", 0, QApplication::UnicodeUTF8));
        showPlaneCheckBox->setText(QApplication::translate("PeopleTrackerWindow", "Show plane", 0, QApplication::UnicodeUTF8));
        resetCamera->setText(QApplication::translate("PeopleTrackerWindow", "Reset camera", 0, QApplication::UnicodeUTF8));
        setAsBackgroundButton->setText(QApplication::translate("PeopleTrackerWindow", "Set as background", 0, QApplication::UnicodeUTF8));
        loadParametersButton->setText(QApplication::translate("PeopleTrackerWindow", "Load parameters", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("PeopleTrackerWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuCapture->setTitle(QApplication::translate("PeopleTrackerWindow", "Capture", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PeopleTrackerWindow: public Ui_PeopleTrackerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEOPLETRACKERWINDOW_H

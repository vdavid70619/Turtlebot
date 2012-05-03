/********************************************************************************
** Form generated from reading UI file 'ModelAcquisitionWindow.ui'
**
** Created: Mon Apr 30 12:47:16 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELACQUISITIONWINDOW_H
#define UI_MODELACQUISITIONWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <ntk/mesh/mesh_viewer.h>

QT_BEGIN_NAMESPACE

class Ui_ModelAcquisitionWindow
{
public:
    QAction *action_Grab_and_Move;
    QAction *action_Grab_Sequence;
    QAction *actionModel_and_Move;
    QAction *actionModel_Sequence;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *startButton;
    QPushButton *stopButton;
    QPushButton *resetButton;
    QPushButton *saveMeshButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *resetCamera;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    ntk::MeshViewer *mesh_view;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ModelAcquisitionWindow)
    {
        if (ModelAcquisitionWindow->objectName().isEmpty())
            ModelAcquisitionWindow->setObjectName(QString::fromUtf8("ModelAcquisitionWindow"));
        ModelAcquisitionWindow->resize(821, 600);
        action_Grab_and_Move = new QAction(ModelAcquisitionWindow);
        action_Grab_and_Move->setObjectName(QString::fromUtf8("action_Grab_and_Move"));
        action_Grab_Sequence = new QAction(ModelAcquisitionWindow);
        action_Grab_Sequence->setObjectName(QString::fromUtf8("action_Grab_Sequence"));
        actionModel_and_Move = new QAction(ModelAcquisitionWindow);
        actionModel_and_Move->setObjectName(QString::fromUtf8("actionModel_and_Move"));
        actionModel_Sequence = new QAction(ModelAcquisitionWindow);
        actionModel_Sequence->setObjectName(QString::fromUtf8("actionModel_Sequence"));
        centralwidget = new QWidget(ModelAcquisitionWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        startButton = new QPushButton(frame_4);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(startButton);

        stopButton = new QPushButton(frame_4);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        sizePolicy1.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(stopButton);

        resetButton = new QPushButton(frame_4);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        horizontalLayout_4->addWidget(resetButton);

        saveMeshButton = new QPushButton(frame_4);
        saveMeshButton->setObjectName(QString::fromUtf8("saveMeshButton"));

        horizontalLayout_4->addWidget(saveMeshButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        resetCamera = new QPushButton(frame_4);
        resetCamera->setObjectName(QString::fromUtf8("resetCamera"));

        horizontalLayout_4->addWidget(resetCamera);


        verticalLayout->addWidget(frame_4);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mesh_view = new ntk::MeshViewer(frame_2);
        mesh_view->setObjectName(QString::fromUtf8("mesh_view"));
        mesh_view->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_2->addWidget(mesh_view);


        verticalLayout->addWidget(frame_2);

        ModelAcquisitionWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ModelAcquisitionWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 821, 21));
        ModelAcquisitionWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ModelAcquisitionWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ModelAcquisitionWindow->setStatusBar(statusbar);

        retranslateUi(ModelAcquisitionWindow);

        QMetaObject::connectSlotsByName(ModelAcquisitionWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ModelAcquisitionWindow)
    {
        ModelAcquisitionWindow->setWindowTitle(QApplication::translate("ModelAcquisitionWindow", "3D View", 0, QApplication::UnicodeUTF8));
        action_Grab_and_Move->setText(QApplication::translate("ModelAcquisitionWindow", "Grab and Move", 0, QApplication::UnicodeUTF8));
        action_Grab_Sequence->setText(QApplication::translate("ModelAcquisitionWindow", "Grab Sequence", 0, QApplication::UnicodeUTF8));
        actionModel_and_Move->setText(QApplication::translate("ModelAcquisitionWindow", "Model and Move", 0, QApplication::UnicodeUTF8));
        actionModel_Sequence->setText(QApplication::translate("ModelAcquisitionWindow", "Model Sequence", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("ModelAcquisitionWindow", "Start", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("ModelAcquisitionWindow", "Pause", 0, QApplication::UnicodeUTF8));
        resetButton->setText(QApplication::translate("ModelAcquisitionWindow", "Reset", 0, QApplication::UnicodeUTF8));
        saveMeshButton->setText(QApplication::translate("ModelAcquisitionWindow", "Save current mesh", 0, QApplication::UnicodeUTF8));
        resetCamera->setText(QApplication::translate("ModelAcquisitionWindow", "Reset Camera", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModelAcquisitionWindow: public Ui_ModelAcquisitionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELACQUISITIONWINDOW_H

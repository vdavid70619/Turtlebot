/********************************************************************************
** Form generated from reading UI file 'ModelAcquisitionWindow.ui'
**
** Created: Mon Apr 30 12:48:33 2012
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
#include <QtGui/QComboBox>
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
#include <ntk/gui/image_widget.h>
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
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *acquireModelsButton;
    QPushButton *resetModelsButton;
    QComboBox *modelComboBox;
    QPushButton *saveMeshButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *resetCamera;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    ntk::MeshViewer *mesh_view;
    QHBoxLayout *horizontalLayout_3;
    ntk::ImageWidget *object_view;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ModelAcquisitionWindow)
    {
        if (ModelAcquisitionWindow->objectName().isEmpty())
            ModelAcquisitionWindow->setObjectName(QString::fromUtf8("ModelAcquisitionWindow"));
        ModelAcquisitionWindow->resize(1024, 600);
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
        acquireModelsButton = new QPushButton(frame);
        acquireModelsButton->setObjectName(QString::fromUtf8("acquireModelsButton"));

        horizontalLayout->addWidget(acquireModelsButton);

        resetModelsButton = new QPushButton(frame);
        resetModelsButton->setObjectName(QString::fromUtf8("resetModelsButton"));

        horizontalLayout->addWidget(resetModelsButton);

        modelComboBox = new QComboBox(frame);
        modelComboBox->setObjectName(QString::fromUtf8("modelComboBox"));

        horizontalLayout->addWidget(modelComboBox);

        saveMeshButton = new QPushButton(frame);
        saveMeshButton->setObjectName(QString::fromUtf8("saveMeshButton"));

        horizontalLayout->addWidget(saveMeshButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        resetCamera = new QPushButton(frame);
        resetCamera->setObjectName(QString::fromUtf8("resetCamera"));

        horizontalLayout->addWidget(resetCamera);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mesh_view = new ntk::MeshViewer(frame_2);
        mesh_view->setObjectName(QString::fromUtf8("mesh_view"));
        mesh_view->setFocusPolicy(Qt::ClickFocus);
        horizontalLayout_3 = new QHBoxLayout(mesh_view);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        horizontalLayout_2->addWidget(mesh_view);

        object_view = new ntk::ImageWidget(frame_2);
        object_view->setObjectName(QString::fromUtf8("object_view"));

        horizontalLayout_2->addWidget(object_view);


        verticalLayout->addWidget(frame_2);

        ModelAcquisitionWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ModelAcquisitionWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 22));
        ModelAcquisitionWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ModelAcquisitionWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ModelAcquisitionWindow->setStatusBar(statusbar);

        retranslateUi(ModelAcquisitionWindow);
        QObject::connect(acquireModelsButton, SIGNAL(clicked()), actionModel_and_Move, SLOT(trigger()));

        QMetaObject::connectSlotsByName(ModelAcquisitionWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ModelAcquisitionWindow)
    {
        ModelAcquisitionWindow->setWindowTitle(QApplication::translate("ModelAcquisitionWindow", "3D View", 0, QApplication::UnicodeUTF8));
        action_Grab_and_Move->setText(QApplication::translate("ModelAcquisitionWindow", "Grab and Move", 0, QApplication::UnicodeUTF8));
        action_Grab_Sequence->setText(QApplication::translate("ModelAcquisitionWindow", "Grab Sequence", 0, QApplication::UnicodeUTF8));
        actionModel_and_Move->setText(QApplication::translate("ModelAcquisitionWindow", "Model and Move", 0, QApplication::UnicodeUTF8));
        actionModel_Sequence->setText(QApplication::translate("ModelAcquisitionWindow", "Model Sequence", 0, QApplication::UnicodeUTF8));
        acquireModelsButton->setText(QApplication::translate("ModelAcquisitionWindow", "Acquire generic models", 0, QApplication::UnicodeUTF8));
        resetModelsButton->setText(QApplication::translate("ModelAcquisitionWindow", "Reset Models", 0, QApplication::UnicodeUTF8));
        modelComboBox->clear();
        modelComboBox->insertItems(0, QStringList()
         << QApplication::translate("ModelAcquisitionWindow", "Model 0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelAcquisitionWindow", "Model 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelAcquisitionWindow", "Model 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelAcquisitionWindow", "Model 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelAcquisitionWindow", "Model 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ModelAcquisitionWindow", "Model 5", 0, QApplication::UnicodeUTF8)
        );
        saveMeshButton->setText(QApplication::translate("ModelAcquisitionWindow", "Save as...", 0, QApplication::UnicodeUTF8));
        resetCamera->setText(QApplication::translate("ModelAcquisitionWindow", "Reset camera", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModelAcquisitionWindow: public Ui_ModelAcquisitionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELACQUISITIONWINDOW_H

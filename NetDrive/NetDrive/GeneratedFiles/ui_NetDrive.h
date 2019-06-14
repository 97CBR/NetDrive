/********************************************************************************
** Form generated from reading UI file 'NetDrive.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETDRIVE_H
#define UI_NETDRIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetDriveClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *remoteName;
    QLabel *label_3;
    QLineEdit *localName;
    QLabel *label_4;
    QLineEdit *userName;
    QLabel *label_5;
    QLineEdit *password;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NetDriveClass)
    {
        if (NetDriveClass->objectName().isEmpty())
            NetDriveClass->setObjectName(QStringLiteral("NetDriveClass"));
        NetDriveClass->resize(863, 501);
        centralWidget = new QWidget(NetDriveClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 20, 211, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 80, 71, 21));
        remoteName = new QLineEdit(centralWidget);
        remoteName->setObjectName(QStringLiteral("remoteName"));
        remoteName->setGeometry(QRect(290, 80, 113, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 130, 54, 12));
        localName = new QLineEdit(centralWidget);
        localName->setObjectName(QStringLiteral("localName"));
        localName->setGeometry(QRect(290, 130, 113, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 180, 54, 12));
        userName = new QLineEdit(centralWidget);
        userName->setObjectName(QStringLiteral("userName"));
        userName->setGeometry(QRect(290, 180, 113, 20));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(210, 220, 54, 12));
        password = new QLineEdit(centralWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(290, 220, 113, 20));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 270, 75, 23));
        NetDriveClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NetDriveClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 863, 23));
        NetDriveClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(NetDriveClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        NetDriveClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(NetDriveClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        NetDriveClass->setStatusBar(statusBar);

        retranslateUi(NetDriveClass);
        QObject::connect(pushButton, SIGNAL(clicked()), NetDriveClass, SLOT(connectDrive()));

        QMetaObject::connectSlotsByName(NetDriveClass);
    } // setupUi

    void retranslateUi(QMainWindow *NetDriveClass)
    {
        NetDriveClass->setWindowTitle(QApplication::translate("NetDriveClass", "NetDrive", nullptr));
        label->setText(QApplication::translate("NetDriveClass", "\347\275\221\347\273\234\351\251\261\345\212\250\345\231\250\346\230\240\345\260\204\345\267\245\345\205\267", nullptr));
        label_2->setText(QApplication::translate("NetDriveClass", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200", nullptr));
        label_3->setText(QApplication::translate("NetDriveClass", "\346\234\254\345\234\260\347\243\201\347\233\230", nullptr));
        label_4->setText(QApplication::translate("NetDriveClass", "\350\264\246\345\217\267", nullptr));
        label_5->setText(QApplication::translate("NetDriveClass", "\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("NetDriveClass", "\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetDriveClass: public Ui_NetDriveClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETDRIVE_H

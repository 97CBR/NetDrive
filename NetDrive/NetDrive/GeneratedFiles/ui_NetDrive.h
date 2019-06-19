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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetDriveClass
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QLabel *label_16;
    QWidget *widget_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *remoteName;
    QLabel *label_5;
    QLineEdit *userName;
    QLineEdit *password;
    QLabel *label_4;
    QLabel *label_15;
    QWidget *horizontalWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *localName;
    QWidget *widget_3;
    QListWidget *listWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_11;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_12;
    QLabel *label_13;
    QProgressBar *progressBar;
    QLabel *label_14;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *NetDriveClass)
    {
        if (NetDriveClass->objectName().isEmpty())
            NetDriveClass->setObjectName(QStringLiteral("NetDriveClass"));
        NetDriveClass->resize(771, 693);
        centralWidget = new QWidget(NetDriveClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 771, 50));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(198, 47, 47);"));
        label_16 = new QLabel(widget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(160, 10, 251, 31));
        label_16->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 50, 770, 200));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 70, 71, 21));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 150, 91, 21));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(184,37,37);\n"
"font-size:12px;\n"
"color: #FFFFFF;\n"
"letter-spacing: 0;\n"
"text-align: center;\n"
"    border-top-right-radius: 8px; /* same radius as the QComboBox */\n"
"    border-bottom-left-radius: 8px;\n"
"\n"
"border-top-right-radius: 8px; \n"
"border-bottom-left-radius: 8px;\n"
"border-top-left-radius: 8px; \n"
"border-bottom-right-radius: 8px;"));
        remoteName = new QLineEdit(widget_2);
        remoteName->setObjectName(QStringLiteral("remoteName"));
        remoteName->setGeometry(QRect(420, 70, 113, 20));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(340, 120, 54, 12));
        userName = new QLineEdit(widget_2);
        userName->setObjectName(QStringLiteral("userName"));
        userName->setGeometry(QRect(180, 120, 113, 20));
        password = new QLineEdit(widget_2);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(420, 120, 113, 20));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 120, 54, 12));
        label_15 = new QLabel(widget_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(370, 150, 251, 31));
        horizontalWidget_2 = new QWidget(widget_2);
        horizontalWidget_2->setObjectName(QStringLiteral("horizontalWidget_2"));
        horizontalWidget_2->setGeometry(QRect(80, 30, 211, 41));
        horizontalWidget_2->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, 8, 10, 8);
        localName = new QLineEdit(horizontalWidget_2);
        localName->setObjectName(QStringLiteral("localName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(localName->sizePolicy().hasHeightForWidth());
        localName->setSizePolicy(sizePolicy);
        localName->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:1px solid rgb(225, 225, 225);\n"
""));

        horizontalLayout_3->addWidget(localName);

        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(0, 250, 771, 441));
        widget_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        listWidget = new QListWidget(widget_3);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 30, 731, 301));
        horizontalLayoutWidget = new QWidget(widget_3);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 340, 411, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(horizontalLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout->addWidget(label_11);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        label_12 = new QLabel(horizontalLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_2->addWidget(label_12);

        label_13 = new QLabel(horizontalLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_2->addWidget(label_13);


        verticalLayout->addLayout(horizontalLayout_2);

        progressBar = new QProgressBar(horizontalLayoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        label_14 = new QLabel(horizontalLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout->addWidget(label_14);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 10);
        pushButton_3 = new QPushButton(widget_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(550, 370, 131, 31));
        pushButton_3->setStyleSheet(QLatin1String("background-color: rgb(184,37,37);\n"
"font-size:12px;\n"
"color: #FFFFFF;\n"
"letter-spacing: 0;\n"
"text-align: center;\n"
"    border-top-right-radius: 8px; /* same radius as the QComboBox */\n"
"    border-bottom-left-radius: 8px;\n"
"\n"
"border-top-right-radius: 8px; \n"
"border-bottom-left-radius: 8px;\n"
"border-top-left-radius: 8px; \n"
"border-bottom-right-radius: 8px;"));
        NetDriveClass->setCentralWidget(centralWidget);

        retranslateUi(NetDriveClass);
        QObject::connect(pushButton, SIGNAL(clicked()), NetDriveClass, SLOT(connectDrive()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), NetDriveClass, SLOT(moveWidgets()));

        QMetaObject::connectSlotsByName(NetDriveClass);
    } // setupUi

    void retranslateUi(QMainWindow *NetDriveClass)
    {
        NetDriveClass->setWindowTitle(QApplication::translate("NetDriveClass", "NetDrive", nullptr));
        label_16->setText(QApplication::translate("NetDriveClass", "\344\270\212\351\235\242\350\246\201\346\224\276\346\214\211\351\222\256", nullptr));
        label_2->setText(QApplication::translate("NetDriveClass", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200", nullptr));
        pushButton->setText(QApplication::translate("NetDriveClass", "\350\277\236\346\216\245\351\251\261\345\212\250\345\231\250", nullptr));
        label_5->setText(QApplication::translate("NetDriveClass", "\345\257\206\347\240\201", nullptr));
        label_4->setText(QApplication::translate("NetDriveClass", "\350\264\246\345\217\267", nullptr));
        label_15->setText(QApplication::translate("NetDriveClass", "\345\201\232\346\210\220\344\270\200\344\270\252\345\217\257\344\274\270\347\274\251\347\232\204\345\212\250\346\225\210", nullptr));
        localName->setPlaceholderText(QApplication::translate("NetDriveClass", "\350\276\223\345\205\245\346\234\254\345\234\260\347\233\230\347\254\246", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("NetDriveClass", "\345\220\216\347\273\255\345\260\206\344\270\213\351\235\242\347\232\204\347\273\204\345\220\210\346\216\247\344\273\266\344\275\234\344\270\272item", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_11->setText(QApplication::translate("NetDriveClass", "ICON", nullptr));
        label_12->setText(QApplication::translate("NetDriveClass", "LocalName", nullptr));
        label_13->setText(QApplication::translate("NetDriveClass", "remotePath", nullptr));
        label_14->setText(QApplication::translate("NetDriveClass", "TextLabel", nullptr));
        pushButton_3->setText(QApplication::translate("NetDriveClass", "\347\202\271\345\207\273\346\265\213\350\257\225\347\225\214\351\235\242\344\274\270\347\274\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetDriveClass: public Ui_NetDriveClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETDRIVE_H

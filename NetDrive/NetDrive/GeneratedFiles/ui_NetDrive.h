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
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget_2;
    QPushButton *pushButton;
    QWidget *horizontalWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *localName;
    QWidget *horizontalWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *remoteName;
    QWidget *horizontalWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *userName;
    QWidget *horizontalWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *password;
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
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QMainWindow *NetDriveClass)
    {
        if (NetDriveClass->objectName().isEmpty())
            NetDriveClass->setObjectName(QStringLiteral("NetDriveClass"));
        NetDriveClass->resize(598, 670);
        centralWidget = new QWidget(NetDriveClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 600, 30));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(198, 47, 47);"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(515, 6, 71, 21));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(198,47,47);\n"
"font-size:15px;\n"
"color: #FFFFFF;\n"
"letter-spacing: 0;\n"
"text-align: center;\n"
"border-top-right-radius: 8px; \n"
"border-bottom-left-radius: 8px;\n"
"border-top-left-radius: 8px; \n"
"border-bottom-right-radius: 8px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/NetDrive/Resources/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(16, 16));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(3, 2, 25, 25));
        label->setPixmap(QPixmap(QString::fromUtf8(":/NetDrive/Resources/network 2.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(37, 5, 55, 23));
        label_2->setStyleSheet(QStringLiteral("color: #FFFFFF;"));
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 30, 600, 200));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 160, 91, 31));
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
        horizontalWidget_2 = new QWidget(widget_2);
        horizontalWidget_2->setObjectName(QStringLiteral("horizontalWidget_2"));
        horizontalWidget_2->setGeometry(QRect(40, 30, 211, 41));
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

        horizontalWidget_3 = new QWidget(widget_2);
        horizontalWidget_3->setObjectName(QStringLiteral("horizontalWidget_3"));
        horizontalWidget_3->setGeometry(QRect(340, 30, 211, 41));
        horizontalWidget_3->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        horizontalLayout_4 = new QHBoxLayout(horizontalWidget_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(10, 8, 10, 8);
        remoteName = new QLineEdit(horizontalWidget_3);
        remoteName->setObjectName(QStringLiteral("remoteName"));
        sizePolicy.setHeightForWidth(remoteName->sizePolicy().hasHeightForWidth());
        remoteName->setSizePolicy(sizePolicy);
        remoteName->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:1px solid rgb(225, 225, 225);\n"
""));

        horizontalLayout_4->addWidget(remoteName);

        horizontalWidget_4 = new QWidget(widget_2);
        horizontalWidget_4->setObjectName(QStringLiteral("horizontalWidget_4"));
        horizontalWidget_4->setGeometry(QRect(40, 100, 211, 41));
        horizontalWidget_4->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        horizontalLayout_5 = new QHBoxLayout(horizontalWidget_4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(10, 8, 10, 8);
        userName = new QLineEdit(horizontalWidget_4);
        userName->setObjectName(QStringLiteral("userName"));
        sizePolicy.setHeightForWidth(userName->sizePolicy().hasHeightForWidth());
        userName->setSizePolicy(sizePolicy);
        userName->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:1px solid rgb(225, 225, 225);\n"
""));

        horizontalLayout_5->addWidget(userName);

        horizontalWidget_5 = new QWidget(widget_2);
        horizontalWidget_5->setObjectName(QStringLiteral("horizontalWidget_5"));
        horizontalWidget_5->setGeometry(QRect(340, 100, 211, 41));
        horizontalWidget_5->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        horizontalLayout_6 = new QHBoxLayout(horizontalWidget_5);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(10, 8, 10, 8);
        password = new QLineEdit(horizontalWidget_5);
        password->setObjectName(QStringLiteral("password"));
        sizePolicy.setHeightForWidth(password->sizePolicy().hasHeightForWidth());
        password->setSizePolicy(sizePolicy);
        password->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:1px solid rgb(225, 225, 225);\n"
""));

        horizontalLayout_6->addWidget(password);

        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(0, 230, 600, 441));
        widget_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        listWidget = new QListWidget(widget_3);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(25, 10, 550, 320));
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
        verticalLayout->setSpacing(10);
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
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
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
        pushButton_3->setGeometry(QRect(520, 340, 41, 31));
        pushButton_3->setStyleSheet(QLatin1String("background-color: rgb(184,37,37);\n"
"font-size:12px;\n"
"color: #FFFFFF;\n"
"letter-spacing: 0;\n"
"text-align: center;\n"
"border-top-right-radius: 8px; \n"
"border-bottom-left-radius: 8px;\n"
"border-top-left-radius: 8px; \n"
"border-bottom-right-radius: 8px;"));
        pushButton_4 = new QPushButton(widget_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(440, 390, 61, 31));
        pushButton_4->setStyleSheet(QLatin1String("background-color: rgb(184,37,37);\n"
"font-size:12px;\n"
"color: #FFFFFF;\n"
"letter-spacing: 0;\n"
"text-align: center;\n"
"border-top-right-radius: 8px; \n"
"border-bottom-left-radius: 8px;\n"
"border-top-left-radius: 8px; \n"
"border-bottom-right-radius: 8px;"));
        pushButton_5 = new QPushButton(widget_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(510, 390, 61, 31));
        pushButton_5->setStyleSheet(QLatin1String("background-color: rgb(184,37,37);\n"
"font-size:12px;\n"
"color: #FFFFFF;\n"
"letter-spacing: 0;\n"
"text-align: center;\n"
"border-top-right-radius: 8px; \n"
"border-bottom-left-radius: 8px;\n"
"border-top-left-radius: 8px; \n"
"border-bottom-right-radius: 8px;"));
        pushButton_6 = new QPushButton(widget_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(440, 340, 61, 31));
        pushButton_6->setStyleSheet(QLatin1String("background-color: rgb(184,37,37);\n"
"font-size:12px;\n"
"color: #FFFFFF;\n"
"letter-spacing: 0;\n"
"text-align: center;\n"
"border-top-right-radius: 8px; \n"
"border-bottom-left-radius: 8px;\n"
"border-top-left-radius: 8px; \n"
"border-bottom-right-radius: 8px;"));
        NetDriveClass->setCentralWidget(centralWidget);
        QWidget::setTabOrder(localName, remoteName);
        QWidget::setTabOrder(remoteName, userName);
        QWidget::setTabOrder(userName, password);
        QWidget::setTabOrder(password, pushButton);
        QWidget::setTabOrder(pushButton, listWidget);
        QWidget::setTabOrder(listWidget, pushButton_3);

        retranslateUi(NetDriveClass);
        QObject::connect(pushButton, SIGNAL(clicked()), NetDriveClass, SLOT(connectDrive()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), NetDriveClass, SLOT(moveWidgets()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), NetDriveClass, SLOT(moveWidgets()));

        QMetaObject::connectSlotsByName(NetDriveClass);
    } // setupUi

    void retranslateUi(QMainWindow *NetDriveClass)
    {
        NetDriveClass->setWindowTitle(QApplication::translate("NetDriveClass", "NetDrive", nullptr));
        pushButton_2->setText(QApplication::translate("NetDriveClass", "Add", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("NetDriveClass", "NetDrive", nullptr));
        pushButton->setText(QApplication::translate("NetDriveClass", "\350\277\236\346\216\245\351\251\261\345\212\250\345\231\250", nullptr));
        localName->setPlaceholderText(QApplication::translate("NetDriveClass", "\350\276\223\345\205\245\346\234\254\345\234\260\347\233\230\347\254\246", nullptr));
        remoteName->setPlaceholderText(QApplication::translate("NetDriveClass", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200", nullptr));
        userName->setPlaceholderText(QApplication::translate("NetDriveClass", "\350\264\246\345\217\267", nullptr));
        password->setPlaceholderText(QApplication::translate("NetDriveClass", "\345\257\206\347\240\201", nullptr));

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
        pushButton_4->setText(QApplication::translate("NetDriveClass", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        pushButton_5->setText(QApplication::translate("NetDriveClass", "\350\256\276\347\275\256", nullptr));
        pushButton_6->setText(QApplication::translate("NetDriveClass", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetDriveClass: public Ui_NetDriveClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETDRIVE_H

#include "NetDrive.h"
#include <qdebug.h>

using namespace std;

//标志填写账号的页面伸缩情况
//0为隐藏，1为显示
int tabStatu = 0;

NetDrive::NetDrive(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//为方便测试，暂时改 1 
	tabStatu = 1;
}

void NetDrive::connectDrive()
{
	QString userName = ui.userName->text();
	QString password = ui.password->text();
	QString localName = ui.localName->text();
	QString remoteName = ui.remoteName->text();
	MappingDrive(userName, password, localName, remoteName);
}

void NetDrive::moveWidgets()
{

	if (tabStatu)
	{
		for (int i = 0; i < ui.widget_2->height(); i += 10)
		{
			ui.widget_3->setGeometry(QRect(ui.widget_3->x(), ui.widget_3->y() - 10, ui.widget_3->width(), ui.widget_3->height()));

			this->resize(ui.centralWidget->width(), ui.centralWidget->height() - 10);

			this->repaint();
		}
		tabStatu = 0;
	}
	else
	{
		for (int i = 0; i < ui.widget_2->height(); i += 10)
		{
			ui.widget_3->setGeometry(QRect(ui.widget_3->x(), ui.widget_3->y() + 10, ui.widget_3->width(), ui.widget_3->height()));

			this->resize(ui.centralWidget->width(), ui.centralWidget->height() + 10);
			
			this->repaint();
		}
		tabStatu = 1;
	}

}


DWORD NetDrive::MappingDrive(QString userName, QString password, QString localName, QString remoteName) {

	NETRESOURCE nr;
	DWORD res;

	//qDebug() << sizeof("MARXCBR");
	//qDebug() << sizeof( L"MARXCBR");

	TCHAR *szUserName = { QStringToTCHAR(userName) },
		*szPassword = { QStringToTCHAR(password) },
		*szLocalName = { QStringToTCHAR(localName) },
		*szRemoteName = { QStringToTCHAR(remoteName) };

	//
	// Assign values to the NETRESOURCE structure.
	//
	nr.dwType = RESOURCETYPE_ANY;
	nr.lpLocalName = szLocalName;
	nr.lpRemoteName = szRemoteName;
	nr.lpProvider = NULL;
	//
	// Call the WNetAddConnection2 function to assign
	//   a drive letter to the share.
	//
	res = WNetAddConnection2(&nr, szPassword, szUserName, FALSE);
	//
	// If the call succeeds, inform the user; otherwise,
	//  print the error.
	//
	if (res == NO_ERROR)
		printf("Connection added \n", szRemoteName);
	else
		printf("Error: %ld\n", res);

	switch (res)
	{
	case NO_ERROR:
		qDebug()<<"网络驱动器映射成功";
		break;
	case ERROR_BAD_PROFILE:
		qDebug() << "ERROR_BAD_PROFILE\n";
		break;
	case ERROR_CANNOT_OPEN_PROFILE:
		qDebug() << "ERROR_CANNOT_OPEN_PROFILE\n";
		break;
	case ERROR_DEVICE_IN_USE:
		qDebug() << "ERROR_DEVICE_IN_USE\n";
		break;
	case ERROR_EXTENDED_ERROR:
		qDebug() << "ERROR_EXTENDED_ERROR\n";
		break;
	case ERROR_NOT_CONNECTED:
		qDebug() << "ERROR_NOT_CONNECTED\n";
		break;
	case ERROR_OPEN_FILES:
		qDebug() << "ERROR_OPEN_FILES\n";
		break;
	default:
		qDebug() << "未知错误,可能需要帐号和密码认证，或者该主机或文件不存在\n";
		break;
	}

	return res;
}
#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NetDrive.h"
#include <windows.h>
#include <stdio.h>
#include <winnetwk.h>
#pragma comment(lib, "mpr.lib")

#ifdef UNICODE

#define QStringToTCHAR(x)     (wchar_t*) x.utf16()

#define PQStringToTCHAR(x)    (wchar_t*) x->utf16()

#define TCHARToQString(x)     QString::fromUtf16((x))

#define TCHARToQStringN(x,y)  QString::fromUtf16((x),(y))

#else

#define QStringToTCHAR(x)     x.local8Bit().constData()

#define PQStringToTCHAR(x)    x->local8Bit().constData()

#define TCHARToQString(x)     QString::fromLocal8Bit((x))

#define TCHARToQStringN(x,y)  QString::fromLocal8Bit((x),(y))

#endif


class NetDrive : public QMainWindow
{
	Q_OBJECT

public:
	NetDrive(QWidget *parent = Q_NULLPTR);
	DWORD MappingDrive(QString userName, QString password, QString localName, QString remoteName);



private:
	Ui::NetDriveClass ui;

};

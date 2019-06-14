#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NetDrive.h"
#include <windows.h>
#include <stdio.h>
#include <winnetwk.h>
#pragma comment(lib, "mpr.lib")

class NetDrive : public QMainWindow
{
	Q_OBJECT

public:
	NetDrive(QWidget *parent = Q_NULLPTR);


private:
	Ui::NetDriveClass ui;

};

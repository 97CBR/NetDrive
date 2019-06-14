#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NetDrive.h"
#pragma comment(lib, "mpr.lib")
#include <string>
#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <psapi.h>
#include <strsafe.h>
#include <ctime> 
#include <sstream>
#include <vector>
#include <fstream>

class NetDrive : public QMainWindow
{
	Q_OBJECT

public:
	NetDrive(QWidget *parent = Q_NULLPTR);


private:
	Ui::NetDriveClass ui;

};

#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NetDrive.h"




class NetDrive : public QMainWindow
{
	Q_OBJECT

public:
	NetDrive(QWidget *parent = Q_NULLPTR);
	void addDisk();
private:
	Ui::NetDriveClass ui;
	
};

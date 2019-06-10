#include "NetDrive.h"
#include <qdebug.h>
#include <windows.h>
#include <tchar.h>
#include <WinNetWk.h>
#include <stdio.h>
#include <string>
#include <LMUse.h>
#include <LM.h>
#include <lmcons.h>
#include <iostream>

#pragma comment(lib, "Mpr.lib")
#pragma comment(lib, "Netapi32.lib")

using namespace std;


LPCWSTR s2ws(const std::string& s)
{

	size_t origsize = s.length() + 1;
	const size_t newsize = 100;
	size_t convertedChars = 0;
	wchar_t *wcstring = (wchar_t *)malloc(sizeof(wchar_t)*(s.length() - 1));
	mbstowcs_s(&convertedChars, wcstring, origsize, s.c_str(), _TRUNCATE);

	return wcstring;
}

LPWSTR ConvertCharToLPWSTR(const char * szString)
{
	int dwLen = strlen(szString) + 1;
	int nwLen = MultiByteToWideChar(CP_ACP, 0, szString, dwLen, NULL, 0);//算出合适的长度
	LPWSTR lpszPath = new WCHAR[dwLen];
	MultiByteToWideChar(CP_ACP, 0, szString, dwLen, lpszPath, nwLen);
	return lpszPath;
}


NetDrive::NetDrive(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	addDisk();
		string szPasswd = "marxcbr", szUserName = "admin"; //用户名和密码
		NETRESOURCE net_Resource;
		memset(&net_Resource, 0, sizeof(net_Resource));
		net_Resource.dwDisplayType = RESOURCEDISPLAYTYPE_DIRECTORY;
		net_Resource.dwScope = RESOURCE_CONNECTED;
		net_Resource.dwType = RESOURCETYPE_ANY;
		net_Resource.dwUsage = 0;
		net_Resource.lpComment = TEXT("");
		net_Resource.lpLocalName = TEXT("H:");  //映射成本地驱动器Z:
		net_Resource.lpProvider = NULL;
		net_Resource.lpRemoteName = TEXT("\\\\192.168.1.103\\photo"); // \\servername\共享资源名
		DWORD dwFlags = FALSE;

		LPCWSTR pass ;
		pass = s2ws(szPasswd);
		LPCWSTR user ;
		user = s2ws(szUserName);

		DWORD dw = WNetAddConnection2(&net_Resource, pass, user, dwFlags);
		if (dw == ERROR_ALREADY_ASSIGNED) {
			qDebug() << "ERROR_ALREADY_ASSIGNED" << endl;
		}
		else if (dw == ERROR_DEVICE_ALREADY_REMEMBERED) {
			qDebug() << "ERROR_DEVICE_ALREADY_REMEMBERED" << endl;

		}
		else if (dw == NO_ERROR) {
			qDebug() << "NO_ERROR" << endl;

		}
		else if (dw == ERROR_SUCCESS)
		{
			//这里可以像操作本地磁盘一样操作文件了，上面映射为Z盘，就以写文件为例
			FILE *f = fopen("h:\\123.txt", "w");
			if (f != NULL)
			{
				fwrite("658", 5, 1, f);
				fclose(f);
			}
			Sleep(1000);
			//断开共享连接
			DWORD dwConFlig = WNetCancelConnection2(net_Resource.lpLocalName, CONNECT_UPDATE_PROFILE, true);
			if (dwConFlig != ERROR_SUCCESS)
			{
				
			}
		}

}

void NetDrive::addDisk() {
	NET_API_STATUS sta;
	LPTSTR  servername= NULL;
	DWORD   LevelFlags;
	USE_INFO_2 buf;
	LPDWORD parm_err=NULL;

	LevelFlags = 1;
	buf.ui2_username = ConvertCharToLPWSTR("admin");
	buf.ui2_password = ConvertCharToLPWSTR("marxcbr");
	buf.ui2_remote = ConvertCharToLPWSTR("\\\\192.168.1.103\\photo");
	buf.ui2_local = ConvertCharToLPWSTR("G:");
	buf.ui2_asg_type = USE_WILDCARD;
	servername = ConvertCharToLPWSTR("\\\\192.168.1.103\\photo");
	sta = NetUseAdd(servername,LevelFlags, (LPBYTE)&buf,parm_err);

	qDebug() << sta << endl;
	qDebug() << buf.ui2_status << endl;
}
#include "NetDrive.h"
#pragma comment(lib, "mpr.lib")
#include <qdebug.h>
#include <windows.h>
#include <tchar.h>
#include <WinNetWk.h>
#include <stdio.h>
#include <string>
#include <iostream>
#pragma comment(lib, "Mpr.lib")

using namespace std;

void CharToTchar(const char * _char, TCHAR * tchar)
{
	int iLength;

	iLength = MultiByteToWideChar(CP_ACP, 0, _char, strlen(_char) + 1, NULL, 0);
	MultiByteToWideChar(CP_ACP, 0, _char, strlen(_char) + 1, tchar, iLength);
}

LPCWSTR s2ws(const std::string& s)

{

	size_t origsize = s.length() + 1;
	const size_t newsize = 100;
	size_t convertedChars = 0;
	wchar_t *wcstring = (wchar_t *)malloc(sizeof(wchar_t)*(s.length() - 1));
	mbstowcs_s(&convertedChars, wcstring, origsize, s.c_str(), _TRUNCATE);

	return wcstring;
}

NetDrive::NetDrive(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);



		string szPasswd = "marx", szUserName = "admin"; //用户名和密码
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
		DWORD dwFlags = CONNECT_UPDATE_PROFILE;

		LPCWSTR pass ;
		pass = s2ws(szPasswd);
		LPCWSTR user ;
		user = s2ws(szUserName);

		DWORD dw = WNetAddConnection2(&net_Resource, pass, user, dwFlags);
		if (dw == ERROR_ALREADY_ASSIGNED) {
			
		}
		else if (dw == ERROR_DEVICE_ALREADY_REMEMBERED) {
			
		}
		else if (dw != NO_ERROR) {
			
		}
		else if (dw == ERROR_SUCCESS)
		{
			//这里可以像操作本地磁盘一样操作文件了，上面映射为Z盘，就以写文件为例
			FILE *f = fopen("h:\\123.txt", "w");
			if (f != NULL)
			{
				fwrite("12313", 5, 1, f);
				fclose(f);
			}
			//Sleep(100);
			////断开共享连接
			//DWORD dwConFlig = WNetCancelConnection2(net_Resource.lpLocalName, CONNECT_UPDATE_PROFILE, true);
			//if (dwConFlig != ERROR_SUCCESS)
			//{
			//	
			//}
		}

}
#include "NetDrive.h"
#include <qdebug.h>

#include <qprocess.h>


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



	NETRESOURCE nr;
	DWORD res;
	TCHAR szUserName[32] = L"admin",
		szPassword[32] = L"marxcbr",
		szLocalName[32] = L"B:",
		szRemoteName[MAX_PATH] = L"\\\\192.168.1.103\\music";
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
	return;


}


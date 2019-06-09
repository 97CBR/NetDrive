#include "NetDrive.h"
#pragma comment(lib, "mpr.lib")

#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <Winnetwk.h>

NetDrive::NetDrive(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//DWORD dwRetVal;

	//NETRESOURCE nr;
	//DWORD dwFlags;
	//LPWSTR argv[5] = {};
	//int  argc = 5;
	//if (argc != 5) {
	//	wprintf(L"Usage: %s <localname> <remotename> <username> <password>\n",
	//		argv[0]);
	//	wprintf(L"       %s X: \\\\contoso\\public testuser testpasswd\n",
	//		argv[0]);
	//	exit(1);
	//}

	//wprintf(L"Calling WNetAddConnection2 with\n");
	//wprintf(L"  lpLocalName = %s\n", argv[1]);
	//wprintf(L"  lpRemoteName = %s\n", argv[2]);
	//wprintf(L"  lpUsername = %s\n", argv[3]);
	//wprintf(L"  lpPassword = %s\n", argv[4]);

	// Zero out the NETRESOURCE struct
	//memset(&nr, 0, sizeof(NETRESOURCE));

	// Assign our values to the NETRESOURCE structure.

	//nr.dwType = RESOURCETYPE_ANY;
	//nr.lpLocalName = argv[1];
	//nr.lpRemoteName = argv[2];
	//nr.lpProvider = NULL;

	// Assign a value to the connection options
	//dwFlags = CONNECT_UPDATE_PROFILE;
	//
	// Call the WNetAddConnection2 function to assign
	//   a drive letter to the share.
	//
	//dwRetVal = WNetAddConnection2(&nr, argv[4], argv[3], dwFlags);
	//
	// If the call succeeds, inform the user; otherwise,
	//  print the error.
	//
	//if (dwRetVal == NO_ERROR)
	//	wprintf(L"Connection added to %s\n", nr.lpRemoteName);
	//else
	//	wprintf(L"WNetAddConnection2 failed with error: %u\n", dwRetVal);
}

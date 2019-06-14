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

}


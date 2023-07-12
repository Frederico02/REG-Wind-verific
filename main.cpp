#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	
	ShowWindow(GetConsoleWindow(), SW_HIDE); // esconder prompt de comando
	
	system("reg add HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Cryptography\\Wintrust\\Config /v EnableCertPaddingCheck /t REG_SZ /d 1 /f");
	system("reg add HKEY_LOCAL_MACHINE\\Software\\Wow6432Node\\Microsoft\\Cryptography\\Wintrust\\Config /v EnableCertPaddingCheck /t REG_SZ /d 1 /f");

	
	return 0;
}

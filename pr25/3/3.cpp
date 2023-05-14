
///Очистить свой каталог dir_FIO. Создать программный код, который удаляет ваш 
//каталог dir_FIO.

#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	// Очистить каталог
	LPCWSTR dir = L"D:\\dir_SAR";
	if (!RemoveDirectory(dir))
	{
		cerr << "Remove directory failed." << endl
			<< "The last error code: " << GetLastError() << endl;
		cout << "Press any key to finish.";
		cin.get();
		return 0;
	}
	cout << "The directory is removed." << endl;
	return 0;
}
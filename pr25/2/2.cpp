
//Создать программный код, который создает подкаталог subdir_FIO в вашем 
//каталоге dir_FIO.
#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	// создаем подкаталог
	LPCWSTR dir = L"D:\\dir_SAR";
	LPCWSTR subdir = L"D:\\dir_SAR\\subdir_SAR";
	if (!CreateDirectoryEx(dir, subdir, NULL))
	{
		cerr << "Create directory failed." << endl
			<< "The last error code: " << GetLastError() << endl;
		cout << "Press any key to finish.";
		cin.get();
		return 0;
	}
	cout << "The subdirectory is created." << endl;
	return 0;

}
 
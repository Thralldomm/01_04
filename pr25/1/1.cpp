//Напишите программный код, создающий каталог dir_FIO на диске D (где FIO –
//ваши собственные инициалы).


#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	// создаем каталог
	LPCWSTR dir = L"D:\\dir_SAR";
	if (!CreateDirectory(dir, NULL))
	{
		cerr << "Create directory failed." << endl
			<< "The last error code: " << GetLastError() << endl;
		cout << "Press any key to finish.";
		cin.get();
		return 0;
	}
	cout << "The directory is created." << endl;
	return 0;
}
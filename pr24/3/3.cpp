
#include <iostream>
#include <iomanip>
#include <fstream>  
#include <windows.h>
using namespace std;
int main()
{
	ofstream fout; 
	// -открытие файла в режиме записи :
	fout.open("myfile.txt", ios::out);
	for (int i = 10; i < 15; i++) fout << i<<endl;



	// COPY
	TCHAR p[] = TEXT("myfile.txt");
	TCHAR v[] = TEXT("myfile-copy.txt");
	// копируем файл
	if (!CopyFile(p, v, FALSE))
	{
		cerr << "Copy file failed." << endl
			<< "The last error code: " << GetLastError() << endl;
		cout << "Press any key to finish.";
		cin.get();
		return 0;
	}
	cout << "The file is copied." << endl;



	// REPLACE 
		TCHAR p[] = TEXT("myfile.txt");
		TCHAR v[] = TEXT("myfile_1.txt");
		TCHAR k[] = TEXT("myfile_1.txt");
		// перемещаем файл
		if (!ReplaceFile(
			p, // имя замещаемого файла
			v, // имя файла-заместителя
			NULL, // имя резервного файла
			REPLACEFILE_WRITE_THROUGH, // освободить буферы
			NULL, NULL //не используются
		))
		{
			cerr << "Replace file failed." << endl
				<< "The last error code: " << GetLastError() << endl;
			cout << "Press any key to finish.";
			cin.get();
			return 0;
		}
		cout << "The file is replaced." << endl;
 
	return 0;
}
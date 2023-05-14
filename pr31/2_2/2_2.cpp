//Создайте второй процесс, который запускает первый с помощью функции
//CreatProcess.

#include < windows.h > 
#include < conio.h > 
#include < iostream >

using namespace std;

int main()
{
	STARTUPINFO si = { sizeof(si) };

	PROCESS_INFORMATION pi;

	TCHAR p[] = TEXT("2.exe");

	CreateProcess(NULL, p, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);

	return 0;
}
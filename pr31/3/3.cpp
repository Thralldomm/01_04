
//Организовать ввод любого количества чисел с клавиатуры, пока пользователь не
//введёт 0. После ввода нуля, показать на экран количество чисел, которые были введены, их
//общую сумму, среднее арифметическое, и завершить процесс с помощью функции
//ExitProcess


#include <iostream> 
#include <windows.h> 
using namespace std;
 
int main()
{
	setlocale(LC_ALL, "ru");
	int a, kol=0, sum=0;
	while (true) {
		cin >> a;
		if (a == 0) break;
		kol++;
		sum += a;
	};
	
	cout << "количество = " << kol << endl
		<< "сумма = " << sum << endl
		<< "среднее арифметическое = " << sum / kol<< endl;
	ExitProcess(1);
}
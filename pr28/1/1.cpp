//
//Задание 1.
//Создайте статический массив FIO[10] из 10 элементов, которые задаются по
//формуле FIO[i] = 2023 + b + i.
//(FIO – ваши инициалы, например EMP,
//	b – номер компьютера, например 10).

 
#include <iostream>
using namespace std;
int main()
{
	const int N = 10;
	int SAR[N];

	for (int i = 0; i < N; i++) {
		SAR[i] = 2023 + 12 + i;
		cout << SAR[i]<<" - ";
	}
}
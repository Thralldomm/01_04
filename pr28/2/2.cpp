
//В статическом массиве familia[8] каждый элемент получен удвоением значения
//предыдущего элемента.Создайте такой массив и выведите значения на экран, приняв за
//familia[0] номер вашего компьютера.
//(familia – ваша фамилия, например eremenko)

#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	const int N = 8;
	int semenova[N] = { 12 };

	for (int i = 1; i < N; i++) {
		semenova[i] = semenova[i - 1] * 2;
		cout << semenova[i] << " - ";
	}
}
 


//Создайте статический массив name[12].Элементы массива вводятся с клавиатуры.
//Найдите все четные значения массива и выведите их на консоль.
//(name – ваше имя, например marina)

#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	const int N = 12;
	int amina[N];

	for (int i = 0; i < N; i++) {
		cin>> amina[i];
	}
	 
	//четные значения массива
	for (int i = 0; i < N; i++) {
		if(amina[i]%2==0) cout << amina[i] << " - ";
	}
}
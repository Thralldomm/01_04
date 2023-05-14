//Задайте динамический массив nomergruppa[n], задаваемы с клавиатуры.Выведите на
//консоль элементы, большие элемента nomergruppa[0].
//(nomergruppa – номер вашего компьютера, ваша группа, например 0

#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	int N;
	cout << "Input array size:" << endl;
	cin >> N;
	int* nomer21ip204 = new  int[N];

	for (int i = 0; i < N; i++) {
		cin >> nomer21ip204[i];
	}

	//элементы, большие элемента nomergruppa[0].
	for (int i = 0; i < N; i++) {
		if (nomer21ip204[i]> nomer21ip204[0]) cout << nomer21ip204[i] << " - ";
	}
}
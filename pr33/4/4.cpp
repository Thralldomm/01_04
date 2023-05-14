
//Задан динамический массив, размерность которого 
//задается пользователем.
//Вывести на консоль все отрицательные элементы массива
//и их количество

#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	int N;
	cout << "Input array size:" << endl;
	cin >> N;
	int* arr = new  int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	 
	int sum=0;
	for (int i = 0; i < N; i++) {
		if (arr[i] < 0) {
			cout << arr[i] << " - ";
			sum++;
		}
	}
	cout <<endl<< "количество отрицательных элементов = " << sum<< endl;

	delete[] arr;
	for (int i = 0; i < N; i++) arr[i] = nullptr;

}

//В заданном с клавиатуры статическом массиве найти среднее арифметическое и
//вывести на консоль значения массива, меньшие среднего.
//Программный код должен содержать функцию для определения среднего значения
//массив

#include <iostream> 
using namespace std;

//функцию для определения среднего значения
int average(int* arr, int N) {
	int sum = 0;
	for (int i = 0; i < N; i++) sum += arr[i];
	return sum / N;
}

int main()
{
	const int N = 5;
	int arr[N];
	for (int i = 0; i < N; i++) cin >> arr[i];

	int aver = average(arr, N);
	for (int i = 0; i < N; i++) {
		if (arr[i] < aver) cout << arr[i]; // вывести значения, меньшие среднего
	}

}
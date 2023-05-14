
//Напишите программу, которая вычисляет сумму первых n целых положительных 
//нечетных чисел.Количество суммируемых чисел вводит пользователь

#include <iostream> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N;
	cout << "Input array size:" << endl;
	cin >> N;
	int* arr = new  int[N];

	cout << "Input array elements: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int s;
	cout << "Количество суммируемых чисел:" << endl;
	cin >> s;

	int sum = 0;
	for (int i = 0; i < s; i++) {
		if (arr[i] > 0 && arr[i]%2 != 0) sum+=arr[i];
	}
	cout <<" суммa первых n целых положительных нечетных чисел = " << sum;
}
 
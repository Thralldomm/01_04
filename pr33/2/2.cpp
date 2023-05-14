
//Даны три действительных числа. 
//Выбрать из них те, которые принадлежат интервалу (1, 3).

#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	int N = 3;
	setlocale(LC_ALL, "ru");
	float* arr = new float[N];
	cout << "Введите три действительных числа: " << endl;
	for (int i = 0; i < N; i++) cin >> arr[i];

	for (int i = 0; i < N; i++) {
		if (arr[i] <= 3.0 && arr[i] >= 1.0) {
			cout << arr[i] << ", ";
		}
	}
	cout << " принадлежат интервалу (1, 3)"<< endl;
	
	delete[] arr;
	for (int i = 0; i < N; i++) arr[i] = 0.0;

	
	return 0;
}
 
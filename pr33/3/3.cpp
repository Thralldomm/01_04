//Даны натуральное число n, символы s[1], …, s[n].Подсчитать, сколько раз среди данных символов 
//встречается символ + и сколько раз символ * .

#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Input array size:" << endl;
	int n;
	cin >> n;
	char* s = new char[n];
	cout << "Input array elements: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	int sum1 = 0, sum2 = 0; // sum1 + //sum2 *
	for (int i = 0; i < n; i++) {
		if (s[i] == '+')sum1++;
		if (s[i] == '*')sum2++;
	}
	cout << "Amount of '+' = " << sum1;
	cout << "Amount of '*' = " << sum2;

	delete[] s;
	for (int i = 0; i < n; i++) s[i] = '\0';

	return 0;
}

//Напишите программу, которая определяет минимальное число в
//последовательности положительных чисел, которую ввел пользователь.Если в
//последовательности есть отрицательные числа, то вы должны сообщить об этом
//пользователю и предложить повторить ввод еще раз

#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	int a, min=0;
	 
	cout << "Input 10 positive numbers : " << endl;
	for (int i = 0; i < 10; i++) {
		p: 
		cin >> a;
		if (a < 0) {
			cout << "Number`s negative, start again";
			goto p;
		}
		if (a < min) min = a; 
	}
	cout << "The smallest number was: " << min << endl;
	return 0;
}
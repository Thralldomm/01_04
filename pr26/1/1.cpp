
//В программном коде создайте функцию, которая проверяет, является ли число
//положительным или отрицательным, и выводит результат на консоль.
//Организуйте в коде проверку для пяти чисел, вводимых с клавиатуры.


#include <iostream> 
using namespace std;

//функцию для проверки числа на отрицательность
// параметры по значению
bool positive(int a) {
	return a > 0 ? 1 : 0;
}

int main()
{
	cout << "Input 5 numbers"<< endl;
	int a;
	for (int i = 0; i < 5; i++) {
		cin >> a;
		if (positive(a))cout << a << " is positive";
		else cout << a << " is negative";
	}
}

//Создайте многопоточный код, используя оператор switch для индивидуальной
//задачи.

//3. Оператор вводит число.Если число равно 7, то вывести ему
//противоположное число - 7. Если число равно 8, то вывести квадрат этого числа.Если
//число равно 50, удвоить это число и вывести результат.В остальных случаях
//вывести слово «Спасибо»


#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	
	switch (a) {
	case 7: {
		cout << "-" << a << endl;
		break;
	}
	case 8: {
		cout << a*a << endl;
		break;
	}
	case 50: {
		a = a * 2;
		cout << a << endl;
		break;
	}
	default: {
		cout << "Спасибо" << endl;
		break;
	}
	}
	return 0;
}
 
//Напишите программу нахождения гипотенузы и площади 
//прямоугольного треугольника по двум данным катетам.
 
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	float* k1 = new float;
	float* k2 = new float; 
	cout << "Введите значения двух катетов: "<< endl;
	cin >> *k1>> *k2;

	float* gip = new float{ sqrt((*k1 * *k1) + (*k2 * *k2)) }; // с=√ (a^2+b^2).
	float* plos = new float{ (*k1 * *k2) / 2 };

	cout << "Гипотенуза = " << *gip << endl;
	cout << "Площадь = " << *plos << endl;

	delete k1, k2, gip, plos;
	k1 = k2 = gip = plos = nullptr;

	return 0;
}
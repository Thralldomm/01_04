//Нарисовать треугольник из символов* .Высоту выбирает пользователь.Например:
//высота = 5, на экране
//*
//**
//***
//****
//*****

#include <iostream>  
#include <stack> 
using namespace std;

 
int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << "Введите высоту: ";
	cin >> n;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}

}
 
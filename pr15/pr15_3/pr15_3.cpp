//Создайте стек из 10 элементов, 
//значения которых вводятся с клавиатуры. Найдите среднее арифметическое элементов стека

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	stack <int> s;

	int temp;

	cout << "Input 10 elements of stack: "<<endl;
	int sum = 0;

	for (int i = 0; i < 10; i++) { 
		cin >> temp;
		s.push(temp);
		sum += temp;
	}
	cout << "Среднее арифметическое: " << sum / 10 << endl;;

}
 
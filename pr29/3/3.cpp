
//В заданном с клавиатуры статическом массиве найти среднее арифметическое и
//вывести на консоль значения массива, меньшие среднего.
//Задайте целочисленный стек nomergruppa[15].Задайте элементы стека как
//удвоенные значения чисел, вводимых с клавиатуры пользователем.Выведите на консоль
//элементы стека nomergruppa[15].
//(nomergruppa – номер вашего компьютера, ваша группа, например 05ip198

#include <stack> 
#include <iostream> 
using namespace std;
 
int main()
{
	const int N = 15;
	stack<int> nomer21[N];
	int temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		nomer21->push(temp*2);
	} 
	for (int i = 0; i < N; i++) {
		cout << nomer21->top() << " - ";
		nomer21->pop();
	}
 
}
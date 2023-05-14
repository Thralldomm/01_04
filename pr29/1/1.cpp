//Задание 1.
//Создайте стек FIO[10] из 10 элементов, которые задаются по формуле FIO[i] = 2023 +
//b + i.Выведите элементы стека на консоль
//(FIO – ваши инициалы, например EMP,
//	b – номер компьютера, например 10).

#include <iostream> 
#include <stack> 
using namespace std;
 

int main()
{
	stack<int> SAR[10];

	for (int i = 0; i < 10; i++) {
		SAR->push(2023 + 12 + i);
	}
	for (int i = 0; i < 10; i++) {
		cout <<SAR->top()<<" - ";
		SAR->pop();
	}

}
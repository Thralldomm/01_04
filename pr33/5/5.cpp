//Задайте два массива A[5] и B[5].Элементы массивов вводятся с клавиатуры.Вывести на консоль массив чисел QU[10] по типу очереди, состоящий из элементов первого и второго массивов в следующем порядке : 
//QU[1] = A[1], QU[2] = B[1], QU[3] = A[2], QU[4] = B[2], .....QU[9] = A[5], QU[10] = B[5].

#include <iostream> 
using namespace std;
int main()
{
	int N = 5;
	setlocale(LC_ALL, "ru");  
	int* A = new  int[N];
	int* B = new  int[N];

	cout << "Input array A elements: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	cout << "Input array B elements: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}
	int N2 = 10;
	int* QU = new int[N2];

	// заполняем массив QU элементами массивов А и Б по очереди
	int q = 1;
	for (int i = 0; i < N; i++) {
		QU[q] = A[i];
		q += 2;
	}
	q = 0;
	for (int i = 0; i < N; i++) {
		QU[q] = B[i];
		q += 2;
	}

	cout << "Array QU: " << endl;
	for (int i = 0; i < N2; i++) {
		cout << QU[i] << endl;
	}
}
 
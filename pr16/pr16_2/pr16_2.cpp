//1. Создайте еще один текстовый файл с именем dbase2.txt, в который внесите записи о пяти своих одногруппниках в следующем формате : фамилия и инициалы(25 позиций, фамилия должна начинаться с первой позиции), год рождения(7 позиций), рост(5 позиций).
//
//2. Перетащите или разместите копированием файл dbase2.txt в папку, в которой расположен ваш файл Pr16_2_FIO.cpp.
//
//3. Воспользуйтесь программным кодом ПЕРВОГО проекта, сделав в нем необходимые изменения.Проверьте нахождение и отображение в окне консоли информации о каждом студенте.
//
//4. Выполните вывод информации о среднем росте для четырех любых студентов.

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <locale>
#include <windows.h> // 0
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	const int l_name = 25, l_year = 7, l_pay = 3;
	const int l_buf = l_name + l_year + l_pay; // 1

	struct Man
	{ // 2
		int birth_year;
		char name[l_name + 1];
		float pay;
	};
	const int l_dbase = 100;
	Man dbase[l_dbase]; // 3
	char buf[l_buf + 1]; // 4
	char name[l_name + 1]; // 5


	ifstream fin("dbase.txt"); // 6
	if (!fin) { cout << " Ошибка открытия файла "; return 1; }
	int i = 0;
	while (fin.getline(buf, l_buf)) // 7
	{
		if (i >= l_dbase)
		{
			cout << " Слишком длинный файл "; return 1;
		}
		strncpy_s(dbase[i].name, buf, l_name);
		dbase[i].name[l_name] = '\0';
		dbase[i].birth_year = atoi(&buf[l_name]);
		dbase[i].pay = atof(&buf[l_name + l_year]);
		i++;
	}
	int n_record = i, n_man = 0; //8
	float mean_pay = 0;
	while (true) // 9
	{
		cout << " Input a surname or 'end': ";
		cin >> name;
		//OemToChar(name); // 10
		if (strcmp(name, "end") == 0) break; // 11
		bool not_found = true; // 12
		for (i = 0; i < n_record; i++) // 13
		{
			if (strstr(dbase[i].name, name)) // 14
				if (dbase[i].name[strlen(name)] == ' ') // 15
				{
					strcpy_s(name, dbase[i].name);
					//CharToOem(name, name); // 16
					cout << name << dbase[i].birth_year << " " << dbase[i].pay << endl; 
					n_man++; 
					mean_pay += dbase[i].pay; 
					not_found = false;
				}
		}
		if (not_found) cout << " Not found" << endl;
	}
	if (n_man > 0) cout << " Средний рост: " << mean_pay / n_man << endl; // 17
	return 0;
}
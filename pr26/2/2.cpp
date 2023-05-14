
//Напишите программу, запрашивает у пользователя номер месяца и затем выводит
//соответствующее название времени года и месяц.В случае, если пользователь введет
//недопустимое число, программа должна вывести сообщение об ошибке.
//Программный код должен содержать функцию, позволяющую по введенному номеру
//месяца вывести время года и его название.
//Пример результата выполнения программы :
//Введите номер месяца(число от 1 до 12) : 12
//Зима
//Декабрь

#include <iostream> 
using namespace std;

void month(int &a) {
    switch (a) {
    case 12: cout << "Winter"<<"\t" << "December" << endl;
    case 1: cout << "Winter" << "\t" << "January"<< endl;
    case 2: cout << "Winter" << "\t" << "February"<< endl;
    case 3: cout << "Spring" << "\t" << "March"<< endl;
    case 4: cout << "Spring" << "\t" << "April"<< endl;
    case 5: cout << "Spring" << "\t" << "May"<< endl;
    case 6: cout << "Summer" << "\t" << "June"<< endl;
    case 7: cout << "Summer" << "\t" << "July"<< endl;
    case 8: cout << "Summer" << "\t" << "August"<< endl;
    case 9: cout << "Autumn" << "\t" << "September"<< endl;
    case 10: cout << "Autumn" << "\t" << "October"<< endl;
    case 11: cout << "Autumn" << "\t" << "November"<< endl;
    }
}
 
int main()
{
    int a;
    cout << "Input a number of a month (1-12)";
    cin >> a;
    month(a);
}
 
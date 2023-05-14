 
#include <iostream>
#include <iomanip>
#include <fstream>  
using namespace std;
int main()
{
    //объявление переменных :

    int i, n;
    double a;

   // -описание потока для записи данных в файл :
    ofstream f;

   // -открытие файла в режиме записи :
    f.open("accounts.txt", ios::out);

    //-ввод количества вещественных чисел :
    cout << "n="; cin >> n;

   // -цикл для ввода вещественных чисел и записи их в файл :
    for (i = 0; i < n; i++)
    {
        cout << "a=";
        //ввод числа
        cin >> a;
        f << a << "\t";
    }

   // - закрытие потока и завершение работы :
    f.close();
    system("pause");
    return 0;

}

 
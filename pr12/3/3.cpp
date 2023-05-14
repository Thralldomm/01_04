//Приведите пример использования разных функций из одного пространства имен,
//заданных в разных файлах.
//Для этого в отдельном консольном приложении добавьте заголовочные файлы chip.h
//и dale.h.В каждом из них определите одно и то же пространство имен doIP198(цифры
//    означают номер вашей группы) и функции name() и familia() (где name – ваше имя, familia –
//    ваша фамилия, записанные латиницей).Действия внутри функций определите
//    самостоятельно

#include <iostream>
#include "chip.h"
#include "dale.h"
using namespace std;

int main()
{
    char* name = doIP204::name();
    char* familia = doIP204::familia();
    cout << "My name is " << name << endl;  //amina
    cout << "My surname is " << familia << endl;  //semenova
    free(name); free(familia);
}
//Используя примеры пункта 2, внесите изменения в свой файл с расширением.cpp
//Задания 1, а именно, конкретные пространства имен, для выполнения функции из каждого
//пространства имен.
//Для выполнения задания можно создать новый проект и добавить новые
//заголовочные файлы.


#include <iostream>
#include "one.h"
#include "two.h"
using namespace std;

int main()
{
    cout << "Area of the rectangle 3, 4 = " << one::doSAR(3, 4) << endl;
    cout << "Perimeter of the rectangle 3, 4 = " << two::doSAR(3, 4) << endl;

}

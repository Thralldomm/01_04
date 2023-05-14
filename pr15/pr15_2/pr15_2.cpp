// pr15_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>  
#include <conio.h>
#include <stdio.h>
#include <stdlib.h> 


struct ELEMENT//элемент стека
{
    int Content; // значение
    ELEMENT* Next;  //ссылка на следующий элемент?
};

typedef ELEMENT* LPELEMENT;//указатель на элемент стека


class STACK
{
public:
    STACK();//конструктор
    ~STACK();//деструктор
    bool Push(int Content);//добавление элемента
    bool Pop(int& Content);//изъятие элемента
    void Clear();//очистка стека
    int Length();//определение количества элементов в стеке
    void OutPut();//Вывод стека
private:
    LPELEMENT Start;//Начало стека
};

void Menu();

int main()
{
    setlocale(0, "Rus");
    Menu();
    return 0;
}

STACK::STACK()
{
    Start = NULL;
}

bool STACK::Push(int Content)//Добавляет в начало стека элемент со значением Content,
{ //в случае успешного добавления элемента вернёт true, иначе- false
    LPELEMENT NE = new ELEMENT;
    if (!NE)
        return false;
    NE->Content = Content;
    NE->Next = Start;
    Start = NE;
    return true;
}

bool STACK::Pop(int& Content)//Извлекает из стека элемент в переменную Content
{ //в случае успешного извлечения элемента вернёт true, иначе- false
    if (!Start)
        return false;
    Content = Start->Content;
    LPELEMENT Temp = Start;
    Start = Start->Next;
    delete Temp;
    return true;
}

void STACK::Clear()//очищает стек
{
    LPELEMENT Temp;
    while (Start)
    {
        Temp = Start;
        Start = Start->Next;
        delete Temp;
    }
    return;
}

int STACK::Length()//Возвращает число элементов в стеке
{
    LPELEMENT Temp;
    unsigned int i = 0;
    while (Start)
    {
        Temp = Start;
        Start = Start->Next;
        i++;
    }
    return i;
}

STACK::~STACK()
{
    Clear();
}

void STACK::OutPut()//выводит в консоль все элементы стека
{
    if (!Start)
    {
        printf("стек пуст\n");
        return;
    }
    LPELEMENT Temp = Start;
    while (Temp)
    {
        printf("%i\n", Temp->Content);
        Temp = Temp->Next;
    }
}


void Menu()
{
    STACK Stack;
    int x, c;
    do {
        printf("1) Добавить элемент\n2) Изъять элемент\n3) Узнать количество элементов\n4) Очистить стек\n5) Показать всё содержимое стека\n6) Выход\n");
        c = _getch();
        switch (c)
        {
        case '1':
            system("cls");
            printf("Введите число, которое нужно добавить: ");
            scanf_s("%i", &x);
            Stack.Push(x);
            break;
        case '2':
            system("cls");
            if (Stack.Pop(x))
                printf("%i\n", x);
            else
                printf("стек пуст\n");
            _getch();
            break;
        case '3':
            system("cls");
            printf("%i\n", Stack.Length());
            _getch();
            break;
        case '4':
            Stack.Clear();
            break;
        case '5':
            system("cls");
            Stack.OutPut();
            _getch();
            break;
        }
        system("cls");
    } while (c != '6');
}


#include <iostream>



//Задание 2.
//Дополните программный код функцией getDouble() с очисткой входного буфера от
//всех символов до появления символа '\n' (нажатия клавиши Enter)
 

double getDouble()
{
	std::cout << "Enter a double value: ";
	double a;
	std::cin >> a; 
	std::cin.ignore(32767, '\n'); 
	return a;
}

double getValue()
{
	std::cout << "Enter a double value: ";
	double a;
	
	std::cin >> a; 
	if (std::cin.fail()) // если предыдущее извлечение было неудачным,
	{
		std::cin.clear(); // то возвращаем cin в 'обычный' режим  работы
		std::cin.ignore(32767, '\n'); // и удаляем значения предыдущего  ввода из входного буфера
	}
	 
	return a;
}


char getOperator()
{
	while (true) // цикл продолжается до тех пор, пока  пользователь не введет корректное значение
	{
	std::cout << "Enter one of the following: +, -, *, or / : ";
	char sm;
	std::cin >> sm;
	// Выполняем проверку значений
	if (sm == '+' || sm == '-' || sm == '*' || sm =='/')
	return sm; // возвращаем данные в функцию main() 
	else // в противном случае, сообщаем пользователю,    что что - то пошло не так
	std::cout << "Oops, that input is invalid.Please try again.\n";
	}

}
void printResult(double a, char sm, double b)
{
	if (sm == '+')
		std::cout << a << " + " << b << " is " << a + b << '\n';
	else if (sm == '-')
		std::cout << a << " - " << b << " is " << a - b << '\n';
	else if (sm == '*')
		std::cout << a << " * " << b << " is " << a * b << '\n';
	else if (sm == '/')
		std::cout << a << " / " << b << " is " << a / b << '\n';
}
int main()
{
	double a = getDouble();
	char sm = getOperator();
	double b = getValue();
	printResult(a, sm, b);
	return 0;
}

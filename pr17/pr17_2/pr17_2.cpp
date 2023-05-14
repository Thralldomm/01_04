#include <iostream> 
#include <cstdint>
int main()
{
	std::int16_t x{ 0 }; // переменная x занимает 16 бит, её  диапазон значений : от - 32768 до 32767
	first:	std::cout << "Enter a number between -32768 and 32767: ";
	std::cin >> x;
	if (std::cin.fail()) // если предыдущее извлечение было неудачным,
	{
		std::cout << "The number is too big. We will use 32767 which is the max\n";
		std::cin.clear();  
			std::cin.ignore(32767, '\n'); 
			std::cout << "Unless you want to pick another number. Press q _ ";
			 char q;
			std::cin >> q;
			if (q == 'q') goto first;
	}


	std::int16_t y{ 0 }; // переменная y занимает 16 бит, её  диапазон значений : от - 32768 до 32767
	second:	std::cout << "Enter another number between -32768 and  32767 : ";
		std::cin >> y; 
		if (std::cin.fail()) // если предыдущее извлечение было неудачным,
		{
			std::cout << "The number is too big. We will use 32767 which is the max\n";
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Unless you want to pick another number. Press q _ ";
			char q;
			std::cin >> q;
			if (q == 'q') goto second;
		}
	std::cout << "The sum is: " << x + y << '\n';
	return 0;
}
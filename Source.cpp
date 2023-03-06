#include <iostream>
#include"Date.h"

int main()
{
 	char end = 'd';
	do {
		setlocale(LC_ALL, "ru");
		int x,y,z;
		std::cout << "Введите день:";
		std::cin >> x;
		std::cout << "Введите месяц:";
		std::cin >> y;
		std::cout << "Введите год:";
		std::cin >> z;
		Date h(x, y, z);
		system("cls");
		std::cout << "Какую операцию вы хотите совершить?\n";
		std::cout << "1. увеличить день на один\n" << "2. увеличить месяц на один\n" << "3. увеличить год на один\n" << "4. увеличить дни на несколько\n";
		int sw;
		std::cin >> sw;
		switch (sw) {
		case 1: {
			h.add_day1();
			std::cout << "Новая дата: " << h.To_string() << '\n';
			break;
		}
		case 2: {
			h.add_month1();
			std::cout << "Новая дата: " << h.To_string() << '\n';
			break;
		}
		case 3: {
			h.add_year1();
			std::cout << "Новая дата: " << h.To_string() << '\n';
			break;
		}
		case 4: {
			h.add_day(3);
			std::cout << "Новая дата: " << h.To_string() << '\n';
			break;
		}
		}
		std::cout << "Если хотите завершить работу введите(a/A):";
		std::cin >> end;
	} while (end != 'a' && end != 'A');
	return 0;
}

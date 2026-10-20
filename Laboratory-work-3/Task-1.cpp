#include<iostream>
#include<windows.h>

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int a = 0;

	std::cout << "Введите число: ";
	if (!(std::cin >> a)) {
		std::cout << "Ошибка ввода" << std::endl;
		return 1;
	}

	if ((a >= 100 && a <= 999) || (a <= -100 && a >= -999)) {
		std::cout << "Трехзначное число" << std::endl;
	}
	else {
		std::cout << "Не трехзначное число" << std::endl;
	}

	return 0;
}
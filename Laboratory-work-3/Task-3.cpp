#include<iostream>
#include<windows.h>
#include<bitset>

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int num, sistem;

	std::cout << "Введите число от 0 до 255: ";
	if (!(std::cin >> num)) {
		std::cout << "Ошибка ввода" << std::endl;
		return 1;
	}
	else if (num < 0 || num > 255) {
		std::cout << "Ошибка ввода" << std::endl;
		return 1;
	}

	std::cout << "Введите систему счислеия (2, 8, 10, 16): ";
	if (!(std::cin >> sistem)) {
		std::cout << "Ошибка ввода" << std::endl;
		return 1;
	}
	else if (sistem != 2 && sistem != 8 && sistem != 10 && sistem != 16) {
		std::cout << "Выберите систему счисления из предложенных" << std::endl;
		return 1;
	}

	if (sistem == 10) {
		std::cout << "Результат операции: " << num << std::endl;
	}
	else if (sistem == 2) {
		std::cout << "Результат операции: " << std::bitset<8>(num) << std::endl;
	}
	else if (sistem == 8) {
		std::cout << "Результат операции: " << std::oct << num << std::endl;
	}
	else if (sistem == 16) {
		std::cout << "Результат операции: " << std::hex << num << std::endl;
	}
	else {
		std::cout << "Произошла ошибка :(";
	}
	return 0;
}
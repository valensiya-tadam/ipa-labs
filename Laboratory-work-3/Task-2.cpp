#include<iostream>
#include<windows.h>
#include<cmath>

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	double a, b, result;
	int operation;
	const double EPSILON = 1e-9;

	std::cout << "Введите число a: ";
	if (!(std::cin >> a)) {
		std::cout << "Ошибка ввода" << std::endl;
		return 1;
	}

	std::cout << "Введите число b: ";
	if (!(std::cin >> b)) {
		std::cout << "Ошибка ввода" << std::endl;
		return 1;
	}

	std::cout << "1. +" << std::endl;
	std::cout << "2. -" << std::endl;
	std::cout << "3. *" << std::endl;
	std::cout << "4. /" << std::endl;
	std::cout << "Выберите операцию: ";
	if (!(std::cin >> operation)) {
		std::cout << "Ошибка ввода" << std::endl;
		return 1;
	}

	if (operation == 1) {
		result = a + b;
		std::cout << "Результат операции: " << result << std::endl;
	}
	else if (operation == 2) {
		result = a - b;
		std::cout << "Результат операции: " << result << std::endl;
	}
	else if (operation == 3) {
		result = a * b;
		std::cout << "Результат операции: " << result << std::endl;
	}
	else if (operation == 4) {
		if (std::fabs(b) < EPSILON) {
			std::cout << "На ноль делить нельзя" << std::endl;
		}
		else {
			result = a / b;
			std::cout << "Результат операции: " << result << std::endl;
		}
	}
	else {
		std::cout << "Произошла ошибка :(";
	}

	return 0;
}
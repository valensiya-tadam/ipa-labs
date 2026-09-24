#include <iostream>
#include <windows.h>
#include <cmath>

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	//обьявление переменных
	double a, b, c;

	//ввод катета а
	std::cout << "Введите катет a: ";
	if (!(std::cin >> a)) {
		std::cout << "Ошибка ввода" << std::endl;
		return 1;
	}

	//ввод катета b
	std::cout << "Введите катет b: ";
	if (!(std::cin >> b)) {
		std::cout << "Ошибка ввода" << std::endl;
		return 1;
	}

	//явное приведение типов данных и вычисление результата
	c = std::sqrt(static_cast<double>(a * a + b * b));

	//вывод результата
	std::cout << "Гипотенуза равна: " << c << std::endl;

	return 0;
}
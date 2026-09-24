#include <iostream>
#include <windows.h>

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	//объявление константы
	const double PI = 3.141592653589793;
	//объявление переменных
	double degrees, radians;

	//ввод угла в градусах
	std::cout << "Введите угол в градусах: ";
	if (!(std::cin >> degrees)) {
		std::cout << "Ошибка ввода" << std::endl;
		return 1;
	}

	//неявное приведение типов (деление на 180)
	double radiansResult = degrees * PI / 180;
	std::cout << degrees << " градусов = " << radiansResult << " радиан" << std::endl;

	//ввод угла в радианах
	std::cout << "Введите угол в радинах: ";
	if (!(std::cin >> radians)) {
		std::cout << "Ошибка ввода" << std::endl;
		return 1;
	}

	//неяное приведение типов (умножение на 180)
	double degreesResult = radians * 180 / PI;
	std::cout << radians << " радиан = " << degreesResult << " градусов" << std::endl;

	return 0;

}
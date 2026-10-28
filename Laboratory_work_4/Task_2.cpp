#include <iostream>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int unit = 0;
    double value = 0.0;
    double result = 0.0;

    std::cout << "Выберите исходную единицу измерения (1-3):" << std::endl;
    std::cout << "1. Дюймы (в сантиметры)" << std::endl;
    std::cout << "2. Футы (в метры)" << std::endl;
    std::cout << "3. Мили (в километры)" << std::endl;
    std::cout << "Ваш выбор: ";

    if (!(std::cin >> unit)) {
        std::cout << "Ошибка: неверный формат ввода" << std::endl;
        return 1;
    }

    if (unit < 1 || unit > 3) {
        std::cout << "Ошибка: введите число от 1 до 3" << std::endl;
        return 1;
    }

    std::cout << "Введите значение для перевода: ";
    if (!(std::cin >> value) || value < 0) {
        std::cout << "Ошибка: введено некорректное или отрицательное значение" << std::endl;
        return 1;
    }

    switch (unit) {
    case 1:
        result = value * 2.54; // 1 дюйм = 2.54 см
        std::cout << value << " дюйм. = " << result << " см" << std::endl;
        break;
    case 2:
        result = value * 0.3048; // 1 фут = 0.3048 м
        std::cout << value << " фут. = " << result << " м" << std::endl;
        break;
    case 3:
        result = value * 1.609344; // 1 миля = 1.609344 км
        std::cout << value << " миль = " << result << " км" << std::endl;
        break;
    default:
        std::cout << "Ошибка" << std::endl;
        break;
    }

    return 0;
}

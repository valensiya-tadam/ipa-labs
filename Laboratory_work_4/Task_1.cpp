#include <iostream>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int figure = 0;

    std::cout << "Введите число для выбора фигуры:" << std::endl;
    std::cout << "1. Круг" << std::endl;
    std::cout << "2. Квадрат" << std::endl;
    std::cout << "3. Треугольник" << std::endl;
    std::cout << "Выберите число: " << std::endl;

    if (!(std::cin >> figure)) {
        std::cout << "Ошибка" << std::endl;
        return 1;
    }

    // Множественный выбор на основе введенного числа
    switch (figure) {
    case 1:
        std::cout << "Выбранная фигура: Круг" << std::endl;
        break;
    case 2:
        std::cout << "Выбранная фигура: Квадрат" << std::endl;
        break;
    case 3:
        std::cout << "Выбранная фигура: Треугольник" << std::endl;
        break;
    default:
        std::cout << "Ошибка: введите число от 1 до 3" << std::endl;
        break;
    }

    return 0;
}

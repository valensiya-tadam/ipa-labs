#include <iostream>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    //объявление переменных
    double a = 0.0;
    double b = 0.0;
    double result = 0.0;

    //ввод числа а
    std::cout << "Введите число a: ";
    if (!(std::cin >> a)) {
        std::cout << "Ошибка ввода" << std::endl;
        return 1;
    }

    //ввод числа b
    std::cout << "Введите число b: ";
    if (!(std::cin >> b)) {
        std::cout << "Ошибка ввода" << std::endl;
        return 1;
    }

    //подсчет результата
    result = (a + b) / 2.0;

    //вывод результата
    std::cout << "Среднее арифметическое двух чисел: " << result << std::endl;

    return 0;
}
#include <iostream> //подключение библиотеки

int main() //главная функция
{
    double a, b, result; //объявление переменных

    //ввод числа а
    std::cout << "Number a: ";
    std::cin >> a;

    //ввод числа b
    std::cout << "Number b: ";
    std::cin >> b;

    //подсчет результата
    result = (a + b) / 2.0;

    //вывод результата
    std::cout << "The average of two numbers: " << result << std::endl;

    return 0;
}

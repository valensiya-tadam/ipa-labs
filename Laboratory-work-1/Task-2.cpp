#include <iostream> //подключение библиотеки

int main() //главная функция
{
    double length; //длина ребра

    std::cout << "Cube edge length: ";
    std::cin >> length;

    //подсчет объема и площади
    double volume = length * length * length;
    double surface_area = 6 * length * length;

    //вывод результата
    std::cout << "Cube volume: " << volume << std::endl;
    std::cout << "Surface area: " << surface_area << std::endl;

    return 0;

}

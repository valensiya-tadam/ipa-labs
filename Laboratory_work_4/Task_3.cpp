#include <iostream>
#include <windows.h>
#include <limits> // Для полной очистки буфера ввода

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int categoryChoice = 0;
    int dishChoice = 0;
    int totalPrice = 0;

    std::cout << "МЕНЮ РЕСТОРАНА" << std::endl;
    std::cout << "1. Салаты" << std::endl;
    std::cout << "2. Горячие блюда" << std::endl;
    std::cout << "3. Напитки" << std::endl;
    std::cout << "4. Десерты" << std::endl;
    std::cout << "Выберите категорию (1-4): " << std::endl;

    if (!(std::cin >> categoryChoice)) {
        std::cout << "Ошибка: введите цифру." << std::endl;
        return 1;
    }

    std::cout << "";

    // Внешний switch для категорий меню
    switch (categoryChoice) {
    case 1:
        std::cout << "САЛАТЫ" << std::endl;
        std::cout << "1. Цезарь с курицей — 350 руб." << std::endl;
        std::cout << "2. Греческий салат — 280 руб." << std::endl;
        std::cout << "Выберите блюдо (1-2): ";

        if (!(std::cin >> dishChoice)) goto input_error; // Переход по ошибке типа

        switch (dishChoice) {
        case 1: totalPrice = 350; break;
        case 2: totalPrice = 280; break;
        default: goto menu_error; // Переход по ошибке диапазона
        }
        break;

    case 2:
        std::cout << "ГОРЯЧИЕ БЛЮДА" << std::endl;
        std::cout << "1. Стейк из говядины — 750 руб." << std::endl;
        std::cout << "2. Паста Карбонара — 420 руб." << std::endl;
        std::cout << "Выберите блюдо (1-2): ";

        if (!(std::cin >> dishChoice)) goto input_error;

        switch (dishChoice) {
        case 1: totalPrice = 750; break;
        case 2: totalPrice = 420; break;
        default: goto menu_error;
        }
        break;

    case 3:
        std::cout << "НАПИТКИ" << std::endl;
        std::cout << "1. Капучино — 180 руб." << std::endl;
        std::cout << "2. Лимонад — 150 руб." << std::endl;
        std::cout << "Выберите блюдо (1-2): ";

        if (!(std::cin >> dishChoice)) goto input_error;

        switch (dishChoice) {
        case 1: totalPrice = 180; break;
        case 2: totalPrice = 150; break;
        default: goto menu_error;
        }
        break;

    case 4:
        std::cout << "ДЕСЕРТЫ" << std::endl;
        std::cout << "1. Чизкейк — 250 руб." << std::endl;
        std::cout << "2. Шоколадный фондан — 290 руб." << std::endl;
        std::cout << "Выберите блюдо (1-2): ";

        if (!(std::cin >> dishChoice)) goto input_error;

        switch (dishChoice) {
        case 1: totalPrice = 250; break;
        case 2: totalPrice = 290; break;
        default: goto menu_error;
        }
        break;

    default:
        std::cout << "Ошибка: неверная категория меню" << std::endl;
        return 1;
    }

    // Успешный вывод чека
    std::cout << "Ваш заказ принят" << std::endl;
    std::cout << "Итоговая стоимость: " << totalPrice << " руб." << std::endl;
    return 0;

    // Блоки обработки ошибок ввода
input_error:
    std::cin.clear(); // Сброс флага ошибки потока
    std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n'); // Очистка буфера
    std::cout << "Ошибка: некорректный формат ввода блюда" << std::endl;
    return 1;

menu_error:
    std::cout << "Ошибка: выбранного номера блюда нет в меню" << std::endl;
    return 1;
}

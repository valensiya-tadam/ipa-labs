#include <iostream>

int main()
{
	//объявление переменных
	int hours, minutes;

	//ввод количества часов
	std::cout << "Enter the hours: ";
	std::cin >> hours;

	//ввод колличества минут
	std::cout << "Enter the minutes: ";
	std::cin >> minutes;

	//подсчет времени в минутах и секундах
	int convert_to_minutes = (hours * 60) + minutes;
	int convert_to_seconds = convert_to_minutes * 60;

	//вывод ркзультата
	std::cout << "Time in minutes: " << convert_to_minutes << std::endl;
	std::cout << "Time in seconds: " << convert_to_seconds << std::endl;

	return 0;
}

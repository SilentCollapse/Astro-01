#include <iostream>
#include "light_years.hpp"
#include "kilometers.hpp"

int main() {
	char text1[] = "Welcome Traveler. There's long journey ahead of you!";
	char text2[] = "Tell me a number of light years or millions of kilometers";
	char text3[] = "and I will tell you how long your journey will last.";

	int max_lenght = sizeof(text1);
	if (sizeof(text2) > max_lenght) max_lenght = sizeof(text2);
	if (sizeof(text3) > max_lenght) max_lenght = sizeof(text3);

	for (int i{}; i < max_lenght - 1; i++) {
		std::cout << "*";
	}
	std::cout << std::endl;
	std::cout << text1 << std::endl;
	std::cout << text2 << std::endl;
	std::cout << text3 << std::endl;

	for (int i{}; i < max_lenght - 1; i++) {
		std::cout << "*";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "[1] Number of light years   [2] Millions of kilometers   [0] End program" << std::endl;

	char choose_unit{};
	bool spin = true;

	while (spin) {
		std::cout << "Please enter your choice: ";
		std::cin >> choose_unit;

		if (choose_unit == '1') {
			f_light_years();
			//added to stop console from immediate stop while running from .exe
			spin = false;
			std::cin.get();
			std::cin.get();
		}
		else if (choose_unit == '2') {
			kilometers();
			//added to stop console from immediate stop while running from .exe
			spin = false;
			std::cin.get();
			std::cin.get();
		}
		else if (choose_unit == '0') {
			std::cout << "Thank you and goodbye" << std::endl;
			break;
		}
		else {
			std::cout << "Sorry, that choice is not in the menu. Please try again." << std::endl;
		}
	}
	return 0;
}
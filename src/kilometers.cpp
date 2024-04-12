#include <iostream>
#include <cmath>

void transform_km(long double result_km, int& years, int& months, int& days) {
	long double total_days = result_km / 24;
	years = static_cast<int>(total_days / 365.25);
	int days_rest = static_cast<int>(total_days) % 365;
	months = days_rest / 30;
	days = days_rest % 30;
}

void kilometers() {
	long double kilometers{};

	std::cout << "Enter number of millions of kilometers: ";
	std::cin >> kilometers;
	std::cout << std::endl;
	std::cout << "Here are available for you options of transportation" << std::endl;
	std::cout << "[1] Walk      [2] Run          [3] Bicycle    [4] Car  " << std::endl;
	std::cout << "[5] Airplane  [6] Fighter jet  [7] Satellite" << std::endl;
	std::cout << "[8] Enterprise (NCC-1701)      [9] USS Voyager (NCC-74656)" << std::endl;
	std::cout << std::endl;
	std::cout << "Choose your mode of transportation: ";

	char choose_mode{};
	std::cin >> choose_mode;

	long double result_km{};
	int years{}, months{}, days{};

	if (choose_mode == '1') {
		result_km = (kilometers * 1000000) / 5;
		transform_km(result_km, years, months, days);
		std::cout << "\nIf you choose to walk all that way you will need a lot of time. In fact you will need\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else if (choose_mode == '2') {
		result_km = (kilometers * 1000000) / 12;
		transform_km(result_km, years, months, days);
		std::cout << "\nIf you choose to run all that way you will need a lot of time. In fact you will need\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else if (choose_mode == '3') {
		result_km = (kilometers * 1000000) / 20;
		transform_km(result_km, years, months, days);
		std::cout << "\nWell with a bicycle it will take a lot of time. In fact it will take\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else if (choose_mode == '4') {
		result_km = (kilometers * 1000000) / 100;
		transform_km(result_km, years, months, days);
		std::cout << "\nWell with a car it will take a lot of time. In fact it will take\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else if (choose_mode == '5') {
		result_km = (kilometers * 1000000) / 1000;
		transform_km(result_km, years, months, days);
		std::cout << "\nIf you choose to fly a plane it will take a lot of time. In fact it will take\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else if (choose_mode == '6') {
		result_km = (kilometers * 1000000) / 3000;
		transform_km(result_km, years, months, days);
		std::cout << "\nFighter jet won't help, it will take a lot of time. In fact it will take\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else if (choose_mode == '7') {
		result_km = (kilometers * 1000000) / 50000;
		transform_km(result_km, years, months, days);
		std::cout << "\nSo you want to ride a satellite? Trip will last for\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else if (choose_mode == '8') {
		result_km = (kilometers * 1000000) / 230870764800;
		transform_km(result_km, years, months, days);
		std::cout << "\nNow we are talking, You may actually survive this journey. On a board of this fine classic you'll need\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else if (choose_mode == '9') {
		result_km = (kilometers * 1000000) / 1104152371200;
		transform_km(result_km, years, months, days);
		std::cout << "\nNow this is a fast one, you will reach your destination in\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else {
		std::cout << "Unfortunately we don't have it on the menu" << std::endl;
	}
}
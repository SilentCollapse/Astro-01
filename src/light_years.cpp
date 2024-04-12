#include <iostream>
#include <cmath>

void transform_ly(long double result_ly, long long& years, long long& months, long long& days) {
	long double inpart;
	long double fractpart = modf(result_ly, &inpart);
	years = static_cast<long long>(inpart);
	months = static_cast<long long>(fractpart * 12);
	fractpart = fractpart * 12 - months;
	days = static_cast<long long>(fractpart * 30.44);
}

void f_light_years() {
	long double light_years{};

	std::cout << "Enter number of light years you want to travel: ";
	std::cin >> light_years;
	std::cout << std::endl;
	std::cout << "Here are available for you options of transportation" << std::endl;
	std::cout << "[1] Walk      [2] Run          [3] Bicycle    [4] Car  " << std::endl;
	std::cout << "[5] Airplane  [6] Fighter jet  [7] Satellite" << std::endl;
	std::cout << "[8] Enterprise (NCC-1701)      [9] USS Voyager (NCC-74656)" << std::endl;
	std::cout << std::endl;
	std::cout << "Choose your mode of transportation: ";

	char choose_mode{};
	std::cin >> choose_mode;

	long double result_ly{};
	long long years{}, months{}, days{};

	if (choose_mode == '1') {
		result_ly = (light_years * 9460730472581) / 43830;
		transform_ly(result_ly, years, months, days);
		std::cout << "\nIf you choose to walk all that way you will need a lot of time. In fact you will need\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else if (choose_mode == '2') {
		result_ly = (light_years * 9460730472581) / 105192;
		transform_ly(result_ly, years, months, days);
		std::cout << "\nIf you choose to run all that way you will need a lot of time. In fact you will need\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else if (choose_mode == '3') {
		result_ly = (light_years * 9460730472581) / 175320;
		transform_ly(result_ly, years, months, days);
		std::cout << "\nWell with a bicycle it will take a lot of time. In fact it will take\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else if (choose_mode == '4') {
		result_ly = (light_years * 9460730472581) / 876600;
		transform_ly(result_ly, years, months, days);
		std::cout << "\nWell with a car it will take a lot of time. In fact it will take\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else if (choose_mode == '5') {
		result_ly = (light_years * 9460730472581) / 8766000;
		transform_ly(result_ly, years, months, days);
		std::cout << "\nIf you choose to fly a plane it will take a lot of time. In fact it will take\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else if (choose_mode == '6') {
		result_ly = (light_years * 9460730472581) / 26298000;
		transform_ly(result_ly, years, months, days);
		std::cout << "\nFighter jet won't help, it will take a lot of time. In fact it will take\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else if (choose_mode == '7') {
		result_ly = (light_years * 9460730472581) / 434647500;
		transform_ly(result_ly, years, months, days);
		std::cout << "\nSo you want to ride a satellite? Trip will last for\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else if (choose_mode == '8') {
		result_ly = light_years / 214;
		transform_ly(result_ly, years, months, days);
		std::cout << "\nNow we are talking, You may actually survive this journey. On a board of this fine classic you'll need\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
	else if (choose_mode == '9') {
		result_ly = light_years / 1024;
		transform_ly(result_ly, years, months, days);
		std::cout << "\nNow this is a fast one, you will reach your destination in\n";
		std::cout << years << " years " << months << " months and " << days << " days. Good luck :)" << std::endl;
	}
}
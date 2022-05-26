#include <iostream>
#include <chrono>
#include <ctime>
using namespace std::chrono;



std::string Funkcja(std::string imie, int dl, int klucz) { //poczatek funkcji

	if (!(klucz >= -26 && klucz <= 26)) {

		return 0;

	}

	else if (klucz >= 0) {

		for (int i = 0; i < dl; i = i + 1) {

			if (!((imie[i] + klucz) <= imie[i])) {

				imie[i] = imie[i] + klucz;

			}

			else {

				imie[i] = imie[i] + klucz - 26;

			}

		}
	}

	else {

		for (int i = 0; i < dl; i = i + 1) {

			if (!((imie[i] + klucz) >= imie[i])) {

				imie[i] = imie[i] + klucz;

			}


			else {

				imie[i] = imie[i] + klucz + 26;

			}

		}

	}
	return imie;

} // koniec funkcji




int main()
{
	int klucz;
	int dl;
	std::string imie;

	std::cout << "Podaj wyraz (małe litery): " << std::endl;

	std::cin >> imie;
	dl = imie.length();
	std::cout << "Podaj klucz: " << std::endl;
	std::cin >> klucz;
	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now();
	std::cout << "Zakodowane imie to : " << std::endl;
	std::cout << Funkcja(imie, dl, klucz) << std::endl;
	std::cout << "Zdekodowane imie to : " << std::endl;
	std::cout << Funkcja(Funkcja(imie, dl, klucz), dl, -klucz);

	end = std::chrono::system_clock::now();

	std::chrono::duration<double> elapsed_seconds = end - start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << std::endl;
	std::cout << "Kod wykonal sie w : " << elapsed_seconds.count() << "sekund" << std::endl;


}

#include <iostream>
#include <chrono>
#include <ctime>
using namespace std::chrono;

int main()
{
	int n, f0, f1, f;
	std::cout << "Podaj ile wyrazów ciągu wypisać: ";
	std::cin >> n;
	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now();

	f0 = 0;
	f1 = 1;

	for (int i = 0; i < n + 1; i = i + 1) {

		if (i > 1) {

			f = f0 + f1;
			f0 = f1;
			f1 = f;
		}
		else {

			f = i;

		}

		std::cout << f << std::endl;
	}

	end = std::chrono::system_clock::now();

	std::chrono::duration<double> elapsed_seconds = end - start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);

	std::cout << "Kod wykonal sie w : " << elapsed_seconds.count() << "sekund" << std::endl;





}

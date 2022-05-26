#include <iostream>
#include <chrono>
#include <ctime>
using namespace std::chrono;



int main()
{
	int l, p, sr, szukana;
	char tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };


	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now();

	std::cout << "Podaj liczbe ktora chcesz znalezc: ";
	std::cin >> szukana;

	l = 0;
	p = 15;
	sr = (l + p) / 2;
	while (l <= p) {
		if (tab[sr] == szukana)
		{
			break;
		}
		if (tab[sr] > szukana)
		{
			p = sr - 1;
		}
		else
		{
			l = sr + 1;
		}
		sr = (l + p) / 2;
	}


	std::cout << "Liczba  " << szukana << " wystepuje w zbiorze w komorce o indeksie: " << sr;
	std::cout << std::endl;

	end = std::chrono::system_clock::now();

	std::chrono::duration<double> elapsed_seconds = end - start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);

	std::cout<< "Kod wykonal sie w : " << elapsed_seconds.count() << "sekund" <<std::endl;
	
}

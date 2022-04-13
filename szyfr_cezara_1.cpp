#include <iostream>
#include <string>
using namespace std;


string Funkcja(string imie, int dl, int klucz) { //poczatek funkcji

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
	string imie;

	cout << "Podaj wyraz (małe litery): " << endl;
	cin >> imie;
	dl = imie.length();
	cout << "Podaj klucz: " << endl;
	cin >> klucz;

	cout << "Zakodowane imie to : " << endl;
	cout << Funkcja(imie, dl, klucz) << endl;
	cout << "Zdekodowane imie to : " << endl;
	cout << Funkcja(Funkcja(imie, dl, klucz), dl, -klucz);


}
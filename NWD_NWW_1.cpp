#include <iostream>

using namespace std;


int main()
{
    int a, b, iloczyn, licznik;

    cout << "Podaj pierwszą liczbę: " << endl;
    cin >> a;

    cout << "Podaj drugą liczbę: " << endl;
    cin >> b;

    iloczyn = a * b;
    licznik = 0;

    while (a != b) {
        if (a < b) {
            b = b - a;
            licznik = licznik + 1;
<<<<<<< HEAD
=======

>>>>>>> 9874b82b6664848d0fd54be5dac865b64ebe51ed
        }

        else {

            a = a - b;
            licznik = licznik + 1;
        }
<<<<<<< HEAD
=======
        
>>>>>>> 9874b82b6664848d0fd54be5dac865b64ebe51ed


    }



    cout << "Największy wspólny dzielnik: " << a << endl;

    cout << "Najmniejsza wspólna wielokrotność: " << iloczyn / a << endl;

    cout << "Pętla wykonała się: " << licznik << " razy" << endl;





}

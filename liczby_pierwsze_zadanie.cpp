#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj do ilu liczb chcesz wyświetlić: ";

    int lp = 0; // zlicza kolejno wygenerowane liczby pierwsze
    int d; // kolejne dzielniki
    int n; // liczba określająca ile liczb pierwszych należy wygenerować
    int p = 2; // kolejno testowane liczby naturalne.

    int licznikwhile = 0;
    int licznikfor = 0;
    int licznikif1 = 0;
    int licznikif2 = 0;

    cin >> n; // przyjęcie od uzytkownika ile wygenerowac liczb

    while (lp < n) { // dopóki lp jest mniejsze od liczby ile chce wygenerowac

        licznikwhile = licznikwhile + 1;

        bool flag = true;

        for (d = 2; d <= p - 1; d = d + 1) { // dopóki kolejny dzielnik jest mniejszy bądz równy testowanej liczbie zmniejszajacej sie o 1

            licznikfor = licznikfor + 1;

            if (p % d == 0) { // jeżeli kolejna testowana liczba jest podzielona przez d rowne na poczatku 2

                licznikif1 = licznikif1 + 1;

                if (d == p)
                    flag = true; //  jeśli prawda idz do kolejnego ifa
                else
                    flag = false;

            }



        }


        if (flag == true) {

            licznikif2 = licznikif2 + 1;

            lp = lp + 1;
            cout << p << " jest liczbą pierwszą" << endl; // wyświetlenie komunikatu
            p = p + 1; // przejście do kolejnej liczby

        }

        else {
            p = p + 1; // przejście do kolejnej liczby
        }



    }
    cout << endl;
    cout << "Pętla while wykonała się: " << licznikwhile << " razy" <<endl;
    cout << "Pętla for wykonała się: " << licznikfor << " razy" << endl;
    cout << "Pętla if1 wykonała się: " << licznikif1 << " razy" << endl;
    cout << "Pętla if1 wykonała się: " << licznikif2 << " razy" << endl;

}


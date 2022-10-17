#include <iostream>

using namespace std;


/*

3 RODZAJE ITTERACJI:
PĘTLA FOR zasada działania: cechy: Lista instrukcji (czyli w tym przypadku wypisanie tekstu na ekran) wykonuje się tak długo jak warunek (czyli stan końcowy) jest prawdziwy. Kiedy warunek staje się fałszywy, wówczas pętla zostaje zakończona.
PĘTLA WHILE zasada działania: cechy: 
PĘTLA DO WHILE zasada działania: cechy: 


*/


int main()
{
    int a, b, iloczyn, licznik, x, bezwzgledna;

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
        }

        else {

            a = a - b;
            licznik = licznik + 1;
        }


    }


    cout << "PETLA DO WHILE" << endl;
    
    cout << "Podaj liczbę: " << endl;
    cin >> x;

    	do{
		cin >> x;
			
		
		if(x<0){
		bezwzgledna=x*(-1);
		}
		
		else {
		
		bezwzgledna=x;
		
		}
	
	
	
	
	}while(bezwzgledna<5)


}

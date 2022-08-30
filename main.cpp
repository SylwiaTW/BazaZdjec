#include <iostream>
#include "plik.h"

using namespace std;

int main()
{
    Plik zdjecie;
    int wyb;
    system ("cls"); //clean screen

        cout << "[1] Dodaj zdjecie" << endl;
        cout << "[2] Szukaj zdjecia" << endl;
        cout << "[3] Usun rejestr" << endl;
        cout << "[4] Zakoncz program" << endl;
        cin >> wyb;

 switch (wyb){
        case 1:
             zdjecie.dodaj_plik();
             break;
        case 2:
             zdjecie.szukaj();
             break;
        case 3:
             zdjecie.usunRejestr();
             break;
        case 4:
             zdjecie.zakoncz();
             break;

        cin.get();
        }
}

#include <iostream>
#include <fstream>
#include "zdjecie.h"

void Zdjecie::wprowadz_dane(string typ)
{
    cout << "Wprowadz nazwe pliku  ";         cin >> nazwa;
  //  cout << "Wpisz typ pliku  ";              cin >> typ;
    cout << "Wpisz date wykoania pliku  ";    cin >> datawykonania;
    cout << "Wprowadz lokalizacje pliku  ";   cin >> lokalizacja;
    cout << "Wpisz rozmiar pliku  ";        cin >> rozmiar;
    cout << "Wpisz ocene  ";                cin >> ocena;
dodaj_plik(typ);
}


void Zdjecie::dodaj_plik(string typ)
{
    ofstream bazazjec("bazazjec.txt", ios::app);
    bazazjec << nazwa << ' ' << typ << ' ' << datawykonania <<' ' << lokalizacja <<' ' << rozmiar <<' ' << ocena << endl;
    bazazjec.close();
}

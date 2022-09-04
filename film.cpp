#include "film.h"
#include <iostream>
#include <fstream>

using namespace std;

void Film::wprowadz_dane(string typ)
{
     cout << "Wprowadz czas trwania  ";          cin >> czastrwania;
     cout << "Wpisz liczbe klatek na sekunde  ";              cin >> kns;
     Zdjecie::wprowadz_dane(typ);
}

void Film::dodaj_plik(string typ)
{
    ofstream bazazjec("bazazjec.txt", ios::app);
    bazazjec << nazwa << ' ' << typ << ' ' << datawykonania <<' ' << lokalizacja <<' ' << rozmiar <<' ' << ocena <<' ' << czastrwania <<' ' << kns << endl;
    bazazjec.close();
}

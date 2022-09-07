#include "film.h"
#include <iostream>
#include <fstream>

using namespace std;


void Film::wprowadz_dane(string typ)
{
     cout << "Wprowadz czas trwania:  ";
     czastrwania=Zdjecie::wpisz_int();
     cout << "Wpisz liczbe klatek na sekunde:  ";
     kns=Zdjecie::wpisz_int();
     cin.ignore();
     Zdjecie::wprowadz_dane(typ);
}

void Film::dodaj_plik(string typ)
{
    fstream bazazdjec;
    bazazdjec.open("bazazdjec.txt", ios::out | ios::app);
    bazazdjec <<nazwa<<'|'<<typ<<'|'<<datawykonania<<'|'<<lokalizacja<<'|'<<rozmiar<<'|'<<ocena<<'|'<<klucz<<'|'<<czastrwania<<'|'<<kns<<endl;
    bazazdjec.close();
}

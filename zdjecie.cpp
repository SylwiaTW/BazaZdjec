#include <iostream>
#include <fstream>
#include "zdjecie.h"
using namespace std;

void Zdjecie::wprowadz_dane(string typ)
{
    cout << "Wprowadz nazwe pliku:  ";
    getline(cin,nazwa);
    cout << "Wpisz date wykoania pliku:  ";    cin >> datawykonania;
    cout << "Wprowadz lokalizacje pliku:  ";   cin >>lokalizacja;
    cout << "Wpisz rozmiar pliku:  ";          cin >>rozmiar;
    cout << "Wpisz ocene:  ";                  cin >>ocena;
    cout << "wpisz slowa kluczowe:  ";
    cin.ignore();
    getline(cin,klucz);
    dodaj_plik(typ);
}

void Zdjecie::dodaj_plik(string typ)
{
    fstream bazazdjec;
    bazazdjec.open("bazazdjec.txt", ios::out | ios::app);
    bazazdjec <<nazwa<<'|'<<typ<<'|'<<datawykonania<<'|'<<lokalizacja<<'|'<<rozmiar<<'|'<<ocena<<'|'<<klucz<<'|'<<czastrwania<<'|'<<kns<<endl;
    bazazdjec.close();
}




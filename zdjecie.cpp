#include <iostream>
#include <fstream>
#include "zdjecie.h"
using namespace std;


string Zdjecie::wpisz_string()
{   string n;
    getline(cin, n);
    while ((n.find('|')) != string::npos){
            cout << "nieprawidlowy znak! wprowadz jeszcze raz: ";
            getline(cin, n);
            }
    return n;
}


int Zdjecie::wpisz_int()
{   int n;
    while (!(cin >> n)){
     cout << "Zly typ danych! Wpisz wartosc liczbowa: ";
     cin.clear();
     cin.ignore(100, '\n');
     }
    return n;
}


void Zdjecie::wprowadz_dane(string typ)
{
    cout << "Wprowadz nazwe pliku:  ";
    nazwa=wpisz_string();
    cout << "Wpisz date wykonania pliku:  ";
    datawykonania=wpisz_string();
    cout << "Wprowadz lokalizacje pliku:  ";
    lokalizacja=wpisz_string();
    cout << "Wpisz rozmiar pliku:  ";
    rozmiar=wpisz_int();
    cout << "Wpisz ocene:  ";
    ocena=wpisz_int();
    cout << "wpisz slowa kluczowe:  ";
    cin.ignore();
    klucz=wpisz_string();
    dodaj_plik(typ);
}

void Zdjecie::dodaj_plik(string typ)
{
    fstream bazazdjec;
    bazazdjec.open("bazazdjec.txt", ios::out | ios::app);
    bazazdjec <<nazwa<<'|'<<typ<<'|'<<datawykonania<<'|'<<lokalizacja<<'|'<<rozmiar<<'|'<<ocena<<'|'<<klucz<<'|'<<czastrwania<<'|'<<kns<<endl;
    bazazdjec.close();
}

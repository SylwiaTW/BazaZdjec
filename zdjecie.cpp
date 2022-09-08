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
    cout << "Wpisz date wykonania pliku (zalecany format: DD-MM-RRRR):  ";
    datawykonania=wpisz_string();
    cout << "Wprowadz lokalizacje pliku:  ";
    lokalizacja=wpisz_string();
    cout << "Wpisz rozmiar pliku (MB):  ";
    rozmiar=wpisz_int();
    cout << "Wpisz ocene (od 1 do 6):  ";
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

Zdjecie::Zdjecie(string n, string d, string l, string k, float r, float cz, float ks, int o)
{   nazwa=n;
    datawykonania=d;
    lokalizacja=l;
    klucz=k;
    rozmiar=r;
    czastrwania=cz;
    kns=ks;
    ocena=o;
}

Zdjecie::~Zdjecie()
{
   // if(bazazdjec.is_open()){ bazazdjec.close();}
}

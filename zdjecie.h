#ifndef ZDJECIE_H
#define ZDJECIE_H
#include <string>
#include "plik.h"
using namespace std;

class Zdjecie :public Plik
{
protected:
    string nazwa, typ, datawykonania, lokalizacja, klucz;
    float rozmiar, czastrwania=0, kns=0;
    int ocena;

public:
    void dodaj_plik(string typ);
    void wprowadz_dane(string typ);
    int wpisz_int();
    string wpisz_string();

};

#endif // ZDJECIE_H

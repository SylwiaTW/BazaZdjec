#ifndef ZDJECIE_H
#define ZDJECIE_H
#include <string>
#include "plik.h"
using namespace std;

class Zdjecie :public Plik
{
protected:
    string nazwa, typ, datawykonania, lokalizacja, klucz;
    float rozmiar, czastrwania, kns;
    int ocena;

public:
    Zdjecie(string="brak", string="01-01-2000", string="brak", string="brak", float=0, float=0, float=0, int=0);
    ~Zdjecie();
    void dodaj_plik(string typ);
    void wprowadz_dane(string typ);
    int wpisz_int();
    float wpisz_float();
    string wpisz_string();
};

#endif // ZDJECIE_H

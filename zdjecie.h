#ifndef ZDJECIE_H
#define ZDJECIE_H
#include <string>
#include "plik.h"
using namespace std;

class Zdjecie :public Plik
{
protected:
    string typ, nazwa, datawykonania, lokalizacja;
    float rozmiar;
    int ocena;

public:
    void dodaj_plik(string typ);
    void wprowadz_dane(string typ);

};

#endif // ZDJECIE_H

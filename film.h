#ifndef FILM_H
#define FILM_H

#include "zdjecie.h"

class Film : public Zdjecie
{
    float czastrwania, kns;

public:
    void dodaj_plik(string typ);
    void wprowadz_dane(string typ);
};

#endif // FILM_H

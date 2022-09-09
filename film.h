#ifndef FILM_H
#define FILM_H

#include "zdjecie.h"

class Film : public Zdjecie
{

public:
   void wprowadz_dane(string typ);
   void dodaj_plik(string typ);
   int wpisz_int();
   float wpisz_float();
   string wpisz_string();
};

#endif // FILM_H

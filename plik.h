#ifndef PLIK_H
#define PLIK_H
#include <string>
using namespace std;

class Plik
{
    public:
    virtual void wprowadz_dane(string typ);
    virtual void dodaj_plik(string typ);
};

#endif // PLIK_H

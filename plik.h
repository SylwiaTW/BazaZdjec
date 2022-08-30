#ifndef PLIK_H
#define PLIK_H
#include <string>
using namespace std;

class Plik
{
    public:

    string nazwa, typ, datawykonania, dodaj, nowanazwa, wybor, str, line, ftyp, fdatawykonania;
    int choice2;

    void dodaj_plik();
    void szukajnazwa();
    void szukajtyp();
    void szukajdatawykonania();
    void zakoncz();
    void wyswietlWszystko();
    void szukaj();
    void usunRejestr();

};

#endif // PLIK_H

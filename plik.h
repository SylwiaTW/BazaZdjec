#ifndef PLIK_H
#define PLIK_H
#include <string>
using namespace std;

class Plik
{

    string nazwa, typ, datawykonania, sznazwa, sztyp, szdatawykonania, wybor;
    int wybor2;

    public:
    Plik(string="brak", string="jpeg", string="brak", string="brak", string="jpeg", string="brak", string="n", int=4);
    ~Plik();
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

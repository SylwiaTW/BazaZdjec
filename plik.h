#ifndef PLIK_H
#define PLIK_H
#include <string>
using namespace std;

class Plik
{
    string nazwa, typ, datawykonania, sz, sznazwa, sztyp, szdatawykonania, wybor;

    public:
  /*  Plik(string="brak", string="jpeg", string="brak", string="brak", string="jpeg", string="brak", string="brak", string="n");
    ~Plik(); */
    void dodaj_plik();
    void szukajpo(int a);
    void szukajnazwa();
    void szukajtyp();
    void szukajdatawykonania();
    void zakoncz();
    void wyswietlWszystko();
    void szukaj();
    void usunRejestr();

};

#endif // PLIK_H

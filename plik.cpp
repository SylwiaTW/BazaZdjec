#include <iostream>
#include "plik.h"
#include <fstream>

using namespace std;
int wybor2;

void Plik::dodaj_plik()
{
    ofstream nowyplik("nowyplik.txt", ios::app);
    cout << "Wprowadz nazwe pliku  ";         cin >> nazwa;
    cout << "Wpisz typ pliku  ";              cin >> typ;
    cout << "Wpisz date wykoania pliku  ";    cin >> datawykonania;

    nowyplik << nazwa << ' ' << typ << ' ' << datawykonania << endl;
    nowyplik.close();
}

void Plik::szukaj()
    {
         system ("CLS");

         cout << "[1] szukaj po nazwie" << endl;
         cout << "[2] szukaj po typie pliku" << endl;
         cout << "[3] szukaj po dacie wykonania" << endl;
         cout << "[4] wyswietl wszystkie pliki" << endl;
         cout << "[5] zakoncz program" << endl;
         cin >> wybor2;
         switch (wybor2){
                      case 1: case 2: case 3:
                          szukajpo(wybor2);
                          break;
                     case 4:
                          wyswietlWszystko();
                          break;
                     case 5:
                          zakoncz();
                          break;
                          }
                }


void Plik::szukajpo(int a)
{
    string slownik[4]={"", "nazwe", "typ", "date wykoania"};
    string zmienna[4]={"", nazwa, typ, datawykonania};

    ifstream plik("nowyplik.txt");
    string sz;
    system("CLS");
    cout << "Wpisz " << slownik[a] << " pliku:";
    cin >> sz;

int x = 0;
    while (plik >> zmienna[1] >> zmienna[2] >> zmienna[3]) {
        if (sz == zmienna[a]){
        cout << x+1<< ". znaleziony plik:  ";
        cout << zmienna[1] << ' '<< zmienna[2] << ' ' << zmienna[3] << endl;
        x+=1;
        }
    }
if (x==0){cout << "plik nie zostal znaleziony!" << endl;}

    system ("pause");
    cin.get();
}



void Plik::wyswietlWszystko()
    {
         ifstream plik("nowyplik.txt");
         string nazwa, typ, datawykonania;
         system ("CLS");
         cout << "Wszystkie dane w bazie"<< endl;
         cout << "---------------" << endl;
         while (plik >> nazwa >> typ >> datawykonania){
         cout << nazwa << ' ' << typ << ' ' << datawykonania << endl ;
         }
         system ("pause");
         }


void Plik::usunRejestr()
    {
         cout << "Jestes pewny?[T]ak[N]ie" << endl;
         cin >> wybor;
         if (wybor == "t"){
         ofstream plik("nowyplik.txt");
         system("cls");
         cout << "Rejestr zostal usuniety" << endl;
         system("pause");
         plik.close();
         }
         else{
         cout << "rejestr zachowany" << endl;
              }
         }


void Plik::zakoncz()
    {
     system ("CLS");
     cout << "Program zostanie wylaczony" << endl;
     system ("pause");
     cin.get();
         }

/*
Plik::Plik(string n, string t, string d, string ss, string szn, string szt, string szd, string w)
{
    nazwa=n;
    typ=t;
    datawykonania=d;
    sz=ss;
    sznazwa=szn;
    sztyp=szt;
    szdatawykonania=szd;
    wybor=w;


}
Plik::~Plik()
{
    cout<<endl<<"destruktor";
}
*/

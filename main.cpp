#include <iostream>
#include "film.h"
#include "zdjecie.h"
#include <fstream>

using namespace std;
int wybor2;
string nazwa, typ, datawykonania, sz, sznazwa, sztyp, szdatawykonania, wybor;


void szukajpo(int a)
{
    string slownik[4]={"", "nazwe", "typ", "date wykoania"};
    string zmienna[4]={"", nazwa, typ, datawykonania};

    ifstream plikbazazdjec("bazazjec.txt");
    string sz;
    system("CLS");
    cout << "Wpisz " << slownik[a] << " pliku:";
    cin >> sz;

int x = 0;
    while (plikbazazdjec >> zmienna[1] >> zmienna[2] >> zmienna[3]) {
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



void wyswietlWszystko()
    {
         ifstream plikbazazdjec("bazazjec.txt");
         string nazwa, typ, datawykonania;
         system ("CLS");
         cout << "Wszystkie dane w bazie"<< endl;
         cout << "---------------" << endl;
         while (plikbazazdjec >> nazwa >> typ >> datawykonania){
         cout << nazwa << ' ' << typ << ' ' << datawykonania << endl ;
         }
         system ("pause");
         }


void usunRejestr()
    {
         cout << "Jestes pewny?[T]ak[N]ie" << endl;
         cin >> wybor;
         if (wybor == "t"){
         ofstream plikbazazdjec("bazazjec.txt");
         system("cls");
         cout << "Rejestr zostal usuniety" << endl;
         system("pause");
         plikbazazdjec.close();
         }
         else{
         cout << "rejestr zachowany" << endl;
              }
         }


void zakoncz()
    {
     system ("CLS");
     cout << "Program zostanie wylaczony" << endl;
     system ("pause");
     cin.get();
         }

void szukaj()
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



int main()
{
    Plik *wsk;
    Zdjecie Z;
    Film F;
    int wyb;

    system ("cls");

        cout << "[1] Dodaj plik" << endl;
        cout << "[2] Szukaj pliku" << endl;
        cout << "[3] Usun rejestr" << endl;
        cout << "[4] Zakoncz program" << endl;
        cin >> wyb;

 switch (wyb){
        case 1:
            cout << "Podaj typ pliku" << endl;
            cin >> typ;
            if (typ=="jpg"||typ=="jpeg"||typ=="png"||typ=="gif") {
                cout << "To zdjecie!" << endl;
                wsk=&Z;
            } else if (typ=="mov"||typ=="mp4"||typ=="avi") {
               cout << "To film!" << endl;
                wsk=&F;
            } else {
             cout << "Niewlasciwy typ pliku" << endl;
            }

             wsk->wprowadz_dane(typ);
             break;
        case 2:
             szukaj();
             break;
        case 3:
             usunRejestr();
             break;
        case 4:
             zakoncz();
             break;

        cin.get();
        }

return 0;
}

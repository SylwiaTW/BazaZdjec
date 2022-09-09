#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include "film.h"
#include "zdjecie.h"

using namespace std;

struct separator : ctype<char> {
    separator() : ctype<char>(pobierz()) {}
    static ctype_base::mask const* pobierz()
    {static vector<ctype_base::mask>
        sep(table_size, ctype_base::mask());
        sep['|'] = ctype_base::space;
        sep['\n'] = ctype_base::space;
        return &sep[0];
    }
};

void szukajpo(int a){
    string nazw, ty, datawyk, lok, klu;
    float rozm, cz, ks;
    int oce;

    string slownik[5]={"", "nazwe", "typ", "date wykonania", "slowo kluczowe"};

    ifstream plikbazazdjec("bazazdjec.txt");
    plikbazazdjec.imbue(locale(locale(), new separator()));

    string sz;
    system("CLS");
    cout << "Wpisz " << slownik[a] << " pliku: ";
    cin >> sz;

int x = 0;
    while (plikbazazdjec >>nazw>>ty>>datawyk>>lok>>rozm>>oce>>klu>>cz>>ks) {
        string zmienna[5]={"", nazw, ty, datawyk, klu};
        if (zmienna[a].find(sz) != string::npos){
        cout << x+1<< ". znaleziony plik:  ";
        cout <<nazw<<"   "<<setw(5)<<ty<<"   "<<setw(8)<<datawyk<<"   "<<setw(5)<<rozm<<"   "<<lok<<endl;
        x+=1;
        }
    }
if (x==0){cout << "plik nie zostal znaleziony!" << endl;}
system ("pause");

}


void wyswietlWszystko()
    {
        string nazw, ty, datawyk, lok, klu;
        float rozm, cz, ks;
        int oce;

         ifstream plikbazazdjec("bazazdjec.txt" );
         plikbazazdjec.imbue(locale(locale(), new separator()));

         system ("CLS");
         cout << "Wszystkie dane w bazie: "<< endl;

         while (plikbazazdjec >>nazw>>ty>>datawyk>>lok>>rozm>>oce>>klu>>cz>>ks)
         {cout <<setw(20)<<nazw<<"   "<<setw(5)<<ty<<"   "<<setw(8)<<datawyk<<"   "<<setw(5)<<rozm<<"   "<<lok<<endl;}

         system ("pause");

         }


void usunRejestr()
    {   string wyb;
         cout << "Jestes pewny? [T]ak [N]ie" << endl;
         cin >> wyb;
         if (wyb == "t"){
         ofstream plikbazazdjec("bazazdjec.txt");
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
         }

void szukaj()
    {    int wyb2;
         system ("CLS");

         cout << "[1] szukaj po nazwie" << endl;
         cout << "[2] szukaj po typie pliku" << endl;
         cout << "[3] szukaj po dacie wykonania" << endl;
         cout << "[4] szukaj po slowie klucz" << endl;
         cout << "[5] wyswietl wszystkie pliki" << endl;
         cout << "[6] zakoncz program" << endl;
         cin >> wyb2;
         switch (wyb2){
                     case 1: case 2: case 3: case 4:
                          szukajpo(wyb2);
                          break;
                     case 5:
                          wyswietlWszystko();
                          break;
                     case 6:
                          zakoncz();
                          break;
                          }
                }

void podaj_typ()
{
    string ty;
    Plik *wsk;
    Zdjecie Z;
    Film F;
    cout << "Podaj typ pliku  ";
    cin.ignore();
    getline(cin,ty);
    if (ty=="jpg"||ty=="jpeg"||ty=="png"||ty=="gif") {
        wsk=&Z;
        wsk->wprowadz_dane(ty);
    } else if (ty=="mov"||ty=="mp4"||ty=="avi") {
        wsk=&F;
        wsk->wprowadz_dane(ty);
    } else {
     cout << "Niewlasciwy typ pliku" << endl;
     system ("pause");
    }


}

int main()
{



    int wyb1;

do
    {
        system ("cls");
        cout << "[1] Dodaj plik" << endl;
        cout << "[2] Szukaj pliku" << endl;
        cout << "[3] Usun rejestr" << endl;
        cout << "[4] Zakoncz program" << endl;
        cin >> wyb1;

 switch (wyb1){
        case 1:
            system ("CLS");
             podaj_typ();
             break;
        case 2:
             system ("CLS");
             szukaj();
             break;
        case 3:
             system ("CLS");
             usunRejestr();
             break;
        }
} while(wyb1!=4);
    return 0;


}

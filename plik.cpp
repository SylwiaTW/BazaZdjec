#include <iostream>
#include "plik.h"
#include <fstream>

using namespace std;

void Plik::dodaj_plik()
{
    ofstream nowyplik("nowyplik.txt", ios::app);
    system("cls");
    cout << "Wprowadz nazwe pliku" << endl;
    cin >> nazwa;
    cin.sync();
    system("cls");
    cout << "Wpisz typ pliku" << endl;
    cin >> typ;
    system("cls");
    cout << "Wpisz date wykoania pliku" << endl;
    cin >> datawykonania;

     nowyplik << nazwa << ' ' << typ << ' ' << datawykonania << endl;
     nowyplik.close();
}


void Plik::szukajnazwa()
{
    ifstream plik("nowyplik.txt");
    system("CLS");
    cout << "Wpisz nazwe pliku:";
    cin >> str;

    while (plik >> nazwa >> typ >> datawykonania){
        if (str == nazwa){
            system ("CLS");
            cout << "plik znaleziony" << endl;
            cout << "nazwa" << ' ' << "typ" << ' ' << "datawykonania" << endl;
            cout << "---------------" << endl;
            cout << nazwa << ' '<< typ << ' ' << datawykonania << endl;
        }
    }


    while (plik >> nazwa ){
        if (str != nazwa){
            system ("CLS") ;
            cout << "Plik nie zostal znaleziony w bazie" << endl;
        }
    }
    system ("pause");
}

void Plik::szukajtyp()
     {
         ifstream plik("nowyplik.txt");

         system ("CLS");
         cout << "Wpisz typ pliku:";
         cin >> ftyp;
         while (plik >> nazwa >> typ >> datawykonania){
               if (ftyp == typ){
                        system ("CLS");
                        cout << "plik znaleniony" << endl;
                        cout << "nazwa" << ' ' << "typ" << ' ' << "datawykonania" << endl;
                        cout << "---------------" << endl;
                        cout << nazwa << ' ' << typ << ' ' << datawykonania << endl;
                        }
                        }
         while (plik >> typ){
               if (ftyp != typ){
                        system ("CLS");
                        cout << "Plik nie zostal znaleziony w bazie"<< endl;


                        }
               }
               system ("pause");
               cin.get();
      }

void Plik::szukajdatawykonania()
    {
         ifstream plik ("nowyplik.txt");

         system ("CLS");
         cout << "Wpisz date wykoanania pliku:";
         cin >> fdatawykonania;
         while (plik >> nazwa >> typ >> datawykonania){
               if (fdatawykonania == datawykonania ){
                           system ("cls");
                           cout << "plik znaleziono"<< endl;
                           cout << "nazwa" << ' ' << "typ" << ' ' << "datawykonania" << endl;
                           cout << "---------------" << endl;
                           cout << nazwa << ' ' << typ << ' ' << datawykonania << endl;;

                           }
                           }
         while (plik >> datawykonania){
                if (fdatawykonania != datawykonania){
                    system ("CLS");
                    cout << "Plik nie zostal znaleziony w bazie" << endl;
                    }
               }
         system("pause");
         cin.get();
     }



void Plik::wyswietlWszystko()
    {
         ifstream plik("nowyplik.txt");
         string nazwa, typ, datawykonania;
         system ("CLS");
         cout << "Wszystkie dane w bazie"<< endl;
         cout << "nazwa" << ' ' << "typ" << ' ' << "datawykonania" << endl;
         cout << "---------------" << endl;
         while (plik >> nazwa >> typ >> datawykonania){
         cout << nazwa << ' ' << typ << ' ' << datawykonania << endl ;
         }
         system ("pause");
         cin.get();

         }

void Plik::szukaj()
    {

         system ("CLS");

         cout << "1.szukaj po nazwie" << endl;
         cout << "2.szukaj po typie pliku" << endl;
         cout << "3.szukaj po dacie wykoania" << endl;
         cout << "4.wyswietl wszystkie pliki" << endl;
         cout << "5.zakoncz program" << endl;
         cin >> choice2;

         switch (choice2){
                case 1:
                     szukajnazwa();
                     break;
                case 2:
                     szukajtyp();
                     break;
                case 3:
                     szukajdatawykonania();
                     break;
                case 4:
                     wyswietlWszystko();
                     break;
                case 5:
                     zakoncz();
                     break;
                     }

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

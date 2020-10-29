#include <iostream>
#include <string.h>
#include <fstream>
#include <string>
using namespace std;
class baza {
private:
public:
    string lin;
    fstream plik;
 char imie[15];
 char nazwisko[25];
 char kraj[5];
 char data[15];
 char reakcja[10];
 char wynik[15];
 char miasto[15];
 char datawyniku[15];
 void pobierz();
 void wyswietl();
 void zapisz(fstream& plik);
 void wczytaj(fstream& plik);
 ~baza();

};

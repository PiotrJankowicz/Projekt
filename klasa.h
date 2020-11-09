#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;
class baza {
private:
public:
string lin;
fstream plik;
float wiatr;
char reakcja[10];
float wynik;
string miasto ;
char datawyniku[15];
float w;
void pobierz();
void wyswietl();
void zapisz(fstream& plik);
void wczytaj(fstream& plik);
float wyszukajwynik(float w);
~baza();
};


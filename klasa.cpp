#include "klasa.h"


void baza::pobierz(){
    cout<<"wprowadzam"<<endl;
        cout << "\tPodaj sile wiatru: ";
        cin >> this->wiatr;
        cout << "\tPodaj czas reakcji: ";
        cin >> this->reakcja;
        cout << "\tPodaj wynik: ";
        cin >> this->wynik;
        cout << "\tPodaj date uzyskania wyniku ";
        cin >> this->datawyniku;
        cin.ignore(numeric_limits <streamsize >::max(), '\n' );
        cout << "\tPodaj miasto: ";
        getline(cin, miasto );
};



void baza::zapisz(fstream& plik){
    plik<<endl;
    plik<<this->wiatr<<endl;
    plik<<this->reakcja<<endl;
    plik<<this->wynik<<endl;
    plik<<this->datawyniku<<endl;
    plik<<this->miasto<<endl;
};
void baza::wczytaj(fstream& plik){
    do{
getline(plik,lin);
plik>>this->wiatr;
getline(plik,lin);
plik>>this->reakcja;
getline(plik,lin);
plik>>this->wynik;
getline(plik,lin);
plik>>this->datawyniku;
getline(plik,lin);
plik>>this->miasto;
    }
while(lin!="");
};

void baza::wyswietl(){
cout<<"\tSila wiatru: "<<this->wiatr;
if (wiatr>2)
cout<<" Srednia predkosc wiatru powyzej 2 m/s. Wynik nie zalicza sie do tabel"<<"\n";
else cout<<" Regulaminowa srednia predkosc wiatru. Wynik zalicza sie do tabel"<<"\n";
cout<<"\tCzas reakcji:"<<this->reakcja<< "\n";
cout<<"\tWynik: "<<this->wynik<< "\n";
cout<<"\tData uzyskania wyniku: "<<this->datawyniku<< "\n";
cout<<"\tmiasto: "<<this->miasto<< "\n";

};


baza::~baza(){
cout << "Usuwam:\n";
cout<<"\tSila wiatru:" <<this->wiatr<<" m/s"<<"\n";
cout<<"\tCzas reakcji.:"<<this->reakcja<<"\n";
cout<<"\tWynik.: "<<this->wynik<< "\n";
cout<<"\tdata uzyskania wyniku.: "<<this->datawyniku<< "\n";
cout<<"\tmiasto.: "<<this->miasto<< "\n";


};


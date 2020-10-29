#include "klasa.h"


void baza::pobierz(){
    cout<<"wprowadzam"<<endl;
        cout << "\tpodaj imie: ";
        cin >> this->imie;
        cout << "\tpodaj nazwisko: ";
        cin >> this->nazwisko;
        cout << "\tpodaj reprezentacje: ";
        cin >> this->kraj;
        cout << "\tpodaj date urodzenia: ";
        cin >> this->data;
        cout << "\tpodaj czas reakcji: ";
        cin >> this->reakcja;
        cout << "\tpodaj wynik: ";
        cin >> this->wynik;
        cout << "\tpodaj miasto: ";
        cin >> this->miasto;
        cout << "\tpodaj date uzyskania wyniku: ";
        cin >> this->datawyniku;
};



void baza::zapisz(fstream& plik){
    plik<<endl;
    plik<<this->imie<<endl;
    plik<<this->nazwisko<<endl;
    plik<<this->kraj<<endl;
    plik<<this->data<<endl;
    plik<<this->reakcja<<endl;
    plik<<this->wynik<<endl;
    plik<<this->miasto<<endl;
    plik<<this->datawyniku<<endl;
};
void baza::wczytaj(fstream& plik){
    do{
getline(plik,lin);
plik>>this->imie;
getline(plik,lin);
plik>>this->nazwisko;
getline(plik,lin);
plik>>this->kraj;
getline(plik,lin);
plik>>this->data;
getline(plik,lin);
plik>>this->reakcja;
getline(plik,lin);
plik>>this->wynik;
getline(plik,lin);
plik>>this->miasto;
getline(plik,lin);
plik>>this->datawyniku;
    }
while(lin!="");
};

void baza::wyswietl(){
cout<<"\tImie: "<<this->imie<<"\n";
cout<<"\tNazwisko.: "<<this->nazwisko<<"\n";
cout<<"\tReprezentacja.: "<<this->kraj<<"\n";
cout<<"\tData urodzenia.: "<<this->data<<"\n";
cout<<"\tCzas reakcji.:"<<this->reakcja<<"\n";
cout<<"\tWynik: "<<this->wynik<< "\n";
cout<<"\tmiasto: "<<this->miasto<< "\n";
cout<<"\tdata uzyskania wyniku: "<<this->datawyniku<< "\n";
};


baza::~baza(){
cout << "Usuwam:\n";
cout<<"\tImie: "<<this->imie<<"\n";
cout<<"\tNaz.: "<<this->nazwisko<<"\n";
cout<<"\tReprezentacja.:" <<this->kraj<<"\n";
cout<<"\tData urodzenia:" <<this->data<<"\n";
cout<<"\tCzas reakcji.:"<<this->reakcja<<"\n";
cout<<"\tWynik.: "<<this->wynik<< "\n";
cout<<"\tmiasto.: "<<this->miasto<< "\n";
cout<<"\tdata uzyskania wyniku.: "<<this->datawyniku<< "\n";


};

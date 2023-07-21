#include "Pracownik.h"

using namespace std;
//Konstruktor klasy
Pracownik::Pracownik(const string& imie, const string& nazwisko, int wiek, const string& stanowisko, double pensja)
    : imie(imie), nazwisko(nazwisko), wiek(wiek), stanowisko(stanowisko), pensja(pensja) {}

// Wirtualna funkcja do wyœwietlania informacji o pracownikach (do nadpisania przez klasy pochodne)
void Pracownik::wyswietlInformacje() const {
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Wiek: " << wiek << endl;
    cout << "Stanowisko: " << stanowisko << endl;
    cout << "Pensja: " << pensja << endl;
}
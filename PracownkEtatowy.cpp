#include "PracownikEtatowy.h"

using namespace std;

// Konstruktor do inicjalizacji danych pracownika pe³noetatowego
PracownikEtatowy::PracownikEtatowy(const string& imie, const string& nazwisko, int wiek, const string& stanowisko, double pensja, int liczbaGodzin)
    : Pracownik(imie, nazwisko, wiek, stanowisko, pensja), liczbaGodzin(liczbaGodzin) {}

// Zastêpuje funkcjê klasy bazowej, aby wyœwietliæ informacje o pracownikach zatrudnionych w pe³nym wymiarze godzin
void PracownikEtatowy::wyswietlInformacje() const {
    Pracownik::wyswietlInformacje();
    cout << "Liczba godzin: " << liczbaGodzin << endl;
}

// Implementuje czysto wirtualn¹ funkcjê do obliczania zarobków pracownika pe³noetatowego
void PracownikEtatowy::obliczWynagrodzenie() {
    double wynagrodzenie = pensja * liczbaGodzin;
    cout << "Wynagrodzenie: " << wynagrodzenie << endl;
}

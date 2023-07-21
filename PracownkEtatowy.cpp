#include "PracownikEtatowy.h"

using namespace std;

// Konstruktor do inicjalizacji danych pracownika pe�noetatowego
PracownikEtatowy::PracownikEtatowy(const string& imie, const string& nazwisko, int wiek, const string& stanowisko, double pensja, int liczbaGodzin)
    : Pracownik(imie, nazwisko, wiek, stanowisko, pensja), liczbaGodzin(liczbaGodzin) {}

// Zast�puje funkcj� klasy bazowej, aby wy�wietli� informacje o pracownikach zatrudnionych w pe�nym wymiarze godzin
void PracownikEtatowy::wyswietlInformacje() const {
    Pracownik::wyswietlInformacje();
    cout << "Liczba godzin: " << liczbaGodzin << endl;
}

// Implementuje czysto wirtualn� funkcj� do obliczania zarobk�w pracownika pe�noetatowego
void PracownikEtatowy::obliczWynagrodzenie() {
    double wynagrodzenie = pensja * liczbaGodzin;
    cout << "Wynagrodzenie: " << wynagrodzenie << endl;
}

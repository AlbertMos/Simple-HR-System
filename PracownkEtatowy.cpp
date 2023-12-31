#include "PracownikEtatowy.h"

using namespace std;

// Konstruktor do inicjalizacji danych pracownika pełnoetatowego
PracownikEtatowy::PracownikEtatowy(const string& imie, const string& nazwisko, int wiek, const string& stanowisko, double pensja, int liczbaGodzin)
    : Pracownik(imie, nazwisko, wiek, stanowisko, pensja), liczbaGodzin(liczbaGodzin) {}

// Zastępuje funkcję klasy bazowej, aby wyświetlić informacje o pracownikach zatrudnionych w pełnym wymiarze godzin
void PracownikEtatowy::wyswietlInformacje() const {
    Pracownik::wyswietlInformacje();
    cout << "Liczba godzin: " << liczbaGodzin << endl;
}

// Implementuje czysto wirtualną funkcję do obliczania zarobków pracownika pełnoetatowego
void PracownikEtatowy::obliczWynagrodzenie() {
    double wynagrodzenie = pensja * liczbaGodzin;
    cout << "Wynagrodzenie: " << wynagrodzenie << endl;
}

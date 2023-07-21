#include "PracownikZleceniobiorca.h"
using namespace std;

//konstruktor klasy
PracownikZleceniobiorca::PracownikZleceniobiorca(const string& imie, const string& nazwisko, int wiek, const string& stanowisko, double pensja, int liczbaZlecen)
    : Pracownik(imie, nazwisko, wiek, stanowisko, pensja), liczbaZlecen(liczbaZlecen) {}

// Implementuje czysto wirtualn¹ funkcjê do obliczania zarobków pracownika zleceniobiorcy
void PracownikZleceniobiorca::obliczWynagrodzenie() {
    double wynagrodzenie = pensja * liczbaZlecen;
    cout << "Wynagrodzenie: " << wynagrodzenie << endl;
}
// Zastêpuje funkcjê klasy bazowej, aby wyœwietliæ informacje o pracownikach zatrudnionych na zlecenie
void PracownikZleceniobiorca::wyswietlInformacje() const {
    Pracownik::wyswietlInformacje();
    cout << "Liczba zlecen: " << liczbaZlecen << endl;
}
#include "SystemKadrowy.h"
using namespace std;

//Funkcja sk³adowa dodaj¹ca pracownika do systemu
void SystemKadrowy::dodajPracownika(Pracownik* pracownik) {
    pracownicy.push_back(pracownik);
}
//Funkcja sk³adowa usuwaj¹ca pracownika do systemu
void SystemKadrowy::usunPracownika(const string& imie, const string& nazwisko) {
    for (auto it = pracownicy.begin(); it != pracownicy.end(); ++it) {
        if ((*it)->pobierzImie() == imie && (*it)->pobierzNazwisko() == nazwisko) {
            delete* it;
            pracownicy.erase(it);
            break;
        }
    }
}
//Funkcja sk³adowa szukajk¹ca pracownika w systemie
Pracownik* SystemKadrowy::znajdzPracownika(const string& imie, const string& nazwisko) const {
    for (const auto& pracownik : pracownicy) {
        if (pracownik->pobierzImie() == imie && pracownik->pobierzNazwisko() == nazwisko) {
            return pracownik;
        }
    }
    return nullptr;
}
//Funkcja do wyszukiwania wszystkich pracowników w systemie
void SystemKadrowy::wyswietlWszystkichPracownikow() const {
    if (pracownicy.empty()) {
        cout << "Brak pracownikow." << endl;
        return;
    }

    cout << "Lista pracownikow:" << endl;
    for (const auto& pracownik : pracownicy) {
        pracownik->wyswietlInformacje();
        cout << endl;
    }
}
// Funkcja obliczania zarobków dla wszystkich pracowników w systemie
void SystemKadrowy::obliczWynagrodzeniaWszystkichPracownikow() const {
    if (pracownicy.empty()) {
        cout << "Brak pracownikow." << endl;
        return;
    }

    cout << "Obliczanie wynagrodzen:" << endl;
    for (const auto& pracownik : pracownicy) {
        pracownik->obliczWynagrodzenie();
    }
}
// Destruktor do czyszczenia pamiêci i usuwania pracowników
SystemKadrowy:: ~SystemKadrowy() {
    for (auto& pracownik : pracownicy) {
        delete pracownik;
    }
}
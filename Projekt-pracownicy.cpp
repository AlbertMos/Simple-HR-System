#include <iostream>
#include <string>
#include <vector>
#include "Pracownik.h"
#include "PracownikEtatowy.h"
#include "PracownikZleceniobiorca.h"
#include "SystemKadrowy.h"
using namespace std;


int main() {
    SystemKadrowy systemKadrowy; //Tworzy system kadrowy

    //Tworzy pracownika etatowego oraz zleceniobiorcę
    PracownikEtatowy pracownik1("Albert", "Mossakowski", 30, "Programista", 5000.0, 40);
    PracownikZleceniobiorca pracownik2("Anna", "Nowak", 35, "Grafik", 3000.0, 10);

    //dodaje pracowników do systemu HR
    systemKadrowy.dodajPracownika(&pracownik1);
    systemKadrowy.dodajPracownika(&pracownik2);

    //wyswietla pracownikow
    systemKadrowy.wyswietlWszystkichPracownikow();
    cout << endl;

    //wyszukuje pracownika i wyswietla informacje o nim
    Pracownik* znalezionyPracownik = systemKadrowy.znajdzPracownika("Jan", "Kowalski");
    if (znalezionyPracownik != nullptr) {
        cout << "Znaleziono pracownika:" << endl;
        znalezionyPracownik->wyswietlInformacje();
        cout << endl;
    }
    else {
        cout << "Nie znaleziono pracownika o podanym imieniu i nazwisku." << endl;
    }

    //oblicza wynagrodzenie wszystkich pracownikow
    systemKadrowy.obliczWynagrodzeniaWszystkichPracownikow();

    //usuwa wskazanego pracownika
    systemKadrowy.usunPracownika("Anna", "Nowak");
    
    //wyswielta wszystkich pracownikow
    systemKadrowy.wyswietlWszystkichPracownikow();
    

    return 0;
}

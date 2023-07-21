#pragma once
#ifndef PRACOWNIKETATOWY_H
#define PRACOWNIKETATOWY_H
#include <iostream>
#include <string>
#include <vector>
#include "Pracownik.h"
// Klasa pochodna od pracownika dla pracowników pe³noetatowych

class PracownikEtatowy : public Pracownik {
private:
    int liczbaGodzin;

    // Konstruktor do inicjalizacji danych pracownika pe³noetatowego
public:
    PracownikEtatowy(const std::string& imie, const std::string& nazwisko, int wiek, const std::string& stanowisko, double pensja, int liczbaGodzin);

    
        

    void ustawLiczbeGodzin(int nowaLiczbaGodzin) {
        liczbaGodzin = nowaLiczbaGodzin;
    }

    int pobierzLiczbeGodzin() const {
        return liczbaGodzin;
    }
    // Zastêpuje funkcjê klasy bazowej, aby wyœwietliæ informacje o pracownikach zatrudnionych w pe³nym wymiarze godzin
    void wyswietlInformacje() const;

    // Implementuje czysto wirtualn¹ funkcjê do obliczania zarobków pracownika pe³noetatowego
    void obliczWynagrodzenie();
};
#endif

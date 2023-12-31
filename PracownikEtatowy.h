#pragma once
#ifndef PRACOWNIKETATOWY_H
#define PRACOWNIKETATOWY_H
#include <iostream>
#include <string>
#include <vector>
#include "Pracownik.h"
// Klasa pochodna od pracownika dla pracowników pełnoetatowych

class PracownikEtatowy : public Pracownik {
private:
    int liczbaGodzin;

    // Konstruktor do inicjalizacji danych pracownika pełnoetatowego
public:
    PracownikEtatowy(const std::string& imie, const std::string& nazwisko, int wiek, const std::string& stanowisko, double pensja, int liczbaGodzin);

    
        

    void ustawLiczbeGodzin(int nowaLiczbaGodzin) {
        liczbaGodzin = nowaLiczbaGodzin;
    }

    int pobierzLiczbeGodzin() const {
        return liczbaGodzin;
    }
    // Zastępuje funkcję klasy bazowej, aby wyświetlić informacje o pracownikach zatrudnionych w pełnym wymiarze godzin
    void wyswietlInformacje() const;

    // Implementuje czysto wirtualną funkcję do obliczania zarobków pracownika pełnoetatowego
    void obliczWynagrodzenie();
};
#endif

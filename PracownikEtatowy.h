#pragma once
#ifndef PRACOWNIKETATOWY_H
#define PRACOWNIKETATOWY_H
#include <iostream>
#include <string>
#include <vector>
#include "Pracownik.h"
// Klasa pochodna od pracownika dla pracownik�w pe�noetatowych

class PracownikEtatowy : public Pracownik {
private:
    int liczbaGodzin;

    // Konstruktor do inicjalizacji danych pracownika pe�noetatowego
public:
    PracownikEtatowy(const std::string& imie, const std::string& nazwisko, int wiek, const std::string& stanowisko, double pensja, int liczbaGodzin);

    
        

    void ustawLiczbeGodzin(int nowaLiczbaGodzin) {
        liczbaGodzin = nowaLiczbaGodzin;
    }

    int pobierzLiczbeGodzin() const {
        return liczbaGodzin;
    }
    // Zast�puje funkcj� klasy bazowej, aby wy�wietli� informacje o pracownikach zatrudnionych w pe�nym wymiarze godzin
    void wyswietlInformacje() const;

    // Implementuje czysto wirtualn� funkcj� do obliczania zarobk�w pracownika pe�noetatowego
    void obliczWynagrodzenie();
};
#endif

#pragma once
#ifndef PRACOWNIKZLECENIOBIORCA_H
#define PRACOWNIKZLECENIOBIORCA_H
#include <iostream>
#include <string>
#include <vector>
#include "Pracownik.h"
// Klasa pochodna od pracownika dla pracowników zleceniobiorców
class PracownikZleceniobiorca : public Pracownik {
private:
    int liczbaZlecen;

public:
    PracownikZleceniobiorca(const std::string& imie, const std::string& nazwisko, int wiek, const std::string& stanowisko, double pensja, int liczbaZlecen);
     

    void ustawLiczbeZlecen(int nowaLiczbaZlecen) {
        liczbaZlecen = nowaLiczbaZlecen;
    }

    int pobierzLiczbeZlecen() const {
        return liczbaZlecen;
    }

    void wyswietlInformacje() const;

    void obliczWynagrodzenie();
};
#endif

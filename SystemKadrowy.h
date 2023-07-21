#pragma once
#ifndef SYSTEMKADROWY_H
#define SYSTEMKADROWY_H
#include <iostream>
#include <string>
#include <vector>
#include "Pracownik.h"
//Klasa reprezentuj¹ca system HR do zarz¹dania pracownikami
class SystemKadrowy {
private:
    std::vector<Pracownik*> pracownicy;

public:
    //Funkcja sk³adowa dodaj¹ca pracownika do systemu
    void dodajPracownika(Pracownik* pracownik);

    //Funkcja sk³adowa usuwaj¹ca pracownika do systemu
    void usunPracownika(const std::string& imie, const std::string& nazwisko);

    //Funkcja sk³adowa szukajk¹ca pracownika w systemie
    Pracownik* znajdzPracownika(const std::string& imie, const std::string& nazwisko) const;

    //Funkcja do wyszukiwania wszystkich pracowników w systemie
    void wyswietlWszystkichPracownikow() const;

    // Funkcja obliczania zarobków dla wszystkich pracowników w systemie
    void obliczWynagrodzeniaWszystkichPracownikow() const;

    // Destruktor do czyszczenia pamiêci i usuwania pracowników
    ~SystemKadrowy();
};
#endif
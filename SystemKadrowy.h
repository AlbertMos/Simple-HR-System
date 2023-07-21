#pragma once
#ifndef SYSTEMKADROWY_H
#define SYSTEMKADROWY_H
#include <iostream>
#include <string>
#include <vector>
#include "Pracownik.h"
//Klasa reprezentuj�ca system HR do zarz�dania pracownikami
class SystemKadrowy {
private:
    std::vector<Pracownik*> pracownicy;

public:
    //Funkcja sk�adowa dodaj�ca pracownika do systemu
    void dodajPracownika(Pracownik* pracownik);

    //Funkcja sk�adowa usuwaj�ca pracownika do systemu
    void usunPracownika(const std::string& imie, const std::string& nazwisko);

    //Funkcja sk�adowa szukajk�ca pracownika w systemie
    Pracownik* znajdzPracownika(const std::string& imie, const std::string& nazwisko) const;

    //Funkcja do wyszukiwania wszystkich pracownik�w w systemie
    void wyswietlWszystkichPracownikow() const;

    // Funkcja obliczania zarobk�w dla wszystkich pracownik�w w systemie
    void obliczWynagrodzeniaWszystkichPracownikow() const;

    // Destruktor do czyszczenia pami�ci i usuwania pracownik�w
    ~SystemKadrowy();
};
#endif
#pragma once
#ifndef PRACOWNIK_H
#define PRACOWNIK_H
#include <iostream>
#include <string>
#include <vector>

//Klasa bazowa reprezentuj¹ca ogólnego pracownika
class Pracownik { 
private:
    std::string imie;
    std::string nazwisko;
    int wiek;
    std::string stanowisko;
protected:
    double pensja;

public:
    //Konstruktor klasy pracownik
    Pracownik(const std::string& imie, const std::string& nazwisko, int wiek, const std::string& stanowisko, double pensja);
        
    //Funkcja ustawiaj¹ca imie
    void ustawImie(const std::string& noweImie) {
        imie = noweImie;
    }
    //Funkcja zwracaj¹ca imie
    std::string pobierzImie() const {
        return imie;
    }
    //Funkcja ustawiaj¹ca nazwisko
    void ustawNazwisko(const std::string& noweNazwisko) {
        nazwisko = noweNazwisko;
    }
    //Funkcja zwracaj¹ca nazwisko
    std::string pobierzNazwisko() const {
        return nazwisko;
    }
    //Funkcja ustawiaj¹ca wiek
    void ustawWiek(int nowyWiek) {
        wiek = nowyWiek;
    }
    //Funkcja zwracaj¹ca wiek
    int pobierzWiek() const {
        return wiek;
    }
    //Funkcja ustawiaj¹ca stanowisko
    void ustawStanowisko(const std::string& noweStanowisko) {
        stanowisko = noweStanowisko;
    }
    //Funkcja zwracaj¹ca stanowisko
    std::string pobierzStanowisko() const {
        return stanowisko;
    }
    //Funkcja ustawiaj¹ca pensje
    void ustawPensje(double nowaPensja) {
        pensja = nowaPensja;
    }
    //Funkcja zwracaj¹ca pensje
    double pobierzPensje() const {
        return pensja;
    }

    virtual void wyswietlInformacje() const; // Wirtualna funkcja do wyœwietlania informacji o pracownikach (do nadpisania przez klasy pochodne)

    virtual void obliczWynagrodzenie() = 0; // Czysto wirtualna funkcja do obliczania zarobków pracownika (do zaimplementowania przez klasy pochodne)
};
#endif

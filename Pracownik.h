#pragma once
#ifndef PRACOWNIK_H
#define PRACOWNIK_H
#include <iostream>
#include <string>
#include <vector>

//Klasa bazowa reprezentuj�ca og�lnego pracownika
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
        
    //Funkcja ustawiaj�ca imie
    void ustawImie(const std::string& noweImie) {
        imie = noweImie;
    }
    //Funkcja zwracaj�ca imie
    std::string pobierzImie() const {
        return imie;
    }
    //Funkcja ustawiaj�ca nazwisko
    void ustawNazwisko(const std::string& noweNazwisko) {
        nazwisko = noweNazwisko;
    }
    //Funkcja zwracaj�ca nazwisko
    std::string pobierzNazwisko() const {
        return nazwisko;
    }
    //Funkcja ustawiaj�ca wiek
    void ustawWiek(int nowyWiek) {
        wiek = nowyWiek;
    }
    //Funkcja zwracaj�ca wiek
    int pobierzWiek() const {
        return wiek;
    }
    //Funkcja ustawiaj�ca stanowisko
    void ustawStanowisko(const std::string& noweStanowisko) {
        stanowisko = noweStanowisko;
    }
    //Funkcja zwracaj�ca stanowisko
    std::string pobierzStanowisko() const {
        return stanowisko;
    }
    //Funkcja ustawiaj�ca pensje
    void ustawPensje(double nowaPensja) {
        pensja = nowaPensja;
    }
    //Funkcja zwracaj�ca pensje
    double pobierzPensje() const {
        return pensja;
    }

    virtual void wyswietlInformacje() const; // Wirtualna funkcja do wy�wietlania informacji o pracownikach (do nadpisania przez klasy pochodne)

    virtual void obliczWynagrodzenie() = 0; // Czysto wirtualna funkcja do obliczania zarobk�w pracownika (do zaimplementowania przez klasy pochodne)
};
#endif

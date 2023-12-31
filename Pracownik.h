#pragma once
#ifndef PRACOWNIK_H
#define PRACOWNIK_H
#include <iostream>
#include <string>
#include <vector>

//Klasa bazowa reprezentująca ogólnego pracownika
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
        
    //Funkcja ustawiająca imie
    void ustawImie(const std::string& noweImie) {
        imie = noweImie;
    }
    //Funkcja zwracająca imie
    std::string pobierzImie() const {
        return imie;
    }
    //Funkcja ustawiająca nazwisko
    void ustawNazwisko(const std::string& noweNazwisko) {
        nazwisko = noweNazwisko;
    }
    //Funkcja zwracająca nazwisko
    std::string pobierzNazwisko() const {
        return nazwisko;
    }
    //Funkcja ustawiająca wiek
    void ustawWiek(int nowyWiek) {
        wiek = nowyWiek;
    }
    //Funkcja zwracająca wiek
    int pobierzWiek() const {
        return wiek;
    }
    //Funkcja ustawiająca stanowisko
    void ustawStanowisko(const std::string& noweStanowisko) {
        stanowisko = noweStanowisko;
    }
    //Funkcja zwracająca stanowisko
    std::string pobierzStanowisko() const {
        return stanowisko;
    }
    //Funkcja ustawiająca pensje
    void ustawPensje(double nowaPensja) {
        pensja = nowaPensja;
    }
    //Funkcja zwracająca pensje
    double pobierzPensje() const {
        return pensja;
    }

    virtual void wyswietlInformacje() const; // Wirtualna funkcja do wyświetlania informacji o pracownikach (do nadpisania przez klasy pochodne)

    virtual void obliczWynagrodzenie() = 0; // Czysto wirtualna funkcja do obliczania zarobków pracownika (do zaimplementowania przez klasy pochodne)
};
#endif

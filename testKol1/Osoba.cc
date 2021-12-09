#include <iostream>
#include "Osoba.hh"

Osoba::Osoba(std::string ime, std::string prezime) {
    setIme(ime);
    setPrezime(prezime);
}

std::string Osoba::getIme() {
    return ime;
}

std::string Osoba::getPrezime() {
    return prezime;
}

void Osoba::setIme(std::string ime) {
    if (ime != "") {
        this -> ime = ime;
    }
}

void Osoba::setPrezime(std::string prezime) {
    if (prezime != "") {
        this -> prezime = prezime;
    }
}

// operator ==:
bool Osoba::operator==(const Osoba &osoba) {
    if (ime == osoba.ime && prezime == osoba.prezime) {
        return true;
    }

    return false;
}

void Osoba::info() {
    std::cout << prezime << ", " << ime << std::endl;
}

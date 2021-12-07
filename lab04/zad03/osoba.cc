#include "osoba.hh"

Osoba::Osoba(std::string ime, std::string prezime) : ime(ime), prezime(prezime) {
}

std::string Osoba::getIme() {
    return ime;
}

std::string Osoba::getPrezime() {
    return prezime;
}

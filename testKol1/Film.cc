#include <iostream>
#include "Film.hh"

Film::Film(std::string naziv, Osoba producent) : naziv(naziv(, producent(producent), recenzent(nullptr), ocjena(nullptr) {
}

Film::Film(std::string naziv, Osoba producent, Osoba *recenzent) : naziv(naziv), producent(producent), recenzent(recenzent), ocjena(new double(0)) {
    // recenzent -> constructor Osoba; pointer ide na postojecu
}

// copy constructor za deep copy:
Film::Film(const Film &film) : producent(film.producent) {
    naziv = film.naziv;

    if (film.recenzent != nullptr) {
        recenzent = new Osoba(*(film.recenzent));
        ocjena = new double(*(film.ocjena));
    } else {
        recenzent = nullptr;
        ocjena = nullptr;
    }
}

// operator=:
Film& Film::operator=(const Film &film) {
    naziv = film.naziv;
    producent = film.producent;
    recenzent = film.recenzent;
    ocjena = film.ocjena;

    return *this;
}

// metode:
void Film::info() {
    std::cout << naziv << std::endl;
    std::cout << "Producent:";
    producent.info();

    if (recenzent != nullptr) {
        std::cout << "Recenzent";
        recenzent -> info();

        std::cout << "Ocjena: " << *ocjena << std::endl;
    } else {
        std::cout << "Nema recenzije!\n";
    }
    std::cout << std::endl;
}

// GETteri i SETteri:
std::string Film::getNaziv() {
    return naziv;
}

Osoba Film::getProducent() {
    return producent;
}

Osoba* Film::getRecenzent() {
    return recenzent;
}

double* Film::getOcjena() {
    return ocjena;
}

void Film::setNaziv(std::string naziv) {
    this -> naziv = naziv;
}

void Film::setProducent(Osoba producent) {
    this -> producent = producent;
}

void Film::setRecenzent(Osoba *recenzent) {
    this -> recenzent = recenzent;
}

void Film::setOcjena(double* ocjena) {
    this -> ocjena = ocjena;
}

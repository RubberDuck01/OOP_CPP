#include <iostream>
#include <cmath>
#include "zad04_heaimp.hh"

// metoda izracuna apsolutne vrijednosti (cmath):
double KompleksniBroj::izracunajApsolutnuVrijednost() {

    double rezultat = 0;
    rezultat = sqrt(pow(realni, 2) + pow(imaginarni, 2));

    return rezultat;
}

// metoda za prikaz komplex broja:
void KompleksniBroj::prikazi() {
    std::cout << "Re: " << realni << ", Im: " << imaginarni << std::endl;
}

// metoda za zbrajanje komplex brojeva:
void KompleksniBroj::zbrojiKompleksniBroj(const KompleksniBroj &broj) {
    realni = realni + broj.realni;
    imaginarni = imaginarni + broj.imaginarni;
}

// geteri i seteri:
double KompleksniBroj::getReal() {
    return realni;
}

double KompleksniBroj::getImag() {
    return imaginarni;
}

void KompleksniBroj::setReal(double noviReal) {
    realni = noviReal;
}

void KompleksniBroj::setImag(double noviImag) {
    imaginarni = noviImag;
}

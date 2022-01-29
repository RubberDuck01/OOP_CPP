#include <iostream>
#include "Racun.hh"

int Racun::transact_count = 0;

Racun::Racun(double stanje, std::string valuta) : stanje(stanje), valuta(valuta) {
}

double Racun::getStanje() {
    return stanje;
}

std::string Racun::getStanjeText() {
    return std::to_string(stanje) + " " + valuta;
}

void Racun::transaction() {
    for (auto i : transact) {
        std::cout << i << std::endl;
    }
}

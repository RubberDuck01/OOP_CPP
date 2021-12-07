#include <iostream>
#include "valuta.hh"

Valuta::Valuta(std::string naziv) : Valuta(naziv, 7.52) {
    // 7.52 - default, prije promjene tecaja
}

Valuta::Valuta(std::string naziv, double tecaj) : naziv(naziv) {
    setTecaj(tecaj);
}

void Valuta::setTecaj(double tecaj) {
    if (tecaj > 0.0) {
        this -> tecaj = tecaj;
    }
}

double Valuta::kupi(double hrk) {
    return hrk / tecaj;
}

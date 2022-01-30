#include "zad01_netflix.hh"

Izdanje::Izdanje(std::string naziv, int godina) : naziv(naziv), godina(godina) {
}

void Izdanje::opis() {
    std::cout << "Opis\n";
}

Serija::Serija(std::string naziv, int godina, int sezona, int trajanje) : Izdanje(naziv, godina), sezona(sezona), trajanje(trajanje) {
}

void Serija::opis() {
    std::cout << naziv << " (" << godina << "), " << sezona << " sezona, " << trajanje << " min po epizodi\n";
}

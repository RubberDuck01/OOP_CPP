#include <iostream>
#include "valuta.hh"

int main() {
    Valuta EUR("Euro");
    double euri = EUR.kupi(760.76);

    std::cout << euri << std::endl;

    EUR.setTecaj(7.69);
    double euro2 = EUR.kupi(770.08);
    std::cout << euro2 << std::endl;

    return 0;
}

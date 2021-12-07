#include <iostream>
#include "zad04_heaimp.hh"

int main() {
    KompleksniBroj broj1;
    KompleksniBroj broj2;

    // set vrijednost broj1:
    broj1.setReal(23.3);
    broj1.setImag(67.2);

    // pokazi broj1 (getter):
    std::cout << "broj1 RE: " << broj1.getReal() << std::endl;
    std::cout << "broj1 IM: " << broj1.getImag() << std::endl;

    // apsolutna vrijednost za broj1:
    std::cout << "Apsolutna vrijednost broj1: " << broj1.izracunajApsolutnuVrijednost() << std::endl;

    // set vrijednost broj2:
    broj2.setReal(5.5);
    broj2.setImag(2.7);

    // pokazi broj2 (funkcija):
    broj2.prikazi();

    // zbrajanje
    broj1.zbrojiKompleksniBroj(broj2);
    std::cout << "=== broj2 ===\n" <<broj2.getReal() << " + " << broj2.getImag() << std::endl;

    return 0;
}

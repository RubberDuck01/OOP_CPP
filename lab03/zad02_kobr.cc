#include <iostream>
#include "zad02_kobr.hh"

void prikaziKompleksniBroj(KompleksniBroj broj) {
    std::cout << "Re: " << broj.realni << ", Im: " << broj.imaginarni << std::endl;
}

KompleksniBroj zbrojiKompleksneBrojeve(KompleksniBroj broj1, KompleksniBroj broj2) {
    KompleksniBroj zbroj;

    zbroj.realni = broj1.realni + broj2.realni;
    zbroj.imaginarni = broj1.imaginarni + broj2.imaginarni;

    return zbroj;
}

#include <iostream>
#include "zad02_kobr.hh"

int main() {
    KompleksniBroj br1{ 23.3, 67.2 };
    KompleksniBroj br2{ 5.5, 2.7 };

    prikaziKompleksniBroj(br1);
    prikaziKompleksniBroj(br2);

    KompleksniBroj br3 = zbrojiKompleksneBrojeve(br1, br2);

    // prikaz trecega, odnosno zbroja prva dva:
    std::cout << "Zbroj:\n";
    prikaziKompleksniBroj(br3);

    return 0;
}

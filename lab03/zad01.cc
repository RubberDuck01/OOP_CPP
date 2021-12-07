#include <iostream>

struct KompleksniBroj {
    double realni;
    double imaginarni;
};

void prikaziKompleksniBroj(KompleksniBroj broj) {
    std::cout << "Re: " << broj.realni << ", Im: " << broj.imaginarni << std::endl;
}

KompleksniBroj zbrojiKompleksneBrojeve(KompleksniBroj broj1, KompleksniBroj broj2) {
    KompleksniBroj zbroj;

    zbroj.realni = broj1.realni + broj2.realni;
    zbroj.imaginarni = broj1.imaginarni + broj2.imaginarni;

    return zbroj;
}

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

#include <iostream>
#include <cmath>

// 1) napravi klasu:
class KompleksniBroj {
public:
    // 3) metoda izracuna apsolutne vrijednosti (cmath):
    double izracunajApsolutnuVrijednost() {
        double rezultat = 0;
        rezultat = sqrt(pow(realni, 2) + pow(imaginarni, 2));

        return rezultat;
    }

    // 4) metoda za prikaz komplex broja:
    void prikazi() {
        std::cout << "Re: " << realni << ", Im: " << imaginarni << std::endl;
    }

    // 5) metoda za zbrajanje komplex brojeva:
    void zbrojiKompleksniBroj(const KompleksniBroj &broj) {
        realni = realni + broj.realni;
        imaginarni = imaginarni + broj.imaginarni;
    }

    // 2) geteri i seteri:
    double getReal() {
        return realni;
    }

    double getImag() {
        return imaginarni;
    }

    void setReal(double noviReal) {
        realni = noviReal;
    }

    void setImag(double noviImag) {
        imaginarni = noviImag;
    }

private:
    double realni;
    double imaginarni;
};

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

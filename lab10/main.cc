#include <iostream>
#include "Uplati.hh"

int main() {
    Racun rac1(59.99, "EUR");
    Racun rac2(11.99, "HRK");

    rac1.transaction();
    rac2.transaction();

    std::cout << rac1.getStanjeText() << std::endl;
    std::cout << rac2.getStanjeText() << std::endl;

    UplatniRacun ur1(0, "EUR");
    ur1.uplati(50);
    ur1.uplati(100);
    ur1.uplati(250);
    ur1.uplati(500);
    ur1.uplati(100);
    ur1.transaction();

    std::vector<Racun*> racuni;
    racuni.push_back(new Racun(76.98, "USD"));

    for (auto i : racuni) {
        i -> transaction();
    }

    return 0;
}

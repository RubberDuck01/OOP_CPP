#include <iostream>
#include "bank.hh"
// #include "osoba.hh" - ne treba!

int main() {
    BankRacun rac1("Kevin", "McCallister");
    rac1.uplati(1000);
    rac1.isplati(300);
    rac1.pokaziStanje();

    return 0;
}

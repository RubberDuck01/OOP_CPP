#include <iostream>
#include "bank.hh"

BankRacun::BankRacun(std::string ime, std::string prezime) : klijent(ime, prezime) {
    stanje = 0;
}

void BankRacun::uplati(double money) {
    stanje = stanje + money;
}

void BankRacun::isplati(double money) {
    stanje = stanje - money;
}

void BankRacun::pokaziStanje() {
    std::cout << "Postovani " << klijent.getPrezime() << " " << klijent.getIme() << ", na racunu trenutno imate: " << stanje << " HRK" << std::endl;
}

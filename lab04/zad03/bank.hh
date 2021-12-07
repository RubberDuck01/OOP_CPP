#include "osoba.hh"

class BankRacun {
public:
    BankRacun(std::string ime, std::string prezime);

    // metode:
    void uplati(double money);
    void isplati(double money);
    void pokaziStanje();

private:
    Osoba klijent;
    double stanje;
};

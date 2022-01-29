#include <iostream>
#include "Uplati.hh"

UplatniRacun::UplatniRacun(double stanje, std::string valuta) : Racun(stanje, valuta) {
}

void UplatniRacun::uplati(double value) {
    stanje += value;
    transact.push_back(value);
    transact_count++;
}

void UplatniRacun::transaction() {
    std::cout << "\n";
    Racun::transaction();
    std::cout << "\n";
}

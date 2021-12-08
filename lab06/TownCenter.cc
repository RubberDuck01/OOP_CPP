#include <iostream>
#include "TownCenter.hh"

TownCenter::TownCenter() : unit(0) {
}

Villager* TownCenter::trainVillager() {
    unit++;
    return new Villager();
}

Villager* TownCenter::trainVillager(int hitPoints) {
    unit++;
    return new Villager(hitPoints);
}

void TownCenter::unitsInfo() {
    std::cout << "Ukupno jedinica: " << unit << std::endl;
}

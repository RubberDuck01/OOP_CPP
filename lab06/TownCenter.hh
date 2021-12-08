#pragma once
#include "Villager.hh"

class TownCenter {
public:
    TownCenter(); // def constructor - jedinice na 0

    // metode:
    Villager* trainVillager();
    Villager* trainVillager(int hitPoints); // overloada proslu metodu

    void unitsInfo(); // pokazuje koliko jedinica trenutno stvoreno

private:
    int unit; // jedinica
    int buildings; // broj gradjevina
};

#include <iostream>
#include "Outpost.hh"

Outpost::Outpost() : Outpost(nullptr) {
}

Outpost::Outpost(Villager* villager) {
    this -> villager = villager;
}

// copy:
Outpost::Outpost(const Outpost& outpost) {
    if (outpost.villager != nullptr) {
        villager = new Villager();
    } else {
        villager = nullptr;
    }
}

void Outpost::outpostInfo() {
    if (villager != nullptr) {
        std::cout << "Villager u gradjevini!\n";
        villager -> npcInfo();
        return;
    } else {
        std::cout << "Villager nije u gradjevini!\n";
        return;
    }
}

#include <iostream>
#include "Outpost.hh"

int main() {
    // Villagers:
    Villager NPC1; // default (25, 3, 0.8)
    Villager NPC2(35); // custom hp - junk data!!!

    // copy:
    Villager NPC3 = NPC1;

    std::cout << "===== NPC1 prije setanja:\n";
    NPC1.npcInfo();

    std::cout << "===== NPC1 nakon:\n";
    NPC1.setHP(50); // nope (vece od MAX_HP)
    NPC1.setAttack(30); // nope (vece od MAX_ATT)
    NPC1.setSpeed(1.2); // nope (vece od MAX_SPD)
    NPC1.npcInfo();

    // provjeri za kopirani:
    std::cout << "===== Kopirani NPC3:\n";
    NPC3.npcInfo();

    std::cout << "===== NPC2:\n";
    NPC2.npcInfo(); // pokaze junk!

    // TownCenter:
    TownCenter town1;
    std::cout << "\n===== town1 nakon kreacije:\n";
    town1.unitsInfo();

    Villager* newNPC1 = town1.trainVillager(); // traina novog villagera po default vrijednostima
    Villager* newNPC2 = town1.trainVillager(5); // novi ali s custom HP

    std::cout << "===== town1 nakon TRAIN VILLAGER:\n";
    town1.unitsInfo();

    std::cout << "===== newNPC:\n";
    newNPC1 -> npcInfo();
    std::cout << "===== oldNPC:\n";
    newNPC2 -> npcInfo();

    // Outpost:
    Outpost outpost1;
    Outpost outpost2(&NPC1);
    Outpost outpost3 = outpost1; // copy
    Outpost outpost4 = outpost2;

    std::cout << "\n===== Outpost1:\n";
    outpost1.outpostInfo();
    std::cout << "===== Outpost2:\n";
    outpost2.outpostInfo();
    std::cout << "===== Outpost3:\n";
    outpost3.outpostInfo();
    std::cout << "===== Outpost4:\n";
    outpost4.outpostInfo();

    return 0;
}

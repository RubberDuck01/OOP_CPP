#pragma once
#include "TownCenter.hh"

class Outpost {
public:
    Outpost(); // def
    Outpost(Villager*); // definira outpost, daje jedinicu
    Outpost(const Outpost &outpost); // copy

    void outpostInfo(); // da li je u villager prisutan

private:
    Villager* villager;
};

#pragma once

// defaultne vrijednosti:
#define MAX_HP 25
#define MAX_ATT 3
#define MAX_SPD 0.8

class Villager {
public:
    Villager();
    Villager(int hitPoints); // postavlja HP
    // copy constructor:
    Villager(const Villager &villager);

    void npcInfo(); // pokaze info o npc
    // getteri:
    int getHP();
    int getAttack();
    double getSpeed();
    // setteri:
    void setHP(int hitPoints);
    void setAttack(int attack);
    void setSpeed(double speed);

private:
    int hitPoints;
    int attack;
    double speed;
};

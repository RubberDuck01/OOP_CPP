#include <iostream>
#include "Villager.hh"

// default constructor:
Villager::Villager() : hitPoints(MAX_HP), attack(MAX_ATT), speed(MAX_SPD) {
}

// dodatni constructor (attack, speed MAX, HP custom):
Villager::Villager(int hitPoints) {
    setHP(hitPoints);
    this -> attack = MAX_ATT;
    this -> speed = MAX_SPD;
}

// copy constructor da kopira jedinicu s MAX HP:
Villager::Villager(const Villager &villager) : hitPoints(MAX_HP), attack(villager.attack), speed(villager.speed) {
};

// getteri:
int Villager::getHP() {
    return hitPoints;
}

int Villager::getAttack() {
    return attack;
}

double Villager::getSpeed() {
    return speed;
}

// setteri:
void Villager::setHP(int hitPoints) {
    // exception ===> HP ne smije prijeci MAX_HP (25)
    if (hitPoints >= 0 && hitPoints <= MAX_HP) {
        this -> hitPoints = hitPoints;
    } else {
        std::cout << "Vrijednost nije ispravna!\n";
        return;
    }
}

void Villager::setAttack(int attack) {
    // exception ===> attack ne smije prijeci MAX_ATT (3)
    if (attack >= 0 && attack <= MAX_ATT) {
        this -> attack = attack;
    } else {
        std::cout << "Vrijednost nije ispravna!\n";
        return;
    }
}

void Villager::setSpeed(double speed) {
    // isti exception i tu
    if (speed >= 0 && speed <= MAX_SPD) {
        this -> speed = speed;
    } else {
        std::cout << "Vrijednost nije ispravna!\n";
        return;
    }
}

void Villager::npcInfo() {
    std::cout << "Villager" << " (" << getHP() << ", " << getAttack() << ", " << getSpeed() << ")" << std::endl;
}

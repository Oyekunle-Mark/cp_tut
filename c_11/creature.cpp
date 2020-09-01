//
// Created by Oyekunle Oloyede on 01/09/2020.
//

#include "creature.h"

Creature::Creature(const std::string &name, char symbol, int health, int damage, int gold) :
        name(name), symbol(symbol), health(health), damage(damage), gold(gold) {}

const std::string &Creature::getName() const {
    return name;
}

char Creature::getSymbol() const {
    return symbol;
}

int Creature::getHealth() const {
    return health;
}

int Creature::getDamage() const {
    return damage;
}

int Creature::getGold() const {
    return gold;
}

void Creature::reduceHealth(int amount) {
    health -= amount;
}

bool Creature::isDead() const {
    return health == 0;
}

void Creature::addGold(int amount) {
    gold += amount;
}
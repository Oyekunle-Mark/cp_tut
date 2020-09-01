//
// Created by Oyekunle Oloyede on 01/09/2020.
//

#ifndef C_11_CREATURE_H
#define C_11_CREATURE_H

#include <string>

class Creature {
private:
    std::string name;
    char symbol;
    int health;
    int damage;
    int gold;
public:
    Creature(const std::string &name, char symbol, int health, int damage, int gold);

    const std::string &getName() const;

    char getSymbol() const;

    int getHealth() const;

    int getDamage() const;

    int getGold() const;

    void reduceHealth(int amount);

    bool isDead() const;

    void addGold(int amount);
};


#endif //C_11_CREATURE_H

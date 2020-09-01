//
// Created by Oyekunle Oloyede on 01/09/2020.
//

#ifndef C_11_PLAYER_H
#define C_11_PLAYER_H

#include "creature.h"

class Player : public Creature {
private:
    static constexpr int maxLevel_k{20};
    int level;
public:
    Player(const std::string &name, char symbol = '@', int health = 10, int damage = 1, int gold = 0, int level = 1);

    void levelUp();

    int getLevel() const;

    bool hasWon() const;
};


#endif //C_11_PLAYER_H

//
// Created by Oyekunle Oloyede on 01/09/2020.
//

#include "player.h"

Player::Player(const std::string &name, char symbol, int health, int damage, int gold, int level) :
        Creature(name, symbol, health, damage, gold), level(level) {}

void Player::levelUp() {
    ++level;
    ++damage;
}

int Player::getLevel() const {
    return level;
}

bool Player::hasWon() const {
    return level == maxLevel_k;
}

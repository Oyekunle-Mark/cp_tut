//
// Created by Oyekunle Oloyede on 01/09/2020.
//
#include <random>
#include <ctime>
#include "monster.h"

Monster::Monster(Type type)
        : Creature(getDefaultCreature(type)) {}

const Creature &Monster::getDefaultCreature(Type type) {
    static std::array<Creature, static_cast<std::size_t>(Type::max_types)> monsterStore
            {
                    {
                            {"dragon", 'D', 20, 4, 100},
                            {"orc", 'o', 4, 2, 25},
                            {"slime", 's', 1, 1, 10}
                    }
            };

    return monsterStore.at(static_cast<std::size_t>(type));
}

Monster::Type Monster::getRandomMonster() {
    std::mt19937 mersenne{static_cast<std::mt19937::result_type>(std::time(nullptr))};
    std::uniform_int_distribution die{0, static_cast<int>(Type::max_types) - 1};

    return static_cast<Type>(die(mersenne));
}

//
// Created by Oyekunle Oloyede on 01/09/2020.
//
#include <random>
#include <cstdlib>
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
    const int min{};
    constexpr int max{static_cast<int>(Type::max_types) - 1};
    static constexpr double fraction{
            1.0 / (RAND_MAX + 1.0)}; // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    int randomNum{min + static_cast<int>((max - min + 1) * (std::rand() * fraction))};

    return static_cast<Type>(randomNum);
}

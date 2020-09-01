//
// Created by Oyekunle Oloyede on 01/09/2020.
//

#include "monster.h"

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

//
// Created by Oyekunle Oloyede on 01/09/2020.
//

#ifndef C_11_MONSTER_H
#define C_11_MONSTER_H

#include "creature.h"
#include <array>

class Monster : public Creature {
public:
    enum class Type {
        dragon,
        orc,
        slime,
        max_types
    };

    static const Creature&  getDefaultCreature(Type type);
};


#endif //C_11_MONSTER_H

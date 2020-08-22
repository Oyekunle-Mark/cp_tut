#include <iostream>
#include <string>
#include <map>

enum class MonsterType {
    Ogre,
    Dragon,
    Orc,
    Spider,
    Slime,
};

struct Monster {
    MonsterType type;
    std::string name;
    size_t health;
};

void printMonster(const Monster &monster) {
    std::map<MonsterType, std::string> typeName {
            {MonsterType::Ogre, "Ogre"},
            {MonsterType::Dragon, "Dragon"},
            {MonsterType::Orc, "Orc"},
            {MonsterType::Spider, "Spider"},
            {MonsterType::Slime, "Slime"}
    };

    std::cout << "This " << typeName[monster.type]
              << " is named " << monster.name
              << " and has " << monster.health
              << " health.\n";
}

int main() {
    Monster borg{MonsterType::Ogre, "Borg", 127};
    Monster lum{MonsterType::Slime, "Lum", 79};

    printMonster(borg);
    printMonster(lum);

    return 0;
}

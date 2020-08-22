#include <iostream>
#include <string>

int main() {
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

    return 0;
}

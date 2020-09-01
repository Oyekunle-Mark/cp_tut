#include <iostream>
#include <ctime>
#include "monster.h"

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // set initial seed value to system clock
    std::rand(); // get rid of first result

    for (int i{ 0 }; i < 10; ++i)
    {
        Monster m{ Monster::getRandomMonster() };
        std::cout << "A " << m.getName() << " (" << m.getSymbol() << ") was created.\n";
    }

    return 0;
}

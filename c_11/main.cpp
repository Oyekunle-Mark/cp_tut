#include <iostream>
#include "monster.h"

int main() {
    Monster m{ Monster::Type::orc };
    std::cout << "A " << m.getName() << " (" << m.getSymbol() << ") was created.\n";

    return 0;
}

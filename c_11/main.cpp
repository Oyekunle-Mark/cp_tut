#include <iostream>
#include "player.h"

int main() {
    std::cout << "Enter your name: ";
    std::string playerName{};
    std::cin >> playerName;
    std::cout << "Welcome, " << playerName << ".\n";

    const Player player{playerName};
    std::cout << "You have " << player.getHealth()
              << " health and are carrying " << player.getGold()
              << " gold.";

    return 0;
}

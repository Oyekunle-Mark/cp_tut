#include "hi-lo-utils.h"

int main() {
    char userInput{};

    do {
        runGame();
        userInput = getChoice();
    } while (userInput != 'n');

    return 0;
}

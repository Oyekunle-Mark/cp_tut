//
// Created by Oyekunle Oloyede on 23/08/2020.
//

#ifndef HI_LO_HI_LO_UTILS_H
#define HI_LO_HI_LO_UTILS_H

#include <cstdlib>

namespace constants {
    inline constexpr size_t tryCount {7};
    inline constexpr size_t minGuess {1};
    inline constexpr size_t maxGuess {100};
}

enum class Result {
    Low,
    Correct,
    High,
};

size_t getGuess(size_t guessCount);
char getChoice();
Result compareGuess(size_t userInput, int gameGuess);
void runGame();
size_t generateRandomNumber();

#endif //HI_LO_HI_LO_UTILS_H

//
// Created by Oyekunle Oloyede on 23/08/2020.
//

#include <iostream>
#include <random>
#include <ctime>
#include "hi-lo-utils.h"

size_t getGuess(size_t guessCount) {
    std::cout << "Guess #" << guessCount << ": ";
    size_t guess{};
    std::cin >> guess;

    return guess;
}

char getChoice() {
    std::cout << "Would you like to play again (y/n)? ";
    char choice{};
    std::cin >> choice;

    return choice;
}

size_t generateRandomNumber() {
    std::mt19937 mersenne{static_cast<std::mt19937::result_type>(std::time(nullptr))};
    std::uniform_int_distribution die{constants::minGuess, constants::maxGuess};

    return static_cast<size_t>(die(mersenne));
}

Result compareGuess(size_t userInput, size_t gameGuess) {
    if (userInput == gameGuess) {
        std::cout << "Correct! You win!\n";
        return Result::Correct;
    } else if (userInput < gameGuess) {
        std::cout << "Your guess is too low.\n";
        return Result::Low;
    } else {
        std::cout << "Your guess is too high.\n";
        return Result::High;
    }
}

void runGame() {
    std::cout << "Let's play a game. I'm thinking of a number. You have "
              << constants::tryCount
              << " tries to guess what it is.\n";

    size_t compGuess{generateRandomNumber()};
    size_t guessCount{1};

    while (guessCount <= constants::tryCount) {
        size_t userGuess{getGuess(guessCount)};
        Result compareResult{compareGuess(userGuess, compGuess)};

        if (compareResult == Result::Correct)
            return;

        ++guessCount;
    }

    std::cout << "Sorry, you lose.  The correct number was " << compGuess << ".\n";
}

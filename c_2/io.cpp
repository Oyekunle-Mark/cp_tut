//
// Created by Oyekunle Oloyede on 20/08/2020.
//
#include <iostream>
#include "io.h"

int& readNumber() {
    std::cout << "Enter an integer: ";
    int input {};
    std::cin >> input;

    return input;
}

void writeAnswer(int& input) {
    std::cout << "The sum of the two numbers are: " << input << std::endl;
}

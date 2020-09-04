#include "fraction.h"

int main() {
    int numerator{};
    std::cout << "Enter the numerator: ";
    std::cin >> numerator;

    int denominator{};
    std::cout << "Enter the denominator: ";
    std::cin >> denominator;

    Fraction fraction{numerator, denominator};
    std::cout << fraction;

    return 0;
}

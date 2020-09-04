#include "fraction.h"

int main() {
    int numerator{};
    std::cout << "Enter the numerator: ";
    std::cin >> numerator;

    int denominator{};
    std::cout << "Enter the denominator: ";
    std::cin >> denominator;

    try {
        Fraction fraction{numerator, denominator};
        std::cout << fraction;
    } catch (const FractionException &e) {
        std::cout << e.what() << '\n';
    }

    return 0;
}

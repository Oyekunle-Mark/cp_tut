//
// Created by Oyekunle Oloyede on 04/09/2020.
//

#ifndef FRACTION_FRACTION_H
#define FRACTION_FRACTION_H

#include <stdexcept>
#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int numerator, int denominator)
            : numerator{numerator}, denominator{denominator} {
        if (denominator == 0)
            throw std::runtime_error("Invalid denominator");
    }

    friend std::ostream &operator<<(std::ostream &out, const Fraction &fraction);
};

std::ostream &operator<<(std::ostream &out, const Fraction &fraction) {
    out << fraction.numerator << "/" << fraction.denominator << '\n';
    return out;
}

#endif //FRACTION_FRACTION_H

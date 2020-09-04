//
// Created by Oyekunle Oloyede on 04/09/2020.
//

#include "fraction.h"

Fraction::Fraction(int numerator, int denominator)
        : numerator{numerator}, denominator{denominator} {
    if (denominator == 0)
        throw std::runtime_error("Invalid denominator");
}

std::ostream &operator<<(std::ostream &out, const Fraction &fraction) {
    out << fraction.numerator << "/" << fraction.denominator << '\n';
    return out;
}

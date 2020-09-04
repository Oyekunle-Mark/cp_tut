//
// Created by Oyekunle Oloyede on 04/09/2020.
//

#include "fraction.h"

Fraction::Fraction(int numerator, int denominator)
        : numerator{numerator}, denominator{denominator} {
    if (denominator == 0)
        throw FractionException{"Invalid denominator"};
}

std::ostream &operator<<(std::ostream &out, const Fraction &fraction) {
    out << fraction.numerator << "/" << fraction.denominator << '\n';
    return out;
}

FractionException::FractionException(const char *message)
        : message{message} {}

const char *FractionException::what() const noexcept {
    return message;
}

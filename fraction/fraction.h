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
    Fraction(int numerator, int denominator);

    friend std::ostream &operator<<(std::ostream &out, const Fraction &fraction);
};

class FractionException : public std::exception {
private:
    const char *message;

public:
    explicit FractionException(const char *message);

    virtual const char *what() const noexcept;
};

#endif //FRACTION_FRACTION_H

#include <iostream>
#include "constants.h"

double getTowerHeight();

double calculateHeight(double towerHeight, int seconds);

void printHeight(double height, int seconds);

void calculateAndPrintHeight(double towerHeight, int seconds);

int main() {
    double towerHeight{getTowerHeight()};

    calculateAndPrintHeight(towerHeight, 0);
    calculateAndPrintHeight(towerHeight, 1);
    calculateAndPrintHeight(towerHeight, 2);
    calculateAndPrintHeight(towerHeight, 3);
    calculateAndPrintHeight(towerHeight, 4);
    calculateAndPrintHeight(towerHeight, 5);

    return 0;
}

double getTowerHeight() {
    std::cout << "Enter tower height in meters: ";
    double height{};
    std::cin >> height;

    return height;
}

double calculateHeight(double towerHeight, int seconds) {
    // using the formula [ s = u * t + (a * t^2) / 2 ], here u(initial velocity) = 0
    double distance{(constants::gravity * (seconds * seconds)) / 2};
    double currentHeight{towerHeight - distance};

    return currentHeight;
}

void printHeight(double height, int seconds) {
    if (height > 0.0)
        std::cout << "At " << seconds << " seconds, ball at " << height << " meters\n";
    else
        std::cout << "At " << seconds << " ball is on the ground.\n";
}

void calculateAndPrintHeight(double towerHeight, int seconds) {
    double height = calculateHeight(towerHeight, seconds);
    printHeight(height, seconds);
}
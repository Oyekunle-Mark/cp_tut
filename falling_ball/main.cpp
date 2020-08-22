#include <iostream>
#include "constants.h"

double getTowerHeight();

double calculateHeight(double towerHeight, int seconds);

void printHeight(double height, int seconds);

double calculateAndPrintHeight(double towerHeight, int seconds);

int main() {
    double towerHeight{getTowerHeight()};
    size_t time = 0;

    while (true) {
        double currentHeight = calculateAndPrintHeight(towerHeight, time);

        if (currentHeight < 0.0)
            break;

        ++time;
    }

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
        std::cout << "At " << seconds << " seconds, ball is on the ground.\n";
}

double calculateAndPrintHeight(double towerHeight, int seconds) {
    double height = calculateHeight(towerHeight, seconds);
    printHeight(height, seconds);

    return height;
}

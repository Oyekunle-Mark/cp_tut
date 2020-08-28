#include <iostream>
#include "point.h"

int main() {
    Point p1{2, 3};
    Point p2{0, 1};

    std::cout << "Point 1: " << p1 << '\n';
    std::cout << "Point 2: " << p2 << '\n';
    std::cout << "Point 1 + Point 2: " << p1 + p2 << '\n';
    std::cout << "- Point 1: " << -p1 << '\n';

    Point p3 = p1;

    std::cout << "Point 3: " << p3 << '\n';

    return 0;
}

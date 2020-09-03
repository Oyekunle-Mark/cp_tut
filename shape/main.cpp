#include <vector>
#include "shape.h"
#include "point.h"

class Circle : public Shape {
private:
    Point m_center;
    int m_radius;
public:
    Circle(const Point &center, int radius)
            : m_center{center}, m_radius{radius} {}

    std::ostream &print(std::ostream &out) const override {
        out << "(" << m_center << ", radius " << m_radius << ")\n";
        return out;
    }
};

class Triangle : public Shape {
private:
    Point m_p1;
    Point m_p2;
    Point m_p3;
public:
    Triangle(const Point &p1, const Point &p2, const Point &p3)
            : m_p1{p1}, m_p2{p2}, m_p3{p3} {}

    std::ostream &print(std::ostream &out) const override {
        out << "(" << m_p1 << ", "
            << m_p2 << ", "
            << m_p3 << ")\n";
        return out;
    }
};

int main() {
    std::vector<Shape *> v{
            new Circle{Point{1, 2, 3}, 7},
            new Triangle{Point{1, 2, 3}, Point{4, 5, 6}, Point{7, 8, 9}},
            new Circle{Point{4, 5, 6}, 3}
    };

    // print each shape in vector v on its own line here
    for (const Shape *shape: v)
        std::cout << *shape;

//    std::cout << "The largest radius is: " << getLargestRadius(v) << '\n'; // write this function
//
//    // delete each element in the vector here

    return 0;
}

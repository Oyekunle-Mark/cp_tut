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
        out << "(" << m_center << "radius " << m_radius << ")\n";
        return out;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

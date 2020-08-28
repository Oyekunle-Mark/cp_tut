//
// Created by Oyekunle Oloyede on 28/08/2020.
//

#include "point.h"

Point::Point(int x, int y) :
        m_x{x}, m_y{y} {}

Point &Point::operator-() {
    m_x = --m_x;
    m_y = --m_y;

    return *this;
}

Point &Point::operator=(const Point &rhs) {
    this->m_y = rhs.m_y;
    this->m_x = rhs.m_x;

    return *this;
}

Point& Point::operator+=(int rhs_x) {
    this->m_x += rhs_x;
    this->m_y += rhs_x;

    return *this;
}

Point operator+(const Point &p1, const Point &p2) {
    return Point{p1.m_x + p2.m_x, p1.m_y + p2.m_y};
}

std::ostream &operator<<(std::ostream &out, const Point &rhs) {
    out << "Point(" << rhs.m_x << ", " << rhs.m_y << ")";
    return out;
}

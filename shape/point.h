//
// Created by Oyekunle Oloyede on 03/09/2020.
//

#ifndef SHAPE_POINT_H
#define SHAPE_POINT_H

#include <iostream>

class Point {
private:
    int m_x{0};
    int m_y{0};
    int m_z{0};

public:
    Point(int x, int y, int z)
            : m_x{x}, m_y{y}, m_z{z} {}

    friend std::ostream &operator<<(std::ostream &out, const Point &p) {
        out << "Point(" << p.m_x << ", " << p.m_y << ", " << p.m_z << ')';
        return out;
    }
};

#endif //SHAPE_POINT_H

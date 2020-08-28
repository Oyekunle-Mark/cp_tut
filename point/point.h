//
// Created by Oyekunle Oloyede on 28/08/2020.
//

#ifndef POINT_POINT_H
#define POINT_POINT_H

#include <ostream>

class Point {
private:
    int m_x;
    int m_y;
public:
    Point(int x, int y);

    Point &operator-();

    Point &operator=(const Point &rhs);

    friend std::ostream &operator<<(const std::ostream &out, const Point &rhs);
};

#endif //POINT_POINT_H

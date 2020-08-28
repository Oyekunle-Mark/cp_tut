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

    Point& operator+=(int rhs_x);

    friend Point operator+(const Point &p1, const Point &p2);

    friend std::ostream &operator<<(std::ostream &out, const Point &rhs);
};

#endif //POINT_POINT_H

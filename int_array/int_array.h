//
// Created by Oyekunle Oloyede on 28/08/2020.
//

#ifndef INT_ARRAY_INT_ARRAY_H
#define INT_ARRAY_INT_ARRAY_H

#include <cstddef>
#include <ostream>

class IntArray {
private:
    std::size_t m_size;
    int *array;
public:
    IntArray(std::size_t size);

    IntArray(const IntArray &copy);

    IntArray &operator=(const IntArray &rhs);

    int &operator[](std::size_t index);

    friend std::ostream &operator<<(std::ostream &out, const IntArray &rhs);

    ~IntArray();
};

#endif //INT_ARRAY_INT_ARRAY_H

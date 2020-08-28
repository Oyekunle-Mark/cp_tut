//
// Created by Oyekunle Oloyede on 28/08/2020.
//

#include "int_array.h"

IntArray::IntArray(std::size_t size) :
        m_size{size} {
    array = new int[m_size];
}

IntArray::IntArray(const IntArray &copy) {
    this->m_size = copy.m_size;
    this->array = new int[copy.m_size];

    for (std::size_t i{}; i < copy.m_size; ++i)
        this->array[i] = copy.array[i];
}

IntArray::~IntArray() {
    delete[] array;
}

IntArray &IntArray::operator=(const IntArray &rhs) {
    if (this == &rhs)
        return *this;

    delete[] this->array;
    this->m_size = rhs.m_size;
    this->array = new int[rhs.m_size];

    for (std::size_t i{}; i < rhs.m_size; ++i)
        this->array[i] = rhs.array[i];

    return *this;
}

int &IntArray::operator[](std::size_t index) {
    return array[index];
}

std::ostream &operator<<(std::ostream &out, const IntArray &rhs) {
    for (std::size_t i{}; i < rhs.m_size; ++i)
        out << rhs.array[i] << ' ';

    return out;
}

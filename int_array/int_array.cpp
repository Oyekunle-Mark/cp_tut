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

    copyArray(copy.array);
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

    copyArray(rhs.array);

    return *this;
}

int &IntArray::operator[](std::size_t index) {
    return array[index];
}

void IntArray::copyArray(int *source) {
    for (std::size_t i{}; i < m_size; ++i)
        array[i] = source[i];
}

std::ostream &operator<<(std::ostream &out, const IntArray &rhs) {
    for (std::size_t i{}; i < rhs.m_size; ++i)
        out << rhs.array[i] << ' ';

    return out;
}

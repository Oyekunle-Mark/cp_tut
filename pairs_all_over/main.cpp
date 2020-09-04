#include <iostream>

template<class T>
class Pair1 {
    T m_first;
    T m_second;
public:
    Pair1(T first, T second)
            : m_first{first}, m_second{second} {}

    T first() const {
        return m_first;
    }

    T second() const {
        return m_second;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

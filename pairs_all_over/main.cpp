#include <iostream>

template<class T, class U>
class Pair {
private:
    T m_first;
    U m_second;
public:
    Pair(T first, U second)
            : m_first{first}, m_second{second} {}

    T first() const {
        return m_first;
    }

    U second() const {
        return m_second;
    }
};

int main() {


    return 0;
}

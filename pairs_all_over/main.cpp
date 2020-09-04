#include <iostream>

template<class T, class U>
class Pair {
private:
    T m_first;
    U m_second;
public:
    Pair(const T &first, const U &second)
            : m_first{first}, m_second{second} {}

    const T &first() const {
        return m_first;
    }

    const U &second() const {
        return m_second;
    }
};

int main() {
    const Pair<int, double> p1{5, 6.7};
    std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair<double, int> p2{2.3, 4};
    std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    return 0;
}

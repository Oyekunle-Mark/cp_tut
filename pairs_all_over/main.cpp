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

template<class V>
class StringValuePair : public Pair<std::string, V> {
public:
    StringValuePair(const std::string &key, const V &value)
            : Pair<std::string, V>{key, value} {}
};

int main() {
    StringValuePair<int> svp("Hello", 5);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';

    return 0;
}

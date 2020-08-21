#include <iostream>

double getDouble() {
    std::cout << "Enter a double value: " << '\n';
    double input{};
    std::cin >> input;

    return input;
}

char  getSymbol() {
    std::cout << "Enter one of the following: +, -, * or /: \n";
    char sym{};
    std::cin >> sym;

    return sym;
}

void printAnswer(double inp1, double inp2, char op) {
    double answer{};

    switch(op) {
        case '+':
            answer = inp1 + inp2;
            break;
        case '-':
            answer = inp1 - inp2;
            break;
        case '*':
            answer = inp1 * inp2;
            break;
        case '/':
            answer = inp1 / inp2;
            break;
        default:
            std::cout << "Invalid operator.\n";
            return;
    }

    std::cout << inp1 << " " << op << " " << inp2 << "is " << answer;
}

int main() {
    double d1{getDouble()};
    double d2{getDouble()};
    char sym{getSymbol()};
    printAnswer(d1, d2, sym);

    return 0;
}

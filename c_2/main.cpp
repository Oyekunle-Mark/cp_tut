#include <iostream>

int& readNumber();
void writeAnswer(int& input);

int main() {
    int firstNumber {readNumber()};
    int secondNumber {readNumber()};
    int sum = firstNumber + secondNumber;

    writeAnswer(sum);

    return 0;
}

int& readNumber() {
    std::cout << "Enter an integer: ";
    int input {};
    std::cin >> input;

    return input;
}

void writeAnswer(int& input) {
    std::cout << "The sum of the two numbers are: " << input << std::endl;
}

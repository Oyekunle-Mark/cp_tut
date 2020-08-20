#include "io.h"

int main() {
    int firstNumber {readNumber()};
    int secondNumber {readNumber()};
    int sum = firstNumber + secondNumber;

    writeAnswer(sum);

    return 0;
}

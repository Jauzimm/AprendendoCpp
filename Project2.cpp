#include <iostream>
#include <cmath>

int main () {

    char op;
    double num1, num2, result;

    std::cout << "*********** Calculator ***********\n";
    std::cout << "Enter either (+ - * / ): ";
    std::cin >> op;
    std::cout << "Enter #1: ";
    std::cin >> num1;
    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch ( op ) {
        default:
            std::cout << "That wasn't a valid operator\n";
            break;
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
            break;
    }
    std::cout << "**********************************\n";

    return 0;
}
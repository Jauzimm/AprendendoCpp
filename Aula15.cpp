#include <iostream>

int main () {

    int temp; 

    std::cout << "Enter the temperature: ";
    std::cin >> temp;
    // && two conditions is true
    // || At least one condition is true
    // ! Invert the logical
    if ( temp > 0 && temp < 30) {
        std::cout << "The temperature is good!";
    } else {
        std::cout << "The temperature is bad!";
    }
    return 0;
}

#include <iostream>

int main () {

    const double pi = 3.14159; 
    // pi = 03013.323; I can't change a constant variable :c
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << " cm";

    return 0;
}
#include <iostream>

int main () {

    int x, y, total; //declaration
    x = 5;
    y = 3;

    //Float point
    double price = 10.99;

    // Single character
    char grade = 'A';
    char initial = 'B';
    
    // boolean (true or false)
    bool student = true;

    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string adress = "513 Monjolo St.";

    std::cout << "Hello " << name << std::endl;

    total = x + y;
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << total << '\n';

    return 0;
}
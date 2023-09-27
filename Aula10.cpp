#include <iostream>

//cout << (insertion operator)
//cin >> (extraction  operator)

int main () {

    std::string name;
    int age;

    std::cout << "What's your name?: ";
    std::cin >> name; 
// i can't take the full name, so i can use, std::getline(std::cin >> std::ws, name);
    std::cout << "Hello " << name << '\n';
    std::cout << "What's your age?: ";
    std::cin >> age;
    std::cout << "Your age is: " << age;

    return 0;
}
#include <iostream>

int main () {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin , name);
/* 
    if (name.empty()) {
        std::cout << "You didn't enter your name";
    } else {
        std::cout << "Hello " << name;
    }
*/
// name.clear(); Clear the names
// name.append("@gmail.com"); Adds a @gmail.com on your name
// std::cout << name.at(0); Takes the possition char in the string
// name.insert (1, "@");
// std::cout << name.find(' ');
// name.erase(0, 3);
    return 0;
}
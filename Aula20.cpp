#include <iostream>

void happyBirth(std::string name);

int main () {

    std::string name = "Joao";
    happyBirth(name);
    return 0;
}

void happyBirth(std::string name) {
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "Happy Birthday to " << name << "\n";

}

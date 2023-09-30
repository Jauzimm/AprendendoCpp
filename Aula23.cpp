#include <iostream>

int main () {

    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};



    for (std::string students : students) {
        std::cout << students << '\n';
    }

    return 0;
}
#include <iostream>
#include <ctime>

int main () {

    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum) {
    case 1:
        std::cout << "You win a cake!\n";
        break;
    case 2:
        std::cout << "You win a soda!\n";
        break;
    case 3:
        std::cout << "You win a free lunch!\n";
        break;
    case 4:
        std::cout << "You win a water bottle!\n";
        break;
    case 5:
        std::cout << "You win a mouse!\n";
        break;
    }
    
    return 0;
}
#include <iostream>

int main () {
    
    //condition ? expression 1 : expression 2;

    int grade;
    std::cout << "What is your grade?: ";
    std::cin >> grade;
    (grade >= 75) ? std::cout << "You pass!" : std::cout <<"You fail!";

    return 0;
}
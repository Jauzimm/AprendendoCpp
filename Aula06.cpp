#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

// using namespace std; Use to don't repeat std every time.
int main () {

    using namespace first;

    std::cout << x;
    return 0;
}
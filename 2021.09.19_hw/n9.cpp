#include <iostream>

int main () {
    int x, t;

    std::cin >> x;
    
    t = x * x;

    std::cout << (t + x) * (t + 1) + 1 << std::endl;

    return 0;
}

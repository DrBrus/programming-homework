#include <iostream>

int main () {
    int a, b;
    bool a1, b1;

    std::cin >> a >> b;

    a1 = a / b;
    b1 = b / a;

    //std::cout << (a * a1) + (b * b1) << std::endl;
    std::cout << a1 << b1 << std::endl;

    return 0;
}

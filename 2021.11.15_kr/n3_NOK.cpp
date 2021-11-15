#include <iostream>

int main (int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    std::cin >> a >> b;

    int NOD = 0;
    int NOK = a * b; // потом мы его поделим на нод
    while ((a != 0) && (b != 0)) {
        if (a >= b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }

    NOD = a + b;
    NOK = NOK / NOD;

    std::cout << NOK << std::endl;

    return 0;
}

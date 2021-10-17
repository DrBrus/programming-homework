#include <iostream>

int main (int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    std::cin >> a >> b >> c >>d;

    for (int i = 0; i <= 1000; ++i) {
        int Q = (a * i*i*i) + (b * i*i) + (c * i) + d;
        if (Q == 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}

#include <iostream>

int main (int argc, char* argv[]) {
    int a = 0;
    int b = 0;

    std::cin >> a >> b;

    for (int i = 0; (i * i) <= b; ++i) {
        if (i * i >= a) {
            std::cout << i * i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}

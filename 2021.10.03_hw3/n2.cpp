#include <iostream>

int main (int argc, char* argv[]) {
    int n = 0;
    int deg2 = 1; // решение для целого и неотрицательного n

    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        deg2 = deg2 * 2;
    }

    std::cout << deg2 << std::endl;

    return 0;
}

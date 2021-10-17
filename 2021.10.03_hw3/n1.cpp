#include <iostream>

int main (int argc, char* argv[]) {
    int n = 0;

    std::cin >> n;

    int f = 1; // факториал 0

    for (int i = 1; i <= n; ++i) {
        f = f * i;
    }

    std::cout << f << std::endl;

    return 0;
}

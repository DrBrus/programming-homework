#include <iostream>

int main (int argc, char* argv[]) {
    int k = 0;
    std::cin >> k;

    for (int i = 0; i < k; ++i) {
        int n = 0;
        int m = 0;
        std::cin >> n >> m;

        std::cout << 19*m + (n + 239)*(n + 366) / 2 << std::endl;
    }

    return 0;
}

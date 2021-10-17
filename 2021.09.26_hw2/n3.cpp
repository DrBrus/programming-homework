#include <iostream>

int main (int argc, char* argv[]) {
    int k = 0;
    int m = 0;
    int n = 0;

    std::cin >> k >> m >> n;

    if (k == 0 || n == 0 || m == 0) {
        std::cout << 0 << std::endl;
    } else if (n >= k) {
       if ((n * 2) % k == 0) {
            std::cout << (((n * 2) / k) * m) << std::endl;
        } else {
            std::cout << ((((n * 2) / k) + 1) * m) << std::endl;
        }
    } else {
        std::cout << m * 2 << std::endl;
    }

    return 0;
}

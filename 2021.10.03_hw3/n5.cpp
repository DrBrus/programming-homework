#include <iostream>

int main (int argc, char* argv[]) {
    int n = 0;
    
    std::cin >> n;

    for (int i = 1; i <= ((n / 2) + 1); ++i) {
        if (n % i == 0) {
            std::cout << i << " ";
        }
    }

    if (n != 1) {
        std::cout << n;
    }

    std::cout << std::endl;
    
    return 0;
}

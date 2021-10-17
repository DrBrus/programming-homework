#include <iostream>

int main (int argc, char* argv[]) {
    int n = 0;
    
    std::cin >> n;

    int i = 1;

    for (int j = 1; i <= n; ++j) {
        for (int r = 1; i <= n && r <= j; ++r, ++i) {
            std::cout << i << " ";
            
            if (r == j) {
                std::cout << std::endl;
            }
        }
    }

    std::cout << std::endl;

    return 0;
}

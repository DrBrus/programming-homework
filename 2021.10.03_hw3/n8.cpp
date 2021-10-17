#include <iostream>

int main (int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;

    int sum = 0;
    int temp = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> temp;
        sum = sum + temp;
    }

    std::cout << sum;

    return 0;
}

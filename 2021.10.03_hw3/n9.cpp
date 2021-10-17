#include <iostream>

int main (int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    std::cin >> a >> b >> c >> d;

    for (int i = a; i <= b; ++i) {
        if (i % d == c) {
            for (;i <= b; i = i + d) {
                std::cout << i << " ";
            }
        }
    }

    std::cout << std::endl;

    return 0;
}

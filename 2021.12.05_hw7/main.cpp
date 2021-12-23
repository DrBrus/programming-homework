#include <iostream>
#include "mylib.h"

int main (int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;

    std::cout << triN_plus_1(n) << std::endl;

    int R = 0;
    bool flagY = 0;
    bool flagX = 0;
    std::cin >> R;
    int* arr = quarterCircle(R);
    for (int i = 1; i <= (2 * R); ++i) {
        if (i > R) {
            flagY = 1;
        } else {
            flagY = 0;
        }

        for (int j = 1; j <= (2 * R); ++i) {
            int x = 0;
            int y = 0;

            if (j > R) {
                flagX = 0;
            } else {
                flagX = 1;
            }

            if (flagX) {
                x = R - j;
            } else {
                x = j;
            }

            if (flagY) {
                y = R - i;
            } else {
                y = i;
            }

            if (arr[x + (y - 1) * R] == 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }

            if (x % (2 * R) == 0) {
                std::cout << std::endl;
            }
        }
    }

    delete[] arr;

    return 0;
}

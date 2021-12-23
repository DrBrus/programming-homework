#include "mylib.h"

int triN_plus_1 (int n) {
    int count = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        count++;
    }
    return count;
}

double f (int x, double y, int R) {
    return (x*x + y*y - R*R);
}

int* quarterCircle (int R) {
    // не лучшая реализация алгоритма Брезенхэма
    int* arr = new int[R] { 0 };
    int x = 0;
    int y = 0;
    arr[0] = 1; // x + R*y
    while (x != y) {
        if (f(x + 1, y - 0.5, R) > 0) {
            y = y - 1;
        }
        x++;
        arr[x + R*y] = 1;
    }
    return arr;
    delete[] arr;
}

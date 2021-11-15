#include <iostream>

int main (int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;

    int a[n] = { 0 };

    // чтение
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    // поиск максимума и минимума
    int max = a[0];
    int min = a[0];
    for (int i = 0; i < n; ++i) {
        if (a[i] > max) {
            max = a[i];
        }

        if (a[i] < min) {
            min = a[i];
        }
    }

    // подстановка
    for (int i =0; i < n; ++i) {
        if (a[i] == max) {
            a[i] = min;
        }
    }

    // вывод
    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

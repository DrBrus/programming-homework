#include <iostream>

int main (int argc, char* argv[]) {
    int n = 0;
    int m = 0;
    std::cin >> n >> m;

    int min = m;
    if (min > n) {
        min = n;
    }

    // делаем так, что массив na меньший массив
    int na[min] = { 0 };
    int ma[(m + n) - min] = { 0 };
    if (n <= m) {
        for (int i = 0; i < n; ++i) {
            std::cin >> na[i];
        }
        for (int i = 0; i < m; ++i) {
            std::cin >> ma[i];
        }
    } else {
        for (int i = 0; i < n; ++i) {
            std::cin >> ma[i];
        }
        for (int i = 0; i < m; ++i) {
            std::cin >> na[i];
        }

        int temp_mn = n;
        n = m;
        m = temp_mn;
    }


    // сортировка меньшего по размеру массива
    for (int i = 0; i < (n - 1); ++i) {
        for (int j = (n - 1); j >= i; --j) {
            if (na[j] > na[j + 1]) {
                int temp = na[j];
                na[j] = na[j + 1];
                na[j + 1] = temp;
            }
        }
    }

    // поиск одинаковых элементов не считая первого элемента na
    for (int i = 1; i < (n - 1); ++i) {
        bool flag = 0;
        for (int j = 0; (j < (m - 1)) && (flag != 1); ++j) {
           if (na[i] == ma[j]) {
               flag = 1;
           }
        }
        if (!flag) {
            na[i] = na[0];
        }
    }

    // вывод
    bool flag = 0;
    for (int i = 0; i < (m - 1); ++i) {
        if (na[0] == ma[i]) {
            flag = 1;
        }
    }
    if (flag) {
        std::cout << na[0] << " ";
    }
    for (int i = 0; i < (n - 1); ++i) {
        if (na[i] != na[0] && na[i] != na[i - 1]) {
            std::cout << na[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}

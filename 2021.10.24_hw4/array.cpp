#include <iostream>

int main (int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;

    //1
    int a[n] = { 0 };

    //2
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    //3
    std::cout << "ARRAY : ";
    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    //4
    std::cout << "EVEN : ";
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            std::cout << a[i] << " ";
        }
    }
    std::cout << std::endl;

    //5
    std::cout << "SUM : ";
    {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum = sum + a[i];
        }
        std::cout << sum << std::endl;
    }

    //6
    std::cout << "PRODUCT OF NEGATIVE : ";
    {
        int pon = 1;
        for (int i = 0; i < n; ++i) {
            if (a[i] < 0) {
                pon = pon * a[i];
            }
        }
        std::cout << pon << std::endl;
    }

    //7
    std::cout << "FIRST MIN INDEX : ";
    {
        int min_i = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] < a[min_i]) {
                min_i = i;
            }
        }
        std::cout << min_i << std::endl;
    }

    //8
    std::cout << "SECOND MAX : ";
    {
        int max = a[0];
        int max2 = a[0];
        for (int i = 0; i < n; ++i) {
            if (a[i] > max) {
                max2 = max;
                max = a[i];
            }
        }
        std::cout << max2 << std::endl;
    }

    //9
    std::cout << "REVERSE : ";
    for (int i = (n - 1); i >= 0; --i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    //10
    std::cout << "ODD INDEXES : ";
    for (int i = 1; i < n; i = i + 2) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

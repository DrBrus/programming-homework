#include <iostream>
#include <cmath>

int main (int argc, char* argv[]) {
    unsigned int a = 0;
    std::cin >> a;

    // нумерация битов справа налево начиная с нуля

    int N1 = 0;
    int N2 = 0;
    std::cin >> N1 >> N2;

    unsigned int n = 1;
    unsigned int num1 = n << N1;
    unsigned int num2 = n << N2;
    std::cout << num1 << " " << num2 << std::endl;

    // если биты одинаковые
    if (((a & num1 == 0) && (a & num2 == 0)) || ((a & num1 > 0) && (a & num2 > 0))) {
        std::cout << a << std::endl;
    } else {
        a = a ^ (num1 | num2);
        std::cout << a << std::endl;
    }

    return 0;
}

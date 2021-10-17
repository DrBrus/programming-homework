#include <iostream>

int main (int argc, char* argv[]) {
    double a = 0;
    double b = 0;
    double c = 0;

    std::cin >> a >> b >> c;

    double cosa = (b*b + c*c - a*a) / (2*b*c);
    double cosb = (a*a + c*c - b*b) / (2*a*c);
    double cosc = (a*a + b*b - c*c) / (2*a*b);

    if (cosa * cosa >= 1 || cosb * cosb >= 1 || cosc * cosc >= 1) {
        std::cout << "impossible" << std::endl;
    } else if (cosa < 0 || cosb < 0 || cosc < 0) {
        std::cout << "obtuse" << std::endl;
    } else if (cosa == 0 || cosb == 0 || cosc == 0) {
        std::cout << "right" << std::endl;
    } else {
        std::cout << "acute" << std::endl;
    }

   // std::cout << cosa << " " << cosb << " " << cosc << std::endl;

    return 0;
}

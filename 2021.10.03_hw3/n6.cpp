#include <iostream>

int main (int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;

    int temp = 0;
    int nul = 0;
    int pol = 0;
    int otr = 0;
     
    for (int i = 0; i < n; ++i) {
        std::cin >> temp;
        if (temp < 0) {
            ++otr;
        } else if (temp > 0) {
            ++pol;
        } else {
            ++nul;
        }
    }

    std::cout << nul << " " << pol << " " << otr << std::endl;

    return 0;
}

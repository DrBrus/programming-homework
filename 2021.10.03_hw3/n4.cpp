#include <iostream>

int main (int argc, char* argv[]) {
    int n = 0;
    int k = 0;
    
    std::cin >> n >> k;

    int nk = n - k;
    int chisl = 1;
    int znam = 1;

    for (int i = k + 1; i <= n; ++i) {
        chisl = chisl * i;
    }

    for (int i = 1; nk != 0 && i <= nk; ++i) {
        znam = znam * i;
    }

    std::cout << chisl / znam << std::endl;
    //std::cout << chisl << " " << znam << std::endl;

    return 0;
}

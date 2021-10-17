#include <iostream>

int main (int argc, char* argv[]) {
    int x = 0;
    int y = 0;
    int m = 0;
    int n = 0;

    std::cin >> m >> n >> x >> y;

    /* 1|2|3 - a
     * 4|5|6 - b    5 - клетка, для которой ищем соседей
     * 7|8|9 - c
     * | | |        x - столбцы, y - строки
     * c b a
     */

    int cx = x - 1;
    int ax = x + 1;
    int cy = y - 1;
    int ay = y + 1;

    if (cx != 0) {
        std::cout << x - 1 << " " << y << std::endl; //4
        /*
        if (ay <= n) {
            std::cout << x - 1 << " " << y + 1 << std::endl; //1
        }
        if (cy != 0) {
            std::cout << x - 1 << " " << y - 1 << std::endl; //7
        }
        */
    }

    if (ax <= m) {
        std::cout << x + 1 << " " << y << std::endl; //6
        /*
        if (ay <= n) {
            std::cout << x + 1 << " " << y + 1 << std::endl; //3
        }
        if (cy != 0) {
            std::cout << x + 1 << " " << y - 1 << std::endl; //9
        }
        */
    }

    if (ay <= n) {
        std::cout << x << " " << y + 1 << std::endl; //2
    }

    if (cy != 0) {
        std::cout << x << " " << y - 1 << std::endl; //8
    }

    return 0;
}

//То чувство, когда не правильно прочитал условие...

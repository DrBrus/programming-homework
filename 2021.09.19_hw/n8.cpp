#include <iostream>

int main () {
    int hr1, min1, sec1, hr2, min2, sec2, temp1, temp2;

    std::cin >> hr1 >> min1 >> sec1 >> hr2 >> min2 >> sec2;
    
    temp2 = (hr2 * 3600) + (min2 * 60) + sec2;
    temp1 = (hr1 * 3600) + (min1 * 60) + sec1;

    std::cout << temp2 - temp1 << std::endl;

    return 0;
}

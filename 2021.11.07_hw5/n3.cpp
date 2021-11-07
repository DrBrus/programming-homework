#include <iostream>

int main (int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;

    if (n >= 0) {
        std::cout << n;
    } else {
        unsigned int un = *((unsigned int*)&n);
        unsigned int n1 = 1;
        bool bit = 0;
        int count = 0;

        // |1| | numbers | |first 1| |0...0| - n
        // |0| |~numbers | |first 1| |0...0| - (n * (-1))
        // {     (1)     } {  (2)  } { (1) }

        for (int i = 0; (i < 32) && (bit == 0); ++i) {
            unsigned int bitMask = n1 << i;
            bit = un & bitMask;
            if (!bit) {
                ++count;
            }
        }

        un = ((~un) >> count) << count; // (1)
        un = un | (n1 << count); // (2)

        std::cout << un << std::endl;
    }

    return 0;
}

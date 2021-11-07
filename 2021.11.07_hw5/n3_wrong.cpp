#include <iostream>

int main (int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;

    unsigned int un = *((unsigned int*)&n);
    unsigned int n1 = 1;
    int count = 0;
    unsigned int bit = (un << 31) >> 31;

    while ((un != 0) && (count < 32) && (bit == 0)) {
        unsigned int bit_mask = n1 << count;
        bit = bit_mask & un;
        ++count;
    }

    unsigned int xor_mask = 0;
    unsigned int first_bit = (un >> 31) << 31;

    for (int i = 0; i < (32 - count); ++i) {
        xor_mask = xor_mask | (first_bit >> i);
    }

    un = un ^ xor_mask;
    un = (un >> count) << count;
    un = un | (n1 << (count - 1));

    std::cout << un << std::endl;

    return 0;
}

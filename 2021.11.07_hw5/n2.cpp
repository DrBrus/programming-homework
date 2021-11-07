#include <iostream>

int main (int argc, char* argv[]) {
    double n = 0;
    std::cin >> n;

    unsigned long ln = *((unsigned long*)&n); // то, что находится в области памяти отведенной для n интерепретируем как long long и проинтерпретированное значение записываем в переменную ln
    unsigned long l1 = 1; // потому, что гребанная единица по умолчанию int который при сдвиге больше чем на 30 выдает непонятно что. ЪУЪ

    for (int i = 0; i < (sizeof(long) * 8); ++i) {

        // вытаскивание нужного бита из ln
        int currentBit = sizeof(long) * 8 - 1 - i;
        unsigned long bitMask = (l1 << currentBit);
        bit = bitMask & ln;

        std::cout << bit;
        if ((i + 1) % 8 == 0) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>

int main (int argc, char* argv[]) {
    bool exiting = 0;

    int count_arr = 0; // счетчик количества элементов в массиве
    int capacity = 1;
    int* arr = new int[capacity] { 0 };

    std::cout << "0 - выход из программы" <<
    std::endl << "1 - вывод текущего состояния массива" <<
    std::endl << "2 - добавление элемента в конец массива" <<
    std::endl << "3 - добавление элемента в начало массива" <<
    std::endl << "4 - удаление элемента из конца массива" <<
    std::endl << "5 - удаление элемента из начала массива" <<
    std::endl << "6 - разворот массива" << std::endl;

    while (!exiting) {
        char input = 0;
        std::cin >> input;
        if (input == 48) {
            exiting = 1;
        }

        switch (input) {
            case 49:
                // вывод текущего состояния массива
                if (count_arr) {
                    for (int i = 0; i < count_arr; ++i) {
                        std::cout << arr[i] << " ";
                    }
                    std::cout << std::endl;
                } else {
                    std::cout << "Массив пуст" << std::endl;
                }
                break;

            case 50:
                // добавление элемента в конец массива
                std::cout << "Введите элемент" << std::endl;
                count_arr++;
                if (count_arr > capacity) {
                    capacity = capacity * 2;
                    int* newArr = new int[capacity] { 0 };
                    for (int i = 0; i < (count_arr - 1); ++i) {
                        newArr[i] = arr[i];
                    }
                    delete[] arr;
                    arr = newArr;
                }
                std::cin >> arr[count_arr - 1];
                break;

            case 51:
                // добавление элемента в начало массива
                std::cout << "Введите элемент" << std::endl;
                count_arr++;
                if (count_arr > capacity) {
                    capacity = capacity * 2;
                }
                {
                int* newArr = new int[capacity] { 0 };
                for (int i = 0; i < (count_arr - 1); ++i) {
                    newArr[i + 1] = arr[i];
                }
                delete[] arr;
                std::cin >> arr[0];
                arr = newArr;
                }
                break;

            case 52:
                // удаление элемента из конца массива
                arr[count_arr - 1] = 0;
                count_arr--;
                break;

            case 53:
                // удаление элемента из начала массива
                for (int i = 0; i < (count_arr - 1); ++i) {
                    arr[i] = arr[i + 1];
                }
                arr[count_arr - 1] = 0; // последний элемент обрабатываем отдельно, чтобы не выйти за пределы массива
                count_arr--;
                break;

            case 54:
                // разворот массива
                for (int i = 0; i < (count_arr / 2); ++i) {
                    int temp = arr[i];
                    arr[i] = arr[count_arr - 1 - i];
                    arr[count_arr - 1 - i] = temp;
                }
                break;
        }
    }

    delete[] arr;

    return 0;
}

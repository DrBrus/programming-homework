#include <iostream>

int main (int argc, char* argv[]) {
    int n = 0;
    bool flag = 0;
    bool flag_space = 0;

    std::cin >> n;

    while (n > 0) {
        if (n > 99) {
            switch (n / 100) {
                case 1:
                    std::cout << "сто";
                    break;
                case 2:
                    std::cout << "двести";
                    break;
                case 3:
                    std::cout << "триста";
                    break;
                case 4:
                    std::cout << "четыреста";
                    break;
                case 5:
                    std::cout << "пятьсот";
                    break;
                case 6:
                    std::cout << "шестьсот";
                    break;
                case 7:
                    std::cout << "семьсот";
                    break;
                case 8:
                    std::cout << "восемьсот";
                    break;
                default :
                    std::cout << "девятьсот";
                    break;
            }
            flag_space = 1;
            n = n % 100;
        } else if (n > 9) {
            flag_space = 1;
            switch (n / 10) {
                case 2:
                    std::cout << "двадцать";
                    break;
                case 3:
                    std::cout << "тридцать";
                    break;
                case 4:
                    std::cout << "сорок";
                    break;
                case 5:
                    std::cout << "пятьдесят";
                    break;
                case 6:
                    std::cout << "шестьдесят";
                    break;
                case 7:
                    std::cout << "семьдесят";
                    break;
                case 8:
                    std::cout << "восемьдесят";
                    break;
                case 9:
                    std::cout << "девяносто";
                    break;
                default:
                    flag_space = 0;
                    flag = 1;
                    switch (n % 10) {
                        case 2:
                            std::cout << "двенадцать бананов";
                            break;
                        case 3:
                            std::cout << "тринадцать бананов";
                            break;
                        case 4:
                            std::cout << "четырнадцать бананов";
                            break;
                        case 5:
                            std::cout << "пятнадцать бананов";
                            break;
                        case 6:
                            std::cout << "шестнадцать бананов";
                            break;
                        case 7:
                            std::cout << "семнадцать бананов";
                            break;
                        case 8:
                            std::cout << "восемнадцать бананов";
                            break;
                        case 9:
                            std::cout << "девятнадцать бананов";
                            break;
                        default:
                            std::cout << "одиннадцать бананов";
                            break;
                    }
                    std::cout << std::endl;
                    n = 0;
                    break;
            }
            n = n % 10;
        } else if (flag == 0) {
            flag_space = 0;
            switch (n % 10) {
                case 2:
                    std::cout << "два банана";
                    break;
                case 3:
                    std::cout << "три банана";
                    break;
                case 4:
                    std::cout << "четыре банана";
                    break;
                case 5:
                    std::cout << "пять бананов";
                    break;
                case 6:
                    std::cout << "шесть бананов";
                    break;
                case 7:
                    std::cout << "семь бананов";
                    break;
                case 8:
                    std::cout << "восемь бананов";
                    break;
                case 9:
                    std::cout << "девять бананов";
                    break;
                case 1:
                    std::cout << "один банан";
                    break;
                default:
                    std::cout << "бананов";
                    break;
            }
            n = 0;
            std::cout << std::endl;
        }
        
        if (flag_space == 1) {
            std::cout << " ";
        }
    }

    return 0;
}

                          
//       */                
//       ##                
//    %%%&&                
//    %%%&&                
//    %%%%&%&              
//     ##%%&&&%&           
//        ###%%%&&&&&&&&%  
//           (##(((####    
                         


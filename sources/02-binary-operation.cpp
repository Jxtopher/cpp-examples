/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <bitset>  // std::bitset
#include <cassert> // assert // std::cout
#include <cmath>   // pow
#include <iostream>

unsigned int ou(unsigned int a, unsigned int b);
unsigned int et(unsigned int a, unsigned int b);
unsigned int ou_exclusif(unsigned int a, unsigned int b);

unsigned int ou(unsigned int a, unsigned int b) {
    return a or b;
}

unsigned int et(unsigned int a, unsigned int b) {
    return a and b;
}

unsigned int ou_exclusif(unsigned int a, unsigned int b) {
    return a xor b;
}

int main(int argc, const char** argv) {
    unsigned int a = pow(2, 32) - 1;
    unsigned int b = 128;

    std::cout << sizeof(a) << " " << std::bitset<32>(a) << std::endl;
    std::cout << sizeof(a) << " " << std::bitset<32>(b) << std::endl;
    std::cout << sizeof(a) << " " << std::bitset<32>(et(a, b)) << std::endl;
    return EXIT_SUCCESS;
}

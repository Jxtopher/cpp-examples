/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <cstdlib>
#include <iostream>

static void test() {
}

int main() {
    test();
    int foo[8] = {28, 32, 8, 16, 3, 27, 60, 12071};

    for(unsigned int i = 0; i < 8; i++) std::cout << foo[i] << " ";
    std::cout << std::endl;

    return EXIT_SUCCESS;
}

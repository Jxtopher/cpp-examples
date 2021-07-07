/**
 * @brief Variable visibility domain
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert
#include <iostream>

int a = 52; // Global variable, bad practice

int main(int argc, char const* argv[]) {
    for(unsigned int i = 0; i < 10; i++) std::cout << ::a << std::endl;
    return EXIT_SUCCESS;
}

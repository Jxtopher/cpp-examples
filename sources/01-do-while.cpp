/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <iostream>

static void test() {
}

int main() {
    test();
    int i = 2, max = 10;
    do {
        i++;
        std::cout << i << std::endl;
    } while(i < max);
    std::cout << std::endl;
    return EXIT_SUCCESS;
}

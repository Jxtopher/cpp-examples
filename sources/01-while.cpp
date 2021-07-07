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
    int i = 0, max = 10;
    while(i < max) {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;
    return EXIT_SUCCESS;
}

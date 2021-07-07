/**
 * @brief ...
 *        see: https://en.cppreference.com/w/cpp/language/static_cast
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
    int a = 5;
    double b = 49;

    a = static_cast<int>(b);

    return EXIT_SUCCESS;
}

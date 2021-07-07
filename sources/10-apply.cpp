/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <iostream>
#include <tuple>  // std::apply
#include <vector> // std::vector

int add(int a, int b, int c);

int add(int a, int b, int c) {
    return a + b + c;
}

// fonction main
static void test() {
}

int main() {
    test();
    std::cout << std::apply(add, std::tuple<int, int, int>(6, 6, 8)) << std::endl;
    return EXIT_SUCCESS;
}

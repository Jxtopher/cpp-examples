/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <iostream>

template<typename T = double>
T mult(T a, T b);

template<typename T = double>
T mult(T a, T b) {
    return a * b;
}

// fonction main
static void test() {
}

int main() {
    test();
    std::cout << mult<int>(5, 8) << " " << mult(2.4, 9.4) << std::endl;
    return EXIT_SUCCESS;
}

/**
 * @brief Template de la function add
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <cstdlib> // EXIT_SUCCESS
#include <iostream>

template<typename T>
T add(T a, T b);

template<typename T>
T add(T a, T b) {
    return a + b;
}

static void test() {
}

int main() {
    test();
    std::cout << add<int>(5, 8) << " " << add<double>(2.4, 9.4) << std::endl;
    return EXIT_SUCCESS;
}

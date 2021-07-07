/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <iostream>

int add(int, int, int);

int add(int a, int b, int c = 5) {
    return a + b + c;
}

static void test() {
}

int main() {
    test();
    int x = add(5, 12);
    std::cout << x << std::endl;
    return EXIT_SUCCESS;
}

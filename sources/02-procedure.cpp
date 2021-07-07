/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <iostream>

void add(int a, int b, int& c);

void add(int a, int b, int& c) {
    c = a + b;
}

static void test() {
}

int main() {
    test();
    int x;
    add(5, 12, x);
    std::cout << x << std::endl;
    return EXIT_SUCCESS;
}

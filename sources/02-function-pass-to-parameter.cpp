/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <iostream>

int add(int, int);
int mafonction(int (*)(int, int), int, int);

int add(int a, int b) {
    return a + b;
}

int mafonction(int (*f)(int, int), int a, int b) {
    return f(a, b);
}

static void test() {
}

int main() {
    test();
    int x = mafonction(add, 5, 12);
    std::cout << x << std::endl;
    return EXIT_SUCCESS;
}

/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <iostream>

int add(int*, int*);

int add(int* a, int* b) {
    return *a + *b;
}

static void test() {
}

int main() {
    test();
    int e = 5;
    int* g = new int(12);
    int x = add(&e, g);
    std::cout << x << std::endl;
    return EXIT_SUCCESS;
}

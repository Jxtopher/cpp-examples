/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <algorithm>
#include <cassert> // assert
#include <iostream>
#include <iterator>

static void test() {
}

int main() {
    test();
    int tab[] = {15, 2, 16, 9, 4, 3, 32};

    int* ptr = std::max_element(tab, tab + 4);

    std::cout << std::distance(tab, ptr) << " :" << *ptr << std::endl;
    return EXIT_SUCCESS;
}

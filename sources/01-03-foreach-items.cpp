/**
 * @brief Displays the elements of a vector with foreach
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <cstdlib> // EXIT_SUCCESS
#include <iostream>
#include <vector> // std::vector

static void test() {
}

int main() {
    test();
    std::vector<int> v({2, 7, 9, 21});

    for(int element : v) std::cout << element << " ";
    std::cout << std::endl;

    return EXIT_SUCCESS;
}

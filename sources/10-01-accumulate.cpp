/**
 * @brief Sums of the set of elements of a vector
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <cstdlib> // EXIT_SUCCESS
#include <iostream>
#include <numeric> // std::accumulate
#include <vector>  // std::vector

static void test() {
}

int main() {
    test();
    std::vector<int> v = {13, 25, 31, 14, 56, 16};
    int total = std::accumulate(v.begin(), v.end(), 0);
    std::cout << total << std::endl;
    return EXIT_SUCCESS;
}

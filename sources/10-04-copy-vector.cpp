/**
 * @brief Copying a vector with the copy function
 *        see: https://en.cppreference.com/w/cpp/algorithm/copy
 *
 * @date 2020
 * @author Jxtopher
 */

#include <algorithm> // std::copy
#include <cassert>   // assert  // std::cout
#include <iostream>
#include <iterator>
#include <vector> // std::vector

static void test() {
}

int main() {
    test();
    std::vector<int> a = {13, 25, 31, 14, 56, 16};
    std::vector<int> b;
    std::copy(a.begin(), a.end(), std::back_inserter(b));
    return EXIT_SUCCESS;
}

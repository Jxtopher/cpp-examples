/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <algorithm> // std::sort
#include <cassert>   // assert  // std::cout, std::endl
#include <iostream>
#include <iterator> // iterator
#include <vector>   // std::vector

static void test() {
}

int main() {
    test();
    std::vector<int> v = {21, 7, 9, 2, 5, 67, 32};

    // Tri croissant
    std::sort(v.begin(), v.end());

    // iterator
    std::vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); ++it) std::cout << *it << " ";
    std::cout << std::endl;

    // Tri décroissant
    std::sort(v.begin(), v.end(), std::greater<int>());

    for(auto elements : v) std::cout << elements << " ";
    std::cout << std::endl;

    return EXIT_SUCCESS;
}

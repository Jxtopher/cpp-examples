/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout
#include <iostream>
#include <iterator>
#include <numeric> // std::accumulate
#include <vector>  // std::vector

static void test() {
}

int main() {
    test();
    std::vector<int> v = {1, 2, 14, 15, 11};
    int initial_value = 0.0;
    int result = std::accumulate(v.begin(), v.end(), initial_value);
    std::cout << "result : " << result << std::endl;
    return EXIT_SUCCESS;
}

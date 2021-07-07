/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <algorithm>
#include <cassert> // assert
#include <iostream>
#include <vector>

struct cmp {
    constexpr bool operator()(const int& _Left, const int& _Right) const {
        return (_Left < _Right);
    }
};

static void test() {
}

int main() {
    test();
    std::vector<int> v({9, 78, 1, 5, 3, 4, 1, 3, 1, 8, 7});
    std::sort(v.begin(), v.end(), cmp());
    for(auto var : v) std::cout << var << " ";
    std::cout << std::endl;

    return EXIT_SUCCESS;
}

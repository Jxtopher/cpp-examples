/**
 * @brief lambda function : sum
 *        see: https://en.cppreference.com/w/cpp/language/lambda
 *        see: https://en.wikipedia.org/wiki/1_%2B_2_%2B_3_%2B_4_%2B_%E2%8B%AF
 * @date 2020
 * @author Jxtopher
 */

#include <cassert>
#include <cassert> // assert // std::cout, std::endl
#include <functional>
#include <iostream>

static void test() {
}

int main() {
    test();
    int min = 15;
    int max = 15;

    assert(min <= max);
    std::function<int(int, int)> sum_1 = [](int a, int b) -> int {
        return (b - a + 1) * (a + b) / 2;
    };

    std::function<int(int, int)> sum_2 = [&sum_2](int a, int b) -> int {
        return a == b ? a : sum_2(a, b - 1) + b;
    };

    std::cout << sum_1(min, max) << " " << sum_2(min, max) << std::endl;
    return 0;
}

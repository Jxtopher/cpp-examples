/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert
#include <cstdlib>
#include <iostream>

namespace Zibou {
int a;
}

static void test() {
}

int main() {
    test();
    Zibou::a = 5;
    std::cout << Zibou::a << std::endl;
    return EXIT_SUCCESS;
}

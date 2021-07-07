
/**
 * @brief ...
 *        see: https://gcc.gnu.org/onlinedocs/cpp/Predefined-Macros.html
 *        see: https://sourceforge.net/p/predef/wiki/OperatingSystems/
 *
 * @date 2020
 * @author Jxtopher
 */

#define A 15
#define B 5
#define X 3
#define Z xx

#include <cassert> // assert
#include <iostream>

static void test() {
}

int main() {
    test();
#if A < B
    std::cout << "1" << std::endl;
#elif defined(Z)
    std::cout << "2" << std::endl;
#else
    std::cout << "3" << std::endl;
#endif
    std::cout << X << std::endl;

    std::cout << __FILE__ << " : " << __LINE__ << std::endl;
}

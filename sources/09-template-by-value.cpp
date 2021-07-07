/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert
#include <cstdlib>
#include <iostream>

template<int N>
struct ValeurTab {
    enum { valeur = N < 32 ? N * N : N };
};

template<int N>
class Test {
  public:
    int f(int a) {
        return N * a;
    }
};

static void test() {
}

int main() {
    test();
    int x = ValeurTab<15>::valeur;
    std::cout << x << std::endl;

    Test<15> t;
    std::cout << t.f(15) << std::endl;
    return EXIT_SUCCESS;
}

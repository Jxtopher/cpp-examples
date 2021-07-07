/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <algorithm> // std::for_each
#include <cassert>   // assert  // std::cout et std::endl
#include <iostream>
#include <numeric> // std::accumulate
#include <vector>  // std::vector

class A {
  public:
    int f() const {
        return 5;
    }
};

// fonction main
static void test() {
}

int main() {
    test();
    std::vector<A> v = {A(), A(), A(), A()};

    {
        int sum_of_elems = 0;
        std::for_each(v.begin(), v.end(), [&](A const& p) { sum_of_elems += p.f(); });
        std::cout << sum_of_elems << std::endl;
    }

    {
        int sum_of_elems = 0;
        for(A a : v) { sum_of_elems += a.f(); }
        std::cout << sum_of_elems << std::endl;
    }
}

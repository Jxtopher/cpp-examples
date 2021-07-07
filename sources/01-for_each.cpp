/**
 * @brief ...
 *        see: https://en.cppreference.com/w/cpp/algorithm/for_each
 *
 * @date 2020
 * @author Jxtopher
 */

#include <algorithm> // for_each
#include <cassert>   // assert  // std::cout et std::endl
#include <iostream>
#include <vector> // vector

class Product {
  public:
    Product() : product(1) {
    }

    void operator()(int n) {
        product = product * n;
    }

    int product;
};

static void test() {
}

int main() {
    test();
    std::vector<int> v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(9);
    v.push_back(21);

    Product p = std::for_each(v.begin(), v.end(), Product());
    std::cout << "Produit : " << p.product << std::endl;

    return EXIT_SUCCESS;
}

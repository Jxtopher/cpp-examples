/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert
#include <iostream>
#include <stdexcept> // std::domain_error

double division(double a, double b);

double division(double a, double b) {
    if(b == 0) { throw std::domain_error("[-] division by 0"); }
    return a / b;
}

static void test() {
}

int main() {
    test();
    try {
        std::cout << division(4, 0) << std::endl;
    } catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
    return EXIT_SUCCESS;
}

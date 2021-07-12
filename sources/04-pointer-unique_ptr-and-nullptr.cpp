/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <cmath>
#include <iostream>
#include <memory> // std::unique_ptr

static void test() {
}

class A {
    public:
    A(unsigned int value) : m_value(value) {}

    unsigned int get_value() {
        return m_value;
    }
    private:
    unsigned int m_value;
};

int main() {
    test();
    // definition of p1
    std::unique_ptr<A> p1 = std::make_unique<A>(66);
    std::cout<<p1->get_value()<<std::endl;

    // definition of p2 with nullptr
    std::unique_ptr<A> p2 = nullptr;
    if (p2 != nullptr)
        std::cout<<p2->get_value()<<std::endl;
    return EXIT_SUCCESS;
}

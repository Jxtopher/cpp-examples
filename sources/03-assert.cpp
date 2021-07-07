/**
 * @brief assert vs static_assert ?
 *        static_assert tests code logic at compile time
 *        assert tests the logic of the code during program execution
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert>
#include <cassert> // assert // std::cout et std::endl
#include <cstdlib> // EXIT_SUCCESS;
#include <iostream>

int main(int argc, char** argv, char** envp) {
    int a = 6;
    int b = 8;
    assert(a != b);
    assert("Message a != b" && a != b);
    assert("Message a == b" && a == b);
    return EXIT_SUCCESS;
}

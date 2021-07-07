/**
 * @brief ...
 *        see: https://fr.cppreference.com/w/cpp/container/stack
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <cstdlib> // EXIT_SUCCESS;
#include <iostream>
#include <stack> // std::stack

int main(int argc, char** argv, char** envp) {
    std::stack<int> s;
    s.push(5);
    s.pop();

    return EXIT_SUCCESS;
}

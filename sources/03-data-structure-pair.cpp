/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <cstdlib> // EXIT_SUCCESS;
#include <iostream>
#include <utility> // std::pair

int main(int argc, char** argv, char** envp) {
    std::pair<unsigned int, double> p;
    p.first = 5;
    p.second = 8.5;
    std::cout << p.first << " " << p.second << std::endl;

    return EXIT_SUCCESS;
}

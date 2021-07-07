/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <cstdlib> // EXIT_SUCCESS;
#include <iostream>
#include <tuple> // std::tuple

int main(int argc, char** argv, char** envp) {
    std::tuple<unsigned int, double, double> p;
    std::get<0>(p) = 5;
    std::get<1>(p) = 8.5;
    std::get<2>(p) = 9.4;
    std::cout << std::get<0>(p) << " " << std::get<1>(p) << " " << std::get<2>(p) << std::endl;

    return EXIT_SUCCESS;
}

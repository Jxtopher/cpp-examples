/**
 * @brief ...
 *        see: https://fr.cppreference.com/w/cpp/container/map
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <cstdlib> // EXIT_SUCCESS;
#include <iostream>
#include <map> // std::map

int main(int argc, char** argv, char** envp) {
    std::map<std::string, int> m;
    m["Test"] = 55;
    std::cout << m["Test"] << std::endl;
    return EXIT_SUCCESS;
}

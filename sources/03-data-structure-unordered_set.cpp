/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert      // std::cout et std::endl
#include <cstdlib> // EXIT_SUCCESS;
#include <iostream>
#include <unordered_set> // std::pair

int main(int argc, char** argv, char** envp) {
    std::unordered_set<unsigned int> p = {55, 44, 32, 85, 12};
    for(unsigned int value : p) std::cout << value << " ";
    std::cout << std::endl;

    unsigned int extracted_value = p.extract(std::next(p.begin(), 1)).value();
    for(unsigned int value : p) std::cout << value << " ";
    std::cout << std::endl;
    return EXIT_SUCCESS;
}

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
#include <string> // std::string

int main(int argc, char** argv, char** envp) {
    std::string s1 = "Hello world !";
    std::cout << s1 << std::endl;

    std::string s2 = "I am French";

    // Affichage avec concaténation
    std::cout << s1 + " " + s2 << std::endl;

    return EXIT_SUCCESS;
}

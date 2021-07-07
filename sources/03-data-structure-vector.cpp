/**
 * @brief ...
 *        see: https://fr.cppreference.com/w/cpp/container/vector
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <cstdlib> // EXIT_SUCCESS;
#include <iostream>
#include <vector> // std::vector

int main(int argc, char** argv, char** envp) {
    std::vector<int> v(3, 4);
    v.push_back(2);
    v.push_back(7);
    v.push_back(9);
    v.push_back(21);

    // Parcourte d'un vecteur avec un index
    for(unsigned int i = 0; i < v.size(); i++) { std::cout << v[i] << " "; }
    std::cout << std::endl;

    // iterator
    std::vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); ++it) { std::cout << *it << " "; }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}

/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert
#include <iostream>
#include <random>

static void test() {
}

int main() {
    test();
    std::mt19937 mt_rand;
    // Initialisation de la graine aléatoire
    mt_rand.seed(static_cast<long unsigned int>(time(0)));

    std::uniform_int_distribution<unsigned int> rid(0, 10);
    std::cout << rid(mt_rand) << std::endl;
    return EXIT_SUCCESS;
}

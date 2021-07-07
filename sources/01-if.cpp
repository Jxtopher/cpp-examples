/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <iostream>

static void test() {
}

int main() {
    test();
    int age = 5, adolescent = 16, adulte = 21;

    if(age < adolescent) {
        if(age < adulte) {
            std::cout << "adulte" << std::endl;
        } else {
            std::cout << "Vieux" << std::endl;
        }
    } else {
        std::cout << "adolescent" << std::endl;
    }

    return EXIT_SUCCESS;
}

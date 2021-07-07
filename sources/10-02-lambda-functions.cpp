/**
 * @brief lambda function
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert>    // assert   // std::cout et std::endl
#include <functional> // std::function
#include <iostream>

static void test() {
}

int main() {
    test();
    { // -- Ajoute 4 à la variable d'entrée i et retourne le résultat
        std::function<int(int)> func = [](int i) { return i + 4; };
        std::cout << "1. func: " << func(6) << std::endl;
    }

    { // -- Ajoute 4 à aux variables d'entrée i, j et retourne le résultat
        std::function<int(int, int)> func = [](int i, int j) { return i + j + 4; };
        std::cout << "2. func: " << func(6, 9) << std::endl;
    }

    { // --
        int x = 52;
        std::function<int(int)> func = [x](int i) { return x + i + 4; };
        std::cout << "3. func: " << func(6) << std::endl;
    }

    {
        unsigned int x = 42;
        std::function<unsigned int(unsigned int)> square = [](unsigned int var) {
            return var * var;
        };
        std::cout << "4. square :" << square(x) << std::endl;
    }

    return EXIT_SUCCESS;
}

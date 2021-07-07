/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert
#include <iostream>

static void test() {
}

int main() {
    test();
    {
        // table 2d
        unsigned int* tab = new unsigned int[5];
        for(unsigned int i = 0; i < 5; i++) tab[i] = i;
        for(unsigned int i = 0; i < 5; i++) std::cout << tab[i] << " ";
        std::cout << std::endl;
        delete tab;
    }

    { // tabe 3d
        int** tab = new int*[5];
        for(unsigned int i = 0; i < 5; i++) tab[i] = new int[10];

        for(unsigned int i = 0; i < 5; i++) delete tab[i];
        delete tab;
    }
}

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
    int c = 'B';
    int cpt = 0;
    switch(c) {
        case 'A':
            cpt += 1;
            break;
        case 'a':
            cpt += 4;
            break;
        default:
            cpt += -1;
    }
    return EXIT_SUCCESS;
}

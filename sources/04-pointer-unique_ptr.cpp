/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <cmath>
#include <iostream>
#include <memory> // std::unique_ptr

static void test() {
}

int main() {
    test();
    // définition de p1
    std::unique_ptr<int> p1(new int);
    *p1 = 42;
    std::cout << "      @p1 : " << p1.get() << std::endl;
    std::cout << "Valeur p1 : " << *p1 << std::endl;

    // définition de p2
    std::unique_ptr<int> p2(std::move(p1));
    std::cout << "Valeur p2 : " << *p2 << std::endl;
    std::cout << "      @p1 : " << p1.get() << std::endl;

    // définition d'un tableau
    std::unique_ptr<int[]> p3(new int[10]);
    p3[0] = 42;
    std::cout << "Valeur p3 : " << p3[0] << std::endl;

    return EXIT_SUCCESS;
}

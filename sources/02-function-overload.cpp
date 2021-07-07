/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <iostream>

int add(int, int, int);
double add(double, double, double);

int add(int a, int b, int c = 5) {
    return a + b + c;
}

double add(double a, double b, double c = 5) {
    return a + b + c;
}

static void test() {
}

int main() {
    test();
    int x = add(5, 12);
    std::cout << x << std::endl;

    double y = add(5.7, 12.5);
    std::cout << y << std::endl;
    return EXIT_SUCCESS;
}

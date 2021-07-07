/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert
#include <iostream>

void show(int var);
void show2(const int& var);
void show3(const int* var);

// Passage par copie
void show(int var) {
    std::cout << var << std::endl;
}

// Passage par référence
void show2(const int& var) {
    std::cout << var << std::endl;
}

// Passage par pointeur
void show3(const int* var) {
    std::cout << *var << std::endl;
}

static void test() {
}

int main() {
    test();
    const int a = 54;
    std::cout << a << std::endl;
    show(a);
    show2(a);
    show3(&a);
}

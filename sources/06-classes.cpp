/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <iostream>

// Définition de la class
class A {
  public:
    A(int& param, int b); // Constructeur
    ~A();                 // Destructeur

    int sum();

  private:
    int& _param;
    int _a;
    int _b;
};

// Définition des méthodes de la class
A::A(int& param, int b = 54) : _param(param), _a(10), _b(b) {
}

A::~A() {
}

int A::sum() {
    return _param + _a + _b;
}

static void test() {
}

int main() {
    test();
    int x = 5;
    A a(x);
    return EXIT_SUCCESS;
}

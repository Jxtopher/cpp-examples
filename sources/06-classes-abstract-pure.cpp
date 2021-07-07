/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <iostream>

// Class definition
class Polygones {
  public:
    virtual unsigned int get_nombre_de_sommets() = 0;
};

class Triangle : public Polygones {
  public:
    unsigned int get_nombre_de_sommets() {
        return 3;
    }
};

// fonction main
static void test() {
}

int main() {
    test();
    Polygones* polygones = new Triangle();
    std::cout << polygones->get_nombre_de_sommets() << std::endl;
    return EXIT_SUCCESS;
}

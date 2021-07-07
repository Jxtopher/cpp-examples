/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert
#include <cstdlib>
#include <iostream>

struct Coordinated {
    double m_x, m_y, m_z;
};

class Compute : private Coordinated {
  public:
    Compute(double x, double y, double z) : Coordinated({x, y, z}) {
    }
};

static void test() {
}

int main(int argc, const char** argv) {
    Coordinated coor({5, 5, 5});
    return EXIT_SUCCESS;
}

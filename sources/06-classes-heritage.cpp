/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <iostream>

class Polygones {
  public:
    Polygones(double sideLength) : _sideLength(sideLength) {
    }

    virtual double get_perimeter() const = 0;

    double get_sideLength() const {
        return _sideLength;
    }

    void set_sideLength(double sideLength) {
        _sideLength = sideLength;
    }

  private:
    double _sideLength;
};

class Triangle : public Polygones {
  public:
    Triangle(double sideLength) : Polygones(sideLength) {
    }

    double get_perimeter() const {
        return this->get_sideLength() * 3;
    }
};

static void test() {
}

int main() {
    test();
    Polygones* polygones = new Triangle(55);
    return EXIT_SUCCESS;
}

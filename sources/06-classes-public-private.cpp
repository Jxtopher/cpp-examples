/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert
#include <iostream>

class Base {
  public:
    Base(int value_a, int value_b, int value_c)
        : _value_a(value_a), _value_b(value_b), _value_c(value_c) {
    }

    void f_public() {
    }

    int _value_a;

  protected:
    int _value_b;

    void f_protected() {
    }

  private:
    int _value_c;

    void f_private() {
    }
};

class A : public Base {
  public:
    A(int value_a, int value_b, int value_c) : Base(value_a, value_b, value_c) {
        this->_value_a = 5;
        this->_value_b = 5;
        // this->_value_c; Non

        this->f_public();
        this->f_protected();
    }
};

class B : private Base {
  public:
    B(int value_a, int value_b, int value_c) : Base(value_a, value_b, value_c) {
        this->_value_a = 5;
        this->_value_b = 5;
        // this->_value_c; Non

        this->f_public();
        this->f_protected();
    }
};

class C : private B {
  public:
    C(int value_a, int value_b, int value_c) : B(value_a, value_b, value_c) {
        // this->_value_a = 5; // Non
        // this->_value_b = 5; // Non
        // this->_value_c; // Non

        // this->f_public(); // Non
    }
};

static void test() {
}

int main() {
    test();
    return 0;
}

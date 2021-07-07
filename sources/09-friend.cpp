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
    friend void f(Base& b);
    // ...
  protected:
    virtual void do_f();
    // ...
};

void Base::do_f() {
    std::cout << "Base" << std::endl;
}

inline void f(Base& b) {
    b.do_f();
}

class Derived : public Base {
  public:
    // ...
  protected:
    virtual void do_f() {
        std::cout << "Derived" << std::endl;

    } // "Redéfinit" le comportement de f(Base& b)
      // ...
};

void userCode(Base& b);

void userCode(Base& b) {
    f(b);
}

static void test() {
}

int main() {
    test();
    Derived derived;
    userCode(derived);
    std::cout << "test" << std::endl;
    return 0;
}

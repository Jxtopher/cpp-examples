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

void ex8();
void ex3();
void ex1();
void ex2();
int* f();
void ex6();
void ex();
std::unique_ptr<int[]> get_unique();

int* f() {
    int* c = new int;
    *c = 4;
    return c;
}

void ex() {
    int* z = new int;
    *z = 42;
    int* a = z;
    int** b = &a;
    int*** c = &b;
    std::cout << ***c << std::endl;

    delete z;
    std::cout << *z << std::endl;
}

std::unique_ptr<int[]> get_unique() {
    auto ptr = std::unique_ptr<int[]>(new int(2)); // <- 1
    ptr[0] = 55;
    return ptr; // <- 2, moved into the to be returned unique_ptr
}

void ex2() {
    std::unique_ptr<int[]> a1;
    std::unique_ptr<int[]> a2 = get_unique();
    a1 = std::make_unique<int[]>(42);
    a1[41] = 433;
    std::cout << a2[0] << std::endl;
}

void ex1() {
    std::shared_ptr<int> p1(new int);
    std::shared_ptr<int> p2;
    *p1 = 52;
    p2 = p1;
    // p1 = nullptr;

    std::cout << "p1: " << p1.use_count() << '\n';
    std::cout << "p2: " << p2.use_count() << '\n';

    int* a;
    int* b;

    std::cout << *p1 << std::endl;
}

void ex3() {
    std::unique_ptr<int[]> ptr = std::unique_ptr<int[]>(new int(2));
    ptr[0] = 666;
    int* a = ptr.get();
    // ptr = std::unique_ptr<int[]>(new int(2));

    std::cout << a[0] << std::endl;
    ptr[0] = 66;

    ptr.reset(static_cast<int*>(realloc(static_cast<void*>(ptr.release()), 119999 * sizeof(int))));
    ptr[109999] = 77;
    std::cout << ptr[109999] << std::endl;
    std::cout << ptr[0] << std::endl;
}

void ex6() {
    unsigned char* x = new unsigned char[66];
    std::cout << sizeof(*x) << std::endl;
}

class cl1 {
  public:
    cl1() {
    }
    ~cl1() {
    }

    void set(int v) {
        // a = v;
    }

    void get() {
        // std::cout<<a<<std::endl;
    }

  private:
    std::unique_ptr<int> a;
};

void ex8() {
}

static void test() {
}

int main() {
    test();
    ex6();
    /*unsigned char d = 255;
    d = d + 2;
    cout << ">>" << std::hex << d << endl;
    ex();
    ex1();
    


















    int *a = f();
    cout << *a << endl;
    delete a;*/
    return EXIT_SUCCESS;
}

/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <iostream>
#include <map>
#include <string>

int add(int*, int*);
int sub(int*, int*);
int multiply(int*, int*);

int add(int* a, int* b) {
    return *a + *b;
}

int sub(int* a, int* b) {
    return *a - *b;
}

int multiply(int* a, int* b) {
    return *a - *b;
}
typedef int (*signature)(int*, int*);

static void test() {
}

int main() {
    test();
    // with map
    {
        std::map<std::string, signature> register_of_function;

        register_of_function["add"] = add;
        register_of_function["sub"] = sub;
        register_of_function["multiply"] = multiply;

        int a = 53, b = 33;
        std::cout << register_of_function["add"](&a, &b) << std::endl;
    }

    // with array
    {}

    return EXIT_SUCCESS;
}

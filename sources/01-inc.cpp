/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert
#include <iostream>

int main(int argc, const char** argv) {
    int a = 0;
    std::cout << a++ << std::endl;

    int b = 0;
    std::cout << ++b << std::endl;
    
    // Example with the sum
    int c = 5;
    std::cout << c << std::endl; // print 5
    c = 5;
    std::cout << c++ << std::endl; // print 5
    c = 5;
    std::cout << ++c << std::endl; // print 6
    c = 5;
    std::cout << c++ + c++ << std::endl; // print 11
    c = 5;
    std::cout << c++ + ++c << std::endl; // print 12
    c = 5;
    std::cout << ++c + c++ << std::endl; // print 13
    c = 5;
    std::cout << ++c + ++c << std::endl; // print 14
    return EXIT_SUCCESS;
}

/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <chrono>
#include <ctime>
#include <iostream>

constexpr unsigned long long int fibonacci(unsigned long long int n);

constexpr unsigned long long int fibonacci(unsigned long long int n) {
    if(n < 2)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

static void test() {
}

int main() {
    test();
    std::chrono::microseconds _start_microseconds;
    std::chrono::microseconds _end_microseconds;
    std::chrono::microseconds ms;
    unsigned long long int r;

    _start_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(
        std::chrono::steady_clock::now().time_since_epoch());
    r = fibonacci(30);
    _end_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(
        std::chrono::steady_clock::now().time_since_epoch());
    ms = _end_microseconds - _start_microseconds;
    std::cout << ms.count() << "μs"
              << " " << r << std::endl; // calculer à la compilation

    const unsigned long long int n1 = 30;
    _start_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(
        std::chrono::steady_clock::now().time_since_epoch());
    r = fibonacci(n1);
    _end_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(
        std::chrono::steady_clock::now().time_since_epoch());
    ms = _end_microseconds - _start_microseconds;
    std::cout << ms.count() << "μs"
              << " " << r << std::endl; // calculer à la compilation

    unsigned long long int n2 = 30;
    _start_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(
        std::chrono::steady_clock::now().time_since_epoch());
    r = fibonacci(n2);
    _end_microseconds = std::chrono::duration_cast<std::chrono::microseconds>(
        std::chrono::steady_clock::now().time_since_epoch());
    ms = _end_microseconds - _start_microseconds;
    std::cout << ms.count() << "μs"
              << " " << r << std::endl; // calculer à chaud

    return EXIT_SUCCESS;
}

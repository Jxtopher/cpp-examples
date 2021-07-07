/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <cstdlib> // EXIT_SUCCESS;
#include <iostream>
#include <memory>
#include <omp.h>
#include <vector> // std::vector

int main(int argc, char** argv, char** envp) {
    unsigned int N = 1000;
    std::unique_ptr<int[]> tableau1(std::make_unique<int[]>(N));
    std::unique_ptr<int[]> tableau2(std::make_unique<int[]>(N));
    for(unsigned int i = 0; i < N; i++) {
        tableau1.get()[i] = static_cast<int>(i);
        tableau2.get()[i] = static_cast<int>(N - i);
    }

    int sum1 = 0, sum2 = 0;

#pragma omp parallel sections
    {
#pragma omp section
        {
            // Executes in thread 1
            for(unsigned int i = 0; i < N; i++) sum1 += tableau1[i];
        }
#pragma omp section
        {
            // Executes in thread 2
            for(unsigned int i = 0; i < N; i++) sum2 += tableau2[i];
        }
    } // all threads are in sync at this point

    std::cout << sum1 + sum2 << std::endl;

    return EXIT_SUCCESS;
}

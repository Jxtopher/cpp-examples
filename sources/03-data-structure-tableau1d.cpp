/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <cstdlib> // EXIT_SUCCESS;
#include <iostream>
#include <memory> // std::unique_ptr

int main(int argc, char** argv, char** envp) {
    // taille fixe
    int tableau1[10] = {4, 5, 1, 6, 6, 2, 3, 5, 7, 2};
    std::cout << "tableau1 : ";
    for(unsigned int i = 0; i < 10; i++) { std::cout << tableau1[i] << " "; }
    std::cout << std::endl;

    // allocation dynamique
    unsigned int N = 10;
    int* tableau2 = new int[N];
    for(unsigned int i = 0; i < N; i++) { tableau2[i] = static_cast<int>(i); }

    std::cout << "tableau2 : ";
    for(unsigned int i = 0; i < N; i++) { std::cout << tableau2[i] << " "; }
    std::cout << std::endl;

    delete tableau2;

    // allocation avec un pointeur intelligents (unique_ptr)
    std::unique_ptr<int[]> tableau3(std::make_unique<int[]>(N));
    for(unsigned int i = 0; i < N; i++) { tableau3.get()[i] = static_cast<int>(N - i); }

    std::cout << "tableau3 : ";
    for(unsigned int i = 0; i < N; i++) { std::cout << tableau3.get()[i] << " "; }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}

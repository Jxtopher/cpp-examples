/**
 * @brief Print d'hello world
 *
 * @date 2019
 * @author Jxtopher
 */

#include <cassert> //
#include <cstdlib> // EXIT_SUCCESS;
#include <iostream>

static void test() {
}

int main(int argc, char** argv, char** envp) {
    test();

    std::cout << "Hello world !" << std::endl;

    // Affichage du 1er argument donné à l'application
    if(1 < argc) std::cout << "argv[1] : " << argv[1] << std::endl;

    // Affichage des variables d'environnement
    std::cout << envp[0] << std::endl;
    return EXIT_SUCCESS;
}

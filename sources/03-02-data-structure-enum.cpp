/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <cstdlib> // EXIT_SUCCESS;
#include <iostream>

enum class Couleur_secondaire { bleu, vert, jeune, orange, rouge, violet };

int main(int argc, char** argv, char** envp) {
    Couleur_secondaire couleur = Couleur_secondaire::bleu;
    if(Couleur_secondaire::bleu == couleur) { std::cout << "est bleu" << std::endl; }
    return EXIT_SUCCESS;
}

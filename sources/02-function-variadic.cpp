/**
 * @brief ...
 *        see: https://fr.wikipedia.org/wiki/Fonction_variadique
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cstdarg>
#include <cstdio>

double moyenne(int nb_valeurs, double valeur1, ...);

double moyenne(int nb_valeurs, double valeur1, ...) {
    double somme = valeur1;
    va_list params;            // pointeur de la liste des paramètres
    va_start(params, valeur1); // initialise le pointeur grâce
                               // au dernier paramètre fixe
    for(int i = 1; i < nb_valeurs; ++i) {
        // récupérer le paramètre suivant de la liste:
        double valeur_suiv = va_arg(params, double);
        somme += valeur_suiv;
    }
    va_end(params); // fermeture de la liste
    return somme / nb_valeurs;
}

int main(void) {                                    // exemple d'utilisation :
    printf("%.3f\n", moyenne(3, 14.5, 18.0, 17.5)); // affiche 16.667
    return 0;
}

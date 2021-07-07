/**
 * @brief Definition and use of data structure
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <cstdlib> // EXIT_SUCCESS;
#include <iostream>
#include <string> // std::string

static void test() {
}

int main() {
    test();
    struct Personne {
        int age;
        double poids;
        std::string name;
    };

    Personne p;
    p.age = 55;
    p.poids = 70;
    p.name = "Pierre";

    std::cout << "name : " << p.name << ", age : " << p.age << ", poids : " << p.poids << std::endl;

    return EXIT_SUCCESS;
}

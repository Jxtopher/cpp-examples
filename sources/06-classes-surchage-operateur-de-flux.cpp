/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <iostream>
#include <list>    // std::list
#include <utility> // std::pair

// Définition de la classe Points
class Points : public std::list<std::pair<double, double>> {
    friend std::ostream& operator<<(std::ostream& out, Points const& points) {
        for(std::pair<double, double> point : points) {
            out << "(" << point.first << ", " << point.second << ")" << std::endl;
        }
        return out;
    }
};

// fonction main
static void test() {
}

int main() {
    test();
    Points points;
    points.push_back(std::pair<double, double>(5, 5.1));
    points.push_back(std::pair<double, double>(28.5, 8.1));
    std::cout << points << std::endl;

    return EXIT_SUCCESS;
}

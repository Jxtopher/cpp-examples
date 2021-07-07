/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <algorithm> // std::sort
#include <cassert>   // assert  // std::cout, std::endl
#include <iostream>
#include <vector> // std::vector

class Car {
  public:
    Car(unsigned int price, unsigned int weight, std::string color)
        : _price(price), _weight(weight), _color(color) {
    }

    unsigned int get_price() const {
        return _price;
    }

    unsigned int get_weight() const {
        return _weight;
    }

    std::string get_color() const {
        return _color;
    }

    friend std::ostream& operator<<(std::ostream& out, const Car& car) {
        out << car.get_price() << " " << car.get_weight() << " " << car.get_color();
        return out;
    }

  private:
    unsigned int _price;
    unsigned int _weight;
    std::string _color;
};

static void test() {
}

int main() {
    test();
    std::vector<Car> vector_of_cars;
    vector_of_cars.push_back(Car(32000, 1300, "blue"));
    vector_of_cars.push_back(Car(25000, 1200, "red"));
    vector_of_cars.push_back(Car(15000, 800, "black"));

    std::sort(vector_of_cars.begin(), vector_of_cars.end(),
              [](Car const& a, Car const& b) -> bool { return a.get_weight() < b.get_weight(); });

    for(Car car : vector_of_cars) std::cout << car << std::endl;

    return EXIT_SUCCESS;
}

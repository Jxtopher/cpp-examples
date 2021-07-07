/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert
#include <iostream>
#include <utility> // std::pair

template<typename T1, typename T2>
class Coordinate : private std::pair<T1, T2> {
  public:
    Coordinate(const T1& x, const T2& y) : std::pair<T1, T2>(x, y) {
    }

    T1 get_x() const {
        return this->first;
    }

    T2 get_y() const {
        return this->second;
    }
};

class Agent : private Coordinate<int, int> {
  public:
    Agent(int x, int y) : Coordinate(x, y) {
    }

    friend std::ostream& operator<<(std::ostream& out, const Agent& a) {
        out << "(" << a.get_x() << ", " << a.get_y() << ")";
        return out;
    }
};

static void test() {
}

int main() {
    test();
    Agent agent_1(42, 65);
    Agent agent_2(33, 54);

    // std::pair<int, int> coor = agent_1.get_xy();
    // coor.first = 55;
    // agent_1.get_xy() = std::pair<int,int>(90, 98);

    // std::cout<<agent_1.get_xy().first<<std::endl;// " "<<coor.first<<
}

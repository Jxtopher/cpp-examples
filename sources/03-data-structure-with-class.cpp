#include <cstdlib>
#include <iostream>

class Point {
public:
  double m_x;
  double m_y;

  friend std::ostream &operator<<(std::ostream &out, Point const &point) {
    out << "(" << point.m_x << ", " << point.m_y << ")";
    return out;
  }
};

int main() {
  Point x({4, 5});
  std::cout << x << std::endl;

  x.m_x = 56;
  std::cout << x << std::endl;

  return EXIT_SUCCESS;
}

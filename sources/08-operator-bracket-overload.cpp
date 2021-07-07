/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert
#include <cstdlib>
#include <iostream>

class Tab {
  private:
    int** _t;
    unsigned int _nombre_of_rows;
    unsigned int _number_of_columns;

  public:
    Tab(unsigned int nombre_of_rows = 5, unsigned int number_of_columns = 10)
        : _nombre_of_rows(nombre_of_rows), _number_of_columns(number_of_columns) {
        *_t = new int[_nombre_of_rows];
        for(unsigned int i = 0; i < _nombre_of_rows; i++) { _t[i] = new int[_number_of_columns]; }
    }
    // int *operator[](int n) {
    //     return _t[n];
    // }
};

using namespace std;
class Matrix {
    int** arr;
    unsigned int r;
    unsigned int c;

  public:
    Matrix() {
        r = 5;
        c = 5;
        *arr = new int[r];
        for(unsigned int i = 0; i < r; i++) { arr[i] = new int[c]; }
    }

    class row {
        Matrix& _a;
        int _i;

      public:
        row(Matrix& a, int i) : _a(a), _i(i) {
        }
        int operator[](int j) {
            return _a.arr[_i][j];
        }
    };
    row operator[](int i) {
        return row(*this, i);
    }
};

static void test() {
}

int main() {
    test();
    // Tab t();
    // std::cout<<t[2]<<std::endl;
    Matrix m();
    // int a = m[2][2];
    // std::cout<<<std::endl;
    return EXIT_SUCCESS;
}

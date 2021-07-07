/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert
#include <cstdlib>
#include <iostream>
#include <mutex>
#include <vector>

// void show(const std::vector<int> &tab);

// class Etat {
//     private:
//     std::vector<int> &_tab;
//     // Chariot
//     unsigned int i;

//     public:
//     Etat(std::vector<int> &tab) : _tab(tab), i(1) {

//     }

//     void evolution() {
//         if (_tab[i-1] != 0) {
//             _tab[i-1]--;
//             _tab[i]++;
//         }

//         i++;
//         lock.unlock();
//     }

//     void reset() {
//         i = 1;
//     }

//     bool end() const {
//         return i < _tab.size();
//     }
// };

// void show(const std::vector<int> &tab) {
//         for (auto value : tab) std::cout<<value<<" ";
//         std::cout<<std::endl;
// }

static void test() {
}

int main() {
    test();
    // std::vector<int> tab({10, 9, 8, 7, 6, 5, 4, 3, 2, 1});
    // std::vector<Etat> etats({Etat(tab), Etat(tab)});

    // show(tab);
    // unsigned int i = 0;
    // while(i++ <600) {
    //     if (etats[0].end())
    //         etats[0].evolution();
    //     else
    //         etats[0].reset();

    // }
    // show(tab);
    return EXIT_SUCCESS;
}

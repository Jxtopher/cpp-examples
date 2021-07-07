/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <iostream>
#include <iterator> //
#include <regex>
#include <string> // std::string

static void test() {
}

int main() {
    test();
    const std::string s = "Quick 5x2 brown fox.";

    std::regex words_regex("[^\\s]+");
    auto words_begin = std::sregex_iterator(s.begin(), s.end(), words_regex);
    auto words_end = std::sregex_iterator();

    std::cout << "Found " << std::distance(words_begin, words_end) << " words:\n";

    for(std::sregex_iterator i = words_begin; i != words_end; ++i) {
        std::cout << (*i).str() << '\n';
    }
    return EXIT_SUCCESS;
}

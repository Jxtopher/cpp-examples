/**
 * @brief ...
 *        see: http://www.cplusplus.com/forum/general/8597/
 *
 * @date 2009
 * @author htonivi
 */

#include <cassert> // assert
#include <iostream>
#include <sstream>
#include <string>

template<typename T>
std::string convertPointerToStringAddress(const T* obj) {
    long long int address(reinterpret_cast<long long int>(obj));
    std::stringstream ss;
    ss << address;
    return ss.str();
}

template<typename T>
T* convertAddressStringToPointer(const std::string& address) {
    std::stringstream ss;
    ss << address;
    long long int tmp(0);
    if(!(ss >> tmp)) throw std::runtime_error("Failed - invalid address!");
    return reinterpret_cast<T*>(tmp);
}

static void test() {
}

int main() {
    test();
    int val(0);
    int* ptr = &val;

    std::cout << ptr << std::endl;

    std::string address = convertPointerToStringAddress(ptr);
    int* ptr2 = convertAddressStringToPointer<int>(address);

    if(ptr == ptr2) {
        std::cout << "The pointers are the same!" << std::endl;
    } else {
        std::cout << "The pointers are different! : " << std::endl;
    }

    system("PAUSE");
}

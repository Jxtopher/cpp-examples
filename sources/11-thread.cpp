/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <cstdlib> // EXIT_SUCCESS;
#include <iostream>
#include <thread>
#include <vector> // std::vector

void task(std::string msg);

void task(std::string msg) {
    std::cout << "num thread : " << std::this_thread::get_id() << ", msg : " << msg << std::endl;
}

int main(int argc, char** argv, char** envp) {
    std::thread t1(task, "msg 1");
    std::thread t2(task, "msg 2");

    t1.join();
    t2.join();

    return EXIT_SUCCESS;
}

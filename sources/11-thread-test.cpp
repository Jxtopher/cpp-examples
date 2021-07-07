/**
 * @brief ...
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout et std::endl
#include <condition_variable>
#include <cstdlib> // EXIT_SUCCESS;
#include <iostream>
#include <mutex>
#include <thread>
#include <unistd.h>
#include <vector> // std::vector

int cpt = 0;
bool end = false;
std::mutex mtx;
std::condition_variable cv;

void task1(std::string msg);
void task2(std::string msg);

void task1(std::string msg) {
    std::unique_lock<std::mutex> lock(mtx);
    int i = 0;
    int local_cout = 0;
    while(i++ < 1000) {
        std::cout << "task1 num thread : " << std::this_thread::get_id() << ", msg : " << msg << " "
                  << cpt++ << std::endl;
        usleep(100000);

        cv.wait(lock);
        if(end) break;
    }
}

void task2(std::string msg) {
    std::unique_lock<std::mutex> lock(mtx);
    int i = 0;
    int local_cout = 0;

    while(i++ < 1000) {
        std::cout << "task2 num thread : " << std::this_thread::get_id() << ", msg : " << msg << " "
                  << cpt++ << std::endl;
        // usleep(500);

        cv.wait(lock);
        if(end) break;
    }
}

int main(int argc, char** argv, char** envp) {
    std::thread t1(task1, "msg 1");
    std::thread t2(task2, "msg 2");

    int i = 0;
    while(i++ < 100) {
        // wait tout les threads
        std::cout << ".." << std::endl;

        /// Tout les threads sont prêt
        cv.notify_all();
        usleep(10000);
    }

    end = true;
    cv.notify_all();
    t1.join();
    t2.join();

    return EXIT_SUCCESS;
}

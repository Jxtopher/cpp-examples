/**
 * @brief Divide and conquer
 *
 * @date 2020
 * @author Jxtopher
 */

#include <cassert> // assert // std::cout, std::endl
#include <cstdint> // uint64_t
#include <cstdlib> // EXIT_SUCCESS;
#include <future>  // std::future, std::promise
#include <iostream>
#include <numeric> // std::accumulate
#include <thread>  // std::thread
#include <vector>  // std::vector

#define NUMBER_OF_CORE 3

void sum(const int* t, unsigned int start, unsigned int end,
         std::promise<uint64_t>&& accumulate_sum);

void sum(const int* t, unsigned int start, unsigned int end,
         std::promise<uint64_t>&& accumulate_sum) {
    accumulate_sum.set_value(std::accumulate(&t[start], &t[end], static_cast<uint64_t>(0)));
}

static void test() {
}

int main() {
    test();
    std::cout << "Number of cores in cpu: " << std::thread::hardware_concurrency() << std::endl;

    unsigned int N = 1410065407;
    std::unique_ptr<int[]> tableau(std::make_unique<int[]>(N));
    for(unsigned int i = 0; i < N; i++) tableau.get()[i] = static_cast<int>(i + 1);

    std::vector<std::thread> threads;
    std::vector<std::promise<uint64_t>> acc;
    std::vector<std::future<uint64_t>> results;
    unsigned int part = 1000 / NUMBER_OF_CORE;

    for(unsigned int i = 0, j = 0; i < NUMBER_OF_CORE; i++, j += part) {
        acc.push_back(std::promise<uint64_t>());
        results.push_back(std::future<uint64_t>(acc[acc.size() - 1].get_future()));
        // Diviser
        threads.push_back(std::thread(sum, tableau.get(), j,
                                      (NUMBER_OF_CORE - 1) == i ? N : j + part,
                                      std::move(acc[acc.size() - 1])));
    }

    // Régner
    for(std::thread& t : threads) t.join();

    // Combiner
    uint64_t total =
        std::accumulate(results.begin(), results.end(), static_cast<uint64_t>(0),
                        [](uint64_t a, std::future<uint64_t>& b) { return a + b.get(); });

    uint64_t fu = (N * (N + static_cast<uint64_t>(1))) / static_cast<uint64_t>(2);
    std::cout << fu << " " << total << std::endl;

    return EXIT_SUCCESS;
}

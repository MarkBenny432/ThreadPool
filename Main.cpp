#include <iostream>
#include "ThreadPool.h"

int main()
{
    ThreadPool pool(4);

    auto result1 = pool.enqueue([](int a, int b) {
        return a + b;
    }, 5, 6);

    auto result2 = pool.enqueue([] {
        std::cout << "Hello from thread pool\n";
    });

    std::cout << "Result: " << result1.get() << std::endl;

    return 0;
}

Thread Pool Implementation in C++

Concepts Demonstrated
- Multithreading
- Task Queue
- Condition Variables
- Futures and Packaged Tasks
- Producer Consumer Pattern

Features
- Fixed number of worker threads
- Task scheduling
- Thread-safe queue
- Asynchronous result retrieval using futures

Usage

ThreadPool pool(4);

auto result = pool.enqueue([](int a, int b){
    return a + b;
}, 2,3);

std::cout << result.get();

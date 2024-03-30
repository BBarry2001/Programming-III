#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx; // Mutex for synchronizing output

void countUp() {
    for (int i = 1; i <= 20; ++i) {
        mtx.lock();
        std::cout << "Count Up: " << i << std::endl;
        mtx.unlock();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void countDown() {
    for (int i = 20; i > 0; --i) {
        mtx.lock();
        std::cout << "Count Down: " << i << std::endl;
        mtx.unlock();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

int main() {
    std::thread thread1(countUp);
    thread1.join(); // Wait for the first thread to finish counting up
    
    std::thread thread2(countDown);
    thread2.join(); // Wait for the second thread to finish counting down
    
    return 0;
}

#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {

    using namespace std::literals::chrono_literals;
    auto start = std::chrono::high_resolution_clock::now();

    std::this_thread::sleep_for(2s);

    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<float> duration = end - start;
    cout<<"Duration: "<<duration.count()<<"s"<<endl;

    std::cin.get();
}
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

class Timer{
public:
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<float> duration;
    Timer() {
         start = std::chrono::steady_clock::now();
    }
    ~Timer() {
         end = std::chrono::steady_clock::now();
        duration = end - start;
        float ms = duration.count() * 1000.0f;
        cout<<"Timer took: "<<ms<<"ms"<<endl;
    }
};

void function() {
    Timer timer;
    for(int i=0; i<100; i++) {
        cout<<"Helloo!!\n";
    }

}

int main() {

    function();

    std::cin.get();
}
#include <iostream>
#include <thread>

using namespace std;

static bool b_finished = false;

void DoWork() {
    using namespace std::literals::chrono_literals;
    cout<<"This ID"<<std::this_thread::get_id()<<endl;
    while(!b_finished) {
        cout<<"Waiting! waiting! waiting!!!"<<endl;
        std::this_thread::sleep_for(3s);
    }
}

int main() {
    std::thread worker(DoWork);
     cin.get();
     b_finished = true;
     
    cout<<"This ID"<<std::this_thread::get_id()<<endl;  

    worker.join();
    cout<<"FINISHED!"<<endl;
}

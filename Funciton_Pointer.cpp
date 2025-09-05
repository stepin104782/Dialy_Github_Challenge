#include <iostream>
#include <vector>

using namespace std;

void PrintValues(int values) {
    cout<<"values: "<<values<<endl;
}

void ForEach(const vector<int>& values, void(* func)(int)) {
    for(int value : values)
        func(value);
}
int main() {

    std::vector<int> v = {1,5,3,2,4};
    ForEach(v, PrintValues);



    std::cin.get();
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

template<typename T, size_t S>

class Array{
private:
    T m_Data[S];
public:
   constexpr int Size() const{return S;}
   
   T operator[] (int index) {return m_Data[index];}
};

int main() {
    
    int size = 5;
    Array<int, 5> data;
    static_assert(data.Size() < 10, "Size is too large!");
    
    cout<<data.Size();
    return 0;
}
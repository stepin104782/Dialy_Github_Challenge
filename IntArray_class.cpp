#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

IntArray{
    string m_name;
    int *m_data;
public:
    IntArray(name) : m_name(name) {
        m_data = new int[10];
        cout<<m_data<<" was constructed!"<<endl;
    }
    ~IntArray() {
       cout<<m_data<<" was destructed!"<<endl;
       delete m_data;
    }
    IntArray(const IntArray& rhs) {
        m_name = rhs.m_name;
        cout<<" was copy constructed from "<<rhs.m_name<<endl;
        m_data = new int[10];
        for(int i=0; i<10; i++) {
            m_data[i] = rhs.m_data[i];
        }
    }
    IntArray& operator=(const IntArray& rhs) {
       
       if(this!=&rhs) {
           delete m_data;
           m_name = rhs.m_name;
           cout<<" was copy assigned from!"<<rhs.m_name<<endl;
           m_data = new int[10];
           for(int i=0; i<10; i++) {
             m_data[i] = rhs.m_data[i];
           }
       }
       return *this;
    }
    IntArray(IntArray&& source) {

            m_name = source.m_name;
            source.m_name = "";
            m_data = source.m_data;
            source.m_data = nullptr;
        cout<<m_name<<" was move constructed!"<<endl;

    }
     IntArray& operator=(IntArray&& source) {
        if(this!=&source) {
            m_name = source.m_name;
            source.m_name = "";
            m_data = source.m_data;
            source.m_data = nullptr;
            cout<<m_name<<" used move assignment!"<<endl;
        }
        return *this;
    }
    
};

int main()
{
    vector<IntArray> myArray;
    for(int i=0; i<5; i++) {
        IntArray temp(to_string(i));
        myArray.pushback(temp);
    }

}

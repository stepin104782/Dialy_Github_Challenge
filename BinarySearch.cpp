#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;
int BinarySearch(int value, vector<int> v) {

    size_t n = v.size();
    int l = 0;
    int r = n-1;
    int m = l+(r-l)/2;

    sort(v.begin(), v.end());

    while(l<=r) {
        if(value == v[m]) {
            return m;
        }
        else if(value < v[m]) {
            r = m-1;
            m = (l+r)/2;
        }
        else if(value > v[m]) {
            l = m+1;
            m = (l+r)/2;
        }
    }
    return -1;
}

int main()
{
    vector<int> listOfVals ={2,6,8,12,4,9,1};
   cout<<"Index: " <<BinarySearch(6, listOfVals)<<endl;


}
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int digitSum(int n) {
    int sum = 0;

    while(n>9) {

        while(n>0) {
            sum += n%10;
            n = n/10;
        }
        n = sum;
    }
    return n;
}

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

//Pair that sums the target
bool pairSum(int target, vector<int> &v) {
    int n = v.size();
    int l = 0;
    int r = n-1;
    sort(v.begin(), v.end());

    while(l<r) {
        int sum = v[l]+ v[r];
        if(sum == target)
            return true;
        else if(sum < target)
            l++;
        else
            r--;
    }
    return false;
}

bool palindrome(vector<int> &v) {
    int l = 0;
    int r = v.size()-1;

    while(l<r) {
        if(v[l] == v[r]) {
            l++;
            r--;
        }
        else
            return false;

    }
    return true;
}

bool palindromeString(string str) {
    int l = 0;
    int r = str.size()-1;

    while(l<r) {
        if(str[l] == str[r]) {
            l++;
            r--;
        }
        else
            return false;

    }
    return true;
}

int main()
{
    vector<int> listOfVals ={1,2,3,2,1};
    string str = "malayalam";
   //cout<<"Pair is: " <<pairSum(27, listOfVals)<<endl;
    // cout<<"Is Palindrome: "<<palindrome(listOfVals)<<endl;
    cout<<"Is Palindrome: "<<palindromeString(str)<<endl;

}










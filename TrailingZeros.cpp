#include <iostream>
#include <math.h>

using namespace std;

long long factorial(int n) {
    int sum = 1;
    for(int i=1; i<=n; i++) {
        sum *= i;
    }
    return sum;
}

long long factorialRec(int n) {
    if(n==0 || n==1)
        return 1;
    return n* factorialRec(n-1);
}

int traillingZeros(int n) {
    int sum = 0;
    while(n>0) {
        n = n/5;
        sum += n;
    }
    return sum;
}

int main()
{
    int number;
    cin>>number;

     cout<<"Number of trailing zero's in "<<number<<": "<<traillingZeros(number);

}

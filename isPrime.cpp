#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n) {
    if(n<=1) return false;
    if(n==2) return true;
    if(n%2 == 0) return false;

    for(int i=3; i<=sqrt(n); i+=2) {
        if(n%i == 0) return false;
    }
        return true;
}

bool recursivePrime(int n, int i = 3) {
    if(n<=1) return false;
    if(n==2) return true;
    if(n%2 == 0) return false;

    if(n%i == 0) {return false;}
    return recursivePrime(n, i+=2);
}

int main()
{
    int number;
    cin>>number;
    int sum = 0;
    for(int i=2; i<=number; i++) {
        if(isPrime(i))
            sum += i;
    }
    cout<<"Sum of all prime's upto "<<number<<": "<<sum;
}


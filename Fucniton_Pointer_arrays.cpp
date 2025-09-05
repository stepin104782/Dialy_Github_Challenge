#include <iostream>
using namespace std;

 void PrintValue(int value) {
     cout<<"Values: "<<value<<endl;
 }

void forEach(int arr[], int size, void(* func)(int)) {
    for(int i=0; i<size; i++) {
        func(arr[i]);
    } 
}
int main() {
    
    int arr[] = {1,5,3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    forEach(arr, n, PrintValue);

    return 0;
}
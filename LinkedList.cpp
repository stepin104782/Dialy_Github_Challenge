#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node* next;

}*head = NULL;

void create(int A[], int n) {
    int i;
    struct Node* temp, *last;
    head = new Node;
    head->data = A[0];
    head->next = NULL;
    last = head;
    for(i=1; i<n; i++) {
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }

}
void Print_LL(struct Node* head) {
    Node* curr = head;
    while(curr != nullptr) {
        cout<<curr->data<<endl;
        curr = curr->next;
    }
}
int main() {

    int A[] = {23,56,43,87,99,12,8};
    int n = sizeof(A)/sizeof(int);
    create(A, n);
    Print_LL(head);
    cout<<"Hello World!"<<endl;
    
    return 0;
}
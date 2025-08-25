#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

Node* head = NULL;

void createDLL(int A[], int n) {
    Node* t, *last;
    head = new Node;
    head->data = A[0];
    head->next = nullptr;
    head->prev = nullptr;
    last = head;

    for(int i=1; i<n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        t->prev = last;
        last->next = t;
        last = t;
    }

}

void printDLL(Node* head) {
    Node* curr = head;
    if(curr) {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

void printRevDLL(Node* head) {
    Node* p = head;
    while(p && p->next!= NULL) {
        p = p->next;
    }

    while(p!=NULL) {
        cout<<p->data<<" ";
        p = p->prev;
    }
}

void insertDLL(int pos, int x) {
    Node* t = new Node;
    if(pos == 0) {
        t->data = x;
        t->next = head;
        t->prev = NULL;
        head->prev = t;
        head = t;
    }
    else {
        Node* curr = head;
        for(int i=0; i<=pos-1 && curr;i++) {
            curr = curr->next;
        }
        t->data = x;
        t->next = curr->next;
        curr->next->prev = t;
        t->prev = curr;
        curr->next = t;
    }
        
    
    
}

int main() {
    int A[] = {23,56,43,87,99,12,8};
    int n = sizeof(A)/sizeof(int);
    createDLL(A, n);
}
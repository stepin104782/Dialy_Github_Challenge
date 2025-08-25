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

void Print_rec(struct Node* head) {
    if(head == nullptr)
        return;
    cout<<head->data<<" ";
    Print_rec(head->next);
}

void insertLL(int x) {
    if(head == nullptr) {
        head = new Node;
        head->data = x;
        head->next = nullptr; 
        return;
    }
    else {
        Node* curr = head;
        while(curr->next!=nullptr) {
            curr = curr->next;
        }
        Node* t = new Node;
        t->data = x;
        curr->next = t;
        t->next = nullptr;
    }
}

void insert_at(int pos, int x) {
    Node* t = new Node;
    if(pos==0) {
        t->data = x;
        t->next = head;
        head = t;
    }
    else {
        Node* curr = head;
        for(int i=0; i <=( pos-1); i++) {
            curr = curr->next;
        }
        t->data = x;
        t->next = curr->next;
        curr->next = t;
    }
}

int main() {

    int A[] = {23,56,43,87,99,12,8};
    int n = sizeof(A)/sizeof(int);
    create(A, n);
    
    insertLL(66);
    insert_at(4, 99);
    Print_rec(head);
    cout<<"Hello World!"<<endl;
    
    return 0;
}
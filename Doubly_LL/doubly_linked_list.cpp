#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

};

void  print_forward(Node* head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

void print_backward(Node* tail){
    Node *temp=tail;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }

}

int main() {
    Node *head=new Node(990);
    Node *a=new Node(770);
    Node *tail=new Node(404);

    head->next=a;
    a->prev=head;
    a->next=tail;
    tail->prev=a;
    
    cout<<"forward : ";
    print_forward(head);
    cout<<" backword : ";
    print_backward(tail);
    
    
    return 0;
}
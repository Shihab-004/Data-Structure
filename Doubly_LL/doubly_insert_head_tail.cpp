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

void insert_head(Node* &tail, Node* &head,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;

}

void insert_tail(Node* &tail, Node* &head,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->prev=tail;
    tail->next=newNode;
    tail=newNode;
}
void  print_forward(Node* head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
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
    
    insert_head(tail,head,333);
    insert_tail(tail,head,6969);
    print_forward(head);
   
    
    
    return 0;
}
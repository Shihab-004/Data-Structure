#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }

};

int main() {
    Node *head=new Node(990);
    Node *a=new Node(770);
    Node *b=new Node(404);

    head->next=a;
    a->next=b;
    
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }
    return 0;
}
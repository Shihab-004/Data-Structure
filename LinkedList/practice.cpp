#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

      Node(int val) {     // constructor
        this->val = val;
        this->next = NULL;
    }

};

int main() {
    Node *head;
    // head->val=999;    // ei jinishguo na korte chaie ,, amader constructor banite hobe..
    // head->next=NULL;  
    head=new Node(88); // new add korechi dynamic bananor jonno
    Node* a=new Node(17);
      Node* b=new Node(67);

      head->next=a;
      a->next=b;



    cout<<head->val<<endl;
    cout<<a->val<<endl;
    cout<<b->val<<endl;
    cout << "Address gulo:" << endl;

    cout<< head->next<<endl;
    cout<< a->next<<endl;
    cout<< b->next<<endl;
  
    return 0;
}
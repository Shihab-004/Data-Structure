#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }

};

void inorder(Node* root){

    if (root==NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}



int main() {
     Node* root= new Node(100);
     Node* a= new Node(11);
     Node* b= new Node(66);
     Node* c= new Node(88);
     Node* d= new Node(22);
     Node* e= new Node(55);
     
     root->left=a;
     root->right=b;
     a->left=c;
     b->left=d;
     c->right=e;

     inorder(root);
    
    
    return 0;
}
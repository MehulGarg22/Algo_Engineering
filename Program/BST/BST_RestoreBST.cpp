#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};

void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b= temp;
}

void CalPointer(Node* root, Node** first, Node** mid, Node** prev, Node** last){
    if(root==NULL){
        return;
    }
    CalPointer(root->left, first, mid, prev, last);
    if(*prev and root->data < (*prev)->data){
        if(*first==NULL){
            *first=*prev;
            *mid=root;
        }
        else{
            *last=root;
        }
    }
    *prev=root;
    CalPointer(root->right, first, mid, prev, last);
}

void RestoreBST(Node* root){
    Node* first, *mid, *prev, *last;
    first = NULL;
    mid = NULL;
    prev = NULL;
    last = NULL;

    CalPointer(root, &first, &mid, &prev, &last);
    if(first and last){
        swap(&(first->data), &(last->data));
    }
    else if(first and mid){
        swap(&(first->data), &(mid->data));
    }
}
void Inorder(Node* root){
    if(root==NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

int main(){
    Node *root = new Node(6);
    root->left = new Node(9);
    root->right = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right->right = new Node(13);
    Inorder(root);
    cout<<endl;
    RestoreBST(root);
    Inorder(root);
    return 0;
}
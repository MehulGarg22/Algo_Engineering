#include<iostream>
#include<climits>
using namespace std;
#define INT_MIN -9999
#define INT_MAX 9999
class Node{
public:
    Node* left;
    Node* right;
    int data;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void Preorderprint(Node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    Preorderprint(root->left);
    Preorderprint(root->right);
}

Node* BSTfromPreorder(int preorder[], int *Idx, int key, int min, int max,int n){
    if(*Idx>=n)
        return NULL;
    Node* root=NULL;
    if(key>min &&key<max){
        root=new Node(key);
        *Idx=*Idx+1;
        if(*Idx<n){
            root->left=BSTfromPreorder(preorder, Idx, preorder[*Idx], min, key, n);
            root->right=BSTfromPreorder(preorder, Idx, preorder[*Idx], key, max, n);
        }
    }

    return root;
}

int main(){
int Preorder[]={10,2,1,13,11};
int n=5;
int Idx=0;
Node*root= BSTfromPreorder(Preorder, &Idx, Preorder[0],INT_MIN, INT_MAX, n);
Preorderprint(root);
return 0;
}


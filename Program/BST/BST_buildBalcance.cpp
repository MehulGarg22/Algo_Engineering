#include<iostream>
using namespace std;

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


Node* BuildBalanced(int arr[], int start, int endd){
    if(start>endd)
        return NULL;
    int mid=(start+endd)/2;
    Node* root= new Node(arr[mid]);

    root->left=BuildBalanced(arr, start, mid-1);
    root->right=BuildBalanced(arr, mid+1, endd);

    return root;
}

void Preorder(Node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

int main(){
int arr[]={10,20,30,40,50};
Node* root= BuildBalanced(arr, 0, 4);

Preorder(root);

return 0;
}


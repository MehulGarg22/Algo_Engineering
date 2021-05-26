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
void Inorder(Node* root){
    if(root==NULL)
        return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

Node* insertBST(Node* root, int val){
    if(root==NULL)
        return new Node(val);
    if(val<root->data)
        root->left=insertBST(root->left, val);
    if(val>root->data)
        root->right=insertBST(root->right, val);
    return root;
}

int main(){
Node* root=NULL;
root=insertBST(root, 5);
insertBST(root, 1);
insertBST(root, 3);
insertBST(root, 4);
insertBST(root, 2);
insertBST(root, 7);

Inorder(root);
cout<<endl;

return 0;
}

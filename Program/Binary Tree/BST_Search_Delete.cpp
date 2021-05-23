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

Node* insertBST(Node* root, int val){
    if(root==NULL)
        return new Node(val);
    if(val<root->data)
        root->left=insertBST(root->left, val);
    if(val>root->data)
        root->right=insertBST(root->right, val);
    return root;
}

void Search(Node* root, int key){
    if(root == NULL)
        cout<<"Value doesn't exist";
    if(root->data==key)
        cout<<"Value Exists";
    if(key<root->data)
        Search(root->left, key);
    if(key>root->data)
        Search(root->right, key);
}

int main(){
Node* root=NULL;
root=insertBST(root, 5);
insertBST(root, 1);
insertBST(root, 3);
insertBST(root, 4);
insertBST(root, 2);
insertBST(root, 7);

Search(root, 1);

return 0;
}

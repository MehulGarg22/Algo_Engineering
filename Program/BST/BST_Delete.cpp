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

Node* DeleteBSTNode(Node* root, int key){
    if(key<root->data)
        root->left=DeleteBSTNode(root->left, key);
    if(key>root->data)
        root->right=DeleteBSTNode(root->right, key);
    else {                                             // Key==root
        // node has no child
        if (root->left==NULL && root->right==NULL){
            return NULL;
        }
        else if(root->left==NULL){
            Node* temp=root->right;
            delete(root);
            return temp;
        }
        else if(root->right==NULL){
            Node* temp=root->left;
            delete(root);
            return temp;
        }
    }
    return root;
}

void Inorder(Node* root){
    if(root==NULL)
        return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

int main(){

Node* root=NULL;
root=insertBST(root, 5);
insertBST(root, 1);
insertBST(root, 3);
insertBST(root, 4);
insertBST(root, 2);
insertBST(root, 7);

/*     5
     /   \
    1     7
     \
      3
     / \
    2   4

*/
cout<<"Original BST: ";
Inorder(root);
DeleteBSTNode(root, 4);
cout<<endl;
cout<<"After Deleting 4: ";
Inorder(root);
DeleteBSTNode(root, 1);
cout<<endl;
cout<<"After Deleting 1: ";
Inorder(root);
cout<<endl;
return 0;
}


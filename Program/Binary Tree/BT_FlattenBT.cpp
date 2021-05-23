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

void flatten(Node* root){
    if(root==NULL || (root->left==NULL && root->right==NULL))
        return;
    if(root->left!=NULL){
        flatten(root->left);

        Node* temp=root->right;
        root->right=root->left;
        root->left=NULL;

        Node* tail=root->right;

        while(tail->right!=NULL){
            tail=tail->right;
        }
        tail->right=temp;
    }
    flatten(root->right);
}

void Inorder(Node* root){
    if(root==NULL)
        return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

int main(){
Node* root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);

/* 1
  / \
 2   3
*/

root->left->left=new Node(4);
root->left->right=new Node(5);


/*   1
    / \
   2   3
  / \
 4   5

*/
root->right->left=new Node(6);
root->right->right=new Node(7);
root->left->left->left=new Node(8);
root->left->left->right=new Node(9);



/*

             1
           /   \
          2     3
         / \   / \
        4   5 6   7
       / \
      8   9

*/
cout<<"Before Flattening: ";
Inorder(root);
flatten(root);
cout<<endl;
cout<<"After Flattening: ";
Inorder(root);

return 0;
}

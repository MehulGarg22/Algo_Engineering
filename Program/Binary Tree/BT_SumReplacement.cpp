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

void SumReplace(Node* root){
    if(root==NULL){
        return;
    }
    SumReplace(root->left);
    SumReplace(root->right);

    if(root->left!=NULL)
        root->data+=root->left->data;
    if(root->right!=NULL)
        root->data+=root->right->data;
}

void PreOrder(Node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
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

cout<<"Before Sum Replacement: ";
PreOrder(root);
cout<<endl;
cout<<"After Sum Replacement: ";
SumReplace(root);
PreOrder(root);

return 0;
}

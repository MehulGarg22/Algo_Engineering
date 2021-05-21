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
int height(Node* root){
    if(root==NULL)
        return 0;
    int Lheight=height(root->left);
    int Rheight=height(root->right);
    return max(Lheight, Rheight)+1;
}
bool isBalanced(Node* root) {
    if(root==NULL){
        return true;
    }
    if(isBalanced(root->left)==false)
        return false;
    if(isBalanced(root->right)==false)
        return false;
    int LH=height(root->left);
    int RH=height(root->right);

    if(abs(LH-RH)<=1){
        return true;
    }
    else{
        return false;
    }
}

bool OptimisedisBalanced(Node* root, int *height) {
    if(root==NULL){
        return true;
    }
    int LH=0,RH=0;
    if(OptimisedisBalanced(root->left,&LH)==false)
        return false;
    if(OptimisedisBalanced(root->right, &RH)==false)
        return false;
    *height=max(LH,RH)+1;

    if(abs(LH-RH)<=1){
        return true;
    }
    else{
        return false;
    }
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

cout<<isBalanced(root)<<endl;
int height=0;
cout<<"Optimised isbalanced: "<<OptimisedisBalanced(root, &height);

return 0;
}

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

bool isBalanced(Node* root){
    int lh=height(root->left);
    int rh=height(root->right);

    if(abs(lh-rh)<=1)
        return true;
    else
        return false;
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

return 0;
}

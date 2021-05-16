#include<iostream>
using namespace std;

class node{
public:
    node* left;
    node* right;
    int data;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int main(){
node* root=new node(1);
root->left=new node(2);
root->right=new node(3);

/* 1
  / \
 2   3
*/

root->left->left=new node(4);
root->left->right=new node(5);


/*   1
    / \
   2   3
  / \
 4   5

*/

return 0;
}

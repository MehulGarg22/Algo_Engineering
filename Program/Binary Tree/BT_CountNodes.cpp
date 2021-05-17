#include<iostream>
#include<queue>
using namespace std;

class Node{

public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
       data=val;
       left=NULL;
       right=NULL;
    }
};


void LevelOrder(Node* root){
if(root==NULL)
    return;
queue<Node*>q;
int countt=0;
q.push(root);
while(!q.empty()){
    Node* node=q.front();
    countt++;
    q.pop();
    if(node->left)
        q.push(node->left);
    if(node->right)
        q.push(node->right);
}

cout<<"Number of Nodes are: "<<countt<<endl;
}
int main(){
Node* root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);
root->left->left=new Node(4);
root->left->right=new Node(5);
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
LevelOrder(root);
return 0;
}

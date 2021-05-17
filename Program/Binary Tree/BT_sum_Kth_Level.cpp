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


int SumAtKthLevel(Node* root, int K){
if(root==NULL)
    return -1;
queue<Node*>q;
int level=0;
int sum=0;
q.push(root);
q.push(NULL);
while(!q.empty()){
    Node* node=q.front();
    q.pop();
    if(node!=NULL){
        if(level==K){
            sum+=node->data;
        }
        if(node->left)
            q.push(node->left);
        if(node->right)
            q.push(node->right);
    }
    else if(!q.empty()){
        q.push(NULL);
        level++;
    }
}
return sum;
}

int main(){
int k;
cout<<"Enter Level At which you want sum: ";
cin>>k;
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

cout<<"Sum is: "<<SumAtKthLevel(root, k);
return 0;
}


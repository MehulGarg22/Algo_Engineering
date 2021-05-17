#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node*left;
    Node* right;
    Node(int val){
       data=val;
       left=NULL;
       right=NULL;
    }
};

int searchh(int inorder[], int start,int endd, int curr){

for(int i=start; i<=endd; i++){
    if(inorder[i]==curr)
        return i;
}
return -1;
}


Node* buildtree(int preorder[],int inorder[], int start,int endd){
static int idx=4;
if(start>endd){
    return NULL;
}
int curr=preorder[idx];
idx--;
Node* node=new Node(curr);
if(start==endd){
    return node;
}
int pos=searchh(inorder, start, endd, curr);
node->right=buildtree(preorder, inorder, pos+1, endd);
node->left=buildtree(preorder, inorder, start ,pos-1);
 return node;
}


void inorderPrint(Node* root){
if(root==NULL){
    return;
}
inorderPrint(root->left);
cout<<root->data<<" ";
inorderPrint(root->right);
}

int main(){

  int preorder[]={1,2,4,3,5};
  int inorder[]={4,2,1,5,3};
  Node* root=buildtree(preorder, inorder, 0, 4);
  inorderPrint(root);

return 0;
}


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

bool isvalidBST(Node* root, Node* minn=NULL , Node* maxx=NULL){
    if(root==NULL)
        return true;
    if(minn!=NULL && root->data<=minn->data)
        return false;
    if(maxx!=NULL && root->data>=maxx->data)
        return false;
    bool leftTree=isvalidBST(root->left, minn, root);
    bool rightTree=isvalidBST(root->right, root, maxx);

    return leftTree and rightTree;
 }


int main(){
Node* root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);

if(isvalidBST(root, NULL, NULL)){
    cout<<"Valid BST"<<endl;
}else{
   cout<<"Invalid BST"<<endl;
}

return 0;
}


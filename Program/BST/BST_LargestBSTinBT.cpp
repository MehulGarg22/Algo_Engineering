#include<iostream>
#include<climits>
using namespace std;
struct Node
{
    Node *left;
    Node *right;
    int data;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

struct Info
{
    int min;
    int max;
    int size;
    int ans;
    bool isBST;
};

Info LargestBST(Node* root){
    if(root==NULL){
        return {INT_MAX, INT_MIN, 0, 0, true};
    }
    if(root->left==NULL && root->right==NULL){
        return {root->data, root->data, 1 ,1, true};
    }

    Info LeftInfo= LargestBST(root->left);
    Info RightInfo= LargestBST(root->right);
    Info curr;
    curr.size=(1+ LeftInfo.size+ RightInfo.size);

    if(LeftInfo.isBST && RightInfo.isBST && LeftInfo.max < root->data && RightInfo.min> root->data){
        curr.min=min(LeftInfo.min, min(RightInfo.min, root->data));
        curr.max = max(RightInfo.max, max(LeftInfo.max, root->data));
        curr.ans=curr.size;
        curr.isBST=true;
        
        return curr;
    }

    curr.ans= max(LeftInfo.ans, RightInfo.ans);
    curr.isBST=false;
    return curr;
}

int main()
{
    Node *root = new Node(8);
    root->left = new Node(3);
    root->right = new Node(10);
    root->left->left = new Node(1);
    root->left->right=new Node(6);
    root->right->right=new Node(14);

    cout<<"Largest BST is: "<<LargestBST(root).ans<<" ";
    
return 0;
}

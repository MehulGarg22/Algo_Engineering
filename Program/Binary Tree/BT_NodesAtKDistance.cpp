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

void printallnodes(Node* root, int k){
    if(root==NULL || k<0)
        return;
    if(k==0)
        cout<<root->data<<" ";
    else{
        printallnodes(root->left, k-1);
        printallnodes(root->right, k-1);
    }
}

int PrintNodeatK(Node* root, Node* target, int k){
    if(root==NULL)
        return -1;
    if(root==target){
        printallnodes(root, k);
        return 0;
    }

    int dl=PrintNodeatK(root->left, target, k);
    if(dl!=-1)
    {
        if(1+dl==k)
            cout<<root->data<<" ";
        else
            printallnodes(root->right, k-dl-2);
        return 1+dl;
    }

    int dr=PrintNodeatK(root->right, target, k);
    if(dr!=-1)
    {
        if(1+dr==k)
            cout<<root->data<<" ";
        else
            printallnodes(root->left, k-dr-2);
        return 1+dr;
    }

return -1;
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



/*   1
    / \
   2   3
  / \
 4   5

*/




/*

             1
           /   \
          2     3
         / \   / \
        4   5 6   7
       / \
      8   9

*/

 PrintNodeatK(root,root->left, 1);
 cout<<endl;
 PrintNodeatK(root, root->right, 2);
 cout<<endl;
 PrintNodeatK(root, root, 1);


return 0;
}


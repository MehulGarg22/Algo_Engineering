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

int CalHeight(Node* root){
    if(root==NULL)
        return 0;
    int LH=CalHeight(root->left);
    int RH=CalHeight(root->right);

    return max(LH, RH)+1;
}

int CalDiameter(Node* root){
    if(root==NULL)
        return 0;
    int Lheight=CalHeight(root->left);
    int Rheight=CalHeight(root->right);
    int CurrDia=Lheight+Rheight+1;

    int LDia=CalDiameter(root->left);
    int RDia=CalDiameter(root->right);

    return max(CurrDia, max(LDia, RDia));

}

int OptimisedCalDia(Node* root, int* height){
    if(root==NULL){
        *height=0;
        return 0;
    }

int lh=0, rh=0;
int LDia=OptimisedCalDia(root->left, &lh);
int RDia=OptimisedCalDia(root->right, &rh);
int currDia= lh+rh+1;
*height= max(lh,rh)+1;

return max(currDia, max(LDia, RDia));
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
cout<<"Not Optimised: "<<CalDiameter(root)<<endl;
int height=0;
cout<<"Optimised: ";
cout<<OptimisedCalDia(root, &height);
return 0;
}

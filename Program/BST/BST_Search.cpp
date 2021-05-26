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

Node* insertBST(Node* root, int val){
    if(root==NULL)
        return new Node(val);
    if(val<root->data)
        root->left=insertBST(root->left, val);
    if(val>root->data)
        root->right=insertBST(root->right, val);
    return root;
}

Node*  Search(Node* root, int key){
    if(root == NULL)
        cout<<"Value doesn't exist";
    if(root->data==key)
        cout<<"Value Exists";
    if(key<root->data)
        root->left=Search(root->left, key);
    if(key>root->data)
        root->right=Search(root->right, key);
}

int main(){
Node* root=NULL;
root=insertBST(root, 5);
insertBST(root, 1);
insertBST(root, 3);
insertBST(root, 4);
insertBST(root, 2);
insertBST(root, 7);

/*     5
     /   \
    1     7
     \
      3
     / \
    2   4

*/

Search(root, 4.0);

return 0;
}

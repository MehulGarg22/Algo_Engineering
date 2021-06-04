#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
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

bool isIdentical(Node* root1, Node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool cond1 =root1->data == root2->data;
        bool cond2 = isIdentical(root1->left, root2->left);
        bool cond3 = isIdentical(root1->right, root2->right);

        if(cond1 && cond2 && cond3){
            return true;
        }
        else{
            return false;
        }
    }
}

int main()
{
    Node *root1 = new Node(6);
    root1->left = new Node(3);
    root1->right = new Node(5);
    root1->left->left = new Node(4);
    root1->left->right = new Node(2);

    /*   6
        / \
       3   5
      / \
     2   4

*/

    Node *root2 = new Node(7);
    root2->left = new Node(6);
    root2->right = new Node(4);
    root2->left->left = new Node(5);
    root2->left->right = new Node(3);

    /*   7
        / \
       4   6
      / \
     3   5

*/

    if(isIdentical(root1, root2)){
        cout<<"Trees are Identical";
    }else{
        cout<<"Not Identical";
    }

    return 0;
}

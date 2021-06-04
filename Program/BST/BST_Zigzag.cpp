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

void zigzag(Node* root){
    if(root==NULL){
        return;
    }
    stack<Node*> currlevel;
    stack<Node*> nextlevel;
    bool LefttoRight=true;
    currlevel.push(root);
    while(!currlevel.empty()){
        Node* temp=currlevel.top();
        currlevel.pop();
        cout<<temp->data<<" ";
        if(temp){
            if (LefttoRight){
                if (temp->left){
                    nextlevel.push(temp->left);
                }
                if (temp->right)
                {
                    nextlevel.push(temp->right);
                }
            }
            else{
                if (temp->right)
                {
                    nextlevel.push(temp->right);
                }
                if (temp->left)
                {
                    nextlevel.push(temp->left);
                }
            }
        }
        while(currlevel.empty()){
            LefttoRight=!LefttoRight;
            swap(currlevel, nextlevel);
        }
    }
}

int main()
{
    Node *root = new Node(6);
    root->left = new Node(3);
    root->right = new Node(5);
    root->left->left = new Node(4);
    root->left->right = new Node(2);

/*       6
        / \
       3   5
      / \
     2   4

*/

    zigzag(root);

return 0;
}

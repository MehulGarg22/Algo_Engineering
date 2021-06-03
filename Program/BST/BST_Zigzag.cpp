<<<<<<< HEAD
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
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

/*       1
        / \
       2   3
      / \
     4   5

*/
    
    zigzag(root);

return 0;
=======
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
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

/*       1
        / \
       2   3
      / \
     4   5

*/
    
    zigzag(root);

return 0;
>>>>>>> 3e06a918902c306aef9a551b6d1ab3fc2eacfd25
}
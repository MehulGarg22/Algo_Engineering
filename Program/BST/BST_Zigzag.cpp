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

vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	
    	vector<int> v;
    	stack<struct Node*> currentlevel;
        stack<struct Node*> nextlevel;
        
        if(!root)
            return v;
        
        currentlevel.push(root);
        
        bool lefttoright=true;
        
        while(!currentlevel.empty()){
            struct Node* temp=currentlevel.top();
            currentlevel.pop();
            
            if(temp){
                v.push_back(temp->data);
                
                if(lefttoright){
                  if (temp->left)
                    nextlevel.push(temp->left);
                  if (temp->right)
                    nextlevel.push(temp->right);
                }
                
                else{
                  if (temp->right)
                    nextlevel.push(temp->right);
                  if (temp->left)
                    nextlevel.push(temp->left);
                }
            }
             if (currentlevel.empty()) {
              lefttoright = !lefttoright;
              swap(currentlevel, nextlevel);
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

    zigZagTraversal(root);

return 0;
}

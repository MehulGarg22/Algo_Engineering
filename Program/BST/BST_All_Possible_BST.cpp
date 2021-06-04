#include <iostream>
#include<vector>
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

vector<Node*> ConstructBst(int start, int end ){
    vector<Node*> trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start; i<=end; i++){
        vector<Node*> leftsubtrees=ConstructBst(start, i-1);
        vector<Node*> rightsubtrees = ConstructBst(i+1, end);
        for(int j=0; j<leftsubtrees.size();j++){
            Node*left= leftsubtrees[j];
            for (int k = 0; k < rightsubtrees.size(); k++)
            {
                Node* right= rightsubtrees[k];
                Node* node= new Node(i);
                node->left= left;
                node->right= right;
                trees.push_back(node);
            }
        }
    }
    return trees;
}

void Preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

int main(){
    vector<Node*> TotalTrees=ConstructBst(1,3);
    for(int i=0;i<TotalTrees.size(); i++){
        cout<<i+1<<": ";
        Preorder(TotalTrees[i]);
        cout<<endl;
    }
return 0;
}


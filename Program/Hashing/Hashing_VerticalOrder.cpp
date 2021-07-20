#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <vector>
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

void VerticalOrder(Node *root, int hdis, map<int, vector<int>> &mp)
{
    if (root == NULL)
    {
        return;
    }

    mp[hdis].push_back(root->data);
    VerticalOrder(root->left, hdis - 1, mp);
    VerticalOrder(root->right, hdis + 1, mp);
}

void Printorder(map<int, vector<int>> mp)
{
    map<int, vector<int>>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        for (int i = 0; i < (it->second).size(); i++)
        {
            cout << (it->second)[i] << "  ";
        }
        cout << endl;
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(11);
    root->right->left = new Node(14);
    root->right->right = new Node(6);

    map <int, vector<int>> mp; // Vector because for a same horizontal distance there can be more than one elements
    int hdis = 0;
    VerticalOrder(root, hdis, mp);
    Printorder(mp);

    return 0;
}

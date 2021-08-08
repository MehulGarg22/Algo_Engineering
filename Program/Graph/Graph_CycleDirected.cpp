#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool iscycle(int src, vector<vector<int>> &adl, vector<bool> &vis, vector<int> stackk){
    if(!vis[src]){
        vis[src]=true;
        stackk[src]=true;
        for(auto i: adl[src]){
            if(!vis[i] && iscycle(i, adl, vis, stackk)){
                return true;
            }
            if(stackk[i])
            {
                return true;
            }
        }
    }
    stackk[src]=false;
    return false;
}

int main()
{
    int node, edge;
    cout << "Enter Number of Nodes, edges: ";
    cin >> node >> edge;
    vector<vector<int>> adl(16);
    vector<bool> vis(node, false);
    vector<int> stackk(node, 0);
    bool cycle = false;
    cout << endl
         << "Enter Edges: " << endl;
    for (int i = 0; i < edge; i++)
    {
        int x, y;
        cin >> x >> y;
        adl[x].push_back(y);
    }

    for (int i=0; i<node; i++){
        if (!vis[i] and iscycle(i, adl, vis, stackk)){
            cycle= true;
        }
    }
    cout<<endl;
    if(cycle==true){
        cout<<"Cycle is Present"<<endl;
    }
    else{
        cout<<"Cycle is Not Present";
    }

    return 0;
}

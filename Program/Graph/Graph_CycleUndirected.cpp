#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool iscycle(int src, vector<vector<int>> &adl, vector<bool> &vis, int parent){
    vis[src]=true;
    for(auto i: adl[src]){
        if(i!=parent){
            if(vis[i]){
                return true;
            }
            if(!vis[i] && iscycle(i, adl, vis, src)){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int node, edge;
    cout << "Enter Number of Nodes, edges: ";
    cin >> node >> edge;
    vector<vector<int>> adl(16);
    vector<bool> vis(node, false);
    bool cycle =false;
    cout << endl
         << "Enter Edges: " << endl;
    for (int i = 0; i < edge; i++)
    {
        int x, y;
        cin >> x >> y;
        adl[x].push_back(y);
        adl[y].push_back(x);
    }

    for (int i=0; i<node; i++){
        if (!vis[i] and iscycle(i, adl, vis, -1)){
            cycle= true;
        }
    }
    cout<<endl;
    if(cycle==true){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"Cycle is Not Present";
    }

    return 0;
}

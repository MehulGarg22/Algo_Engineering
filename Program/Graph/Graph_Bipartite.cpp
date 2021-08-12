#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<bool>vis;
vector<vector<int>>adl;
vector<int>col;
bool isBipartite;

void Bipartite(int idx, int curr)
{
    if(col[idx]!=-1 && col[idx]!=curr){
        isBipartite= false;
        return;
    }
    col[idx]=curr;
    if(vis[idx])
        return;
    vis[idx]=true;
    for(auto i: adl[idx]){
        Bipartite(i, curr xor 1);
    }
}

int main()
{
    int node, edge;
    cout<<"Enter Number of Nodes, edges: ";
    cin>>node>>edge;
    isBipartite=true;
    adl=vector<vector<int>>(node);
    vis=vector<bool>(node, false);
    col=vector<int>(node, -1);
    cout<<"Enter Edges" <<endl;
    for(int i=0; i<edge; i++){
        int x,y;
        cin>>x>>y;
        adl[x].push_back(y);
        adl[y].push_back(x);
    }
    cout<<endl;

    for(int i=0; i<node; i++){
        if(!vis[i]){
            Bipartite(i, 0);
        }
    }
    if(isBipartite==true){
        cout<<"Yes, Graph is Bipartite";
    }
    else{
        cout<<"No, Graph is not Bipartite";
    }
cout<<endl;
return 0;
}

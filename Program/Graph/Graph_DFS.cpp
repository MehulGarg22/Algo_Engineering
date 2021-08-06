#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> adl[10000];
bool vis[10000];

void DFS(int node)
{
    vis[node]=1;
    cout<<node<<endl;
    vector<int>:: iterator it;
        for(it=adl[node].begin(); it!=adl[node].end(); it++){
            if(!vis[*it]){
                DFS(*it);
            }
        }
}

int main()
{
    int node, edge;
    cout<<"Enter Number of Nodes, edges: ";
    cin>>node>>edge;
    for(int i=0; i<10000; i++){
        vis[i]=false;
    }
    cout<<"Enter Edges" <<endl;
    for(int i=0; i<edge; i++){
        int x,y;
        cin>>x>>y;
        adl[x].push_back(y);
        adl[y].push_back(x);
    }
    cout<<endl;
    cout<<"Breadth First Search is: "<<endl;
    DFS(1);

cout<<endl;
return 0;
}


#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<set>
const int INF=1e9;
using namespace std;

int main()
{
    int node, edge;
    int cost=0;
    cout<<"Enter no of node and edges: ";
    cin>>node>>edge;
    cout<<"Enter Edges: "<<endl;
    vector<vector<pair<int,int>>> adl(node+1);  //Vertex, Weight.
    vector<bool>vis(node, false);
    for(int i=0; i<edge; i++){
        int u,v,w;
        cin>>u>>v>>w;
        adl[u].push_back({v,w});
        adl[v].push_back({u,w});
    }

    vector<int>dis(node+1 , INF), parent(node);
    set<pair<int,int>>s;
    int src;
    cout<<"Enter source node: ";
    cin>>src;
    cout<<endl<<"Minimum cost edges are: "<<endl;
    dis[src]=0;
    s.insert({0,src});    // Weight, source Vertex.

    while(!s.empty()){
        auto x=*(s.begin());
        s.erase(x);
        vis[x.second]=true;
        int u=x.second;
        int v=parent[x.second];
        int w=x.first;
        cost+=w;
        cout<<u<<" "<<v<<" "<<w<<endl;
        for(auto i: adl[x.second]){

            if(vis[i.first])
            {
                continue;
            }
            if(dis[i.first]> i.second){
                s.erase({dis[i.first], i.first});
                dis[i.first]=i.second;
                s.insert({dis[i.first], i.first});
                parent[i.first]=x.second;
            }
        }

    }

    cout<<endl<<"Cost is: "<<cost<<endl;

return 0;
}

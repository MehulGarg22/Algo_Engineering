#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<set>
const int INF=1e9;
using namespace std;

int main()
{
    int node, edge;
    cout<<"Enter no of node and edges: ";
    cin>>node>>edge;
    cout<<"Enter Edges: "<<endl;
    vector<vector<pair<int,int>>> adl(node+1);  //Vertex, Weight.

    for(int i=0; i<edge; i++){
        int u,v,w;
        cin>>u>>v>>w;
        adl[u].push_back({v,w});
        adl[v].push_back({u,w});
    }

    vector<int>dis(node+1 , INF);
    set<pair<int,int>>s;
    int src;
    cout<<"Enter source node: ";
    cin>>src;
    dis[src]=0;
    s.insert({0,src});    // Weight, source Vertex.

    while(!s.empty()){
        auto x=*(s.begin());
        s.erase(x);
        for(auto i: adl[x.second]){
            if(dis[i.first]> dis[x.second]+ i.second){
                s.erase({dis[i.first], i.first});
                dis[i.first]=dis[x.second]+ i.second;
                s.insert({dis[i.first], i.first});
            }
        }
    }

    cout<<endl<<"Shortest distance from vertex "<<src<<" is: ";

    for(int i=1; i<=node; i++){
        if(dis[i]<INF){
            cout<<dis[i]<<" ";
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    cout<<endl;

return 0;
}

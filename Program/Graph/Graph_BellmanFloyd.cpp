#include<iostream>
#include<vector>
const int INF=1e9;
using namespace std;

int main()
{
    int node, edge;
    cout<<"Enter no of node and edges: ";
    cin>>node>>edge;
    cout<<"Enter Edges: "<<endl;
    vector<vector<int>> edges;
    for(int i=0; i<edge; i++){
        int x,y,w;
        cin>>x>>y>>w;
        edges.push_back({x,y,w});
    }
    vector<int>dis(node, INF);
    int src;
    cout<<"Enter source node: ";
    cin>>src;
    dis[src]=0;
    for(int iter=0; iter<node-1; iter++){
        for(auto it: edges){
            int u=it[0];
            int v=it[1];
            int w=it[2];

            dis[v]=min(dis[v], w+dis[u]);

        }
    }
    for(auto i: dis){
        cout<<i<<" ";
    }
    cout<<endl;
return 0;
}

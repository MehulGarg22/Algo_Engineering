#include<iostream>
#include<vector>
using namespace std;
const int N=1e5+6;
vector<int> parent(N);
vector<int>sz(N);
void make_set(int v)
{
    parent[v]=v;
    sz[v]=1;
}
int find_set(int v)
{
    if(v==parent[v]){
        return v;
    }
    return parent[v]=find_set(parent[v]);
}

int unions (int a, int b)
{
    int x=find_set(a);
    int y=find_set(b);
    if(x!=y)
    {
        if(sz[x]<sz[y])
        {
            swap(x,y);
        }
        parent[b]=a;
        sz[a]+=sz[b];
    }
}

int main()
{
    for(int i=0;i<N;i++)
    {
        make_set(i);
    }
    int node, edge;
    cout<<"Enter number of node, edges: ";
    cin>>node>>edge;
    vector<vector<int>>edges;
    cout<<"Enter edges: "<<endl;
    for(int i=0; i<edge; i++){
        int u,v;
        cin>>u>>v;
        edges.push_back({u,v});
    }
    bool cycle=false;
    for(auto i: edges){
        int u=i[0];
        int v=i[1];
        int x=find_set(u);
        int y=find_set(v);

        if(x==y){
            cycle=true;
        }
        unions(u,v);
    }
    if(cycle){
        cout<<"Cycle is found";
    }
    else{
        cout<<"Cycle is not found";
    }

return 0;
}

#include<iostream>
#include<vector>
#include<algorithm>
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
        parent[y]=x;
        sz[x]+=sz[y];
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
        int w,u,v;
        cin>>u>>v>>w;
        edges.push_back({w,u,v});
    }
    sort(edges.begin(),edges.end());
    int cost=0;
    for(auto i: edges){
        int w=i[0];
        int u=i[1];
        int v=i[2];
        int x=find_set(u);
        int y=find_set(v);

        if(x==y){
            continue;
        }
        else{
            cout<<"Edges are: "<<u<<" "<<v<<endl;
            cost+=w;
            unions(u,v);
        }
    }

    cout<<"Cost is: "<<cost;

return 0;
}


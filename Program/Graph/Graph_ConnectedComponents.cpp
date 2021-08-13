#include<iostream>
#include<vector>
#include<bits/stdc++.h> //IMPORTANT
using namespace std;

#define ll long long int
#define ff first
#define st(x) cout<< #x<<": ";
#define deb(x) cout << #x << " " << x << endl;
#define ss second
#define pa pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>
#define vpi vector<pa>


int node, edge;
vii adl;
vector<bool> vis;
vi component;

int connected(int idx)
{
    cout<<idx<<" ";
    vis[idx]=true;
    int ans=1;
    for(auto i: adl[idx]){
        if(!vis[i]){
            ans+=connected(i);
            vis[i]=true;
        }
    }

return ans;

}

int main()
{

    cout<<"Enter Number of Nodes and Edges: ";
    cin>>node>>edge;
    adl=vector<vector<int>>(node);
    vis=vector<bool>(node, 0);
    cout<<"Enter Edge"<<endl;
    for(int i=0; i<edge; i++){
        int x,y;
        cin>>x>>y;
        adl[x].push_back(y);
        adl[y].push_back(x);
    }
    cout<<endl;
    for(int i=0; i<node; i++){

        if(!vis[i]){
            cout<<"Connected components are: ";
            component.push_back(connected(i));
            cout<<endl;
        }
    }
    cout<<"Elements in connected components are: ";
    for(auto i: component){
        cout<<i<<" ";
    }
    cout<<endl;
return 0;
}

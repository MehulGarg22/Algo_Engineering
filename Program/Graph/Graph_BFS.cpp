#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> adl[10000];
bool vis[10000];

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
    queue<int>q;
    q.push(1);
    vis[1]=true;
    cout<<"Breadth First Search is: ";
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        vector<int>:: iterator it;
        for(it=adl[node].begin(); it!=adl[node].end(); it++){
            if(!vis[*it]){
                q.push(*it);
                vis[*it]=true;
            }
        }
    }
cout<<endl;
return 0;
}

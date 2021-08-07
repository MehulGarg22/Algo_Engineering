#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge;
    cout<<"Enter Number of Nodes, edges: ";
    cin>>node>>edge;
    vector<vector<int>>adl(node);
    vector<int>indeg(node, 0);
    cout<<endl<<"Enter Edges: "<<endl;
    for(int i=0; i<edge; i++){
        int x, y;
        cin>>x>>y;
        adl[x].push_back(y);
        indeg[y]++;
    }
    int countt=0;
    queue<int> q;
    for(int i=0; i<node; i++){
        if(indeg[i]==0){
            q.push(i);
        }
    }
    cout<<endl<<"Topology sort is: ";
    while(!q.empty()){
        countt++;
        int x= q.front();
        q.pop();
        cout<<x<< " ";
        for(auto it: adl[x]){
            indeg[it]--;
            if(indeg[it]==0){
                q.push(it);
            }
        }
    }

return 0;
}

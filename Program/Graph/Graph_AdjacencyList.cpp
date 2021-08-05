#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void print(vector<int> adl[16], int node)
{
    vector<int>:: iterator it;
    for(int i=1; i<node+1; i++){
        cout<<i<<"-> ";
        for(it=adl[i].begin(); it!=adl[i].end(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int node, edge;
    cout<<"Enter Number of Nodes, edges: ";
    cin>>node>>edge;
    vector<int>adl[16];
    for(int i=0; i<edge; i++){
        int x, y;
        cin>>x>>y;
        adl[x].push_back(y);
        adl[y].push_back(x);
    }
    cout<<endl;
    cout<<"Adjacency List formed is: "<<endl;
    print(adl, node);

return 0;
}


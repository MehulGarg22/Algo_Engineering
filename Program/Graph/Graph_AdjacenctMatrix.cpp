#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void print (vector<vector<int>> adm, int node)
{
    for(int i=1; i<node+1; i++){
        for(int j=1; j<node+1; j++){
            cout<<adm[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int node, edge;
    cout<<"Enter Number of Nodes, edges: ";
    cin>>node>>edge;
    vector<vector<int>> adm(node+1, vector<int>(node+1, 0));
    for(int i=0; i<edge; i++){
        int x, y;
        cin>>x>>y;
        adm[x][y]=1;
        adm[y][x]=1;
    }
    cout<<endl;
    cout<<"Adjacency Matrix formed is: "<<endl;
    print(adm, node);

    cout<<endl;

    if(adm[3][1]==1){
        cout<<"Edge Exist at 3 and 1"<<endl;
    }
    else{
        cout<<"No Edge Present at these Node"<<endl;
    }

return 0;
}

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void change( vector<vector<char>> &A, int x, int y)
{

    A[x][y]='*';
    int dx[]={0,0,-1,1};
    int dy[]={1,-1,0,0};
    for(int i=0; i<4; i++){
        int cx=x+dx[i];
        int cy=y+dy[i];
        if(cx>=0 && cx<A.size() && cy>=0 && cy<A.size() && A[cx][cy]=='O'){
            change(A, cx, cy);
        }
    }
}

void captureO(int n, int m){

    //n denotes number of rows
    //m denotes number of columns

    vector<vector<char>> A(n,vector<char>(m));    //2D vector of nxm size

    cout<<"ENTER THE GRID MATRIX IN CAPITAL CHARACTERS "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0;j<m; j++){
            cin>>A[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0;j<m; j++){
                if(i==0 || i==n-1 || j==0 || j==m-1) //Corner case -
                {
                    if(A[i][j]=='O'){
                        change(A, i, j);
                    }
                }

        }
    }

    for(int i=0; i<n; i++){
        for(int j=0;j<m; j++){
           if(A[i][j]=='O')
           {
               A[i][j]='X';
           }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0;j<m; j++){
           if(A[i][j]=='*')
           {
               A[i][j]='O';
           }
        }
    }

    cout<<"THE ANSWER MATRIX IS "<<endl;           //Printing the changed matrix

    for(int i=0; i<n; i++){
        for(int j=0;j<m; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    int n,m;
    cin>>n>>m;
    captureO(n,m);

return 0;
}

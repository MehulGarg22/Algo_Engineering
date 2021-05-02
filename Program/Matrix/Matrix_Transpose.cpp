#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cout<<"Enter Rows and Column";
cin>>n>>m;
cout<<"Matrix will be of: "<<n<<"*"<<m<<endl;
cout<<"Enter Elements of the Matrix: "<<endl;
int arr[n][m];
int B[m][n];
for (int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
}
cout<<endl;
for (int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
      B[i][j]=arr[j][i];
    }
}
cout<<endl;
for (int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<B[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}

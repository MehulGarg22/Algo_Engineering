#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cout<<"Enter Rows and Column";
cin>>n>>m;
cout<<"Matrix will be of: "<<n<<"*"<<m<<endl;
cout<<"Enter Elements of the Matrix: "<<endl;
int arr[n][m];
for (int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
}
cout<<endl;
for (int i=0;i<n;i++)
{
    for(int j=i;j<m;j++)
    {
        int temp;
        temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
    }
}
cout<<endl;
for (int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}

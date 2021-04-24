#include<iostream>
#include<math.h>
#include<climits>
#include<bits/c++io.h>
using namespace std;

int main(){

int n;
cout<<"Enter Number of Elements to be stored in an array: ";
int i;
cin>>n;
cout<<endl;
cout<<"Enter the Elements: "<<endl;
int arr[n];

for(i=0;i<=n;i++)
{
    cin>>arr[i];
}
int Profit=INT_MIN;
for(i=0;i<=n;i++)
{
    int p;
    for(int j=i+1;j<=n;j++)
    {
        if(arr[i]>arr[j])
        {
          p=arr[j]-arr[i];
        }
    }
    Profit=max(p, Profit);
}
cout<<"Profit is: "<<Profit<<endl;
cout<<endl;

return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of Element to be stored in an array: ";
    cin>>n;
    int i;
    int arr[n];
    cout<<endl;
    cout<<"Enter Elements in an array: "<<endl;
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int N= INT16_MAX;
  
    int idx[N];
    for (i=0;i<N;i++)
    {
        idx[i]=-1;
    }
    int minIdx= INT_MAX;
    for (i=0;i<n;i++)
    {
        if(idx[arr[i]] !=-1)
        {
            minIdx = min(minIdx, idx[arr[i]]);

        }
        else
        {
            idx[arr[i]] = i;
        }
    }
if (minIdx==INT_MAX)
{
   cout<<-1;
}
else
 {
      cout<<minIdx+1<<endl;
 }

return 0;
}
